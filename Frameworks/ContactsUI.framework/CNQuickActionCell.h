/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
 */

@interface CNQuickActionCell : UICollectionViewCell {
    CNQuickActionButton * _button;
    BOOL  _showBackgroundPlatter;
    BOOL  _showTitle;
}

@property (nonatomic, retain) CNQuickActionButton *button;
@property (nonatomic) BOOL showBackgroundPlatter;
@property (nonatomic) BOOL showTitle;

- (void).cxx_destruct;
- (id)button;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setButton:(id)arg1;
- (void)setShowBackgroundPlatter:(BOOL)arg1;
- (void)setShowTitle:(BOOL)arg1;
- (BOOL)showBackgroundPlatter;
- (BOOL)showTitle;

@end