#ifndef STEPPER_INTERFACE_H
#define STEPPER_INTERFACE_H

void StepperMotor_vid_OFF(void);
void StepperMotorHalfStep_ON_vid_Direction(u8 Rot_u8_Dir , u32 u32_Angle);
void StepperMotorFullStep_ON_vid_Direction(u8 Rot_u8_Dir , u32 u32_Angle);

#endif
