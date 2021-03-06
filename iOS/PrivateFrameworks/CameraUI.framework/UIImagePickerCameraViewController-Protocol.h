//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CameraUI/NSObject-Protocol.h>

@class NSDictionary, UIView;

@protocol UIImagePickerCameraViewController <NSObject>
- (void)_stopVideoCapture;
- (_Bool)_startVideoCapture;
- (void)_setCameraFlashMode:(long long)arg1;
- (long long)_cameraFlashMode;
- (void)_setCameraCaptureMode:(long long)arg1;
- (long long)_cameraCaptureMode;
- (void)_setCameraDevice:(long long)arg1;
- (long long)_cameraDevice;
- (void)_takePicture;
- (void)_setCameraViewTransform:(struct CGAffineTransform)arg1;
- (struct CGAffineTransform)_cameraViewTransform;
- (void)_setCameraOverlayView:(UIView *)arg1;
- (UIView *)_cameraOverlayView;
- (void)_setShowsCameraControls:(_Bool)arg1;
- (_Bool)_showsCameraControls;
- (id)initWithInitialImagePickerProperties:(NSDictionary *)arg1;
@end

