///////////////////////////////////////////////////////////////////////////////
// All definitions for ecu: A2ZJ500I with SSM read vector base 4272C
///////////////////////////////////////////////////////////////////////////////
#include <idc.idc>
static main ()
{
    Tables ();
    StdParams ();
    ExtParams ();
}

static Tables ()
{
Message("--- Now marking Tables ---\n");
auto referenceAddress;
MakeNameEx(0x58550, "Target_Boost", SN_CHECK);
referenceAddress = DfirstB(0x58550);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_Target_Boost", SN_CHECK);
}
else
{
    Message("No reference to Target_Boost\n");
}

MakeNameEx(0x58500, "Target_Boost_X_AXIS", SN_CHECK);
MakeNameEx(0x58520, "Target_Boost_Y_AXIS", SN_CHECK);
MakeNameEx(0x58124, "Target_Boost_Compensation_ECT", SN_CHECK);
referenceAddress = DfirstB(0x58124);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Target_Boost_Compensation_ECT", SN_CHECK);
}
else
{
    Message("No reference to Target_Boost_Compensation_ECT\n");
}

MakeNameEx(0x58058, "Target_Boost_Compensation_ECT_Y_AXIS", SN_CHECK);
MakeNameEx(0x58054, "Target_Boost_Compensation_1st_Gear", SN_CHECK);
MakeNameEx(0x5804C, "Target_Boost_Compensation_1st_Gear_Speed_Disable", SN_CHECK);
MakeNameEx(0x5822C, "Target_Boost_Compensation_Atm_Pressure_Multiplier", SN_CHECK);
referenceAddress = DfirstB(0x5822C);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Target_Boost_Compensation_Atm_Pressure_Multiplier", SN_CHECK);
}
else
{
    Message("No reference to Target_Boost_Compensation_Atm_Pressure_Multiplier\n");
}

MakeNameEx(0x5821C, "Target_Boost_Compensation_Atm_Pressure_Multiplier_Y_AXIS", SN_CHECK);
MakeNameEx(0x58158, "Target_Boost_Compensation_Atm_Pressure_Multiplier_Offset", SN_CHECK);
referenceAddress = DfirstB(0x58158);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Target_Boost_Compensation_Atm_Pressure_Multiplier_Offset", SN_CHECK);
}
else
{
    Message("No reference to Target_Boost_Compensation_Atm_Pressure_Multiplier_Offset\n");
}

MakeNameEx(0x58148, "Target_Boost_Compensation_Atm_Pressure_Multiplier_Offset_Y_AXIS", SN_CHECK);
MakeNameEx(0x5DF78, "Boost_Limit_Fuel_Cut", SN_CHECK);
referenceAddress = DfirstB(0x5DF78);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Boost_Limit_Fuel_Cut", SN_CHECK);
}
else
{
    Message("No reference to Boost_Limit_Fuel_Cut\n");
}

MakeNameEx(0x5DF60, "Boost_Limit_Fuel_Cut_Y_AXIS", SN_CHECK);
MakeNameEx(0x58034, "Boost_Control_Disable_IAM", SN_CHECK);
MakeNameEx(0x58030, "Boost_Control_Disable_Fine_Correction", SN_CHECK);
MakeNameEx(0x57FD9, "Boost_Control_Disable_Delay_Fine_Correction", SN_CHECK);
MakeNameEx(0x58320, "Initial_Wastegate_Duty", SN_CHECK);
referenceAddress = DfirstB(0x58320);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_Initial_Wastegate_Duty", SN_CHECK);
}
else
{
    Message("No reference to Initial_Wastegate_Duty\n");
}

MakeNameEx(0x582D0, "Initial_Wastegate_Duty_X_AXIS", SN_CHECK);
MakeNameEx(0x582F0, "Initial_Wastegate_Duty_Y_AXIS", SN_CHECK);
MakeNameEx(0x58438, "Max_Wastegate_Duty", SN_CHECK);
referenceAddress = DfirstB(0x58438);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_Max_Wastegate_Duty", SN_CHECK);
}
else
{
    Message("No reference to Max_Wastegate_Duty\n");
}

MakeNameEx(0x583F8, "Max_Wastegate_Duty_X_AXIS", SN_CHECK);
MakeNameEx(0x58418, "Max_Wastegate_Duty_Y_AXIS", SN_CHECK);
MakeNameEx(0x13AA4, "Max_Wastegate_Duty_Limit_PostCompensation", SN_CHECK);
MakeNameEx(0x580E4, "InitialMax_Wastegate_Duty_Compensation_IAT", SN_CHECK);
referenceAddress = DfirstB(0x580E4);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_InitialMax_Wastegate_Duty_Compensation_IAT", SN_CHECK);
}
else
{
    Message("No reference to InitialMax_Wastegate_Duty_Compensation_IAT\n");
}

MakeNameEx(0x580A4, "InitialMax_Wastegate_Duty_Compensation_IAT_Y_AXIS", SN_CHECK);
MakeNameEx(0x58104, "InitialMax_Wastegate_Duty_Compensation_ECT", SN_CHECK);
referenceAddress = DfirstB(0x58104);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_InitialMax_Wastegate_Duty_Compensation_ECT", SN_CHECK);
}
else
{
    Message("No reference to InitialMax_Wastegate_Duty_Compensation_ECT\n");
}

MakeNameEx(0x58058, "InitialMax_Wastegate_Duty_Compensation_ECT_Y_AXIS", SN_CHECK);
MakeNameEx(0x58270, "InitialMax_Wastegate_Duty_Compensation_Atm_Pressure", SN_CHECK);
referenceAddress = DfirstB(0x58270);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_InitialMax_Wastegate_Duty_Compensation_Atm_Pressure", SN_CHECK);
}
else
{
    Message("No reference to InitialMax_Wastegate_Duty_Compensation_Atm_Pressure\n");
}

MakeNameEx(0x58248, "InitialMax_Wastegate_Duty_Compensation_Atm_Pressure_X_AXIS", SN_CHECK);
MakeNameEx(0x58260, "InitialMax_Wastegate_Duty_Compensation_Atm_Pressure_Y_AXIS", SN_CHECK);
MakeNameEx(0x58180, "Turbo_Dynamics_Proportional", SN_CHECK);
referenceAddress = DfirstB(0x58180);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Turbo_Dynamics_Proportional", SN_CHECK);
}
else
{
    Message("No reference to Turbo_Dynamics_Proportional\n");
}

MakeNameEx(0x5815C, "Turbo_Dynamics_Proportional_Y_AXIS", SN_CHECK);
MakeNameEx(0x581F0, "Turbo_Dynamics_Integral_Positive", SN_CHECK);
referenceAddress = DfirstB(0x581F0);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Turbo_Dynamics_Integral_Positive", SN_CHECK);
}
else
{
    Message("No reference to Turbo_Dynamics_Integral_Positive\n");
}

MakeNameEx(0x581CC, "Turbo_Dynamics_Integral_Positive_Y_AXIS", SN_CHECK);
MakeNameEx(0x581B8, "Turbo_Dynamics_Integral_Negative", SN_CHECK);
referenceAddress = DfirstB(0x581B8);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Turbo_Dynamics_Integral_Negative", SN_CHECK);
}
else
{
    Message("No reference to Turbo_Dynamics_Integral_Negative\n");
}

MakeNameEx(0x58194, "Turbo_Dynamics_Integral_Negative_Y_AXIS", SN_CHECK);
MakeNameEx(0x58018, "TD_Activation_Thresholds_RPM", SN_CHECK);
MakeNameEx(0x57FEC, "TD_Activation_Thresholds_Target_Boost", SN_CHECK);
MakeNameEx(0x58020, "TD_Integral_Cumulative_Range_WGDC_Correction", SN_CHECK);
MakeNameEx(0x57FF8, "TD_Integral_Negative_Activation_Boost_Error", SN_CHECK);
MakeNameEx(0x58000, "TD_Integral_Positive_Activation_Boost_Error", SN_CHECK);
MakeNameEx(0x58004, "TD_Integral_Positive_Activation_Wastegate_Duty", SN_CHECK);
MakeNameEx(0x57CB8, "Manifold_Pressure_Sensor_Scaling", SN_CHECK);
MakeNameEx(0x61B72, "Manifold_Pressure_Sensor_Limits_CEL", SN_CHECK);
MakeNameEx(0x5A00D, "Manifold_Pressure_Sensor_CEL_Delays", SN_CHECK);
MakeNameEx(0x5E2D8, "Primary_Open_Loop_Fueling", SN_CHECK);
referenceAddress = DfirstB(0x5E2D8);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_Primary_Open_Loop_Fueling", SN_CHECK);
}
else
{
    Message("No reference to Primary_Open_Loop_Fueling\n");
}

MakeNameEx(0x5E254, "Primary_Open_Loop_Fueling_X_AXIS", SN_CHECK);
MakeNameEx(0x5E290, "Primary_Open_Loop_Fueling_Y_AXIS", SN_CHECK);
MakeNameEx(0x5E480, "Primary_Open_Loop_Fueling_Failsafe", SN_CHECK);
referenceAddress = DfirstB(0x5E480);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_Primary_Open_Loop_Fueling_Failsafe", SN_CHECK);
}
else
{
    Message("No reference to Primary_Open_Loop_Fueling_Failsafe\n");
}

MakeNameEx(0x5E3FC, "Primary_Open_Loop_Fueling_Failsafe_X_AXIS", SN_CHECK);
MakeNameEx(0x5E438, "Primary_Open_Loop_Fueling_Failsafe_Y_AXIS", SN_CHECK);
MakeNameEx(0x5D21C, "Primary_Open_Loop_Fuel_Map_Switch_IAM", SN_CHECK);
MakeNameEx(0x5D180, "Minimum_Active_Primary_Open_Loop_Enrichment", SN_CHECK);
MakeNameEx(0x5D714, "Minimum_Primary_Open_Loop_Enrichment_Throttle", SN_CHECK);
referenceAddress = DfirstB(0x5D714);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Minimum_Primary_Open_Loop_Enrichment_Throttle", SN_CHECK);
}
else
{
    Message("No reference to Minimum_Primary_Open_Loop_Enrichment_Throttle\n");
}

MakeNameEx(0x5D6FC, "Minimum_Primary_Open_Loop_Enrichment_Throttle_Y_AXIS", SN_CHECK);
MakeNameEx(0x5DDF4, "Primary_Open_Loop_Fueling_Compensation_ECT", SN_CHECK);
referenceAddress = DfirstB(0x5DDF4);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Primary_Open_Loop_Fueling_Compensation_ECT", SN_CHECK);
}
else
{
    Message("No reference to Primary_Open_Loop_Fueling_Compensation_ECT\n");
}

MakeNameEx(0x5D430, "Primary_Open_Loop_Fueling_Compensation_ECT_Y_AXIS", SN_CHECK);
MakeNameEx(0x5D734, "Primary_Open_Loop_Fueling_Compensation_Timing_Compensation_", SN_CHECK);
referenceAddress = DfirstB(0x5D734);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Primary_Open_Loop_Fueling_Compensation_Timing_Compensation_", SN_CHECK);
}
else
{
    Message("No reference to Primary_Open_Loop_Fueling_Compensation_Timing_Compensation_\n");
}

MakeNameEx(0x5D71C, "Primary_Open_Loop_Fueling_Compensation_Timing_Compensation_Y_AXIS", SN_CHECK);
MakeNameEx(0x62124, "Front_Oxygen_Sensor_Scaling", SN_CHECK);
referenceAddress = DfirstB(0x62124);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Front_Oxygen_Sensor_Scaling", SN_CHECK);
}
else
{
    Message("No reference to Front_Oxygen_Sensor_Scaling\n");
}

MakeNameEx(0x620F0, "Front_Oxygen_Sensor_Scaling_Y_AXIS", SN_CHECK);
MakeNameEx(0x1F5EC, "Front_Oxygen_Sensor_Rich_Limit", SN_CHECK);
MakeNameEx(0x59750, "Front_Oxygen_Sensor_Compensation_Atm_Pressure", SN_CHECK);
referenceAddress = DfirstB(0x59750);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Front_Oxygen_Sensor_Compensation_Atm_Pressure", SN_CHECK);
}
else
{
    Message("No reference to Front_Oxygen_Sensor_Compensation_Atm_Pressure\n");
}

MakeNameEx(0x59740, "Front_Oxygen_Sensor_Compensation_Atm_Pressure_Y_AXIS", SN_CHECK);
MakeNameEx(0x5EE24, "CL_Fueling_Target_Compensation_Load", SN_CHECK);
referenceAddress = DfirstB(0x5EE24);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_CL_Fueling_Target_Compensation_Load", SN_CHECK);
}
else
{
    Message("No reference to CL_Fueling_Target_Compensation_Load\n");
}

MakeNameEx(0x5EDD0, "CL_Fueling_Target_Compensation_Load_X_AXIS", SN_CHECK);
MakeNameEx(0x5EDFC, "CL_Fueling_Target_Compensation_Load_Y_AXIS", SN_CHECK);
MakeNameEx(0x5ECA4, "CL_Fueling_Target_Compensation_A_ECT", SN_CHECK);
referenceAddress = DfirstB(0x5ECA4);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_CL_Fueling_Target_Compensation_A_ECT", SN_CHECK);
}
else
{
    Message("No reference to CL_Fueling_Target_Compensation_A_ECT\n");
}

MakeNameEx(0x5D430, "CL_Fueling_Target_Compensation_A_ECT_X_AXIS", SN_CHECK);
MakeNameEx(0x5EC98, "CL_Fueling_Target_Compensation_A_ECT_Y_AXIS", SN_CHECK);
MakeNameEx(0x5ED58, "CL_Fueling_Target_Compensation_B_ECT", SN_CHECK);
referenceAddress = DfirstB(0x5ED58);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_CL_Fueling_Target_Compensation_B_ECT", SN_CHECK);
}
else
{
    Message("No reference to CL_Fueling_Target_Compensation_B_ECT\n");
}

MakeNameEx(0x5D430, "CL_Fueling_Target_Compensation_B_ECT_X_AXIS", SN_CHECK);
MakeNameEx(0x5ED4C, "CL_Fueling_Target_Compensation_B_ECT_Y_AXIS", SN_CHECK);
MakeNameEx(0x5CE3E, "CL_to_OL_Delay", SN_CHECK);
MakeNameEx(0x5D6EC, "CL_to_OL_Transition_with_Delay_Throttle", SN_CHECK);
referenceAddress = DfirstB(0x5D6EC);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_CL_to_OL_Transition_with_Delay_Throttle", SN_CHECK);
}
else
{
    Message("No reference to CL_to_OL_Transition_with_Delay_Throttle\n");
}

MakeNameEx(0x5D6AC, "CL_to_OL_Transition_with_Delay_Throttle_Y_AXIS", SN_CHECK);
MakeNameEx(0x5D184, "CL_to_OL_Transition_with_Delay_Throttle_Hysteresis", SN_CHECK);
MakeNameEx(0x5DDD4, "CL_to_OL_Transition_with_Delay_Base_Pulse_Width", SN_CHECK);
referenceAddress = DfirstB(0x5DDD4);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_CL_to_OL_Transition_with_Delay_Base_Pulse_Width", SN_CHECK);
}
else
{
    Message("No reference to CL_to_OL_Transition_with_Delay_Base_Pulse_Width\n");
}

MakeNameEx(0x5DD94, "CL_to_OL_Transition_with_Delay_Base_Pulse_Width_Y_AXIS", SN_CHECK);
MakeNameEx(0x5D188, "CL_to_OL_Transition_with_Delay_BPW_Hysteresis", SN_CHECK);
MakeNameEx(0x5D204, "CL_Delay_Maximum_EGT", SN_CHECK);
MakeNameEx(0x5D1F8, "CL_Delay_Maximum_Throttle", SN_CHECK);
MakeNameEx(0x5D1FC, "CL_Delay_Maximum_Vehicle_Speed", SN_CHECK);
MakeNameEx(0x5D18C, "CL_Delay_Minimum_ECT", SN_CHECK);
MakeNameEx(0x5D1B8, "CL_Delay_Maximum_Engine_Speed_Per_Gear", SN_CHECK);
MakeNameEx(0x5D1E0, "CL_Delay_Maximum_Engine_Speed_Neutral", SN_CHECK);
MakeNameEx(0x61C2C, "Injector_Latency", SN_CHECK);
referenceAddress = DfirstB(0x61C2C);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Injector_Latency", SN_CHECK);
}
else
{
    Message("No reference to Injector_Latency\n");
}

MakeNameEx(0x61C18, "Injector_Latency_Y_AXIS", SN_CHECK);
MakeNameEx(0x5CF14, "Injector_Flow_Scaling", SN_CHECK);
MakeNameEx(0x5E60C, "Per_Injector_Primary_Fuel_Offset_Compensation_A", SN_CHECK);
referenceAddress = DfirstB(0x5E60C);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_Per_Injector_Primary_Fuel_Offset_Compensation_A", SN_CHECK);
}
else
{
    Message("No reference to Per_Injector_Primary_Fuel_Offset_Compensation_A\n");
}

MakeNameEx(0x5E590, "Per_Injector_Primary_Fuel_Offset_Compensation_A_X_AXIS", SN_CHECK);
MakeNameEx(0x5E5D4, "Per_Injector_Primary_Fuel_Offset_Compensation_A_Y_AXIS", SN_CHECK);
MakeNameEx(0x5E778, "Per_Injector_Primary_Fuel_Offset_Compensation_B", SN_CHECK);
referenceAddress = DfirstB(0x5E778);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_Per_Injector_Primary_Fuel_Offset_Compensation_B", SN_CHECK);
}
else
{
    Message("No reference to Per_Injector_Primary_Fuel_Offset_Compensation_B\n");
}

MakeNameEx(0x5E6FC, "Per_Injector_Primary_Fuel_Offset_Compensation_B_X_AXIS", SN_CHECK);
MakeNameEx(0x5E740, "Per_Injector_Primary_Fuel_Offset_Compensation_B_Y_AXIS", SN_CHECK);
MakeNameEx(0x5E8E4, "Per_Injector_Primary_Fuel_Offset_Compensation_C", SN_CHECK);
referenceAddress = DfirstB(0x5E8E4);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_Per_Injector_Primary_Fuel_Offset_Compensation_C", SN_CHECK);
}
else
{
    Message("No reference to Per_Injector_Primary_Fuel_Offset_Compensation_C\n");
}

MakeNameEx(0x5E868, "Per_Injector_Primary_Fuel_Offset_Compensation_C_X_AXIS", SN_CHECK);
MakeNameEx(0x5E8AC, "Per_Injector_Primary_Fuel_Offset_Compensation_C_Y_AXIS", SN_CHECK);
MakeNameEx(0x5EA50, "Per_Injector_Primary_Fuel_Offset_Compensation_D", SN_CHECK);
referenceAddress = DfirstB(0x5EA50);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_Per_Injector_Primary_Fuel_Offset_Compensation_D", SN_CHECK);
}
else
{
    Message("No reference to Per_Injector_Primary_Fuel_Offset_Compensation_D\n");
}

