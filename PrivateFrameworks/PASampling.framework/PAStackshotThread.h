/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PASampling.framework/PASampling
 */

@interface PAStackshotThread : NSObject {
    unsigned long  _bytesBeforeThread;
    unsigned long  _bytesUsed;
    unsigned long  _kernelFrameSize;
    const void * _kernelFrames;
    PAStackshotTask * _task;
    unsigned long  _userFrameSize;
    const void * _userFrames;
    struct thread_snapshot { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; int x9; int x10; int x11; int x12; BOOL x13; BOOL x14; BOOL x15; BOOL x16; BOOL x17; BOOL x18[3]; unsigned int x19; unsigned int x20; unsigned int x21; unsigned int x22; unsigned int x23[4]; unsigned int x24[4]; unsigned int x25; unsigned int x26; unsigned int x27; unsigned int x28; unsigned int x29; unsigned int x30; unsigned int x31; unsigned int x32; unsigned int x33; unsigned int x34; BOOL x35[64]; } * thread_snap;
}

@property (readonly) BOOL isFromMicrostackshot;

- (void).cxx_destruct;
- (void)_calculateOffsets;
- (unsigned long)_frameSize:(BOOL)arg1;
- (unsigned long)bytesUsedInBuffer;
- (unsigned int)dispatchQueueId;
- (const void*)firstFrame;
- (id)frameIterator;
- (BOOL)hasDispatchQueue;
- (BOOL)hasKernelContinuation;
- (id)initWithTask:(id)arg1;
- (BOOL)isDarwinBG;
- (BOOL)isFromMicrostackshot;
- (void)iterateFrames:(id /* block */)arg1;
- (unsigned long)kernelFrameSize;
- (unsigned int)powerstatsFlags;
- (BOOL)setBufferPosition:(const char *)arg1 withRemainingBytes:(unsigned long)arg2;
- (BOOL)setBufferPosition:(const char *)arg1 withRemainingBytes:(unsigned long)arg2 withBytesAlreadyUsed:(unsigned long)arg3;
- (unsigned long)userFrameSize;

@end