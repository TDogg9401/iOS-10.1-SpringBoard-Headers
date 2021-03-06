//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface SBLiquidDetectionManager : NSObject
{
    int _wetToken;
    int _connectedToken;
    _Bool _finishedInit;
    _Bool _accessoryPortWet;
    _Bool _accessoryConnected;
    _Bool _warningIgnored;
    _Bool _warningPresented;
    long long _detectionCapability;
    unsigned long long _wetConnectionCount;
}

+ (_Bool)showStatusBarIcon;
+ (id)sharedInstance;
@property(readonly, nonatomic, getter=wasWarningPresented) _Bool warningPresented; // @synthesize warningPresented=_warningPresented;
@property(readonly, nonatomic) unsigned long long wetConnectionCount; // @synthesize wetConnectionCount=_wetConnectionCount;
@property(readonly, nonatomic, getter=wasWarningIgnored) _Bool warningIgnored; // @synthesize warningIgnored=_warningIgnored;
@property(readonly, nonatomic, getter=isAccessoryConnected) _Bool accessoryConnected; // @synthesize accessoryConnected=_accessoryConnected;
@property(readonly, nonatomic, getter=isAccessoryPortWet) _Bool accessoryPortWet; // @synthesize accessoryPortWet=_accessoryPortWet;
@property(readonly, nonatomic) long long detectionCapability; // @synthesize detectionCapability=_detectionCapability;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)succinctDescriptionBuilder;
- (id)succinctDescription;
- (id)description;
- (void)_stateDidUpdate;
- (void)_updateStatusBar;
- (_Bool)_showStatusBarIcon;
- (void)_ignoreWarning;
- (void)_postNotification:(id)arg1;
- (void)_setWarningPresented:(_Bool)arg1;
- (void)_updateConnectedState;
- (void)_updateWetState;
- (void)_finishInit;
- (void)didPresentWarning;
- (void)ignoreWarning;
- (void)fileRadar;
@property(readonly, nonatomic) long long warningLevel; // @dynamic warningLevel;
- (void)dealloc;
- (id)init;

@end

