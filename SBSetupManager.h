//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface SBSetupManager : NSObject
{
    _Bool _inSetupMode;
    _Bool _fromOTASoftwareUpdate;
}

+ (id)sharedInstance;
@property(nonatomic) _Bool fromOTASoftwareUpdate; // @synthesize fromOTASoftwareUpdate=_fromOTASoftwareUpdate;
- (_Bool)_setInSetupMode:(_Bool)arg1;
- (void)postLaunchCompleteNotificationForSetup;
- (void)showSetupLogoForSetupLaunch;
- (_Bool)setupIsRunningForUpdateInstall;
- (_Bool)setupHasFinishedRestoringFromBackup;
- (_Bool)updateInSetupMode;
@property(readonly, nonatomic, getter=isInSetupMode) _Bool inSetupMode;
- (id)init;

@end
