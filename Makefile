VERSION = 1.0.0
PREFIX = tacs
BIN = @theseus_services
ZIP = TheseusServices

$(BIN)/addons/$(PREFIX)_%.pbo: addons/%
	@mkdir -p $(BIN)/addons
	@echo "  PBO  $@"
	@armake build ${FLAGS} -f $< $@

$(BIN)/optionals/$(PREFIX)_%.pbo: optionals/%
	@mkdir -p $(BIN)/optionals
	@echo "  PBO  $@"
	@armake build ${FLAGS} -f $< $@

# Shortcut for building single addons (eg. "make <component>.pbo")
%.pbo:
	make $(patsubst %, $(BIN)/addons/$(PREFIX)_%, $@)

all: $(patsubst addons/%, $(BIN)/addons/$(PREFIX)_%.pbo, $(wildcard addons/*)) \
		$(patsubst optionals/%, $(BIN)/optionals/$(PREFIX)_%.pbo, $(wildcard optionals/*))

$(BIN)/keys/%.biprivatekey:
	@mkdir -p $(BIN)/keys
	@echo "  KEY  $@"
	@armake keygen -f $(patsubst $(BIN)/keys/%.biprivatekey, $(BIN)/keys/%, $@)

$(BIN)/addons/$(PREFIX)_%.pbo.$(PREFIX)_$(VERSION).bisign: $(BIN)/addons/$(PREFIX)_%.pbo $(BIN)/keys/$(PREFIX)_$(VERSION).biprivatekey
	@echo "  SIG  $@"
	@armake sign -f $(BIN)/keys/$(PREFIX)_$(VERSION).biprivatekey $<

$(BIN)/optionals/$(PREFIX)_%.pbo.$(PREFIX)_$(VERSION).bisign: $(BIN)/optionals/$(PREFIX)_%.pbo $(BIN)/keys/$(PREFIX)_$(VERSION).biprivatekey
	@echo "  SIG  $@"
	@armake sign -f $(BIN)/keys/$(PREFIX)_$(VERSION).biprivatekey $<

signatures: $(patsubst addons/%, $(BIN)/addons/$(PREFIX)_%.pbo.$(PREFIX)_$(VERSION).bisign, $(wildcard addons/*)) \
		$(patsubst optionals/%, $(BIN)/optionals/$(PREFIX)_%.pbo.$(PREFIX)_$(VERSION).bisign, $(wildcard optionals/*))

clean:
	rm -rf $(BIN) $(ZIP)_*.zip

release: clean signatures
	@rm $(BIN)/keys/*.biprivatekey
	@echo "  ZIP  $(ZIP)_$(VERSION).zip"
	@cp AUTHORS.txt LICENSE logo_tacs_ca.paa logo_tacs_small_ca.paa mod.cpp README.md $(BIN)
	@zip -r $(ZIP)_$(VERSION).zip $(BIN) &> /dev/null
