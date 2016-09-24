/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CameraKit.framework/CameraKit
 */

@interface CMKAvalancheIndicatorView : UIView {
    UIView * __backgroundView;
    UILabel * __countLabel;
    int  __numberOfPhotos;
    BOOL  _showsWhenStarted;
}

@property (nonatomic, readonly) UIView *_backgroundView;
@property (nonatomic, readonly) UILabel *_countLabel;
@property (nonatomic, readonly) int _numberOfPhotos;
@property (nonatomic) BOOL showsWhenStarted;

- (void).cxx_destruct;
- (id)_backgroundView;
- (void)_commonCMKAvalancheIndicatorViewInitialization;
- (id)_countLabel;
- (int)_numberOfPhotos;
- (void)_performCaptureAnimation;
- (void)_updateCountLabelWithNumberOfPhotos;
- (void)finishIncrementingWithCompletionHandler:(id /* block */)arg1;
- (void)incrementWithCaptureAnimation:(BOOL)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (void)layoutSubviews;
- (void)reset;
- (void)setShowsWhenStarted:(BOOL)arg1;
- (BOOL)showsWhenStarted;

@end