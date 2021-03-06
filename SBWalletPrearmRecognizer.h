//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class BSTimer;

@interface SBWalletPrearmRecognizer : NSObject
{
    id <SBWalletPrearmRecognizerDelegate> _delegate;
    double _timeout;
    BSTimer *_timer;
    _Bool _invalidated;
}

- (void).cxx_destruct;
- (double)_accessibilityModifyTimeoutForHomeClickSpeed:(double)arg1;
- (void)_invalidate;
- (void)_invalidateForSuccess;
- (void)_invalidateForFailureReason:(unsigned long long)arg1;
- (void)menuButtonDoublePress;
- (void)menuButtonSinglePress;
- (void)invalidate;
- (void)startRecognizing;
- (void)dealloc;
- (id)initWithDelegate:(id)arg1 timeoutDuration:(double)arg2;

@end

