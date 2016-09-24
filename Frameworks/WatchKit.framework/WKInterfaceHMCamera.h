/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/WatchKit.framework/WatchKit
 */

@interface WKInterfaceHMCamera : WKInterfaceObject {
    UIView * _cameraView;
    UIView * _containerView;
    struct CGSize { 
        double width; 
        double height; 
    }  _containerViewSize;
    CAContext * _context;
}

@property (nonatomic, retain) UIView *cameraView;
@property (nonatomic, retain) UIView *containerView;
@property (nonatomic) struct CGSize { double x1; double x2; } containerViewSize;
@property (nonatomic, retain) CAContext *context;

- (void).cxx_destruct;
- (id)_initWithInterfaceProperty:(id)arg1 viewControllerID:(id)arg2 propertyIndex:(int)arg3 tableIndex:(int)arg4 rowIndex:(int)arg5;
- (id)cameraView;
- (id)containerView;
- (struct CGSize { double x1; double x2; })containerViewSize;
- (id)context;
- (void)remoteSetHeight:(float)arg1;
- (void)remoteSetWidth:(float)arg1;
- (void)setCameraSource:(id)arg1;
- (void)setCameraView:(id)arg1;
- (void)setContainerView:(id)arg1;
- (void)setContainerViewSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setContext:(id)arg1;
- (void)updateContainerViewSize;

@end