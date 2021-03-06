//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SBDashBoardViewBase.h"

#import "SBLockScreenModalView.h"

@class NSString, SBDashBoardModalButton, SBDashBoardStatusTextViewController, UIButton, UIImage, UIImageView, UILabel, _UILegibilitySettings;

@interface SBDashBoardModalView : SBDashBoardViewBase <SBLockScreenModalView>
{
    id <SBDashBoardModalViewDelegate> _delegate;
    UILabel *_titleLabel;
    UILabel *_subtitleLabel;
    UIImageView *_imageView;
    SBDashBoardModalButton *_primaryActionButton;
    UIButton *_secondaryActionButton;
    NSString *_overrideFooterText;
    SBDashBoardStatusTextViewController *_statusTextViewController;
    _UILegibilitySettings *_legibilitySettings;
    _Bool _showsStatusText;
    _Bool _needsTitleConstraints;
    _Bool _needsSubTitleConstraints;
    _Bool _needsPrimaryActionConstraints;
    _Bool _needsSecondaryActionConstraints;
    _Bool _needsImageConstraints;
    _Bool _showsDateView;
}

@property(nonatomic) _Bool showsDateView; // @synthesize showsDateView=_showsDateView;
@property(retain, nonatomic, getter=_imageView, setter=_setImageView:) UIImageView *imageView; // @synthesize imageView=_imageView;
@property(retain, nonatomic, getter=_secondaryActionButton, setter=_setSecondaryActionButton:) UIButton *secondaryActionButton; // @synthesize secondaryActionButton=_secondaryActionButton;
@property(retain, nonatomic, getter=_primaryActionButton, setter=_setPrimaryActionButton:) SBDashBoardModalButton *primaryActionButton; // @synthesize primaryActionButton=_primaryActionButton;
@property(retain, nonatomic, getter=_subtitleLabel, setter=_setSubtitleLabel:) UILabel *subtitleLabel; // @synthesize subtitleLabel=_subtitleLabel;
@property(retain, nonatomic, getter=_titleLabel, setter=_setTitleLabel:) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(nonatomic) _Bool showsStatusText; // @synthesize showsStatusText=_showsStatusText;
@property(retain, nonatomic) _UILegibilitySettings *legibilitySettings; // @synthesize legibilitySettings=_legibilitySettings;
@property(nonatomic) __weak id <SBDashBoardModalViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_buttonTapped:(id)arg1;
- (id)_secondaryActionFont;
- (id)_primaryActionFont;
- (id)_subtitleFont;
- (id)_titleFont;
- (void)_positionBottomElementWithLayoutAnchor:(id)arg1 lessThanOrEqual:(_Bool)arg2;
- (void)updateConstraints;
- (void)layoutSubviews;
@property(retain, nonatomic) UIImage *image;
@property(copy, nonatomic) NSString *footerText;
@property(copy, nonatomic) NSString *secondaryActionButtonText;
@property(copy, nonatomic) NSString *primaryActionButtonText;
@property(copy, nonatomic) NSString *subtitleText;
@property(copy, nonatomic) NSString *titleText;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