MakeNameEx(0x5E9D4, "Per_Injector_Primary_Fuel_Offset_Compensation_D_X_AXIS", SN_CHECK);
MakeNameEx(0x5EA18, "Per_Injector_Primary_Fuel_Offset_Compensation_D_Y_AXIS", SN_CHECK);
MakeNameEx(0x5D842, "Cranking_Fuel_Injector_Pulse_Width_A_ECT", SN_CHECK);
referenceAddress = DfirstB(0x5D842);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Cranking_Fuel_Injector_Pulse_Width_A_ECT", SN_CHECK);
}
else
{
    Message("No reference to Cranking_Fuel_Injector_Pulse_Width_A_ECT\n");
}

MakeNameEx(0x5D430, "Cranking_Fuel_Injector_Pulse_Width_A_ECT_Y_AXIS", SN_CHECK);
MakeNameEx(0x5D862, "Cranking_Fuel_Injector_Pulse_Width_B_ECT", SN_CHECK);
referenceAddress = DfirstB(0x5D862);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Cranking_Fuel_Injector_Pulse_Width_B_ECT", SN_CHECK);
}
else
{
    Message("No reference to Cranking_Fuel_Injector_Pulse_Width_B_ECT\n");
}

MakeNameEx(0x5D430, "Cranking_Fuel_Injector_Pulse_Width_B_ECT_Y_AXIS", SN_CHECK);
MakeNameEx(0x5D882, "Cranking_Fuel_Injector_Pulse_Width_C_ECT", SN_CHECK);
referenceAddress = DfirstB(0x5D882);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Cranking_Fuel_Injector_Pulse_Width_C_ECT", SN_CHECK);
}
else
{
    Message("No reference to Cranking_Fuel_Injector_Pulse_Width_C_ECT\n");
}

MakeNameEx(0x5D430, "Cranking_Fuel_Injector_Pulse_Width_C_ECT_Y_AXIS", SN_CHECK);
MakeNameEx(0x5D8A2, "Cranking_Fuel_Injector_Pulse_Width_D_ECT", SN_CHECK);
referenceAddress = DfirstB(0x5D8A2);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Cranking_Fuel_Injector_Pulse_Width_D_ECT", SN_CHECK);
}
else
{
    Message("No reference to Cranking_Fuel_Injector_Pulse_Width_D_ECT\n");
}

MakeNameEx(0x5D430, "Cranking_Fuel_Injector_Pulse_Width_D_ECT_Y_AXIS", SN_CHECK);
MakeNameEx(0x5E130, "Cranking_Fuel_IPW_Compensation_RPM", SN_CHECK);
referenceAddress = DfirstB(0x5E130);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_Cranking_Fuel_IPW_Compensation_RPM", SN_CHECK);
}
else
{
    Message("No reference to Cranking_Fuel_IPW_Compensation_RPM\n");
}

MakeNameEx(0x5E100, "Cranking_Fuel_IPW_Compensation_RPM_X_AXIS", SN_CHECK);
MakeNameEx(0x5E114, "Cranking_Fuel_IPW_Compensation_RPM_Y_AXIS", SN_CHECK);
MakeNameEx(0x5D4D8, "Cranking_Fuel_IPW_Compensation_Accelerator", SN_CHECK);
referenceAddress = DfirstB(0x5D4D8);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Cranking_Fuel_IPW_Compensation_Accelerator", SN_CHECK);
}
else
{
    Message("No reference to Cranking_Fuel_IPW_Compensation_Accelerator\n");
}

MakeNameEx(0x5D4C0, "Cranking_Fuel_IPW_Compensation_Accelerator_Y_AXIS", SN_CHECK);
MakeNameEx(0x5DEFC, "Throttle_Tipin_Enrichment", SN_CHECK);
referenceAddress = DfirstB(0x5DEFC);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Throttle_Tipin_Enrichment", SN_CHECK);
}
else
{
    Message("No reference to Throttle_Tipin_Enrichment\n");
}

MakeNameEx(0x5DEB4, "Throttle_Tipin_Enrichment_Y_AXIS", SN_CHECK);
MakeNameEx(0x5D31C, "Minimum_Tipin_Enrichment_Activation", SN_CHECK);
MakeNameEx(0x5D318, "Minimum_Tipin_Enrichment_Activation_Throttle", SN_CHECK);
MakeNameEx(0x5D7B8, "Tipin_Enrichment_Compensation_Boost_Error", SN_CHECK);
referenceAddress = DfirstB(0x5D7B8);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Tipin_Enrichment_Compensation_Boost_Error", SN_CHECK);
}
else
{
    Message("No reference to Tipin_Enrichment_Compensation_Boost_Error\n");
}

MakeNameEx(0x5D794, "Tipin_Enrichment_Compensation_Boost_Error_Y_AXIS", SN_CHECK);
MakeNameEx(0x5DF20, "Tipin_Enrichment_Compensation_ECT", SN_CHECK);
referenceAddress = DfirstB(0x5DF20);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Tipin_Enrichment_Compensation_ECT", SN_CHECK);
}
else
{
    Message("No reference to Tipin_Enrichment_Compensation_ECT\n");
}

MakeNameEx(0x5D430, "Tipin_Enrichment_Compensation_ECT_Y_AXIS", SN_CHECK);
MakeNameEx(0x5CE07, "Tipin_Enrichment_Disable_Applied_Counter_Threshold", SN_CHECK);
MakeNameEx(0x5CE08, "Tipin_Enrichment_Applied_Counter_Reset", SN_CHECK);
MakeNameEx(0x5D320, "Tipin_Enrichment_Disable_Throttle_Cumulative_Threshold", SN_CHECK);
MakeNameEx(0x5CE09, "Tipin_Throttle_Cumulative_Reset", SN_CHECK);
MakeNameEx(0x5D52E, "Min_Primary_Base_Enrichment_1", SN_CHECK);
referenceAddress = DfirstB(0x5D52E);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Min_Primary_Base_Enrichment_1", SN_CHECK);
}
else
{
    Message("No reference to Min_Primary_Base_Enrichment_1\n");
}

MakeNameEx(0x5D430, "Min_Primary_Base_Enrichment_1_Y_AXIS", SN_CHECK);
MakeNameEx(0x5E228, "Min_Primary_Base_Enrichment_1_NonPrimary_OL", SN_CHECK);
referenceAddress = DfirstB(0x5E228);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_Min_Primary_Base_Enrichment_1_NonPrimary_OL", SN_CHECK);
}
else
{
    Message("No reference to Min_Primary_Base_Enrichment_1_NonPrimary_OL\n");
}

MakeNameEx(0x5E1FC, "Min_Primary_Base_Enrichment_1_NonPrimary_OL_X_AXIS", SN_CHECK);
MakeNameEx(0x5E21C, "Min_Primary_Base_Enrichment_1_NonPrimary_OL_Y_AXIS", SN_CHECK);
MakeNameEx(0x5D942, "Min_Primary_Base_Enrich_2_Initial_Start_1A", SN_CHECK);
referenceAddress = DfirstB(0x5D942);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Min_Primary_Base_Enrich_2_Initial_Start_1A", SN_CHECK);
}
else
{
    Message("No reference to Min_Primary_Base_Enrich_2_Initial_Start_1A\n");
}

MakeNameEx(0x5D430, "Min_Primary_Base_Enrich_2_Initial_Start_1A_Y_AXIS", SN_CHECK);
MakeNameEx(0x5D982, "Min_Primary_Base_Enrich_2_Initial_Start_1B", SN_CHECK);
referenceAddress = DfirstB(0x5D982);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Min_Primary_Base_Enrich_2_Initial_Start_1B", SN_CHECK);
}
else
{
    Message("No reference to Min_Primary_Base_Enrich_2_Initial_Start_1B\n");
}

MakeNameEx(0x5D430, "Min_Primary_Base_Enrich_2_Initial_Start_1B_Y_AXIS", SN_CHECK);
MakeNameEx(0x5D962, "Min_Primary_Base_Enrich_2_Initial_Start_2A", SN_CHECK);
referenceAddress = DfirstB(0x5D962);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Min_Primary_Base_Enrich_2_Initial_Start_2A", SN_CHECK);
}
else
{
    Message("No reference to Min_Primary_Base_Enrich_2_Initial_Start_2A\n");
}

MakeNameEx(0x5D430, "Min_Primary_Base_Enrich_2_Initial_Start_2A_Y_AXIS", SN_CHECK);
MakeNameEx(0x5D9A2, "Min_Primary_Base_Enrich_2_Initial_Start_2B", SN_CHECK);
referenceAddress = DfirstB(0x5D9A2);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Min_Primary_Base_Enrich_2_Initial_Start_2B", SN_CHECK);
}
else
{
    Message("No reference to Min_Primary_Base_Enrich_2_Initial_Start_2B\n");
}

MakeNameEx(0x5D430, "Min_Primary_Base_Enrich_2_Initial_Start_2B_Y_AXIS", SN_CHECK);
MakeNameEx(0x5D9C2, "Min_Primary_Base_Enrich_2_Decay_Step_1", SN_CHECK);
referenceAddress = DfirstB(0x5D9C2);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Min_Primary_Base_Enrich_2_Decay_Step_1", SN_CHECK);
}
else
{
    Message("No reference to Min_Primary_Base_Enrich_2_Decay_Step_1\n");
}

MakeNameEx(0x5D430, "Min_Primary_Base_Enrich_2_Decay_Step_1_Y_AXIS", SN_CHECK);
MakeNameEx(0x5D9E2, "Min_Primary_Base_Enrich_2_Decay_Step_2", SN_CHECK);
referenceAddress = DfirstB(0x5D9E2);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Min_Primary_Base_Enrich_2_Decay_Step_2", SN_CHECK);
}
else
{
    Message("No reference to Min_Primary_Base_Enrich_2_Decay_Step_2\n");
}

MakeNameEx(0x5D430, "Min_Primary_Base_Enrich_2_Decay_Step_2_Y_AXIS", SN_CHECK);
MakeNameEx(0x5D8C2, "Min_Primary_Base_Enrich_3_Initial_Start_1A", SN_CHECK);
referenceAddress = DfirstB(0x5D8C2);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Min_Primary_Base_Enrich_3_Initial_Start_1A", SN_CHECK);
}
else
{
    Message("No reference to Min_Primary_Base_Enrich_3_Initial_Start_1A\n");
}

MakeNameEx(0x5D430, "Min_Primary_Base_Enrich_3_Initial_Start_1A_Y_AXIS", SN_CHECK);
MakeNameEx(0x5D8E2, "Min_Primary_Base_Enrich_3_Initial_Start_1B", SN_CHECK);
referenceAddress = DfirstB(0x5D8E2);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Min_Primary_Base_Enrich_3_Initial_Start_1B", SN_CHECK);
}
else
{
    Message("No reference to Min_Primary_Base_Enrich_3_Initial_Start_1B\n");
}

MakeNameEx(0x5D430, "Min_Primary_Base_Enrich_3_Initial_Start_1B_Y_AXIS", SN_CHECK);
MakeNameEx(0x5D902, "Min_Primary_Base_Enrich_3_Initial_Start_2A", SN_CHECK);
referenceAddress = DfirstB(0x5D902);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Min_Primary_Base_Enrich_3_Initial_Start_2A", SN_CHECK);
}
else
{
    Message("No reference to Min_Primary_Base_Enrich_3_Initial_Start_2A\n");
}

MakeNameEx(0x5D430, "Min_Primary_Base_Enrich_3_Initial_Start_2A_Y_AXIS", SN_CHECK);
MakeNameEx(0x5D922, "Min_Primary_Base_Enrich_3_Initial_Start_2B", SN_CHECK);
referenceAddress = DfirstB(0x5D922);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Min_Primary_Base_Enrich_3_Initial_Start_2B", SN_CHECK);
}
else
{
    Message("No reference to Min_Primary_Base_Enrich_3_Initial_Start_2B\n");
}

MakeNameEx(0x5D430, "Min_Primary_Base_Enrich_3_Initial_Start_2B_Y_AXIS", SN_CHECK);
MakeNameEx(0x5D4EE, "Min_Primary_Base_Enrich_3_Decay_Delay_A", SN_CHECK);
referenceAddress = DfirstB(0x5D4EE);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Min_Primary_Base_Enrich_3_Decay_Delay_A", SN_CHECK);
}
else
{
    Message("No reference to Min_Primary_Base_Enrich_3_Decay_Delay_A\n");
}

MakeNameEx(0x5D430, "Min_Primary_Base_Enrich_3_Decay_Delay_A_Y_AXIS", SN_CHECK);
MakeNameEx(0x5D4FE, "Min_Primary_Base_Enrich_3_Decay_Delay_B", SN_CHECK);
referenceAddress = DfirstB(0x5D4FE);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Min_Primary_Base_Enrich_3_Decay_Delay_B", SN_CHECK);
}
else
{
    Message("No reference to Min_Primary_Base_Enrich_3_Decay_Delay_B\n");
}

MakeNameEx(0x5D430, "Min_Primary_Base_Enrich_3_Decay_Delay_B_Y_AXIS", SN_CHECK);
MakeNameEx(0x5CF18, "Min_Primary_Base_Enrich_3_Decay_Multiplier", SN_CHECK);
MakeNameEx(0x5D12C, "AF_Learning_1_Limits", SN_CHECK);
MakeNameEx(0x5D138, "AF_Learning_1_Airflow_Ranges", SN_CHECK);
MakeNameEx(0x59344, "MAF_Limit_Maximum", SN_CHECK);
MakeNameEx(0x61F40, "MAF_Sensor_Scaling", SN_CHECK);
referenceAddress = DfirstB(0x61F40);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_MAF_Sensor_Scaling", SN_CHECK);
}
else
{
    Message("No reference to MAF_Sensor_Scaling\n");
}

MakeNameEx(0x61E80, "MAF_Sensor_Scaling_Y_AXIS", SN_CHECK);
MakeNameEx(0x59AF0, "MAF_Compensation_IAT", SN_CHECK);
referenceAddress = DfirstB(0x59AF0);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_MAF_Compensation_IAT", SN_CHECK);
}
else
{
    Message("No reference to MAF_Compensation_IAT\n");
}

MakeNameEx(0x59ABC, "MAF_Compensation_IAT_X_AXIS", SN_CHECK);
MakeNameEx(0x59AD0, "MAF_Compensation_IAT_Y_AXIS", SN_CHECK);
MakeNameEx(0x1D754, "Engine_Load_Limit_Maximum", SN_CHECK);
MakeNameEx(0x59A38, "Engine_Load_Compensation_MP", SN_CHECK);
referenceAddress = DfirstB(0x59A38);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_Engine_Load_Compensation_MP", SN_CHECK);
}
else
{
    Message("No reference to Engine_Load_Compensation_MP\n");
}

MakeNameEx(0x599DC, "Engine_Load_Compensation_MP_X_AXIS", SN_CHECK);
MakeNameEx(0x59A08, "Engine_Load_Compensation_MP_Y_AXIS", SN_CHECK);
MakeNameEx(0x5FD38, "Base_Timing", SN_CHECK);
referenceAddress = DfirstB(0x5FD38);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_Base_Timing", SN_CHECK);
}
else
{
    Message("No reference to Base_Timing\n");
}

MakeNameEx(0x5FCB4, "Base_Timing_X_AXIS", SN_CHECK);
MakeNameEx(0x5FCF0, "Base_Timing_Y_AXIS", SN_CHECK);
MakeNameEx(0x5F05C, "Base_Timing_Idle_Below_Speed_Threshold", SN_CHECK);
MakeNameEx(0x5F430, "Base_Timing_Idle_Above_Speed_Threshold", SN_CHECK);
referenceAddress = DfirstB(0x5F430);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Base_Timing_Idle_Above_Speed_Threshold", SN_CHECK);
}
else
{
    Message("No reference to Base_Timing_Idle_Above_Speed_Threshold\n");
}

MakeNameEx(0x5F40C, "Base_Timing_Idle_Above_Speed_Threshold_Y_AXIS", SN_CHECK);
MakeNameEx(0x5F030, "Base_Timing_Idle_Vehicle_Speed_Threshold", SN_CHECK);
MakeNameEx(0x6000C, "Knock_Correction_Advance_Max", SN_CHECK);
referenceAddress = DfirstB(0x6000C);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_Knock_Correction_Advance_Max", SN_CHECK);
}
else
{
    Message("No reference to Knock_Correction_Advance_Max\n");
}

MakeNameEx(0x5FF84, "Knock_Correction_Advance_Max_X_AXIS", SN_CHECK);
MakeNameEx(0x5FFC4, "Knock_Correction_Advance_Max_Y_AXIS", SN_CHECK);
MakeNameEx(0x5F49C, "Timing_Compensation_IAT", SN_CHECK);
referenceAddress = DfirstB(0x5F49C);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Timing_Compensation_IAT", SN_CHECK);
}
else
{
    Message("No reference to Timing_Compensation_IAT\n");
}

MakeNameEx(0x5F45C, "Timing_Compensation_IAT_Y_AXIS", SN_CHECK);
MakeNameEx(0x5F060, "Timing_Comp_Min_Load_IAT", SN_CHECK);
MakeNameEx(0x5F449, "Timing_Compensation_ECT", SN_CHECK);
referenceAddress = DfirstB(0x5F449);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Timing_Compensation_ECT", SN_CHECK);
}
else
{
    Message("No reference to Timing_Compensation_ECT\n");
}

MakeNameEx(0x5F2DC, "Timing_Compensation_ECT_Y_AXIS", SN_CHECK);
MakeNameEx(0x60160, "Timing_Compensation_MRP", SN_CHECK);
referenceAddress = DfirstB(0x60160);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_Timing_Compensation_MRP", SN_CHECK);
}
else
{
    Message("No reference to Timing_Compensation_MRP\n");
}

MakeNameEx(0x60140, "Timing_Compensation_MRP_X_AXIS", SN_CHECK);
MakeNameEx(0x60154, "Timing_Compensation_MRP_Y_AXIS", SN_CHECK);
MakeNameEx(0x5F894, "Timing_Compensation_Per_Cylinder_A_", SN_CHECK);
referenceAddress = DfirstB(0x5F894);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Timing_Compensation_Per_Cylinder_A_", SN_CHECK);
}
else
{
    Message("No reference to Timing_Compensation_Per_Cylinder_A_\n");
}

MakeNameEx(0x5F85C, "Timing_Compensation_Per_Cylinder_A__Y_AXIS", SN_CHECK);
MakeNameEx(0x5F8DC, "Timing_Compensation_Per_Cylinder_B_", SN_CHECK);
referenceAddress = DfirstB(0x5F8DC);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Timing_Compensation_Per_Cylinder_B_", SN_CHECK);
}
else
{
    Message("No reference to Timing_Compensation_Per_Cylinder_B_\n");
}

MakeNameEx(0x5F8A4, "Timing_Compensation_Per_Cylinder_B__Y_AXIS", SN_CHECK);
MakeNameEx(0x5F924, "Timing_Compensation_Per_Cylinder_C_", SN_CHECK);
referenceAddress = DfirstB(0x5F924);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Timing_Compensation_Per_Cylinder_C_", SN_CHECK);
}
else
{
    Message("No reference to Timing_Compensation_Per_Cylinder_C_\n");
}

