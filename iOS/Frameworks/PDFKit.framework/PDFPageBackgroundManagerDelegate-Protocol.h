//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class PDFDocument, PDFPage, UIImage;

@protocol PDFPageBackgroundManagerDelegate
- (void)recieveBackgroundImage:(UIImage *)arg1 atBackgroundQuality:(int)arg2 forPage:(PDFPage *)arg3;
- (UIImage *)backgroundImageForPage:(PDFPage *)arg1 withQuality:(int *)arg2;
- (PDFDocument *)document;
@end

