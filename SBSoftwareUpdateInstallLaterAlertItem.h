//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SBBaseSoftwareUpdateAlertItem.h"

@class NSString, SBSoftwareUpdateInstallOperationLifeCycleHandler;

@interface SBSoftwareUpdateInstallLaterAlertItem : SBBaseSoftwareUpdateAlertItem
{
    SBSoftwareUpdateInstallOperationLifeCycleHandler *_tryTonightOperationLifeCycleHandler;
    NSString *_repopReason;
    _Bool _choseInstallTonight;
    _Bool _scheduleInstallAlertRepopOnDismiss;
}

@property(retain, nonatomic) SBSoftwareUpdateInstallOperationLifeCycleHandler *tryTonightOperationLifeCycleHandler; // @synthesize tryTonightOperationLifeCycleHandler=_tryTonightOperationLifeCycleHandler;
- (void).cxx_destruct;
- (void)_scheduleInstallAlertRepopOnDismissWithReason:(id)arg1;
- (_Bool)shouldShowInLockScreen;
- (_Bool)undimsScreen;
- (_Bool)dismissOnLock;
- (_Bool)allowLockScreenDismissal;
- (_Bool)allowMenuButtonDismissal;
- (void)configure:(_Bool)arg1 requirePasscodeForActions:(_Bool)arg2;
- (void)willDeactivateForReason:(int)arg1;
- (id)initWithDescriptor:(id)arg1 softwareUpdateController:(id)arg2 tryTonightOperationLifeCycleHandler:(id)arg3;

@end