MakeNameEx(0x5F8EC, "Timing_Compensation_Per_Cylinder_C__Y_AXIS", SN_CHECK);
MakeNameEx(0x5F96C, "Timing_Compensation_Per_Cylinder_D_", SN_CHECK);
referenceAddress = DfirstB(0x5F96C);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Timing_Compensation_Per_Cylinder_D_", SN_CHECK);
}
else
{
    Message("No reference to Timing_Compensation_Per_Cylinder_D_\n");
}

MakeNameEx(0x5F934, "Timing_Compensation_Per_Cylinder_D__Y_AXIS", SN_CHECK);
MakeNameEx(0x5F16C, "Timing_Comp_Minimum_Load_Per_Cylinder", SN_CHECK);
MakeNameEx(0x5F168, "Timing_Comp_Maximum_RPM_Per_Cylinder", SN_CHECK);
MakeNameEx(0x5F170, "Timing_Comp_Minimum_Coolant_Temp_Per_Cylinder", SN_CHECK);
MakeNameEx(0x5F1A0, "Feedback_Correction_Range_RPM", SN_CHECK);
MakeNameEx(0x5F1B0, "Feedback_Correction_Minimum_Load", SN_CHECK);
MakeNameEx(0x5F184, "Feedback_Correction_Retard_Value", SN_CHECK);
MakeNameEx(0x5F180, "Feedback_Correction_Retard_Limit", SN_CHECK);
MakeNameEx(0x5F188, "Feedback_Correction_Negative_Advance_Value", SN_CHECK);
MakeNameEx(0x5EF5C, "Feedback_Correction_Negative_Advance_Delay", SN_CHECK);
MakeNameEx(0x5F1B8, "Extended_Feedback_Correction_High_RPM_Compensation", SN_CHECK);
MakeNameEx(0x5F288, "Fine_Correction_Range_RPM", SN_CHECK);
MakeNameEx(0x5F298, "Fine_Correction_Range_Load", SN_CHECK);
MakeNameEx(0x5F2B8, "Fine_Correction_Rows_RPM", SN_CHECK);
MakeNameEx(0x5F2A8, "Fine_Correction_Columns_Load", SN_CHECK);
MakeNameEx(0x5F2D0, "Fine_Correction_Retard_Value", SN_CHECK);
MakeNameEx(0x5F280, "Fine_Correction_Retard_Limit", SN_CHECK);
MakeNameEx(0x5F284, "Fine_Correction_Advance_Value", SN_CHECK);
MakeNameEx(0x5F27C, "Fine_Correction_Advance_Limit", SN_CHECK);
MakeNameEx(0x5EF6A, "Fine_Correction_Advance_Delay", SN_CHECK);
MakeNameEx(0x5F230, "Rough_Correction_Range_RPM", SN_CHECK);
MakeNameEx(0x5F240, "Rough_Correction_Range_Load", SN_CHECK);
MakeNameEx(0x5F250, "Rough_Correction_Minimum_KC_Advance_Map_Value", SN_CHECK);
MakeNameEx(0x5F9A4, "Rough_Correction_Learning_Delay_Increasing", SN_CHECK);
referenceAddress = DfirstB(0x5F9A4);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Rough_Correction_Learning_Delay_Increasing", SN_CHECK);
}
else
{
    Message("No reference to Rough_Correction_Learning_Delay_Increasing\n");
}

MakeNameEx(0x5F97C, "Rough_Correction_Learning_Delay_Increasing_Y_AXIS", SN_CHECK);
MakeNameEx(0x5F22C, "Advance_Multiplier_Initial", SN_CHECK);
MakeNameEx(0x5F254, "Advance_Multiplier_Step_Value", SN_CHECK);
MakeNameEx(0x634A0, "Intake_Cam_Advance_Angle_AVCS", SN_CHECK);
referenceAddress = DfirstB(0x634A0);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_Intake_Cam_Advance_Angle_AVCS", SN_CHECK);
}
else
{
    Message("No reference to Intake_Cam_Advance_Angle_AVCS\n");
}

MakeNameEx(0x63420, "Intake_Cam_Advance_Angle_AVCS_X_AXIS", SN_CHECK);
MakeNameEx(0x63458, "Intake_Cam_Advance_Angle_AVCS_Y_AXIS", SN_CHECK);
MakeNameEx(0x61664, "Requested_Torque_Accelerator_Pedal", SN_CHECK);
referenceAddress = DfirstB(0x61664);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_Requested_Torque_Accelerator_Pedal", SN_CHECK);
}
else
{
    Message("No reference to Requested_Torque_Accelerator_Pedal\n");
}

MakeNameEx(0x615EC, "Requested_Torque_Accelerator_Pedal_X_AXIS", SN_CHECK);
MakeNameEx(0x61628, "Requested_Torque_Accelerator_Pedal_Y_AXIS", SN_CHECK);
MakeNameEx(0x613CC, "Target_Throttle_Plate_Position_Requested_Torque", SN_CHECK);
referenceAddress = DfirstB(0x613CC);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_Target_Throttle_Plate_Position_Requested_Torque", SN_CHECK);
}
else
{
    Message("No reference to Target_Throttle_Plate_Position_Requested_Torque\n");
}

MakeNameEx(0x61348, "Target_Throttle_Plate_Position_Requested_Torque_X_AXIS", SN_CHECK);
MakeNameEx(0x6138C, "Target_Throttle_Plate_Position_Requested_Torque_Y_AXIS", SN_CHECK);
MakeNameEx(0x5D364, "Rev_Limit_Fuel_Cut", SN_CHECK);
MakeNameEx(0x5D36C, "Rev_Limit_Fuel_Resume_Boost", SN_CHECK);
MakeNameEx(0x5D3B4, "Speed_Limiting_Enable_Fuel_Cut", SN_CHECK);
MakeNameEx(0x5D3BC, "Speed_Limiting_Disable_Fuel_Cut", SN_CHECK);
MakeNameEx(0x59604, "Speed_Limiting_Throttle", SN_CHECK);
MakeNameEx(0x62078, "EGT_Sensor_Scaling", SN_CHECK);
referenceAddress = DfirstB(0x62078);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_EGT_Sensor_Scaling", SN_CHECK);
}
else
{
    Message("No reference to EGT_Sensor_Scaling\n");
}

MakeNameEx(0x62000, "EGT_Sensor_Scaling_Y_AXIS", SN_CHECK);
MakeNameEx(0x61E08, "Fuel_Temp_Sensor_Scaling", SN_CHECK);
referenceAddress = DfirstB(0x61E08);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Fuel_Temp_Sensor_Scaling", SN_CHECK);
}
else
{
    Message("No reference to Fuel_Temp_Sensor_Scaling\n");
}

MakeNameEx(0x61D90, "Fuel_Temp_Sensor_Scaling_Y_AXIS", SN_CHECK);
MakeNameEx(0x57A6C, "Intake_Temp_Sensor_Scaling", SN_CHECK);
referenceAddress = DfirstB(0x57A6C);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Intake_Temp_Sensor_Scaling", SN_CHECK);
}
else
{
    Message("No reference to Intake_Temp_Sensor_Scaling\n");
}

MakeNameEx(0x579F4, "Intake_Temp_Sensor_Scaling_Y_AXIS", SN_CHECK);
MakeNameEx(0x57984, "Coolant_Temp_Sensor_Scaling", SN_CHECK);
referenceAddress = DfirstB(0x57984);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Coolant_Temp_Sensor_Scaling", SN_CHECK);
}
else
{
    Message("No reference to Coolant_Temp_Sensor_Scaling\n");
}

MakeNameEx(0x57914, "Coolant_Temp_Sensor_Scaling_Y_AXIS", SN_CHECK);
MakeNameEx(0x57C5C, "Atmospheric_Pressure_Sensor_Scaling", SN_CHECK);
MakeNameEx(0x628A0, "Radiator_Fan_Modes_ECT", SN_CHECK);
MakeNameEx(0x628B0, "Radiator_Fan_Modes_Veh_Speed", SN_CHECK);
MakeNameEx(0x59558, "Gear_Determination_Thresholds", SN_CHECK);
MakeNameEx(0x60B54, "Idle_Speed_Target_A", SN_CHECK);
referenceAddress = DfirstB(0x60B54);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Idle_Speed_Target_A", SN_CHECK);
}
else
{
    Message("No reference to Idle_Speed_Target_A\n");
}

MakeNameEx(0x6062C, "Idle_Speed_Target_A_Y_AXIS", SN_CHECK);
MakeNameEx(0x60B94, "Idle_Speed_Target_B", SN_CHECK);
referenceAddress = DfirstB(0x60B94);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Idle_Speed_Target_B", SN_CHECK);
}
else
{
    Message("No reference to Idle_Speed_Target_B\n");
}

MakeNameEx(0x6062C, "Idle_Speed_Target_B_Y_AXIS", SN_CHECK);
MakeNameEx(0x60BD4, "Idle_Speed_Target_C", SN_CHECK);
referenceAddress = DfirstB(0x60BD4);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Idle_Speed_Target_C", SN_CHECK);
}
else
{
    Message("No reference to Idle_Speed_Target_C\n");
}

MakeNameEx(0x6062C, "Idle_Speed_Target_C_Y_AXIS", SN_CHECK);
MakeNameEx(0x4A812, "Force_Pass_Readiness_Monitors", SN_CHECK);
MakeNameEx(0x475FE, "P0000_PASS_CODE_NO_DTC_DETECTED", SN_CHECK);
MakeNameEx(0x475E4, "P0011_CAMSHAFT_POS_TIMING_OVERADVANCED_1", SN_CHECK);
MakeNameEx(0x475E5, "P0021_CAMSHAFT_POS_TIMING_OVERADVANCED_2", SN_CHECK);
MakeNameEx(0x47631, "P0030_FRONT_O2_SENSOR_RANGEPERF", SN_CHECK);
MakeNameEx(0x4760A, "P0031_FRONT_O2_SENSOR_LOW_INPUT", SN_CHECK);
MakeNameEx(0x47608, "P0032_FRONT_O2_SENSOR_HIGH_INPUT", SN_CHECK);
MakeNameEx(0x47609, "P0037_REAR_O2_SENSOR_LOW_INPUT", SN_CHECK);
MakeNameEx(0x47607, "P0038_REAR_O2_SENSOR_HIGH_INPUT", SN_CHECK);
MakeNameEx(0x4762C, "P0068_MAP_SENSOR_RANGEPERF", SN_CHECK);
MakeNameEx(0x4762F, "P0101_MAF_SENSOR_RANGEPERF", SN_CHECK);
MakeNameEx(0x475B9, "P0102_MAF_SENSOR_LOW_INPUT", SN_CHECK);
MakeNameEx(0x475BA, "P0103_MAF_SENSOR_HIGH_INPUT", SN_CHECK);
MakeNameEx(0x4760D, "P0107_MAP_SENSOR_LOW_INPUT", SN_CHECK);
MakeNameEx(0x4760E, "P0108_MAP_SENSOR_HIGH_INPUT", SN_CHECK);
MakeNameEx(0x47606, "P0111_IAT_SENSOR_RANGEPERF", SN_CHECK);
MakeNameEx(0x47604, "P0112_IAT_SENSOR_LOW_INPUT", SN_CHECK);
MakeNameEx(0x47605, "P0113_IAT_SENSOR_HIGH_INPUT", SN_CHECK);
MakeNameEx(0x475C1, "P0117_COOLANT_TEMP_SENSOR_LOW_INPUT", SN_CHECK);
MakeNameEx(0x475C2, "P0118_COOLANT_TEMP_SENSOR_HIGH_INPUT", SN_CHECK);
MakeNameEx(0x475BE, "P0122_TPS_A_LOW_INPUT", SN_CHECK);
MakeNameEx(0x475BF, "P0123_TPS_A_HIGH_INPUT", SN_CHECK);
MakeNameEx(0x475C4, "P0125_INSUFFICIENT_COOLANT_TEMP_FUELING", SN_CHECK);
MakeNameEx(0x4760F, "P0128_THERMOSTAT_MALFUNCTION", SN_CHECK);
MakeNameEx(0x4762D, "P0129_ATMOS_PRESSURE_SENSOR_RANGEPERF", SN_CHECK);
MakeNameEx(0x47601, "P0131_FRONT_O2_SENSOR_LOW_INPUT", SN_CHECK);
MakeNameEx(0x47602, "P0132_FRONT_O2_SENSOR_HIGH_INPUT", SN_CHECK);
MakeNameEx(0x475EF, "P0133_FRONT_O2_SENSOR_SLOW_RESPONSE", SN_CHECK);
MakeNameEx(0x47630, "P0134_FRONT_O2_SENSOR_NO_ACTIVITY", SN_CHECK);
MakeNameEx(0x47600, "P0137_REAR_O2_SENSOR_LOW_VOLTAGE", SN_CHECK);
MakeNameEx(0x47603, "P0138_REAR_O2_SENSOR_HIGH_VOLTAGE", SN_CHECK);
MakeNameEx(0x475F0, "P0139_REAR_O2_SENSOR_SLOW_RESPONSE", SN_CHECK);
MakeNameEx(0x475F6, "P0171_SYSTEM_TOO_LEAN", SN_CHECK);
MakeNameEx(0x475F7, "P0172_SYSTEM_TOO_RICH", SN_CHECK);
MakeNameEx(0x475D1, "P0181_FUEL_TEMP_SENSOR_A_RANGEPERF", SN_CHECK);
MakeNameEx(0x475CF, "P0182_FUEL_TEMP_SENSOR_A_LOW_INPUT", SN_CHECK);
MakeNameEx(0x475D0, "P0183_FUEL_TEMP_SENSOR_A_HIGH_INPUT", SN_CHECK);
MakeNameEx(0x47634, "P0222_TPS_B_LOW_INPUT", SN_CHECK);
MakeNameEx(0x47635, "P0223_TPS_B_HIGH_INPUT", SN_CHECK);
MakeNameEx(0x4762B, "P0230_FUEL_PUMP_PRIMARY_CIRCUIT", SN_CHECK);
MakeNameEx(0x47616, "P0244_WASTEGATE_SOLENOID_A_RANGEPERF", SN_CHECK);
MakeNameEx(0x47614, "P0245_WASTEGATE_SOLENOID_A_LOW", SN_CHECK);
MakeNameEx(0x47615, "P0246_WASTEGATE_SOLENOID_A_HIGH", SN_CHECK);
MakeNameEx(0x475F8, "P0301_MISFIRE_CYLINDER_1", SN_CHECK);
MakeNameEx(0x475F9, "P0302_MISFIRE_CYLINDER_2", SN_CHECK);
MakeNameEx(0x475FA, "P0303_MISFIRE_CYLINDER_3", SN_CHECK);
MakeNameEx(0x475FB, "P0304_MISFIRE_CYLINDER_4", SN_CHECK);
MakeNameEx(0x475BC, "P0327_KNOCK_SENSOR_1_LOW_INPUT", SN_CHECK);
MakeNameEx(0x475BD, "P0328_KNOCK_SENSOR_1_HIGH_INPUT", SN_CHECK);
MakeNameEx(0x475B4, "P0335_CRANKSHAFT_POS_SENSOR_A_MALFUNCTION", SN_CHECK);
MakeNameEx(0x475B5, "P0336_CRANKSHAFT_POS_SENSOR_A_RANGEPERF", SN_CHECK);
MakeNameEx(0x47647, "P0345_CAMSHAFT_POS_SENSOR_A_BANK_2", SN_CHECK);
MakeNameEx(0x475F3, "P0420_CAT_EFFICIENCY_BELOW_THRESHOLD", SN_CHECK);
MakeNameEx(0x475F4, "P0442_EVAP_LEAK_DETECTED_SMALL", SN_CHECK);
MakeNameEx(0x475ED, "P0447_EVAP_VENT_CONTROL_CIRCUIT_OPEN", SN_CHECK);
MakeNameEx(0x475EE, "P0448_EVAP_VENT_CONTROL_CIRCUIT_SHORTED", SN_CHECK);
MakeNameEx(0x475CD, "P0451_EVAP_PRESSURE_SENSOR_RANGEPERF", SN_CHECK);
MakeNameEx(0x475CB, "P0452_EVAP_PRESSURE_SENSOR_LOW_INPUT", SN_CHECK);
MakeNameEx(0x475CC, "P0453_EVAP_PRESSURE_SENSOR_HIGH_INPUT", SN_CHECK);
MakeNameEx(0x475F5, "P0456_EVAP_LEAK_DETECTED_VERY_SMALL", SN_CHECK);
MakeNameEx(0x475FD, "P0457_EVAP_LEAK_DETECTED_FUEL_CAP", SN_CHECK);
MakeNameEx(0x475E8, "P0458_EVAP_PURGE_VALVE_CIRCUIT_LOW", SN_CHECK);
MakeNameEx(0x475E9, "P0459_EVAP_PURGE_VALVE_CIRCUIT_HIGH", SN_CHECK);
MakeNameEx(0x475C7, "P0461_FUEL_LEVEL_SENSOR_RANGEPERF", SN_CHECK);
MakeNameEx(0x475C5, "P0462_FUEL_LEVEL_SENSOR_LOW_INPUT", SN_CHECK);
MakeNameEx(0x475C6, "P0463_FUEL_LEVEL_SENSOR_HIGH_INPUT", SN_CHECK);
MakeNameEx(0x475C3, "P0464_FUEL_LEVEL_SENSOR_INTERMITTENT", SN_CHECK);
MakeNameEx(0x475E0, "P0483_RADIATOR_FAN_RATIONALITY_CHECK", SN_CHECK);
MakeNameEx(0x4762A, "P0502_VEHICLE_SPEED_SENSOR_LOW_INPUT", SN_CHECK);
MakeNameEx(0x47632, "P0503_VEHICLE_SPEED_SENSOR_INTERMITTENT", SN_CHECK);
MakeNameEx(0x475DB, "P0506_IDLE_CONTROL_RPM_LOWER_THAN_EXPECTED", SN_CHECK);
MakeNameEx(0x475DC, "P0507_IDLE_CONTROL_RPM_HIGH_THAN_EXPECTED", SN_CHECK);
MakeNameEx(0x475CA, "P0512_STARTER_REQUEST_CIRCUIT", SN_CHECK);
MakeNameEx(0x4762E, "P0519_IDLE_CONTROL_MALFUNCTION_FAILSAFE", SN_CHECK);
MakeNameEx(0x4761F, "P0545_EGT_SENSOR_CIRCUIT_LOW", SN_CHECK);
MakeNameEx(0x47620, "P0546_EGT_SENSOR_CIRCUIT_HIGH", SN_CHECK);
MakeNameEx(0x47644, "P0600_SERIAL_COMMUNICATION_LINK", SN_CHECK);
MakeNameEx(0x475B8, "P0604_CONTROL_MODULE_RAM_ERROR", SN_CHECK);
MakeNameEx(0x47649, "P0605_CONTROL_MODULE_ROM_ERROR", SN_CHECK);
MakeNameEx(0x4763C, "P0607_CONTROL_MODULE_PERFORMANCE", SN_CHECK);
MakeNameEx(0x4763B, "P0638_THROTTLE_ACTUATOR_RANGEPERF", SN_CHECK);
MakeNameEx(0x475DE, "P0691_RADIATOR_FAN_CIRCUIT_LOW", SN_CHECK);
MakeNameEx(0x475DF, "P0692_RADIATOR_FAN_CIRCUIT_HIGH", SN_CHECK);
MakeNameEx(0x47652, "P0700_TRANSMISSION_CONTROL_SYSTEM", SN_CHECK);
MakeNameEx(0x475CE, "P0851_NEUTRAL_SWITCH_INPUT_LOW", SN_CHECK);
MakeNameEx(0x475D2, "P0852_NEUTRAL_SWITCH_INPUT_HIGH", SN_CHECK);
MakeNameEx(0x47623, "P1086_TGV_POS_2_CIRCUIT_LOW", SN_CHECK);
MakeNameEx(0x47624, "P1087_TGV_POS_2_CIRCUIT_HIGH", SN_CHECK);
MakeNameEx(0x47625, "P1088_TGV_POS_1_CIRCUIT_LOW", SN_CHECK);
MakeNameEx(0x47626, "P1089_TGV_POS_1_CIRCUIT_HIGH", SN_CHECK);
MakeNameEx(0x475D5, "P1090_TGV_SYSTEM_1_VALVE_OPEN", SN_CHECK);
MakeNameEx(0x475D6, "P1091_TGV_SYSTEM_1_VALVE_CLOSE", SN_CHECK);
MakeNameEx(0x475D7, "P1092_TGV_SYSTEM_2_VALVE_OPEN", SN_CHECK);
MakeNameEx(0x475D8, "P1093_TGV_SYSTEM_2_VALVE_CLOSE", SN_CHECK);
MakeNameEx(0x47619, "P1094_TGV_SIGNAL_1_OPEN", SN_CHECK);
MakeNameEx(0x47617, "P1095_TGV_SIGNAL_1_SHORT", SN_CHECK);
MakeNameEx(0x4761A, "P1096_TGV_SIGNAL_2_OPEN", SN_CHECK);
MakeNameEx(0x47618, "P1097_TGV_SIGNAL_2_SHORT", SN_CHECK);
MakeNameEx(0x4760B, "P1110_ATMOS_PRESSURE_SENSOR_LOW_INPUT", SN_CHECK);
MakeNameEx(0x4760C, "P1111_ATMOS_PRESSURE_SENSOR_HIGH_INPUT", SN_CHECK);
MakeNameEx(0x475F1, "P1152_FRONT_O2_SENSOR_RANGEPERF_LOW_B1_S1", SN_CHECK);
MakeNameEx(0x475F2, "P1153_FRONT_O2_SENSOR_RANGEPERF_HIGH_B1_S1", SN_CHECK);
MakeNameEx(0x47636, "P1160_ABNORMAL_RETURN_SPRING", SN_CHECK);
MakeNameEx(0x47627, "P1282_PCV_SYSTEM_CIRCUIT_OPEN", SN_CHECK);
MakeNameEx(0x475FC, "P1301_MISFIRE_HIGH_TEMP_EXHAUST_GAS", SN_CHECK);
MakeNameEx(0x47621, "P1312_EGT_SENSOR_MALFUNCTION", SN_CHECK);
MakeNameEx(0x475E6, "P1400_FUEL_TANK_PRESSURE_SOL_LOW", SN_CHECK);
MakeNameEx(0x475E7, "P1420_FUEL_TANK_PRESSURE_SOL_HIGH_INPUT", SN_CHECK);
MakeNameEx(0x475EC, "P1443_VENT_CONTROL_SOLENOID_FUNCTION_PROBLEM", SN_CHECK);
MakeNameEx(0x475D3, "P1446_FUEL_TANK_SENSOR_CONTROL_CIRCUIT_LOW", SN_CHECK);
MakeNameEx(0x475D4, "P1447_FUEL_TANK_SENSOR_CONTROL_CIRCUIT_HIGH", SN_CHECK);
MakeNameEx(0x475DD, "P1448_FUEL_TANK_SENSOR_CONTROL_RANGEPERF", SN_CHECK);
MakeNameEx(0x47610, "P1491_PCV_BLOWBY_FUNCTION_PROBLEM", SN_CHECK);
MakeNameEx(0x475C9, "P1518_STARTER_SWITCH_LOW_INPUT", SN_CHECK);
MakeNameEx(0x47622, "P1544_EGT_TOO_HIGH", SN_CHECK);
MakeNameEx(0x47611, "P1560_BACKUP_VOLTAGE_MALFUNCTION", SN_CHECK);
MakeNameEx(0x47651, "P2088_OCV_SOLENOID_A1_CIRCUIT_OPEN", SN_CHECK);
MakeNameEx(0x47650, "P2089_OCV_SOLENOID_A1_CIRCUIT_SHORT", SN_CHECK);
MakeNameEx(0x4764F, "P2092_OCV_SOLENOID_A2_CIRCUIT_OPEN", SN_CHECK);
MakeNameEx(0x4764E, "P2093_OCV_SOLENOID_A2_CIRCUIT_SHORT", SN_CHECK);
MakeNameEx(0x4763A, "P2096_POST_CATALYST_TOO_LEAN_B1", SN_CHECK);
MakeNameEx(0x47643, "P2097_POST_CATALYST_TOO_RICH_B1", SN_CHECK);
MakeNameEx(0x47639, "P2101_THROTTLE_ACTUATOR_CIRCUIT_RANGEPERF", SN_CHECK);
MakeNameEx(0x47637, "P2102_THROTTLE_ACTUATOR_CIRCUIT_LOW", SN_CHECK);
MakeNameEx(0x47638, "P2103_THROTTLE_ACTUATOR_CIRCUIT_HIGH", SN_CHECK);
MakeNameEx(0x47633, "P2109_TPS_A_MINIMUM_STOP_PERF", SN_CHECK);
MakeNameEx(0x47640, "P2122_TPS_D_CIRCUIT_LOW_INPUT", SN_CHECK);
MakeNameEx(0x47641, "P2123_TPS_D_CIRCUIT_HIGH_INPUT", SN_CHECK);
MakeNameEx(0x4763E, "P2127_TPS_E_CIRCUIT_LOW_INPUT", SN_CHECK);
MakeNameEx(0x4763F, "P2128_TPS_E_CIRCUIT_HIGH_INPUT", SN_CHECK);
MakeNameEx(0x47642, "P2135_TPS_AB_VOLTAGE", SN_CHECK);
MakeNameEx(0x4763D, "P2138_TPS_DE_VOLTAGE", SN_CHECK);
}   // end of Tables

