
"use strict";

let BatteryCurrents = require('./BatteryCurrents.js');
let Twist2D = require('./Twist2D.js');
let Gpio = require('./Gpio.js');
let WorldMap = require('./WorldMap.js');
let HookStatus = require('./HookStatus.js');
let BrakeState = require('./BrakeState.js');
let Devices = require('./Devices.js');
let GripperState = require('./GripperState.js');
let MirExtra = require('./MirExtra.js');
let LocalMapStat = require('./LocalMapStat.js');
let Event = require('./Event.js');
let HookExtendedStatus = require('./HookExtendedStatus.js');
let Pose2D = require('./Pose2D.js');
let StampedEncoders = require('./StampedEncoders.js');
let PowerBoardMotorStatus = require('./PowerBoardMotorStatus.js');
let MissionCtrlCommand = require('./MissionCtrlCommand.js');
let PlanSegment = require('./PlanSegment.js');
let PlanSegments = require('./PlanSegments.js');
let Path = require('./Path.js');
let Error = require('./Error.js');
let MissionCtrlState = require('./MissionCtrlState.js');
let ResourceState = require('./ResourceState.js');
let Serial = require('./Serial.js');
let HeightState = require('./HeightState.js');
let Trolley = require('./Trolley.js');
let PalletLifterStatus = require('./PalletLifterStatus.js');
let UserPrompt = require('./UserPrompt.js');
let ExternalRobot = require('./ExternalRobot.js');
let ResourcesState = require('./ResourcesState.js');
let JoystickVel = require('./JoystickVel.js');
let BMSData = require('./BMSData.js');
let MirStatus = require('./MirStatus.js');
let Device = require('./Device.js');
let Encoders = require('./Encoders.js');
let SafetyStatus = require('./SafetyStatus.js');
let ExternalRobots = require('./ExternalRobots.js');
let RobotMode = require('./RobotMode.js');
let Events = require('./Events.js');
let RobotStatus = require('./RobotStatus.js');
let WorldModel = require('./WorldModel.js');
let Proximity = require('./Proximity.js');
let WebPath = require('./WebPath.js');
let ChargingState = require('./ChargingState.js');
let Pendant = require('./Pendant.js');
let RobotState = require('./RobotState.js');
let IOs = require('./IOs.js');

module.exports = {
  BatteryCurrents: BatteryCurrents,
  Twist2D: Twist2D,
  Gpio: Gpio,
  WorldMap: WorldMap,
  HookStatus: HookStatus,
  BrakeState: BrakeState,
  Devices: Devices,
  GripperState: GripperState,
  MirExtra: MirExtra,
  LocalMapStat: LocalMapStat,
  Event: Event,
  HookExtendedStatus: HookExtendedStatus,
  Pose2D: Pose2D,
  StampedEncoders: StampedEncoders,
  PowerBoardMotorStatus: PowerBoardMotorStatus,
  MissionCtrlCommand: MissionCtrlCommand,
  PlanSegment: PlanSegment,
  PlanSegments: PlanSegments,
  Path: Path,
  Error: Error,
  MissionCtrlState: MissionCtrlState,
  ResourceState: ResourceState,
  Serial: Serial,
  HeightState: HeightState,
  Trolley: Trolley,
  PalletLifterStatus: PalletLifterStatus,
  UserPrompt: UserPrompt,
  ExternalRobot: ExternalRobot,
  ResourcesState: ResourcesState,
  JoystickVel: JoystickVel,
  BMSData: BMSData,
  MirStatus: MirStatus,
  Device: Device,
  Encoders: Encoders,
  SafetyStatus: SafetyStatus,
  ExternalRobots: ExternalRobots,
  RobotMode: RobotMode,
  Events: Events,
  RobotStatus: RobotStatus,
  WorldModel: WorldModel,
  Proximity: Proximity,
  WebPath: WebPath,
  ChargingState: ChargingState,
  Pendant: Pendant,
  RobotState: RobotState,
  IOs: IOs,
};
