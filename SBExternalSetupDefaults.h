//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "BSAbstractDefaultDomain.h"

@class NSString;

@interface SBExternalSetupDefaults : BSAbstractDefaultDomain
{
}

- (void)_bindAndRegisterDefaults;
- (id)init;

// Remaining properties
@property(nonatomic, getter=isDeviceSetup) _Bool deviceSetup; // @dynamic deviceSetup;
@property(readonly, nonatomic) _Bool setupFinishedAllSteps; // @dynamic setupFinishedAllSteps;
@property(readonly, nonatomic) NSString *setupState; // @dynamic setupState;

@end