static StdParams ()
{
Message("--- Now marking StdParams ---\n");
auto addr;
MakeUnknown(0x00042748, 4, DOUNK_SIMPLE);
MakeDword(0x00042748);
MakeNameEx(0x00042748, "PtrSsmGet_Engine_Load_Relative_P1", SN_CHECK);
addr = Dword(0x00042748);
MakeNameEx(addr, "SsmGet_Engine_Load_Relative_P1", SN_CHECK);

MakeUnknown(0x0004274C, 4, DOUNK_SIMPLE);
MakeDword(0x0004274C);
MakeNameEx(0x0004274C, "PtrSsmGet_Coolant_Temperature_P2", SN_CHECK);
addr = Dword(0x0004274C);
MakeNameEx(addr, "SsmGet_Coolant_Temperature_P2", SN_CHECK);

MakeUnknown(0x00042750, 4, DOUNK_SIMPLE);
MakeDword(0x00042750);
MakeNameEx(0x00042750, "PtrSsmGet_AF_Correction_1_P3", SN_CHECK);
addr = Dword(0x00042750);
MakeNameEx(addr, "SsmGet_AF_Correction_1_P3", SN_CHECK);

MakeUnknown(0x00042754, 4, DOUNK_SIMPLE);
MakeDword(0x00042754);
MakeNameEx(0x00042754, "PtrSsmGet_AF_Learning_1_P4", SN_CHECK);
addr = Dword(0x00042754);
MakeNameEx(addr, "SsmGet_AF_Learning_1_P4", SN_CHECK);

MakeUnknown(0x00042758, 4, DOUNK_SIMPLE);
MakeDword(0x00042758);
MakeNameEx(0x00042758, "PtrSsmGet_AF_Correction_2_P5", SN_CHECK);
addr = Dword(0x00042758);
MakeNameEx(addr, "SsmGet_AF_Correction_2_P5", SN_CHECK);

MakeUnknown(0x0004275C, 4, DOUNK_SIMPLE);
MakeDword(0x0004275C);
MakeNameEx(0x0004275C, "PtrSsmGet_AF_Learning_2_P6", SN_CHECK);
addr = Dword(0x0004275C);
MakeNameEx(addr, "SsmGet_AF_Learning_2_P6", SN_CHECK);

MakeUnknown(0x00042760, 4, DOUNK_SIMPLE);
MakeDword(0x00042760);
MakeNameEx(0x00042760, "PtrSsmGet_Manifold_Absolute_Pressure_P7", SN_CHECK);
addr = Dword(0x00042760);
MakeNameEx(addr, "SsmGet_Manifold_Absolute_Pressure_P7", SN_CHECK);

MakeUnknown(0x00042764, 4, DOUNK_SIMPLE);
MakeDword(0x00042764);
MakeNameEx(0x00042764, "PtrSsmGet_Engine_Speed_P8", SN_CHECK);
addr = Dword(0x00042764);
MakeNameEx(addr, "SsmGet_Engine_Speed_P8", SN_CHECK);

MakeUnknown(0x0004276C, 4, DOUNK_SIMPLE);
MakeDword(0x0004276C);
MakeNameEx(0x0004276C, "PtrSsmGet_Vehicle_Speed_P9", SN_CHECK);
addr = Dword(0x0004276C);
MakeNameEx(addr, "SsmGet_Vehicle_Speed_P9", SN_CHECK);

MakeUnknown(0x00042770, 4, DOUNK_SIMPLE);
MakeDword(0x00042770);
MakeNameEx(0x00042770, "PtrSsmGet_Ignition_Total_Timing_P10", SN_CHECK);
addr = Dword(0x00042770);
MakeNameEx(addr, "SsmGet_Ignition_Total_Timing_P10", SN_CHECK);

MakeUnknown(0x00042774, 4, DOUNK_SIMPLE);
MakeDword(0x00042774);
MakeNameEx(0x00042774, "PtrSsmGet_Intake_Air_Temperature_P11", SN_CHECK);
addr = Dword(0x00042774);
MakeNameEx(addr, "SsmGet_Intake_Air_Temperature_P11", SN_CHECK);

MakeUnknown(0x00042778, 4, DOUNK_SIMPLE);
MakeDword(0x00042778);
MakeNameEx(0x00042778, "PtrSsmGet_Mass_Airflow_P12", SN_CHECK);
addr = Dword(0x00042778);
MakeNameEx(addr, "SsmGet_Mass_Airflow_P12", SN_CHECK);

MakeUnknown(0x00042780, 4, DOUNK_SIMPLE);
MakeDword(0x00042780);
MakeNameEx(0x00042780, "PtrSsmGet_Throttle_Opening_Angle_P13", SN_CHECK);
addr = Dword(0x00042780);
MakeNameEx(addr, "SsmGet_Throttle_Opening_Angle_P13", SN_CHECK);

MakeUnknown(0x00042784, 4, DOUNK_SIMPLE);
MakeDword(0x00042784);
MakeNameEx(0x00042784, "PtrSsmGet_Front_O2_Sensor_1_P14", SN_CHECK);
addr = Dword(0x00042784);
MakeNameEx(addr, "SsmGet_Front_O2_Sensor_1_P14", SN_CHECK);

MakeUnknown(0x0004278C, 4, DOUNK_SIMPLE);
MakeDword(0x0004278C);
MakeNameEx(0x0004278C, "PtrSsmGet_Rear_O2_Sensor_P15", SN_CHECK);
addr = Dword(0x0004278C);
MakeNameEx(addr, "SsmGet_Rear_O2_Sensor_P15", SN_CHECK);

MakeUnknown(0x00042794, 4, DOUNK_SIMPLE);
MakeDword(0x00042794);
MakeNameEx(0x00042794, "PtrSsmGet_Front_O2_Sensor_2_P16", SN_CHECK);
addr = Dword(0x00042794);
MakeNameEx(addr, "SsmGet_Front_O2_Sensor_2_P16", SN_CHECK);

MakeUnknown(0x0004279C, 4, DOUNK_SIMPLE);
MakeDword(0x0004279C);
MakeNameEx(0x0004279C, "PtrSsmGet_Battery_Voltage_P17", SN_CHECK);
addr = Dword(0x0004279C);
MakeNameEx(addr, "SsmGet_Battery_Voltage_P17", SN_CHECK);

MakeUnknown(0x000427A0, 4, DOUNK_SIMPLE);
MakeDword(0x000427A0);
MakeNameEx(0x000427A0, "PtrSsmGet_Mass_Airflow_Sensor_Voltage_P18", SN_CHECK);
addr = Dword(0x000427A0);
MakeNameEx(addr, "SsmGet_Mass_Airflow_Sensor_Voltage_P18", SN_CHECK);

MakeUnknown(0x000427A4, 4, DOUNK_SIMPLE);
MakeDword(0x000427A4);
MakeNameEx(0x000427A4, "PtrSsmGet_Throttle_Sensor_Voltage_P19", SN_CHECK);
addr = Dword(0x000427A4);
MakeNameEx(addr, "SsmGet_Throttle_Sensor_Voltage_P19", SN_CHECK);

MakeUnknown(0x000427A8, 4, DOUNK_SIMPLE);
MakeDword(0x000427A8);
MakeNameEx(0x000427A8, "PtrSsmGet_Differential_Pressure_Sensor_Voltage_P20", SN_CHECK);
addr = Dword(0x000427A8);
MakeNameEx(addr, "SsmGet_Differential_Pressure_Sensor_Voltage_P20", SN_CHECK);

MakeUnknown(0x000427AC, 4, DOUNK_SIMPLE);
MakeDword(0x000427AC);
MakeNameEx(0x000427AC, "PtrSsmGet_Fuel_Injector_1_Pulse_Width_P21", SN_CHECK);
addr = Dword(0x000427AC);
MakeNameEx(addr, "SsmGet_Fuel_Injector_1_Pulse_Width_P21", SN_CHECK);

MakeUnknown(0x000427B0, 4, DOUNK_SIMPLE);
MakeDword(0x000427B0);
MakeNameEx(0x000427B0, "PtrSsmGet_Fuel_Injector_2_Pulse_Width_P22", SN_CHECK);
addr = Dword(0x000427B0);
MakeNameEx(addr, "SsmGet_Fuel_Injector_2_Pulse_Width_P22", SN_CHECK);

MakeUnknown(0x000427B4, 4, DOUNK_SIMPLE);
MakeDword(0x000427B4);
MakeNameEx(0x000427B4, "PtrSsmGet_Knock_Correction_Advance_P23", SN_CHECK);
addr = Dword(0x000427B4);
MakeNameEx(addr, "SsmGet_Knock_Correction_Advance_P23", SN_CHECK);

MakeUnknown(0x000427B8, 4, DOUNK_SIMPLE);
MakeDword(0x000427B8);
MakeNameEx(0x000427B8, "PtrSsmGet_Atmospheric_Pressure_P24", SN_CHECK);
addr = Dword(0x000427B8);
MakeNameEx(addr, "SsmGet_Atmospheric_Pressure_P24", SN_CHECK);

MakeUnknown(0x000427BC, 4, DOUNK_SIMPLE);
MakeDword(0x000427BC);
MakeNameEx(0x000427BC, "PtrSsmGet_Manifold_Relative_Pressure_P25", SN_CHECK);
addr = Dword(0x000427BC);
MakeNameEx(addr, "SsmGet_Manifold_Relative_Pressure_P25", SN_CHECK);

MakeUnknown(0x000427C0, 4, DOUNK_SIMPLE);
MakeDword(0x000427C0);
MakeNameEx(0x000427C0, "PtrSsmGet_Pressure_Differential_Sensor_P26", SN_CHECK);
addr = Dword(0x000427C0);
MakeNameEx(addr, "SsmGet_Pressure_Differential_Sensor_P26", SN_CHECK);

MakeUnknown(0x000427C4, 4, DOUNK_SIMPLE);
MakeDword(0x000427C4);
MakeNameEx(0x000427C4, "PtrSsmGet_Fuel_Tank_Pressure_P27", SN_CHECK);
addr = Dword(0x000427C4);
MakeNameEx(addr, "SsmGet_Fuel_Tank_Pressure_P27", SN_CHECK);

MakeUnknown(0x000427C8, 4, DOUNK_SIMPLE);
MakeDword(0x000427C8);
MakeNameEx(0x000427C8, "PtrSsmGet_CO_Adjustment_P28", SN_CHECK);
addr = Dword(0x000427C8);
MakeNameEx(addr, "SsmGet_CO_Adjustment_P28", SN_CHECK);

MakeUnknown(0x000427CC, 4, DOUNK_SIMPLE);
MakeDword(0x000427CC);
MakeNameEx(0x000427CC, "PtrSsmGet_Learned_Ignition_Timing_P29", SN_CHECK);
addr = Dword(0x000427CC);
MakeNameEx(addr, "SsmGet_Learned_Ignition_Timing_P29", SN_CHECK);

MakeUnknown(0x000427D0, 4, DOUNK_SIMPLE);
MakeDword(0x000427D0);
MakeNameEx(0x000427D0, "PtrSsmGet_Accelerator_Pedal_Angle_P30", SN_CHECK);
addr = Dword(0x000427D0);
MakeNameEx(addr, "SsmGet_Accelerator_Pedal_Angle_P30", SN_CHECK);

MakeUnknown(0x000427D4, 4, DOUNK_SIMPLE);
MakeDword(0x000427D4);
MakeNameEx(0x000427D4, "PtrSsmGet_Fuel_Temperature_P31", SN_CHECK);
addr = Dword(0x000427D4);
MakeNameEx(addr, "SsmGet_Fuel_Temperature_P31", SN_CHECK);

MakeUnknown(0x000427D8, 4, DOUNK_SIMPLE);
MakeDword(0x000427D8);
MakeNameEx(0x000427D8, "PtrSsmGet_Front_O2_Heater_Current_1_P32", SN_CHECK);
addr = Dword(0x000427D8);
MakeNameEx(addr, "SsmGet_Front_O2_Heater_Current_1_P32", SN_CHECK);

MakeUnknown(0x000427DC, 4, DOUNK_SIMPLE);
MakeDword(0x000427DC);
MakeNameEx(0x000427DC, "PtrSsmGet_Rear_O2_Heater_Current_P33", SN_CHECK);
addr = Dword(0x000427DC);
MakeNameEx(addr, "SsmGet_Rear_O2_Heater_Current_P33", SN_CHECK);

MakeUnknown(0x000427E0, 4, DOUNK_SIMPLE);
MakeDword(0x000427E0);
MakeNameEx(0x000427E0, "PtrSsmGet_Front_O2_Heater_Current_2_P34", SN_CHECK);
addr = Dword(0x000427E0);
MakeNameEx(addr, "SsmGet_Front_O2_Heater_Current_2_P34", SN_CHECK);

MakeUnknown(0x000427E4, 4, DOUNK_SIMPLE);
MakeDword(0x000427E4);
MakeNameEx(0x000427E4, "PtrSsmGet_Fuel_Level_P35", SN_CHECK);
addr = Dword(0x000427E4);
MakeNameEx(addr, "SsmGet_Fuel_Level_P35", SN_CHECK);

MakeUnknown(0x000427EC, 4, DOUNK_SIMPLE);
MakeDword(0x000427EC);
MakeNameEx(0x000427EC, "PtrSsmGet_Primary_Wastegate_Duty_Cycle_P36", SN_CHECK);
addr = Dword(0x000427EC);
MakeNameEx(addr, "SsmGet_Primary_Wastegate_Duty_Cycle_P36", SN_CHECK);

MakeUnknown(0x000427F0, 4, DOUNK_SIMPLE);
MakeDword(0x000427F0);
MakeNameEx(0x000427F0, "PtrSsmGet_Secondary_Wastegate_Duty_Cycle_P37", SN_CHECK);
addr = Dword(0x000427F0);
MakeNameEx(addr, "SsmGet_Secondary_Wastegate_Duty_Cycle_P37", SN_CHECK);

MakeUnknown(0x000427F4, 4, DOUNK_SIMPLE);
MakeDword(0x000427F4);
MakeNameEx(0x000427F4, "PtrSsmGet_CPC_Valve_Duty_Ratio_P38", SN_CHECK);
addr = Dword(0x000427F4);
MakeNameEx(addr, "SsmGet_CPC_Valve_Duty_Ratio_P38", SN_CHECK);

MakeUnknown(0x000427F8, 4, DOUNK_SIMPLE);
MakeDword(0x000427F8);
MakeNameEx(0x000427F8, "PtrSsmGet_Tumble_Valve_Position_Sensor_Right_P39", SN_CHECK);
addr = Dword(0x000427F8);
MakeNameEx(addr, "SsmGet_Tumble_Valve_Position_Sensor_Right_P39", SN_CHECK);

MakeUnknown(0x000427FC, 4, DOUNK_SIMPLE);
MakeDword(0x000427FC);
MakeNameEx(0x000427FC, "PtrSsmGet_Tumble_Valve_Position_Sensor_Left_P40", SN_CHECK);
addr = Dword(0x000427FC);
MakeNameEx(addr, "SsmGet_Tumble_Valve_Position_Sensor_Left_P40", SN_CHECK);

MakeUnknown(0x00042800, 4, DOUNK_SIMPLE);
MakeDword(0x00042800);
MakeNameEx(0x00042800, "PtrSsmGet_Idle_Speed_Control_Valve_Duty_Ratio_P41", SN_CHECK);
addr = Dword(0x00042800);
MakeNameEx(addr, "SsmGet_Idle_Speed_Control_Valve_Duty_Ratio_P41", SN_CHECK);

MakeUnknown(0x00042804, 4, DOUNK_SIMPLE);
MakeDword(0x00042804);
MakeNameEx(0x00042804, "PtrSsmGet_AF_Lean_Correction_P42", SN_CHECK);
addr = Dword(0x00042804);
MakeNameEx(addr, "SsmGet_AF_Lean_Correction_P42", SN_CHECK);

MakeUnknown(0x00042808, 4, DOUNK_SIMPLE);
MakeDword(0x00042808);
MakeNameEx(0x00042808, "PtrSsmGet_AF_Heater_Duty_P43", SN_CHECK);
addr = Dword(0x00042808);
MakeNameEx(addr, "SsmGet_AF_Heater_Duty_P43", SN_CHECK);

MakeUnknown(0x0004280C, 4, DOUNK_SIMPLE);
MakeDword(0x0004280C);
MakeNameEx(0x0004280C, "PtrSsmGet_Idle_Speed_Control_Valve_Step_P44", SN_CHECK);
addr = Dword(0x0004280C);
MakeNameEx(addr, "SsmGet_Idle_Speed_Control_Valve_Step_P44", SN_CHECK);

MakeUnknown(0x00042810, 4, DOUNK_SIMPLE);
MakeDword(0x00042810);
MakeNameEx(0x00042810, "PtrSsmGet_Number_of_Exh_Gas_Recirc_Steps_P45", SN_CHECK);
addr = Dword(0x00042810);
MakeNameEx(addr, "SsmGet_Number_of_Exh_Gas_Recirc_Steps_P45", SN_CHECK);

MakeUnknown(0x00042814, 4, DOUNK_SIMPLE);
MakeDword(0x00042814);
MakeNameEx(0x00042814, "PtrSsmGet_Alternator_Duty_P46", SN_CHECK);
addr = Dword(0x00042814);
MakeNameEx(addr, "SsmGet_Alternator_Duty_P46", SN_CHECK);

MakeUnknown(0x00042818, 4, DOUNK_SIMPLE);
MakeDword(0x00042818);
MakeNameEx(0x00042818, "PtrSsmGet_Fuel_Pump_Duty_P47", SN_CHECK);
addr = Dword(0x00042818);
MakeNameEx(addr, "SsmGet_Fuel_Pump_Duty_P47", SN_CHECK);

MakeUnknown(0x0004281C, 4, DOUNK_SIMPLE);
MakeDword(0x0004281C);
MakeNameEx(0x0004281C, "PtrSsmGet_Intake_VVT_Advance_Angle_Right_P48", SN_CHECK);
addr = Dword(0x0004281C);
MakeNameEx(addr, "SsmGet_Intake_VVT_Advance_Angle_Right_P48", SN_CHECK);

MakeUnknown(0x00042820, 4, DOUNK_SIMPLE);
MakeDword(0x00042820);
MakeNameEx(0x00042820, "PtrSsmGet_Intake_VVT_Advance_Angle_Left_P49", SN_CHECK);
addr = Dword(0x00042820);
MakeNameEx(addr, "SsmGet_Intake_VVT_Advance_Angle_Left_P49", SN_CHECK);

MakeUnknown(0x00042824, 4, DOUNK_SIMPLE);
MakeDword(0x00042824);
MakeNameEx(0x00042824, "PtrSsmGet_Intake_OCV_Duty_Right_P50", SN_CHECK);
addr = Dword(0x00042824);
MakeNameEx(addr, "SsmGet_Intake_OCV_Duty_Right_P50", SN_CHECK);

MakeUnknown(0x00042828, 4, DOUNK_SIMPLE);
MakeDword(0x00042828);
MakeNameEx(0x00042828, "PtrSsmGet_Intake_OCV_Duty_Left_P51", SN_CHECK);
addr = Dword(0x00042828);
MakeNameEx(addr, "SsmGet_Intake_OCV_Duty_Left_P51", SN_CHECK);

MakeUnknown(0x0004282C, 4, DOUNK_SIMPLE);
MakeDword(0x0004282C);
MakeNameEx(0x0004282C, "PtrSsmGet_Intake_OCV_Current_Right_P52", SN_CHECK);
addr = Dword(0x0004282C);
MakeNameEx(addr, "SsmGet_Intake_OCV_Current_Right_P52", SN_CHECK);

MakeUnknown(0x00042830, 4, DOUNK_SIMPLE);
MakeDword(0x00042830);
MakeNameEx(0x00042830, "PtrSsmGet_Intake_OCV_Current_Left_P53", SN_CHECK);
addr = Dword(0x00042830);
MakeNameEx(addr, "SsmGet_Intake_OCV_Current_Left_P53", SN_CHECK);

MakeUnknown(0x00042834, 4, DOUNK_SIMPLE);
MakeDword(0x00042834);
MakeNameEx(0x00042834, "PtrSsmGet_AF_Sensor_1_Current_P54", SN_CHECK);
addr = Dword(0x00042834);
MakeNameEx(addr, "SsmGet_AF_Sensor_1_Current_P54", SN_CHECK);

MakeUnknown(0x00042838, 4, DOUNK_SIMPLE);
MakeDword(0x00042838);
MakeNameEx(0x00042838, "PtrSsmGet_AF_Sensor_2_Current_P55", SN_CHECK);
addr = Dword(0x00042838);
MakeNameEx(addr, "SsmGet_AF_Sensor_2_Current_P55", SN_CHECK);

MakeUnknown(0x0004283C, 4, DOUNK_SIMPLE);
MakeDword(0x0004283C);
MakeNameEx(0x0004283C, "PtrSsmGet_AF_Sensor_1_Resistance_P56", SN_CHECK);
addr = Dword(0x0004283C);
MakeNameEx(addr, "SsmGet_AF_Sensor_1_Resistance_P56", SN_CHECK);

MakeUnknown(0x00042840, 4, DOUNK_SIMPLE);
MakeDword(0x00042840);
MakeNameEx(0x00042840, "PtrSsmGet_AF_Sensor_2_Resistance_P57", SN_CHECK);
addr = Dword(0x00042840);
MakeNameEx(addr, "SsmGet_AF_Sensor_2_Resistance_P57", SN_CHECK);

MakeUnknown(0x00042844, 4, DOUNK_SIMPLE);
MakeDword(0x00042844);
MakeNameEx(0x00042844, "PtrSsmGet_AF_Sensor_1_P58", SN_CHECK);
addr = Dword(0x00042844);
MakeNameEx(addr, "SsmGet_AF_Sensor_1_P58", SN_CHECK);

MakeUnknown(0x00042848, 4, DOUNK_SIMPLE);
MakeDword(0x00042848);
MakeNameEx(0x00042848, "PtrSsmGet_AF_Sensor_2_P59", SN_CHECK);
addr = Dword(0x00042848);
MakeNameEx(addr, "SsmGet_AF_Sensor_2_P59", SN_CHECK);

MakeUnknown(0x00042854, 4, DOUNK_SIMPLE);
MakeDword(0x00042854);
MakeNameEx(0x00042854, "PtrSsmGet_Gear_Position_P60", SN_CHECK);
addr = Dword(0x00042854);
MakeNameEx(addr, "SsmGet_Gear_Position_P60", SN_CHECK);

MakeUnknown(0x00042878, 4, DOUNK_SIMPLE);
MakeDword(0x00042878);
MakeNameEx(0x00042878, "PtrSsmGet_AF_Sensor_1_Heater_Current_P61", SN_CHECK);
addr = Dword(0x00042878);
MakeNameEx(addr, "SsmGet_AF_Sensor_1_Heater_Current_P61", SN_CHECK);

MakeUnknown(0x0004287C, 4, DOUNK_SIMPLE);
MakeDword(0x0004287C);
MakeNameEx(0x0004287C, "PtrSsmGet_AF_Sensor_2_Heater_Current_P62", SN_CHECK);
addr = Dword(0x0004287C);
MakeNameEx(addr, "SsmGet_AF_Sensor_2_Heater_Current_P62", SN_CHECK);

MakeUnknown(0x00042A64, 4, DOUNK_SIMPLE);
MakeDword(0x00042A64);
MakeNameEx(0x00042A64, "PtrSsmGet_Roughness_Monitor_Cylinder_1_P63", SN_CHECK);
addr = Dword(0x00042A64);
MakeNameEx(addr, "SsmGet_Roughness_Monitor_Cylinder_1_P63", SN_CHECK);

MakeUnknown(0x00042A68, 4, DOUNK_SIMPLE);
MakeDword(0x00042A68);
MakeNameEx(0x00042A68, "PtrSsmGet_Roughness_Monitor_Cylinder_2_P64", SN_CHECK);
addr = Dword(0x00042A68);
MakeNameEx(addr, "SsmGet_Roughness_Monitor_Cylinder_2_P64", SN_CHECK);

MakeUnknown(0x00042A6C, 4, DOUNK_SIMPLE);
MakeDword(0x00042A6C);
MakeNameEx(0x00042A6C, "PtrSsmGet_AF_Correction_3_16bit_ECU_P65", SN_CHECK);
addr = Dword(0x00042A6C);
MakeNameEx(addr, "SsmGet_AF_Correction_3_16bit_ECU_P65", SN_CHECK);

MakeUnknown(0x00042A70, 4, DOUNK_SIMPLE);
MakeDword(0x00042A70);
MakeNameEx(0x00042A70, "PtrSsmGet_AF_Learning_3_P66", SN_CHECK);
addr = Dword(0x00042A70);
MakeNameEx(addr, "SsmGet_AF_Learning_3_P66", SN_CHECK);

MakeUnknown(0x00042A74, 4, DOUNK_SIMPLE);
MakeDword(0x00042A74);
MakeNameEx(0x00042A74, "PtrSsmGet_Rear_O2_Heater_Voltage_P67", SN_CHECK);
addr = Dword(0x00042A74);
MakeNameEx(addr, "SsmGet_Rear_O2_Heater_Voltage_P67", SN_CHECK);

MakeUnknown(0x00042A78, 4, DOUNK_SIMPLE);
MakeDword(0x00042A78);
MakeNameEx(0x00042A78, "PtrSsmGet_AF_Adjustment_Voltage_P68", SN_CHECK);
addr = Dword(0x00042A78);
MakeNameEx(addr, "SsmGet_AF_Adjustment_Voltage_P68", SN_CHECK);

MakeUnknown(0x00042A8C, 4, DOUNK_SIMPLE);
MakeDword(0x00042A8C);
MakeNameEx(0x00042A8C, "PtrSsmGet_Roughness_Monitor_Cylinder_3_P69", SN_CHECK);
addr = Dword(0x00042A8C);
MakeNameEx(addr, "SsmGet_Roughness_Monitor_Cylinder_3_P69", SN_CHECK);

MakeUnknown(0x00042A90, 4, DOUNK_SIMPLE);
MakeDword(0x00042A90);
MakeNameEx(0x00042A90, "PtrSsmGet_Roughness_Monitor_Cylinder_4_P70", SN_CHECK);
addr = Dword(0x00042A90);
MakeNameEx(addr, "SsmGet_Roughness_Monitor_Cylinder_4_P70", SN_CHECK);

MakeUnknown(0x00042B14, 4, DOUNK_SIMPLE);
MakeDword(0x00042B14);
MakeNameEx(0x00042B14, "PtrSsmGet_Throttle_Motor_Duty_P71", SN_CHECK);
addr = Dword(0x00042B14);
MakeNameEx(addr, "SsmGet_Throttle_Motor_Duty_P71", SN_CHECK);

MakeUnknown(0x00042B18, 4, DOUNK_SIMPLE);
MakeDword(0x00042B18);
MakeNameEx(0x00042B18, "PtrSsmGet_Throttle_Motor_Voltage_P72", SN_CHECK);
addr = Dword(0x00042B18);
MakeNameEx(addr, "SsmGet_Throttle_Motor_Voltage_P72", SN_CHECK);

MakeUnknown(0x00042B2C, 4, DOUNK_SIMPLE);
MakeDword(0x00042B2C);
MakeNameEx(0x00042B2C, "PtrSsmGet_Sub_Throttle_Sensor_P73", SN_CHECK);
addr = Dword(0x00042B2C);
MakeNameEx(addr, "SsmGet_Sub_Throttle_Sensor_P73", SN_CHECK);

MakeUnknown(0x00042B30, 4, DOUNK_SIMPLE);
MakeDword(0x00042B30);
MakeNameEx(0x00042B30, "PtrSsmGet_Main_Throttle_Sensor_P74", SN_CHECK);
addr = Dword(0x00042B30);
MakeNameEx(addr, "SsmGet_Main_Throttle_Sensor_P74", SN_CHECK);

MakeUnknown(0x00042B34, 4, DOUNK_SIMPLE);
MakeDword(0x00042B34);
MakeNameEx(0x00042B34, "PtrSsmGet_Sub_Accelerator_Sensor_P75", SN_CHECK);
addr = Dword(0x00042B34);
MakeNameEx(addr, "SsmGet_Sub_Accelerator_Sensor_P75", SN_CHECK);

MakeUnknown(0x00042B38, 4, DOUNK_SIMPLE);
MakeDword(0x00042B38);
MakeNameEx(0x00042B38, "PtrSsmGet_Main_Accelerator_Sensor_P76", SN_CHECK);
addr = Dword(0x00042B38);
MakeNameEx(addr, "SsmGet_Main_Accelerator_Sensor_P76", SN_CHECK);

MakeUnknown(0x00042B3C, 4, DOUNK_SIMPLE);
MakeDword(0x00042B3C);
MakeNameEx(0x00042B3C, "PtrSsmGet_Brake_Booster_Pressure_P77", SN_CHECK);
addr = Dword(0x00042B3C);
MakeNameEx(addr, "SsmGet_Brake_Booster_Pressure_P77", SN_CHECK);

MakeUnknown(0x00042B40, 4, DOUNK_SIMPLE);
MakeDword(0x00042B40);
MakeNameEx(0x00042B40, "PtrSsmGet_Fuel_Pressure_High_P78", SN_CHECK);
addr = Dword(0x00042B40);
MakeNameEx(addr, "SsmGet_Fuel_Pressure_High_P78", SN_CHECK);

MakeUnknown(0x00042B44, 4, DOUNK_SIMPLE);
MakeDword(0x00042B44);
MakeNameEx(0x00042B44, "PtrSsmGet_Exhaust_Gas_Temperature_P79", SN_CHECK);
addr = Dword(0x00042B44);
MakeNameEx(addr, "SsmGet_Exhaust_Gas_Temperature_P79", SN_CHECK);

MakeUnknown(0x00042B4C, 4, DOUNK_SIMPLE);
MakeDword(0x00042B4C);
MakeNameEx(0x00042B4C, "PtrSsmGet_Cold_Start_Injector_Air_Pump_P80", SN_CHECK);
addr = Dword(0x00042B4C);
MakeNameEx(addr, "SsmGet_Cold_Start_Injector_Air_Pump_P80", SN_CHECK);

MakeUnknown(0x00042B50, 4, DOUNK_SIMPLE);
MakeDword(0x00042B50);
MakeNameEx(0x00042B50, "PtrSsmGet_SCV_Step_P81", SN_CHECK);
addr = Dword(0x00042B50);
MakeNameEx(addr, "SsmGet_SCV_Step_P81", SN_CHECK);

MakeUnknown(0x00042B54, 4, DOUNK_SIMPLE);
MakeDword(0x00042B54);
MakeNameEx(0x00042B54, "PtrSsmGet_Memorised_Cruise_Speed_P82", SN_CHECK);
addr = Dword(0x00042B54);
MakeNameEx(addr, "SsmGet_Memorised_Cruise_Speed_P82", SN_CHECK);

MakeUnknown(0x00042B8C, 4, DOUNK_SIMPLE);
MakeDword(0x00042B8C);
MakeNameEx(0x00042B8C, "PtrSsmGet_Exhaust_VVT_Advance_Angle_Right_P83", SN_CHECK);
addr = Dword(0x00042B8C);
MakeNameEx(addr, "SsmGet_Exhaust_VVT_Advance_Angle_Right_P83", SN_CHECK);

MakeUnknown(0x00042B90, 4, DOUNK_SIMPLE);
MakeDword(0x00042B90);
MakeNameEx(0x00042B90, "PtrSsmGet_Exhaust_VVT_Advance_Angle_Left_P84", SN_CHECK);
addr = Dword(0x00042B90);
MakeNameEx(addr, "SsmGet_Exhaust_VVT_Advance_Angle_Left_P84", SN_CHECK);

MakeUnknown(0x00042B94, 4, DOUNK_SIMPLE);
MakeDword(0x00042B94);
MakeNameEx(0x00042B94, "PtrSsmGet_Exhaust_OCV_Duty_Right_P85", SN_CHECK);
addr = Dword(0x00042B94);
MakeNameEx(addr, "SsmGet_Exhaust_OCV_Duty_Right_P85", SN_CHECK);

MakeUnknown(0x00042B98, 4, DOUNK_SIMPLE);
MakeDword(0x00042B98);
MakeNameEx(0x00042B98, "PtrSsmGet_Exhaust_OCV_Duty_Left_P86", SN_CHECK);
addr = Dword(0x00042B98);
MakeNameEx(addr, "SsmGet_Exhaust_OCV_Duty_Left_P86", SN_CHECK);

MakeUnknown(0x00042B9C, 4, DOUNK_SIMPLE);
MakeDword(0x00042B9C);
MakeNameEx(0x00042B9C, "PtrSsmGet_Exhaust_OCV_Current_Right_P87", SN_CHECK);
addr = Dword(0x00042B9C);
MakeNameEx(addr, "SsmGet_Exhaust_OCV_Current_Right_P87", SN_CHECK);

MakeUnknown(0x00042BA0, 4, DOUNK_SIMPLE);
MakeDword(0x00042BA0);
MakeNameEx(0x00042BA0, "PtrSsmGet_Exhaust_OCV_Current_Left_P88", SN_CHECK);
addr = Dword(0x00042BA0);
MakeNameEx(addr, "SsmGet_Exhaust_OCV_Current_Left_P88", SN_CHECK);

MakeUnknown(0x00042A6C, 4, DOUNK_SIMPLE);
MakeDword(0x00042A6C);
MakeNameEx(0x00042A6C, "PtrSsmGet_AF_Correction_3_32bit_ECU_P89", SN_CHECK);
addr = Dword(0x00042A6C);
MakeNameEx(addr, "SsmGet_AF_Correction_3_32bit_ECU_P89", SN_CHECK);

MakeUnknown(0x00042B10, 4, DOUNK_SIMPLE);
MakeDword(0x00042B10);
MakeNameEx(0x00042B10, "PtrSsmGet_IAM_P90", SN_CHECK);
addr = Dword(0x00042B10);
MakeNameEx(addr, "SsmGet_IAM_P90", SN_CHECK);

MakeUnknown(0x00042D90, 4, DOUNK_SIMPLE);
MakeDword(0x00042D90);
MakeNameEx(0x00042D90, "PtrSsmGet_Fine_Learning_Knock_Correction_P91", SN_CHECK);
addr = Dword(0x00042D90);
MakeNameEx(addr, "SsmGet_Fine_Learning_Knock_Correction_P91", SN_CHECK);

MakeUnknown(0x000427E8, 4, DOUNK_SIMPLE);
MakeDword(0x000427E8);
MakeNameEx(0x000427E8, "PtrSsmGet_Radiator_Fan_Control_P92", SN_CHECK);
addr = Dword(0x000427E8);
MakeNameEx(addr, "SsmGet_Radiator_Fan_Control_P92", SN_CHECK);

MakeUnknown(0x00042CD4, 4, DOUNK_SIMPLE);
MakeDword(0x00042CD4);
MakeNameEx(0x00042CD4, "PtrSsmGet_SIDrive_Mode_P114", SN_CHECK);
addr = Dword(0x00042CD4);
MakeNameEx(addr, "SsmGet_SIDrive_Mode_P114", SN_CHECK);

MakeUnknown(0x00042CD8, 4, DOUNK_SIMPLE);
MakeDword(0x00042CD8);
MakeNameEx(0x00042CD8, "PtrSsmGet_Throttle_Sensor_Closed_Voltage_P115", SN_CHECK);
addr = Dword(0x00042CD8);
MakeNameEx(addr, "SsmGet_Throttle_Sensor_Closed_Voltage_P115", SN_CHECK);

MakeUnknown(0x00042B48, 4, DOUNK_SIMPLE);
MakeDword(0x00042B48);
MakeNameEx(0x00042B48, "PtrSsmGet_Exhaust_Gas_Temperature_2_P116", SN_CHECK);
addr = Dword(0x00042B48);
MakeNameEx(addr, "SsmGet_Exhaust_Gas_Temperature_2_P116", SN_CHECK);

MakeUnknown(0x00042B58, 4, DOUNK_SIMPLE);
MakeDword(0x00042B58);
MakeNameEx(0x00042B58, "PtrSsmGet_AirFuel_Correction_4_P117", SN_CHECK);
addr = Dword(0x00042B58);
MakeNameEx(addr, "SsmGet_AirFuel_Correction_4_P117", SN_CHECK);

MakeUnknown(0x00042B5C, 4, DOUNK_SIMPLE);
MakeDword(0x00042B5C);
MakeNameEx(0x00042B5C, "PtrSsmGet_AirFuel_Learning_4_P118", SN_CHECK);
addr = Dword(0x00042B5C);
MakeNameEx(addr, "SsmGet_AirFuel_Learning_4_P118", SN_CHECK);

MakeUnknown(0x00042B60, 4, DOUNK_SIMPLE);
MakeDword(0x00042B60);
MakeNameEx(0x00042B60, "PtrSsmGet_Fuel_Level_Sensor_Resistance_P119", SN_CHECK);
addr = Dword(0x00042B60);
MakeNameEx(addr, "SsmGet_Fuel_Level_Sensor_Resistance_P119", SN_CHECK);

MakeUnknown(0x00042B64, 4, DOUNK_SIMPLE);
MakeDword(0x00042B64);
MakeNameEx(0x00042B64, "PtrSsmGet_Estimated_odometer_P120", SN_CHECK);
addr = Dword(0x00042B64);
MakeNameEx(addr, "SsmGet_Estimated_odometer_P120", SN_CHECK);

MakeUnknown(0x00042CF4, 4, DOUNK_SIMPLE);
MakeDword(0x00042CF4);
MakeNameEx(0x00042CF4, "PtrSsmGet_Fuel_Tank_Air_Pressure_P121", SN_CHECK);
addr = Dword(0x00042CF4);
MakeNameEx(addr, "SsmGet_Fuel_Tank_Air_Pressure_P121", SN_CHECK);

MakeUnknown(0x00042B78, 4, DOUNK_SIMPLE);
MakeDword(0x00042B78);
MakeNameEx(0x00042B78, "PtrSsmGet_Oil_Temperature_P122", SN_CHECK);
addr = Dword(0x00042B78);
MakeNameEx(addr, "SsmGet_Oil_Temperature_P122", SN_CHECK);

MakeUnknown(0x00042B7C, 4, DOUNK_SIMPLE);
MakeDword(0x00042B7C);
MakeNameEx(0x00042B7C, "PtrSsmGet_Oil_Switching_Solenoid_Valve_OSV_Duty_Right_P123", SN_CHECK);
addr = Dword(0x00042B7C);
MakeNameEx(addr, "SsmGet_Oil_Switching_Solenoid_Valve_OSV_Duty_Right_P123", SN_CHECK);

MakeUnknown(0x00042B80, 4, DOUNK_SIMPLE);
MakeDword(0x00042B80);
MakeNameEx(0x00042B80, "PtrSsmGet_Oil_Switching_Solenoid_Valve_OSV_Duty_Left_P124", SN_CHECK);
addr = Dword(0x00042B80);
MakeNameEx(addr, "SsmGet_Oil_Switching_Solenoid_Valve_OSV_Duty_Left_P124", SN_CHECK);

MakeUnknown(0x00042B84, 4, DOUNK_SIMPLE);
MakeDword(0x00042B84);
MakeNameEx(0x00042B84, "PtrSsmGet_Oil_Switching_Solenoid_Valve_OSV_Current_Right_P125", SN_CHECK);
addr = Dword(0x00042B84);
MakeNameEx(addr, "SsmGet_Oil_Switching_Solenoid_Valve_OSV_Current_Right_P125", SN_CHECK);

MakeUnknown(0x00042B88, 4, DOUNK_SIMPLE);
MakeDword(0x00042B88);
MakeNameEx(0x00042B88, "PtrSsmGet_Oil_Switching_Solenoid_Valve_OSV_Current_Left_P126", SN_CHECK);
addr = Dword(0x00042B88);
MakeNameEx(addr, "SsmGet_Oil_Switching_Solenoid_Valve_OSV_Current_Left_P126", SN_CHECK);

MakeUnknown(0x00042BA4, 4, DOUNK_SIMPLE);
MakeDword(0x00042BA4);
MakeNameEx(0x00042BA4, "PtrSsmGet_VVL_Lift_Mode_P127", SN_CHECK);
addr = Dword(0x00042BA4);
MakeNameEx(addr, "SsmGet_VVL_Lift_Mode_P127", SN_CHECK);

MakeUnknown(0x00042AE8, 4, DOUNK_SIMPLE);
MakeDword(0x00042AE8);
MakeNameEx(0x00042AE8, "PtrSsmGet_Roughness_Monitor_Cylinder_5_P151", SN_CHECK);
addr = Dword(0x00042AE8);
MakeNameEx(addr, "SsmGet_Roughness_Monitor_Cylinder_5_P151", SN_CHECK);

MakeUnknown(0x00042B0C, 4, DOUNK_SIMPLE);
MakeDword(0x00042B0C);
MakeNameEx(0x00042B0C, "PtrSsmGet_Roughness_Monitor_Cylinder_6_P152", SN_CHECK);
addr = Dword(0x00042B0C);
MakeNameEx(addr, "SsmGet_Roughness_Monitor_Cylinder_6_P152", SN_CHECK);

MakeUnknown(0x00042B10, 4, DOUNK_SIMPLE);
MakeDword(0x00042B10);
MakeNameEx(0x00042B10, "PtrSsmGet_Learned_Ignition_Timing_Correction_P153", SN_CHECK);
addr = Dword(0x00042B10);
MakeNameEx(addr, "SsmGet_Learned_Ignition_Timing_Correction_P153", SN_CHECK);

MakeUnknown(0x00042D94, 4, DOUNK_SIMPLE);
MakeDword(0x00042D94);
MakeNameEx(0x00042D94, "PtrSsmGet_Fuel_Tank_Pressure_P154", SN_CHECK);
addr = Dword(0x00042D94);
MakeNameEx(addr, "SsmGet_Fuel_Tank_Pressure_P154", SN_CHECK);

MakeUnknown(0x00042EB0, 4, DOUNK_SIMPLE);
MakeDword(0x00042EB0);
MakeNameEx(0x00042EB0, "PtrSsmGet_Main_Injection_Period_P155", SN_CHECK);
addr = Dword(0x00042EB0);
MakeNameEx(addr, "SsmGet_Main_Injection_Period_P155", SN_CHECK);

MakeUnknown(0x00042EB4, 4, DOUNK_SIMPLE);
MakeDword(0x00042EB4);
MakeNameEx(0x00042EB4, "PtrSsmGet_Final_Injection_Amount_P156", SN_CHECK);
addr = Dword(0x00042EB4);
MakeNameEx(addr, "SsmGet_Final_Injection_Amount_P156", SN_CHECK);

MakeUnknown(0x00042EBC, 4, DOUNK_SIMPLE);
MakeDword(0x00042EBC);
MakeNameEx(0x00042EBC, "PtrSsmGet_Number_of_Times_Injected_P157", SN_CHECK);
addr = Dword(0x00042EBC);
MakeNameEx(addr, "SsmGet_Number_of_Times_Injected_P157", SN_CHECK);

MakeUnknown(0x00042EC0, 4, DOUNK_SIMPLE);
MakeDword(0x00042EC0);
MakeNameEx(0x00042EC0, "PtrSsmGet_Target_Intake_Manifold_Pressure_P158", SN_CHECK);
addr = Dword(0x00042EC0);
MakeNameEx(addr, "SsmGet_Target_Intake_Manifold_Pressure_P158", SN_CHECK);

MakeUnknown(0x00042EC4, 4, DOUNK_SIMPLE);
MakeDword(0x00042EC4);
MakeNameEx(0x00042EC4, "PtrSsmGet_Target_Intake_Air_Amount_P159", SN_CHECK);
addr = Dword(0x00042EC4);
MakeNameEx(addr, "SsmGet_Target_Intake_Air_Amount_P159", SN_CHECK);

MakeUnknown(0x00042EC8, 4, DOUNK_SIMPLE);
MakeDword(0x00042EC8);
MakeNameEx(0x00042EC8, "PtrSsmGet_Air_Mass_P160", SN_CHECK);
addr = Dword(0x00042EC8);
MakeNameEx(addr, "SsmGet_Air_Mass_P160", SN_CHECK);

MakeUnknown(0x00042ECC, 4, DOUNK_SIMPLE);
MakeDword(0x00042ECC);
MakeNameEx(0x00042ECC, "PtrSsmGet_Exhaust_Gas_Recirculation_EGR_Target_Valve_Opening_Angle_P161", SN_CHECK);
addr = Dword(0x00042ECC);
MakeNameEx(addr, "SsmGet_Exhaust_Gas_Recirculation_EGR_Target_Valve_Opening_Angle_P161", SN_CHECK);

MakeUnknown(0x00042ED0, 4, DOUNK_SIMPLE);
MakeDword(0x00042ED0);
MakeNameEx(0x00042ED0, "PtrSsmGet_Exhaust_Gas_Recirculation_EGR_Valve_Opening_Angle_P162", SN_CHECK);
addr = Dword(0x00042ED0);
MakeNameEx(addr, "SsmGet_Exhaust_Gas_Recirculation_EGR_Valve_Opening_Angle_P162", SN_CHECK);

MakeUnknown(0x00042ED4, 4, DOUNK_SIMPLE);
MakeDword(0x00042ED4);
MakeNameEx(0x00042ED4, "PtrSsmGet_Exhaust_Gas_Recirculation_EGR_Duty_P163", SN_CHECK);
addr = Dword(0x00042ED4);
MakeNameEx(addr, "SsmGet_Exhaust_Gas_Recirculation_EGR_Duty_P163", SN_CHECK);

MakeUnknown(0x00042ED8, 4, DOUNK_SIMPLE);
MakeDword(0x00042ED8);
MakeNameEx(0x00042ED8, "PtrSsmGet_Common_Rail_Target_Pressure_P164", SN_CHECK);
addr = Dword(0x00042ED8);
MakeNameEx(addr, "SsmGet_Common_Rail_Target_Pressure_P164", SN_CHECK);

MakeUnknown(0x00042EDC, 4, DOUNK_SIMPLE);
MakeDword(0x00042EDC);
MakeNameEx(0x00042EDC, "PtrSsmGet_Common_Rail_Pressure_P165", SN_CHECK);
addr = Dword(0x00042EDC);
MakeNameEx(addr, "SsmGet_Common_Rail_Pressure_P165", SN_CHECK);

MakeUnknown(0x00042EE0, 4, DOUNK_SIMPLE);
MakeDword(0x00042EE0);
MakeNameEx(0x00042EE0, "PtrSsmGet_Intake_Air_Temperature_combined_P166", SN_CHECK);
addr = Dword(0x00042EE0);
MakeNameEx(addr, "SsmGet_Intake_Air_Temperature_combined_P166", SN_CHECK);

MakeUnknown(0x00042EE4, 4, DOUNK_SIMPLE);
MakeDword(0x00042EE4);
MakeNameEx(0x00042EE4, "PtrSsmGet_Target_Engine_Speed_P167", SN_CHECK);
addr = Dword(0x00042EE4);
MakeNameEx(addr, "SsmGet_Target_Engine_Speed_P167", SN_CHECK);

MakeUnknown(0x00042EEC, 4, DOUNK_SIMPLE);
MakeDword(0x00042EEC);
MakeNameEx(0x00042EEC, "PtrSsmGet_Boost_Pressure_Feedback_P168", SN_CHECK);
addr = Dword(0x00042EEC);
MakeNameEx(addr, "SsmGet_Boost_Pressure_Feedback_P168", SN_CHECK);

MakeUnknown(0x00042F00, 4, DOUNK_SIMPLE);
MakeDword(0x00042F00);
MakeNameEx(0x00042F00, "PtrSsmGet_Electric_Power_Steering_Current_P169", SN_CHECK);
addr = Dword(0x00042F00);
MakeNameEx(addr, "SsmGet_Electric_Power_Steering_Current_P169", SN_CHECK);

MakeUnknown(0x00042F04, 4, DOUNK_SIMPLE);
MakeDword(0x00042F04);
MakeNameEx(0x00042F04, "PtrSsmGet_Fuel_Pump_Suction_Control_Valve_Current_Target_P170", SN_CHECK);
addr = Dword(0x00042F04);
MakeNameEx(addr, "SsmGet_Fuel_Pump_Suction_Control_Valve_Current_Target_P170", SN_CHECK);

MakeUnknown(0x00042F0C, 4, DOUNK_SIMPLE);
MakeDword(0x00042F0C);
MakeNameEx(0x00042F0C, "PtrSsmGet_Fuel_Pump_Suction_Control_Valve_Current_Actual_P175", SN_CHECK);
addr = Dword(0x00042F0C);
MakeNameEx(addr, "SsmGet_Fuel_Pump_Suction_Control_Valve_Current_Actual_P175", SN_CHECK);

MakeUnknown(0x00042F14, 4, DOUNK_SIMPLE);
MakeDword(0x00042F14);
MakeNameEx(0x00042F14, "PtrSsmGet_Mileage_after_Injector_Learning_P176", SN_CHECK);
addr = Dword(0x00042F14);
MakeNameEx(addr, "SsmGet_Mileage_after_Injector_Learning_P176", SN_CHECK);

MakeUnknown(0x00042F3C, 4, DOUNK_SIMPLE);
MakeDword(0x00042F3C);
MakeNameEx(0x00042F3C, "PtrSsmGet_Mileage_after_Injector_Replacement_P177", SN_CHECK);
addr = Dword(0x00042F3C);
MakeNameEx(addr, "SsmGet_Mileage_after_Injector_Replacement_P177", SN_CHECK);

MakeUnknown(0x000430EC, 4, DOUNK_SIMPLE);
MakeDword(0x000430EC);
MakeNameEx(0x000430EC, "PtrSsmGet_Interior_Heater_P178", SN_CHECK);
addr = Dword(0x000430EC);
MakeNameEx(addr, "SsmGet_Interior_Heater_P178", SN_CHECK);

MakeUnknown(0x000430A0, 4, DOUNK_SIMPLE);
MakeDword(0x000430A0);
MakeNameEx(0x000430A0, "PtrSsmGet_Quantity_Correction_Cylinder_1_P179", SN_CHECK);
addr = Dword(0x000430A0);
MakeNameEx(addr, "SsmGet_Quantity_Correction_Cylinder_1_P179", SN_CHECK);

MakeUnknown(0x000430A4, 4, DOUNK_SIMPLE);
MakeDword(0x000430A4);
MakeNameEx(0x000430A4, "PtrSsmGet_Quantity_Correction_Cylinder_2_P180", SN_CHECK);
addr = Dword(0x000430A4);
MakeNameEx(addr, "SsmGet_Quantity_Correction_Cylinder_2_P180", SN_CHECK);

MakeUnknown(0x000430A8, 4, DOUNK_SIMPLE);
MakeDword(0x000430A8);
MakeNameEx(0x000430A8, "PtrSsmGet_Quantity_Correction_Cylinder_3_P181", SN_CHECK);
addr = Dword(0x000430A8);
MakeNameEx(addr, "SsmGet_Quantity_Correction_Cylinder_3_P181", SN_CHECK);

MakeUnknown(0x000430AC, 4, DOUNK_SIMPLE);
MakeDword(0x000430AC);
MakeNameEx(0x000430AC, "PtrSsmGet_Quantity_Correction_Cylinder_4_P182", SN_CHECK);
addr = Dword(0x000430AC);
MakeNameEx(addr, "SsmGet_Quantity_Correction_Cylinder_4_P182", SN_CHECK);

MakeUnknown(0x000430F0, 4, DOUNK_SIMPLE);
MakeDword(0x000430F0);
MakeNameEx(0x000430F0, "PtrSsmGet_Battery_Current_P183", SN_CHECK);
addr = Dword(0x000430F0);
MakeNameEx(addr, "SsmGet_Battery_Current_P183", SN_CHECK);

MakeUnknown(0x000430F8, 4, DOUNK_SIMPLE);
MakeDword(0x000430F8);
MakeNameEx(0x000430F8, "PtrSsmGet_Battery_Temperature_P184", SN_CHECK);
addr = Dword(0x000430F8);
MakeNameEx(addr, "SsmGet_Battery_Temperature_P184", SN_CHECK);

MakeUnknown(0x000430F4, 4, DOUNK_SIMPLE);
MakeDword(0x000430F4);
MakeNameEx(0x000430F4, "PtrSsmGet_Alternator_Control_Mode_P185", SN_CHECK);
addr = Dword(0x000430F4);
MakeNameEx(addr, "SsmGet_Alternator_Control_Mode_P185", SN_CHECK);

MakeUnknown(0x00043100, 4, DOUNK_SIMPLE);
MakeDword(0x00043100);
MakeNameEx(0x00043100, "PtrSsmGet_Cumulative_Ash_Ratio_P186", SN_CHECK);
addr = Dword(0x00043100);
MakeNameEx(addr, "SsmGet_Cumulative_Ash_Ratio_P186", SN_CHECK);

MakeUnknown(0x00043104, 4, DOUNK_SIMPLE);
MakeDword(0x00043104);
MakeNameEx(0x00043104, "PtrSsmGet_Pressure_Difference_between_Diesel_Particulate_Filter_DPF_Inlet_and_Outlet_P187", SN_CHECK);
addr = Dword(0x00043104);
MakeNameEx(addr, "SsmGet_Pressure_Difference_between_Diesel_Particulate_Filter_DPF_Inlet_and_Outlet_P187", SN_CHECK);

MakeUnknown(0x00043108, 4, DOUNK_SIMPLE);
MakeDword(0x00043108);
MakeNameEx(0x00043108, "PtrSsmGet_Exhaust_Gas_Temperature_at_Catalyst_Inlet_P188", SN_CHECK);
addr = Dword(0x00043108);
MakeNameEx(addr, "SsmGet_Exhaust_Gas_Temperature_at_Catalyst_Inlet_P188", SN_CHECK);

MakeUnknown(0x0004310C, 4, DOUNK_SIMPLE);
MakeDword(0x0004310C);
MakeNameEx(0x0004310C, "PtrSsmGet_Exhaust_Gas_Temperature_at_Diesel_Particulate_Filter_DPF_Inlet_P189", SN_CHECK);
addr = Dword(0x0004310C);
MakeNameEx(addr, "SsmGet_Exhaust_Gas_Temperature_at_Diesel_Particulate_Filter_DPF_Inlet_P189", SN_CHECK);

MakeUnknown(0x00043110, 4, DOUNK_SIMPLE);
MakeDword(0x00043110);
MakeNameEx(0x00043110, "PtrSsmGet_Estimated_Catalyst_Temperature_P190", SN_CHECK);
addr = Dword(0x00043110);
MakeNameEx(addr, "SsmGet_Estimated_Catalyst_Temperature_P190", SN_CHECK);

MakeUnknown(0x00043114, 4, DOUNK_SIMPLE);
MakeDword(0x00043114);
MakeNameEx(0x00043114, "PtrSsmGet_Estimated_Temperature_of_the_Diesel_Particulate_Filter_DPF_P191", SN_CHECK);
addr = Dword(0x00043114);
MakeNameEx(addr, "SsmGet_Estimated_Temperature_of_the_Diesel_Particulate_Filter_DPF_P191", SN_CHECK);

MakeUnknown(0x00043118, 4, DOUNK_SIMPLE);
MakeDword(0x00043118);
MakeNameEx(0x00043118, "PtrSsmGet_Soot_Accumulation_Ratio_P192", SN_CHECK);
addr = Dword(0x00043118);
MakeNameEx(addr, "SsmGet_Soot_Accumulation_Ratio_P192", SN_CHECK);

MakeUnknown(0x0004311C, 4, DOUNK_SIMPLE);
MakeDword(0x0004311C);
MakeNameEx(0x0004311C, "PtrSsmGet_Oil_Dilution_Ratio_P193", SN_CHECK);
addr = Dword(0x0004311C);
MakeNameEx(addr, "SsmGet_Oil_Dilution_Ratio_P193", SN_CHECK);

MakeUnknown(0x0004318C, 4, DOUNK_SIMPLE);
MakeDword(0x0004318C);
MakeNameEx(0x0004318C, "PtrSsmGet_Accumulated_Count_of_Overspeed_Instances_Very_High_RPM_P198", SN_CHECK);
addr = Dword(0x0004318C);
MakeNameEx(addr, "SsmGet_Accumulated_Count_of_Overspeed_Instances_Very_High_RPM_P198", SN_CHECK);

MakeUnknown(0x00043190, 4, DOUNK_SIMPLE);
MakeDword(0x00043190);
MakeNameEx(0x00043190, "PtrSsmGet_Accumulated_Count_of_Overspeed_Instances_High_RPM_P199", SN_CHECK);
addr = Dword(0x00043190);
MakeNameEx(addr, "SsmGet_Accumulated_Count_of_Overspeed_Instances_High_RPM_P199", SN_CHECK);

MakeUnknown(0x00042FA8, 4, DOUNK_SIMPLE);
MakeDword(0x00042FA8);
MakeNameEx(0x00042FA8, "PtrSsmGet_Actual_Common_Rail_Pressure_Time_Synchronized_P204", SN_CHECK);
addr = Dword(0x00042FA8);
MakeNameEx(addr, "SsmGet_Actual_Common_Rail_Pressure_Time_Synchronized_P204", SN_CHECK);

MakeUnknown(0x00043194, 4, DOUNK_SIMPLE);
MakeDword(0x00043194);
MakeNameEx(0x00043194, "PtrSsmGet_Estimated_Distance_to_Oil_Change_P205", SN_CHECK);
addr = Dword(0x00043194);
MakeNameEx(addr, "SsmGet_Estimated_Distance_to_Oil_Change_P205", SN_CHECK);

MakeUnknown(0x00043198, 4, DOUNK_SIMPLE);
MakeDword(0x00043198);
MakeNameEx(0x00043198, "PtrSsmGet_Running_Distance_since_last_Diesel_Particulate_Filter_DPF_Regeneration_P206", SN_CHECK);
addr = Dword(0x00043198);
MakeNameEx(addr, "SsmGet_Running_Distance_since_last_Diesel_Particulate_Filter_DPF_Regeneration_P206", SN_CHECK);

MakeUnknown(0x000431A0, 4, DOUNK_SIMPLE);
MakeDword(0x000431A0);
MakeNameEx(0x000431A0, "PtrSsmGet_Diesel_Particulate_Filter_DPF_Regeneration_Count_P207", SN_CHECK);
addr = Dword(0x000431A0);
MakeNameEx(addr, "SsmGet_Diesel_Particulate_Filter_DPF_Regeneration_Count_P207", SN_CHECK);

MakeUnknown(0x00043020, 4, DOUNK_SIMPLE);
MakeDword(0x00043020);
MakeNameEx(0x00043020, "PtrSsmGet_MicroQuantityInjection_Final_Learning_Value_11_P208", SN_CHECK);
addr = Dword(0x00043020);
MakeNameEx(addr, "SsmGet_MicroQuantityInjection_Final_Learning_Value_11_P208", SN_CHECK);

MakeUnknown(0x00043024, 4, DOUNK_SIMPLE);
MakeDword(0x00043024);
MakeNameEx(0x00043024, "PtrSsmGet_MicroQuantityInjection_Final_Learning_Value_12_P209", SN_CHECK);
addr = Dword(0x00043024);
MakeNameEx(addr, "SsmGet_MicroQuantityInjection_Final_Learning_Value_12_P209", SN_CHECK);

MakeUnknown(0x00043028, 4, DOUNK_SIMPLE);
MakeDword(0x00043028);
MakeNameEx(0x00043028, "PtrSsmGet_MicroQuantityInjection_Final_Learning_Value_13_P210", SN_CHECK);
addr = Dword(0x00043028);
MakeNameEx(addr, "SsmGet_MicroQuantityInjection_Final_Learning_Value_13_P210", SN_CHECK);

MakeUnknown(0x0004302C, 4, DOUNK_SIMPLE);
MakeDword(0x0004302C);
MakeNameEx(0x0004302C, "PtrSsmGet_MicroQuantityInjection_Final_Learning_Value_14_P211", SN_CHECK);
addr = Dword(0x0004302C);
MakeNameEx(addr, "SsmGet_MicroQuantityInjection_Final_Learning_Value_14_P211", SN_CHECK);

MakeUnknown(0x00043030, 4, DOUNK_SIMPLE);
MakeDword(0x00043030);
MakeNameEx(0x00043030, "PtrSsmGet_MicroQuantityInjection_Final_Learning_Value_21_P212", SN_CHECK);
addr = Dword(0x00043030);
MakeNameEx(addr, "SsmGet_MicroQuantityInjection_Final_Learning_Value_21_P212", SN_CHECK);

MakeUnknown(0x00043034, 4, DOUNK_SIMPLE);
MakeDword(0x00043034);
MakeNameEx(0x00043034, "PtrSsmGet_MicroQuantityInjection_Final_Learning_Value_22_P213", SN_CHECK);
addr = Dword(0x00043034);
MakeNameEx(addr, "SsmGet_MicroQuantityInjection_Final_Learning_Value_22_P213", SN_CHECK);

MakeUnknown(0x00043038, 4, DOUNK_SIMPLE);
MakeDword(0x00043038);
MakeNameEx(0x00043038, "PtrSsmGet_MicroQuantityInjection_Final_Learning_Value_23_P214", SN_CHECK);
addr = Dword(0x00043038);
MakeNameEx(addr, "SsmGet_MicroQuantityInjection_Final_Learning_Value_23_P214", SN_CHECK);

MakeUnknown(0x0004303C, 4, DOUNK_SIMPLE);
MakeDword(0x0004303C);
MakeNameEx(0x0004303C, "PtrSsmGet_MicroQuantityInjection_Final_Learning_Value_24_P215", SN_CHECK);
addr = Dword(0x0004303C);
MakeNameEx(addr, "SsmGet_MicroQuantityInjection_Final_Learning_Value_24_P215", SN_CHECK);

MakeUnknown(0x00043040, 4, DOUNK_SIMPLE);
MakeDword(0x00043040);
MakeNameEx(0x00043040, "PtrSsmGet_MicroQuantityInjection_Final_Learning_Value_31_P216", SN_CHECK);
addr = Dword(0x00043040);
MakeNameEx(addr, "SsmGet_MicroQuantityInjection_Final_Learning_Value_31_P216", SN_CHECK);

MakeUnknown(0x00043044, 4, DOUNK_SIMPLE);
MakeDword(0x00043044);
MakeNameEx(0x00043044, "PtrSsmGet_MicroQuantityInjection_Final_Learning_Value_32_P217", SN_CHECK);
addr = Dword(0x00043044);
MakeNameEx(addr, "SsmGet_MicroQuantityInjection_Final_Learning_Value_32_P217", SN_CHECK);

MakeUnknown(0x00043048, 4, DOUNK_SIMPLE);
MakeDword(0x00043048);
MakeNameEx(0x00043048, "PtrSsmGet_MicroQuantityInjection_Final_Learning_Value_33_P218", SN_CHECK);
addr = Dword(0x00043048);
MakeNameEx(addr, "SsmGet_MicroQuantityInjection_Final_Learning_Value_33_P218", SN_CHECK);

MakeUnknown(0x0004304C, 4, DOUNK_SIMPLE);
MakeDword(0x0004304C);
MakeNameEx(0x0004304C, "PtrSsmGet_MicroQuantityInjection_Final_Learning_Value_34_P219", SN_CHECK);
addr = Dword(0x0004304C);
MakeNameEx(addr, "SsmGet_MicroQuantityInjection_Final_Learning_Value_34_P219", SN_CHECK);

MakeUnknown(0x00043050, 4, DOUNK_SIMPLE);
MakeDword(0x00043050);
MakeNameEx(0x00043050, "PtrSsmGet_MicroQuantityInjection_Final_Learning_Value_41_P220", SN_CHECK);
addr = Dword(0x00043050);
MakeNameEx(addr, "SsmGet_MicroQuantityInjection_Final_Learning_Value_41_P220", SN_CHECK);

MakeUnknown(0x00043054, 4, DOUNK_SIMPLE);
MakeDword(0x00043054);
MakeNameEx(0x00043054, "PtrSsmGet_MicroQuantityInjection_Final_Learning_Value_42_P221", SN_CHECK);
addr = Dword(0x00043054);
MakeNameEx(addr, "SsmGet_MicroQuantityInjection_Final_Learning_Value_42_P221", SN_CHECK);

MakeUnknown(0x00043058, 4, DOUNK_SIMPLE);
MakeDword(0x00043058);
MakeNameEx(0x00043058, "PtrSsmGet_MicroQuantityInjection_Final_Learning_Value_43_P222", SN_CHECK);
addr = Dword(0x00043058);
MakeNameEx(addr, "SsmGet_MicroQuantityInjection_Final_Learning_Value_43_P222", SN_CHECK);

MakeUnknown(0x0004305C, 4, DOUNK_SIMPLE);
MakeDword(0x0004305C);
MakeNameEx(0x0004305C, "PtrSsmGet_MicroQuantityInjection_Final_Learning_Value_44_P223", SN_CHECK);
addr = Dword(0x0004305C);
MakeNameEx(addr, "SsmGet_MicroQuantityInjection_Final_Learning_Value_44_P223", SN_CHECK);

MakeUnknown(0x00043060, 4, DOUNK_SIMPLE);
MakeDword(0x00043060);
MakeNameEx(0x00043060, "PtrSsmGet_MicroQuantityInjection_Final_Learning_Value_51_P224", SN_CHECK);
addr = Dword(0x00043060);
MakeNameEx(addr, "SsmGet_MicroQuantityInjection_Final_Learning_Value_51_P224", SN_CHECK);

MakeUnknown(0x00043064, 4, DOUNK_SIMPLE);
MakeDword(0x00043064);
MakeNameEx(0x00043064, "PtrSsmGet_MicroQuantityInjection_Final_Learning_Value_52_P225", SN_CHECK);
addr = Dword(0x00043064);
MakeNameEx(addr, "SsmGet_MicroQuantityInjection_Final_Learning_Value_52_P225", SN_CHECK);

MakeUnknown(0x00043068, 4, DOUNK_SIMPLE);
MakeDword(0x00043068);
MakeNameEx(0x00043068, "PtrSsmGet_MicroQuantityInjection_Final_Learning_Value_53_P226", SN_CHECK);
addr = Dword(0x00043068);
MakeNameEx(addr, "SsmGet_MicroQuantityInjection_Final_Learning_Value_53_P226", SN_CHECK);

MakeUnknown(0x0004306C, 4, DOUNK_SIMPLE);
MakeDword(0x0004306C);
MakeNameEx(0x0004306C, "PtrSsmGet_MicroQuantityInjection_Final_Learning_Value_54_P227", SN_CHECK);
addr = Dword(0x0004306C);
MakeNameEx(addr, "SsmGet_MicroQuantityInjection_Final_Learning_Value_54_P227", SN_CHECK);

MakeUnknown(0x0004300C, 4, DOUNK_SIMPLE);
MakeDword(0x0004300C);
MakeNameEx(0x0004300C, "PtrSsmGet_Individual_Pump_Difference_Learning_Value_P228", SN_CHECK);
addr = Dword(0x0004300C);
MakeNameEx(addr, "SsmGet_Individual_Pump_Difference_Learning_Value_P228", SN_CHECK);

MakeUnknown(0x00043088, 4, DOUNK_SIMPLE);
MakeDword(0x00043088);
MakeNameEx(0x00043088, "PtrSsmGet_Final_Main_Injection_Period_P229", SN_CHECK);
addr = Dword(0x00043088);
MakeNameEx(addr, "SsmGet_Final_Main_Injection_Period_P229", SN_CHECK);

MakeUnknown(0x00043080, 4, DOUNK_SIMPLE);
MakeDword(0x00043080);
MakeNameEx(0x00043080, "PtrSsmGet_PreInjection_Final_Period_P233", SN_CHECK);
addr = Dword(0x00043080);
MakeNameEx(addr, "SsmGet_PreInjection_Final_Period_P233", SN_CHECK);

MakeUnknown(0x00042FE8, 4, DOUNK_SIMPLE);
MakeDword(0x00042FE8);
MakeNameEx(0x00042FE8, "PtrSsmGet_PreInjection_Amount_P234", SN_CHECK);
addr = Dword(0x00042FE8);
MakeNameEx(addr, "SsmGet_PreInjection_Amount_P234", SN_CHECK);

MakeUnknown(0x00042FF0, 4, DOUNK_SIMPLE);
MakeDword(0x00042FF0);
MakeNameEx(0x00042FF0, "PtrSsmGet_PreInjection_Interval_P235", SN_CHECK);
addr = Dword(0x00042FF0);
MakeNameEx(addr, "SsmGet_PreInjection_Interval_P235", SN_CHECK);

MakeUnknown(0x000431B4, 4, DOUNK_SIMPLE);
MakeDword(0x000431B4);
MakeNameEx(0x000431B4, "PtrSsmGet_Cumulative_oil_diesel_entry_P236", SN_CHECK);
addr = Dword(0x000431B4);
MakeNameEx(addr, "SsmGet_Cumulative_oil_diesel_entry_P236", SN_CHECK);

MakeUnknown(0x00042FF4, 4, DOUNK_SIMPLE);
MakeDword(0x00042FF4);
MakeNameEx(0x00042FF4, "PtrSsmGet_Final_Initial_Torque_P238", SN_CHECK);
addr = Dword(0x00042FF4);
MakeNameEx(addr, "SsmGet_Final_Initial_Torque_P238", SN_CHECK);

MakeUnknown(0x000428E8, 4, DOUNK_SIMPLE);
MakeDword(0x000428E8);
MakeNameEx(0x000428E8, "PtrSsmGet_Global_Timing_User_Adjustment_Value_P239", SN_CHECK);
addr = Dword(0x000428E8);
MakeNameEx(addr, "SsmGet_Global_Timing_User_Adjustment_Value_P239", SN_CHECK);

MakeUnknown(0x000428EC, 4, DOUNK_SIMPLE);
MakeDword(0x000428EC);
MakeNameEx(0x000428EC, "PtrSsmGet_Engine_Idle_Speed_User_Adjustment_AC_off_P240", SN_CHECK);
addr = Dword(0x000428EC);
MakeNameEx(addr, "SsmGet_Engine_Idle_Speed_User_Adjustment_AC_off_P240", SN_CHECK);

MakeUnknown(0x000428F0, 4, DOUNK_SIMPLE);
MakeDword(0x000428F0);
MakeNameEx(0x000428F0, "PtrSsmGet_Engine_Idle_Speed_User_Adjustment_AC_on_P241", SN_CHECK);
addr = Dword(0x000428F0);
MakeNameEx(addr, "SsmGet_Engine_Idle_Speed_User_Adjustment_AC_on_P241", SN_CHECK);

MakeUnknown(0x00042B4C, 4, DOUNK_SIMPLE);
MakeDword(0x00042B4C);
MakeNameEx(0x00042B4C, "PtrSsmGet_Secondary_Air_Piping_Pressure_P244", SN_CHECK);
addr = Dword(0x00042B4C);
MakeNameEx(addr, "SsmGet_Secondary_Air_Piping_Pressure_P244", SN_CHECK);

MakeUnknown(0x00042D34, 4, DOUNK_SIMPLE);
MakeDword(0x00042D34);
MakeNameEx(0x00042D34, "PtrSsmGet_Secondary_Air_Flow_P245", SN_CHECK);
addr = Dword(0x00042D34);
MakeNameEx(addr, "SsmGet_Secondary_Air_Flow_P245", SN_CHECK);

// Switch Bit Position Name format: Switches_b7_b6_b5_b4_b3_b2_b1_b0
MakeUnknown(0x000428B0, 4, DOUNK_SIMPLE);
MakeDword(0x000428B0);
MakeNameEx(0x000428B0, "PtrSsmGet_Switches_x_1_2_3_x_69_70_71", SN_CHECK);
addr = Dword(0x000428B0);
MakeNameEx(addr, "SsmGet_Switches_x_1_2_3_x_69_70_71", SN_CHECK);

MakeUnknown(0x000428B4, 4, DOUNK_SIMPLE);
MakeDword(0x000428B4);
MakeNameEx(0x000428B4, "PtrSsmGet_Switches_4_5_x_6_7_8_9_x", SN_CHECK);
addr = Dword(0x000428B4);
MakeNameEx(addr, "SsmGet_Switches_4_5_x_6_7_8_9_x", SN_CHECK);

MakeUnknown(0x000428B8, 4, DOUNK_SIMPLE);
MakeDword(0x000428B8);
MakeNameEx(0x000428B8, "PtrSsmGet_Switches_10_11_12_13_14_15_16_17", SN_CHECK);
addr = Dword(0x000428B8);
MakeNameEx(addr, "SsmGet_Switches_10_11_12_13_14_15_16_17", SN_CHECK);

MakeUnknown(0x000428BC, 4, DOUNK_SIMPLE);
MakeDword(0x000428BC);
MakeNameEx(0x000428BC, "PtrSsmGet_Switches_18_19_20_21_22_23_24_25", SN_CHECK);
addr = Dword(0x000428BC);
MakeNameEx(addr, "SsmGet_Switches_18_19_20_21_22_23_24_25", SN_CHECK);

MakeUnknown(0x000428C0, 4, DOUNK_SIMPLE);
MakeDword(0x000428C0);
MakeNameEx(0x000428C0, "PtrSsmGet_Switches_26_27_28_29_30_31_32_33", SN_CHECK);
addr = Dword(0x000428C0);
MakeNameEx(addr, "SsmGet_Switches_26_27_28_29_30_31_32_33", SN_CHECK);

MakeUnknown(0x000428C4, 4, DOUNK_SIMPLE);
MakeDword(0x000428C4);
MakeNameEx(0x000428C4, "PtrSsmGet_Switches_34_35_36_37_38_39_40_41", SN_CHECK);
addr = Dword(0x000428C4);
MakeNameEx(addr, "SsmGet_Switches_34_35_36_37_38_39_40_41", SN_CHECK);

MakeUnknown(0x000428C8, 4, DOUNK_SIMPLE);
MakeDword(0x000428C8);
MakeNameEx(0x000428C8, "PtrSsmGet_Switches_42_43_44_45_46_47_48_49", SN_CHECK);
addr = Dword(0x000428C8);
MakeNameEx(addr, "SsmGet_Switches_42_43_44_45_46_47_48_49", SN_CHECK);

MakeUnknown(0x000428CC, 4, DOUNK_SIMPLE);
MakeDword(0x000428CC);
MakeNameEx(0x000428CC, "PtrSsmGet_Switches_72_73_74_75_50_51_52_53", SN_CHECK);
addr = Dword(0x000428CC);
MakeNameEx(addr, "SsmGet_Switches_72_73_74_75_50_51_52_53", SN_CHECK);

MakeUnknown(0x000428D0, 4, DOUNK_SIMPLE);
MakeDword(0x000428D0);
MakeNameEx(0x000428D0, "PtrSsmGet_Switches_54_55_56_57_58_59_60_61", SN_CHECK);
addr = Dword(0x000428D0);
MakeNameEx(addr, "SsmGet_Switches_54_55_56_57_58_59_60_61", SN_CHECK);

MakeUnknown(0x00042BAC, 4, DOUNK_SIMPLE);
MakeDword(0x00042BAC);
MakeNameEx(0x00042BAC, "PtrSsmGet_Switches_130_62_131_x_x_x_x_x", SN_CHECK);
addr = Dword(0x00042BAC);
MakeNameEx(addr, "SsmGet_Switches_130_62_131_x_x_x_x_x", SN_CHECK);

MakeUnknown(0x00042BB0, 4, DOUNK_SIMPLE);
MakeDword(0x00042BB0);
MakeNameEx(0x00042BB0, "PtrSsmGet_Switches_63_64_65_66_67_132_68_133", SN_CHECK);
addr = Dword(0x00042BB0);
MakeNameEx(addr, "SsmGet_Switches_63_64_65_66_67_132_68_133", SN_CHECK);

MakeUnknown(0x000428D4, 4, DOUNK_SIMPLE);
MakeDword(0x000428D4);
MakeNameEx(0x000428D4, "PtrSsmGet_Switches_x_x_x_x_x_x_82_x", SN_CHECK);
addr = Dword(0x000428D4);
MakeNameEx(addr, "SsmGet_Switches_x_x_x_x_x_x_82_x", SN_CHECK);

MakeUnknown(0x000428E4, 4, DOUNK_SIMPLE);
MakeDword(0x000428E4);
MakeNameEx(0x000428E4, "PtrSsmGet_Switches_108_x_x_x_x_x_x_x", SN_CHECK);
addr = Dword(0x000428E4);
MakeNameEx(addr, "SsmGet_Switches_108_x_x_x_x_x_x_x", SN_CHECK);

MakeUnknown(0x00042A88, 4, DOUNK_SIMPLE);
MakeDword(0x00042A88);
MakeNameEx(0x00042A88, "PtrSsmGet_Switches_148_149_x_150_151_152_153_154", SN_CHECK);
addr = Dword(0x00042A88);
MakeNameEx(addr, "SsmGet_Switches_148_149_x_150_151_152_153_154", SN_CHECK);

MakeUnknown(0x00042D84, 4, DOUNK_SIMPLE);
MakeDword(0x00042D84);
MakeNameEx(0x00042D84, "PtrSsmGet_Switches_155_156_157_x_x_x_x_x", SN_CHECK);
addr = Dword(0x00042D84);
MakeNameEx(addr, "SsmGet_Switches_155_156_157_x_x_x_x_x", SN_CHECK);

MakeUnknown(0x00042D88, 4, DOUNK_SIMPLE);
MakeDword(0x00042D88);
MakeNameEx(0x00042D88, "PtrSsmGet_Switches_158_159_160_161_162_163_164_165", SN_CHECK);
addr = Dword(0x00042D88);
MakeNameEx(addr, "SsmGet_Switches_158_159_160_161_162_163_164_165", SN_CHECK);

MakeUnknown(0x00042E64, 4, DOUNK_SIMPLE);
MakeDword(0x00042E64);
MakeNameEx(0x00042E64, "PtrSsmGet_Switches_168_169_170_171_172_x_x_x", SN_CHECK);
addr = Dword(0x00042E64);
MakeNameEx(addr, "SsmGet_Switches_168_169_170_171_172_x_x_x", SN_CHECK);

}   // end of StdParams

