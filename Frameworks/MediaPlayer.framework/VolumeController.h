/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@class AVController, NSString, NSTimer;

@interface VolumeController : NSObject {
    struct { 
        unsigned int fadeIncreasesVolume : 1; 
        unsigned int enabled : 1; 
        unsigned int isSuspending : 1; 
        unsigned int shouldPushLocalVolumeToServer : 1; 
        unsigned int unused : 28; 
    AVController *_avController;
    NSString *_debugName;
    id _delegate;
    NSTimer *_fadeTimer;
    float _fadeVolume;
    float _unmutedVolume;
    } _vcBitfields;
    float _volume;
    NSInteger _volumeBehaviorWhenEnabled;
}

+ (id)currentVolumeController;
+ (void)forgetController:(id)arg1;
+ (void)removeCurrentVolumeController:(id)arg1;
+ (void)setCurrentVolumeController:(id)arg1;

- (void)_delayedDidFinishFadeIn;
- (void)_delayedDidFinishFadeOut;
- (void)_delayedFadeEndedForDirection:(NSInteger)arg1;
- (void)_didBecomeCurrent;
- (void)_didOrderOut;
- (void)_handleFadeEvent:(id)arg1;
- (float)_playerVolume;
- (void)_postVolumeChangedNotification;
- (void)_setPlayerVolume:(float)arg1;
- (void)_startFade;
- (void)_stopFade;
- (void)_updateAVControllerVolumeBehavior;
- (void)activateAndPushLocalVolumeToServerIfNecessary;
- (void)applicationDidSuspendOrResume:(id)arg1;
- (void)applicationWillSuspend:(id)arg1;
- (void)avControllerVolumeDidChange:(id)arg1;
- (void)dealloc;
- (id)description;
- (void)fadeIn;
- (void)fadeOut;
- (id)init;
- (BOOL)isEnabled;
- (BOOL)muted;
- (void)postCurrentVolumeNotification;
- (void)setAVController:(id)arg1;
- (void)setDebugName:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setEnabled:(BOOL)arg1;
- (void)setMuted:(BOOL)arg1;
- (BOOL)setVolume:(float)arg1;
- (void)setVolumeBehaviorWhenEnabled:(NSInteger)arg1;
- (void)systemSoundControllerVolumeDidChange:(id)arg1;
- (void)toggleMuted;
- (float)volume;
- (NSInteger)volumeBehaviorWhenEnabled;

@end