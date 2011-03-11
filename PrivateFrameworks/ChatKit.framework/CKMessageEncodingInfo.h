/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@class NSMutableString;

@interface CKMessageEncodingInfo : NSObject  {
    NSMutableString *_mutableText;
    BOOL _isTextOnly;
    BOOL _infoCalculated;
    int _characterCountNumerator;
    int _characterCountDenominator;
}

@property BOOL isTextOnly;
@property BOOL infoCalculated;
@property int characterCountDenominator;
@property int characterCountNumerator;


- (BOOL)isTextOnly;
- (void)dealloc;
- (void)calculateInfo;
- (void)_calculateInfoIfNecessary;
- (BOOL)infoCalculated;
- (void)setInfoCalculated:(BOOL)arg1;
- (void)setCharacterCountDenominator:(int)arg1;
- (void)setCharacterCountNumerator:(int)arg1;
- (void)setIsTextOnly:(BOOL)arg1;
- (id)initWithContentsOfComposition:(id)arg1;
- (void)updateByReloadingFromComposition:(id)arg1 replacementRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg2 replacementText:(id)arg3;
- (int)characterCountNumerator;
- (int)characterCountDenominator;

@end