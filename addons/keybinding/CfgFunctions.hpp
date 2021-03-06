// -----------------------------------------------------------------------------
// Automatically generated by 'functions_config.rb'
// DO NOT MANUALLY EDIT THIS FILE!
// -----------------------------------------------------------------------------

class CfgFunctions
{
    class CBA
    {
        class Keybinding
        {
            // CBA_fnc_getKeybind
            class getKeybind
            {
                description = "Checks if a particular mod has already registered a keybind handler for the specified action.";
                file = "\x\cba\addons\keybinding\fnc_getKeybind.sqf";
            };
            // CBA_fnc_registerKeybind
            class registerKeybind
            {
                description = "This function is removed, please use cba_fnc_addKeybind instead.";
                file = "\x\cba\addons\keybinding\fnc_registerKeybind.sqf";
            };
            // CBA_fnc_addKeybind
            class addKeybind
            {
                description = "Adds or updates the keybind handler for a specified mod action, and associates a function with that keybind being pressed.";
                file = "\x\cba\addons\keybinding\fnc_addKeybind.sqf";
            };
            // CBA_fnc_registerKeybindToFleximenu
            class registerKeybindToFleximenu
            {
                description = "This function is currently disabled.";
                file = "\x\cba\addons\keybinding\fnc_registerKeybindToFleximenu.sqf";
            };
            class addKeybindToFleximenu
            {
                description = "Adds or updates the keybind handler for a defined Fleximenu and creates that Fleximenu.";
                file = "\x\cba\addons\keybinding\fnc_addKeybindToFleximenu.sqf";
            };
            class registerKeybindModPrettyName
            {
                description = "Associate a keybinds unique mod name with a pretty name (localized name, etc)";
                file = "\x\cba\addons\keybinding\fnc_registerKeybindModPrettyName.sqf";
            };
        };
    };
};
