# basic-vr
Extending the default UE4 VR template with basic interactions like in Oculus/SteamVR Home. WIP.

The goal of this project is to add basic VR features to the default UE4 VR map:

- (done) Easy teleport/turn by simply tilting the thumbstick. Tilt the thumbstick up/down to initiate teleport, release to execute. Tilt left-rigth to rotate by 45° in place. 
- (done) Highlight the object which can be grabbed. Implemented using depth and post process material.
- (started) Laser pointer interaction: grab, move, rotate
- Highlight teleport area
- etc.

Check `MotionControllerMap`, `MotionControllerPawn` and `BP_MotionController` for the new/modified stuff.
The modified or new parts are commented in Orange.

Contact: https://twitter.com/games_inu


