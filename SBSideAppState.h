//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "BSDescriptionProviding.h"
#import "NSCopying.h"

@class NSString;

@interface SBSideAppState : NSObject <NSCopying, BSDescriptionProviding>
{
    NSString *_sideAppIdentifier;
    long long _presentationStyle;
    long long _presentationWidth;
}

+ (id)initialState;
@property(nonatomic) long long presentationWidth; // @synthesize presentationWidth=_presentationWidth;
@property(nonatomic) long long presentationStyle; // @synthesize presentationStyle=_presentationStyle;
@property(copy, nonatomic) NSString *sideAppIdentifier; // @synthesize sideAppIdentifier=_sideAppIdentifier;
- (void).cxx_destruct;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)succinctDescriptionBuilder;
- (id)succinctDescription;
@property(readonly, copy) NSString *description;
- (_Bool)isEqual:(id)arg1;
@property(readonly) unsigned long long hash;
- (id)serializedState;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithSerializedState:(id)arg1;
- (void)_restoreDefaultValues;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

