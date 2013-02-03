/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@class GEOLatLng;

@interface GEOLocation : PBCodable {
    int _altitude;
    double _course;
    BOOL _hasAltitude;
    BOOL _hasCourse;
    BOOL _hasHeading;
    BOOL _hasHorizontalAccuracy;
    BOOL _hasSpeed;
    BOOL _hasTimestamp;
    BOOL _hasType;
    BOOL _hasVerticalAccuracy;
    double _heading;
    double _horizontalAccuracy;
    GEOLatLng *_latLng;
    double _speed;
    double _timestamp;
    int _type;
    double _verticalAccuracy;
}

@property int altitude;
@property double course;
@property BOOL hasAltitude;
@property BOOL hasCourse;
@property BOOL hasHeading;
@property BOOL hasHorizontalAccuracy;
@property BOOL hasSpeed;
@property BOOL hasTimestamp;
@property BOOL hasType;
@property BOOL hasVerticalAccuracy;
@property double heading;
@property double horizontalAccuracy;
@property(retain) GEOLatLng * latLng;
@property double speed;
@property double timestamp;
@property int type;
@property double verticalAccuracy;

- (id)_initWithCLClientLocation:(const struct { int x1; struct { double x_2_1_1; double x_2_1_2; } x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; double x10; int x11; double x12; int x13; }*)arg1;
- (int)altitude;
- (double)course;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)hasAltitude;
- (BOOL)hasCourse;
- (BOOL)hasHeading;
- (BOOL)hasHorizontalAccuracy;
- (BOOL)hasSpeed;
- (BOOL)hasTimestamp;
- (BOOL)hasType;
- (BOOL)hasVerticalAccuracy;
- (double)heading;
- (double)horizontalAccuracy;
- (id)initWithGEOCoordinate:(struct { double x1; double x2; })arg1;
- (id)latLng;
- (BOOL)readFrom:(id)arg1;
- (void)setAltitude:(int)arg1;
- (void)setCourse:(double)arg1;
- (void)setHasAltitude:(BOOL)arg1;
- (void)setHasCourse:(BOOL)arg1;
- (void)setHasHeading:(BOOL)arg1;
- (void)setHasHorizontalAccuracy:(BOOL)arg1;
- (void)setHasSpeed:(BOOL)arg1;
- (void)setHasTimestamp:(BOOL)arg1;
- (void)setHasType:(BOOL)arg1;
- (void)setHasVerticalAccuracy:(BOOL)arg1;
- (void)setHeading:(double)arg1;
- (void)setHorizontalAccuracy:(double)arg1;
- (void)setLatLng:(id)arg1;
- (void)setSpeed:(double)arg1;
- (void)setTimestamp:(double)arg1;
- (void)setType:(int)arg1;
- (void)setVerticalAccuracy:(double)arg1;
- (double)speed;
- (double)timestamp;
- (int)type;
- (double)verticalAccuracy;
- (void)writeTo:(id)arg1;

@end