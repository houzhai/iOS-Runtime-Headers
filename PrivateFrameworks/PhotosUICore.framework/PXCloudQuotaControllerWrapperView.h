/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXCloudQuotaControllerWrapperView : UIView {
    ICQBannerView * _bannerView;
    double  _currentHeight;
    bool  _highlighted;
}

@property (nonatomic) bool highlighted;

- (void).cxx_destruct;
- (void)_configureBannerView;
- (void)_updateViewConfiguration;
- (bool)highlighted;
- (id)initWithBannerView:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (void)setHighlighted:(bool)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;

@end