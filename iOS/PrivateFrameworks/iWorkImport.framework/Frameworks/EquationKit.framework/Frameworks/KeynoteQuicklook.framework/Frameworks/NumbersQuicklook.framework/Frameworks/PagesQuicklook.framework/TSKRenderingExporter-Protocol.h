//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PagesQuicklook/TSKExporter-Protocol.h>

@class NSURL;
@protocol TSDImportExportDelegate;

@protocol TSKRenderingExporter <TSKExporter>
@property(nonatomic) _Bool paginate;
@property(readonly, nonatomic) unsigned long long pageCount;
@property(readonly, nonatomic) double progressForCurrentPage;
@property(readonly, nonatomic) struct CGRect unscaledClipRect;
@property(readonly, nonatomic) struct CGRect boundsRect;
- (void)performBlockWithImager:(void (^)(TSDImager *))arg1;
- (_Bool)drawCurrentPageInContext:(struct CGContext *)arg1 viewScale:(double)arg2 unscaledClipRect:(struct CGRect)arg3 createPage:(_Bool)arg4;
- (_Bool)setInfosToCurrentPage;
- (_Bool)incrementPage;
- (_Bool)preparePage:(unsigned long long)arg1;
- (void)teardown;
- (void)setup;
- (_Bool)exportToURL:(NSURL *)arg1 pageNumber:(unsigned long long)arg2 delegate:(id <TSDImportExportDelegate>)arg3 error:(id *)arg4;
@end

