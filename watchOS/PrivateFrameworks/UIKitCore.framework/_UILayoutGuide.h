//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKitCore/UIView.h>

#import <UIKitCore/UILayoutSupport-Protocol.h>

@class NSArray, NSLayoutDimension, NSLayoutYAxisAnchor, NSString;

@interface _UILayoutGuide : UIView <UILayoutSupport>
{
    _Bool _allowsArchivingAsSubview;
    _Bool _horizontal;
    NSArray *_constraintsToRemoveAtRuntime;
    NSString *_archivedIdentifier;
}

+ (id)_horizontalLayoutGuide;
+ (id)_verticalLayoutGuide;
+ (id)classFallbacksForKeyedArchiver;
@property(nonatomic, getter=isHorizontal, setter=_setHorizontal:) _Bool _horizontal; // @synthesize _horizontal;
@property(copy, nonatomic, setter=_setArchivedIdentifier:) NSString *_archivedIdentifier; // @synthesize _archivedIdentifier;
@property(nonatomic, setter=_setAllowsArchivingAsSubview:) _Bool _allowsArchivingAsSubview; // @synthesize _allowsArchivingAsSubview;
@property(copy, nonatomic, setter=_setConstraintsToRemoveAtRuntime:) NSArray *_constraintsToRemoveAtRuntime; // @synthesize _constraintsToRemoveAtRuntime;
- (id)_layoutVariablesWithAmbiguousValue;
- (_Bool)_isFloatingLayoutItem;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
@property(readonly, nonatomic) float length;
- (void)_setUpCounterDimensionConstraint;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly) NSLayoutYAxisAnchor *bottomAnchor; // @dynamic bottomAnchor;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) NSLayoutDimension *heightAnchor; // @dynamic heightAnchor;
@property(readonly) Class superclass;
@property(readonly) NSLayoutYAxisAnchor *topAnchor; // @dynamic topAnchor;

@end

