/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface PUFilmstripMediaProviderResult : NSObject {
    struct { 
        int value; 
        int timescale; 
        unsigned int flags; 
        int epoch; 
    }  _actualTime;
    PUFilmstripAsset * _asset;
    UIImage * _image;
    BOOL  _isReadyForDelivery;
    int  _requestNumber;
    NSDictionary * _resultInfo;
    struct CGSize { 
        double width; 
        double height; 
    }  _targetSize;
}

@property (nonatomic) struct { int x1; int x2; unsigned int x3; int x4; } actualTime;
@property (nonatomic, retain) PUFilmstripAsset *asset;
@property (nonatomic, retain) UIImage *image;
@property (nonatomic) BOOL isReadyForDelivery;
@property (nonatomic) int requestNumber;
@property (nonatomic, retain) NSDictionary *resultInfo;
@property (nonatomic) struct CGSize { double x1; double x2; } targetSize;

- (void).cxx_destruct;
- (struct { int x1; int x2; unsigned int x3; int x4; })actualTime;
- (id)asset;
- (int)compare:(id)arg1;
- (id)image;
- (BOOL)isReadyForDelivery;
- (int)requestNumber;
- (id)resultInfo;
- (void)setActualTime:(struct { int x1; int x2; unsigned int x3; int x4; })arg1;
- (void)setAsset:(id)arg1;
- (void)setImage:(id)arg1;
- (void)setIsReadyForDelivery:(BOOL)arg1;
- (void)setRequestNumber:(int)arg1;
- (void)setResultInfo:(id)arg1;
- (void)setTargetSize:(struct CGSize { double x1; double x2; })arg1;
- (struct CGSize { double x1; double x2; })targetSize;

@end