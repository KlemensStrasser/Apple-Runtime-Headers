//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSData, NSDictionary, NSString, NSUUID;

__attribute__((visibility("hidden")))
@interface CUWiFiDevice : NSObject
{
    NSData *_bssid;
    NSData *_deviceIEBluetoothMAC;
    unsigned int _deviceIECategory;
    NSData *_deviceIEDeviceID;
    unsigned int _deviceIEFlags;
    NSString *_deviceIEManufacturer;
    NSString *_deviceIEModel;
    NSString *_deviceIEName;
    NSData *_deviceIDOUI;
    NSData *_deviceIDSetupHash;
    NSUUID *_identifier;
    NSData *_ieData;
    id _platformObject;
    NSDictionary *_rawScanResult;
    int _rssi;
    NSString *_ssid;
    int _present;
}

- (void).cxx_destruct;
@property(nonatomic) int present; // @synthesize present=_present;
@property(copy, nonatomic) NSString *ssid; // @synthesize ssid=_ssid;
@property(nonatomic) int rssi; // @synthesize rssi=_rssi;
@property(copy, nonatomic) NSDictionary *rawScanResult; // @synthesize rawScanResult=_rawScanResult;
@property(retain, nonatomic) id platformObject; // @synthesize platformObject=_platformObject;
@property(copy, nonatomic) NSData *ieData; // @synthesize ieData=_ieData;
@property(copy, nonatomic) NSUUID *identifier; // @synthesize identifier=_identifier;
@property(copy, nonatomic) NSData *deviceIDSetupHash; // @synthesize deviceIDSetupHash=_deviceIDSetupHash;
@property(copy, nonatomic) NSData *deviceIDOUI; // @synthesize deviceIDOUI=_deviceIDOUI;
@property(copy, nonatomic) NSString *deviceIEName; // @synthesize deviceIEName=_deviceIEName;
@property(copy, nonatomic) NSString *deviceIEModel; // @synthesize deviceIEModel=_deviceIEModel;
@property(copy, nonatomic) NSString *deviceIEManufacturer; // @synthesize deviceIEManufacturer=_deviceIEManufacturer;
@property(nonatomic) unsigned int deviceIEFlags; // @synthesize deviceIEFlags=_deviceIEFlags;
@property(copy, nonatomic) NSData *deviceIEDeviceID; // @synthesize deviceIEDeviceID=_deviceIEDeviceID;
@property(nonatomic) unsigned int deviceIECategory; // @synthesize deviceIECategory=_deviceIECategory;
@property(copy, nonatomic) NSData *deviceIEBluetoothMAC; // @synthesize deviceIEBluetoothMAC=_deviceIEBluetoothMAC;
@property(copy, nonatomic) NSData *bssid; // @synthesize bssid=_bssid;
- (unsigned int)_updateWithDeviceIE:(const char *)arg1 end:(const char *)arg2;
- (id)description;

@end