static ExtParams ()
{
Message("--- Now marking ExtParams ---\n");
MakeNameEx(0xFFFF8550, "E_IAM_4byteExt_E31", SN_CHECK);
MakeUnknown(0xFFFF8550, 4, DOUNK_SIMPLE);
MakeFloat(0xFFFF8550);
MakeNameEx(0xFFFFA6AC, "E_Engine_Load_4ByteExt_E32", SN_CHECK);
MakeUnknown(0xFFFFA6AC, 4, DOUNK_SIMPLE);
MakeFloat(0xFFFFA6AC);
MakeNameEx(0xFFFFC11D, "E_CLOL_FuelingExt_E33", SN_CHECK);
MakeUnknown(0xFFFFC11D, 1, DOUNK_SIMPLE);
MakeByte(0xFFFFC11D);
MakeNameEx(0xFFFFA290, "E_Turbo_Dynamics_Integral_4byteExt_E34", SN_CHECK);
MakeUnknown(0xFFFFA290, 4, DOUNK_SIMPLE);
MakeFloat(0xFFFFA290);
MakeNameEx(0xFFFFA284, "E_Boost_ErrorExt_E35", SN_CHECK);
MakeUnknown(0xFFFFA284, 4, DOUNK_SIMPLE);
MakeFloat(0xFFFFA284);
MakeNameEx(0xFFFFA288, "E_Target_Boost_4byteExt_E36", SN_CHECK);
MakeUnknown(0xFFFFA288, 4, DOUNK_SIMPLE);
MakeFloat(0xFFFFA288);
MakeNameEx(0xFFFFA28C, "E_Turbo_Dynamics_Proportional_4byteExt_E37", SN_CHECK);
MakeUnknown(0xFFFFA28C, 4, DOUNK_SIMPLE);
MakeFloat(0xFFFFA28C);
MakeNameEx(0xFFFFA5B8, "E_Throttle_Plate_Opening_Angle_4byteExt_E38", SN_CHECK);
MakeUnknown(0xFFFFA5B8, 4, DOUNK_SIMPLE);
MakeFloat(0xFFFFA5B8);
MakeNameEx(0xFFFFB030, "E_Feedback_Knock_Correction_4byteExt_E39", SN_CHECK);
MakeUnknown(0xFFFFB030, 4, DOUNK_SIMPLE);
MakeFloat(0xFFFFB030);
MakeNameEx(0xFFFFB074, "E_Knock_Correction_Advance_IAM_onlyExt_E40", SN_CHECK);
MakeUnknown(0xFFFFB074, 4, DOUNK_SIMPLE);
MakeFloat(0xFFFFB074);
MakeNameEx(0xFFFFB08C, "E_Fine_Learning_Knock_Correction_4byteExt_E41", SN_CHECK);
MakeUnknown(0xFFFFB08C, 4, DOUNK_SIMPLE);
MakeFloat(0xFFFFB08C);
MakeNameEx(0xFFFFB81C, "E_Map_Ratio_PrimaryExt_E42", SN_CHECK);
MakeUnknown(0xFFFFB81C, 4, DOUNK_SIMPLE);
MakeFloat(0xFFFFB81C);
MakeNameEx(0xFFFF84FC, "E_AF_Learning_1_A_StoredExt_E44", SN_CHECK);
MakeUnknown(0xFFFF84FC, 4, DOUNK_SIMPLE);
MakeFloat(0xFFFF84FC);
MakeNameEx(0xFFFF8504, "E_AF_Learning_1_B_StoredExt_E45", SN_CHECK);
MakeUnknown(0xFFFF8504, 4, DOUNK_SIMPLE);
MakeFloat(0xFFFF8504);
MakeNameEx(0xFFFF850C, "E_AF_Learning_1_C_StoredExt_E46", SN_CHECK);
MakeUnknown(0xFFFF850C, 4, DOUNK_SIMPLE);
MakeFloat(0xFFFF850C);
MakeNameEx(0xFFFF8514, "E_AF_Learning_1_D_StoredExt_E47", SN_CHECK);
MakeUnknown(0xFFFF8514, 4, DOUNK_SIMPLE);
MakeFloat(0xFFFF8514);
MakeNameEx(0xFFFFABE4, "E_AF_Learning_1_4byteExt_E48", SN_CHECK);
MakeUnknown(0xFFFFABE4, 4, DOUNK_SIMPLE);
MakeFloat(0xFFFFABE4);
MakeNameEx(0xFFFFB2E4, "E_Idle_Speed_Map_SelectionExt_E49", SN_CHECK);
MakeUnknown(0xFFFFB2E4, 1, DOUNK_SIMPLE);
MakeByte(0xFFFFB2E4);
MakeNameEx(0xFFFFAE24, "E_Fuel_Injector_1_Latency_4byteExt_E50", SN_CHECK);
MakeUnknown(0xFFFFAE24, 4, DOUNK_SIMPLE);
MakeFloat(0xFFFFAE24);
MakeNameEx(0xFFFFA528, "E_Manifold_Absolute_Pressure_4byteExt_E51", SN_CHECK);
MakeUnknown(0xFFFFA528, 4, DOUNK_SIMPLE);
MakeFloat(0xFFFFA528);
MakeNameEx(0xFFFFA528, "E_Manifold_Relative_Sea_Level_Pressure_4byteExt_E52", SN_CHECK);
MakeUnknown(0xFFFFA528, 4, DOUNK_SIMPLE);
MakeFloat(0xFFFFA528);
MakeNameEx(0xFFFFAF40, "E_Ignition_Base_TimingExt_E53", SN_CHECK);
MakeUnknown(0xFFFFAF40, 4, DOUNK_SIMPLE);
MakeFloat(0xFFFFAF40);
MakeNameEx(0xFFFFA5BC, "E_Tipin_ThrottleExt_E54", SN_CHECK);
MakeUnknown(0xFFFFA5BC, 4, DOUNK_SIMPLE);
MakeFloat(0xFFFFA5BC);
MakeNameEx(0xFFFFAD44, "E_Tipin_Enrichment_Last_CalculatedExt_E55", SN_CHECK);
MakeUnknown(0xFFFFAD44, 4, DOUNK_SIMPLE);
MakeFloat(0xFFFFAD44);
MakeNameEx(0xFFFFB16C, "E_Requested_TorqueExt_E56", SN_CHECK);
MakeUnknown(0xFFFFB16C, 4, DOUNK_SIMPLE);
MakeFloat(0xFFFFB16C);
MakeNameEx(0xFFFFB168, "E_Target_Throttle_Plate_PositionExt_E57", SN_CHECK);
MakeUnknown(0xFFFFB168, 4, DOUNK_SIMPLE);
MakeFloat(0xFFFFB168);
MakeNameEx(0xFFFFB095, "E_Fine_Learning_Table_OffsetExt_E58", SN_CHECK);
MakeUnknown(0xFFFFB095, 1, DOUNK_SIMPLE);
MakeByte(0xFFFFB095);
MakeNameEx(0xFFFFA8D1, "E_Gear_CalculatedExt_E59", SN_CHECK);
MakeUnknown(0xFFFFA8D1, 1, DOUNK_SIMPLE);
MakeByte(0xFFFFA8D1);
MakeNameEx(0xFFFFAE10, "E_Fuel_Injector_1_Pulse_Width_4byteExt_E60", SN_CHECK);
MakeUnknown(0xFFFFAE10, 4, DOUNK_SIMPLE);
MakeFloat(0xFFFFAE10);
MakeNameEx(0xFFFFABED, "E_AF_Learning_Airflow_Range_CurrentExt_E61", SN_CHECK);
MakeUnknown(0xFFFFABED, 1, DOUNK_SIMPLE);
MakeByte(0xFFFFABED);
MakeNameEx(0xFFFFA2AC, "E_Primary_Wastegate_Duty_MaximumExt_4byteExt_E70", SN_CHECK);
MakeUnknown(0xFFFFA2AC, 4, DOUNK_SIMPLE);
MakeFloat(0xFFFFA2AC);
MakeNameEx(0xFFFFA2AC, "E_Primary_Wastegate_Duty_MaximumExt_4byteExt__E77", SN_CHECK);
MakeUnknown(0xFFFFA2AC, 4, DOUNK_SIMPLE);
MakeFloat(0xFFFFA2AC);
MakeNameEx(0xFFFFAA9C, "E_AF_Correction_1_4byteExt_E81", SN_CHECK);
MakeUnknown(0xFFFFAA9C, 4, DOUNK_SIMPLE);
MakeFloat(0xFFFFAA9C);
MakeNameEx(0xFFFFAC3C, "E_Primary_Open_Loop_Map_Enrichment_4byteExt_E84", SN_CHECK);
MakeUnknown(0xFFFFAC3C, 4, DOUNK_SIMPLE);
MakeFloat(0xFFFFAC3C);
MakeNameEx(0xFFFFA78C, "E_AF_Sensor_1_4byteExt_E91", SN_CHECK);
MakeUnknown(0xFFFFA78C, 4, DOUNK_SIMPLE);
MakeFloat(0xFFFFA78C);
MakeNameEx(0xFFFFA52C, "E_Manifold_Relative_Pressure_4byteExt_E113", SN_CHECK);
MakeUnknown(0xFFFFA52C, 4, DOUNK_SIMPLE);
MakeFloat(0xFFFFA52C);
MakeNameEx(0xFFFFAA20, "E_Primary_Enrichment_Final_4byteExt_E115", SN_CHECK);
MakeUnknown(0xFFFFAA20, 4, DOUNK_SIMPLE);
MakeFloat(0xFFFFAA20);
MakeNameEx(0xFFFFAAE4, "E_Closed_Loop_Fueling_Target_4byteExt_E121", SN_CHECK);
MakeUnknown(0xFFFFAAE4, 4, DOUNK_SIMPLE);
MakeFloat(0xFFFFAAE4);
MakeNameEx(0xFFFFA9F0, "E_Final_Fueling_Base_4byteExt_E123", SN_CHECK);
MakeUnknown(0xFFFFA9F0, 4, DOUNK_SIMPLE);
MakeFloat(0xFFFFA9F0);
}   // end of ExtParams

