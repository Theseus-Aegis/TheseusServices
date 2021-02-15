#include "script_component.hpp"
/*
 * Author: Deltagamer, JoramD
 * [Description]
 *
 * Arguments:
 * 0: Unknown Arg <?>
 * 1: Unknown Arg <?>
 *
 * Example:
 * _this call tacs_arcadian_fnc_toggleGun
 *
 * Public: No
 */

params ["_paramZero", "_paramOne"];

if (_paramOne == 0) then {
    _paramZero lockTurret [[0], false];
    _paramZero setObjectTextureGlobal [0, 'x\tacs\addons\arcadian\data\armoredsuv_bodygun_co.paa'];
    _paramZero setObjectTextureGlobal [1, 'x\tacs\addons\arcadian\data\armoredsuv_interiergun_co.paa'];
    _paramZero setObjectMaterialGlobal [0, 'x\tacs\addons\arcadian\data\suv_armouredbody.rvmat'];
    _paramZero setObjectMaterialGlobal [1, 'x\tacs\addons\arcadian\data\suv_interier.rvmat'];
} else {
    _paramZero lockTurret [[0], true];
    _paramZero setObjectTextureGlobal [0, 'x\tacs\addons\arcadian\data\armoredsuv_body_co.paa'];
    _paramZero setObjectTextureGlobal [1, 'x\tacs\addons\arcadian\data\armoredsuv_interier_co.paa'];
    _paramZero setObjectMaterialGlobal [0, 'x\tacs\addons\arcadian\data\suv_body.rvmat'];
    _paramZero setObjectMaterialGlobal [1, 'x\tacs\addons\arcadian\data\suv_interier.rvmat'];
};
