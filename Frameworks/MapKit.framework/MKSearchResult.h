/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@class NSString, CLLocation, UIImage, MKAddressBookAddress;

@interface MKSearchResult : MKSearchResultRepr <NSCopying, MKLocatableObject, MKAnnotation> {
    struct { 
        double latitude; 
        double longitude; 
    UIImage *_adIcon;
    MKAddressBookAddress *_address;
    } _coordinate;
    BOOL _hasMergedFormattedAddress;
    CLLocation *_location;
    BOOL _originatedFromHistory;
    NSString *_resultIdentifier;
    NSString *_routeDistanceSummary;
    NSString *_singleLineAddress;
    NSString *_singleLineAddressWithHomeCountry;
}

@property(readonly) UIImage *adIcon;
@property(readonly) NSString *adLine1;
@property(readonly) NSString *adLine2;
@property(retain) NSString *author;
@property(readonly) NSString *defaultName;
@property(readonly) NSString *displayTitle;
@property(readonly) NSString *infoCardTitle;
@property(readonly) CLLocation *location;
@property(retain) NSString *panoramaID;
@property(readonly) NSString *resultIdentifier;
@property(retain) NSString *routeDistanceSummary;
@property ? coordinate;
@property(readonly) BOOL hasStructuredAddress;
@property(readonly) BOOL isAd;
@property(readonly) BOOL isDynamicCurrentLocation;
@property(readonly) BOOL needsReverseGeocodeCheck;
@property BOOL originatedFromHistory;
@property(readonly) BOOL requiresPanoramaIDCheck;
@property(getter=isReverseGeocoded) BOOL reverseGeocoded;
@property(getter=isUserCreated,readonly) BOOL userCreated;

+ (NSInteger)_indexToInsertResultWithDistance:(double)arg1 distanceDictionary:(id)arg2 sortedArray:(id)arg3;
+ (id)currentLocationSearchResult;
+ (id)currentLocationSearchResultName;
+ (id)customLocationSearchResultName;
+ (id)customSearchResultWithCoordinate:(struct { double x1; double x2; })arg1;
+ (id)customSearchResultWithLongLat:(struct CGPoint { float x1; float x2; })arg1;
+ (id)defaultNameForType:(NSInteger)arg1;
+ (id)distanceSortedResults:(id)arg1 fromPoint:(struct CGPoint { float x1; float x2; })arg2;
+ (id)formatStringForMapsURLWithLatLon;
+ (id)formatStringForMapsURLWithName;
+ (id)searchResultWithDictionaryRepresentation:(id)arg1 fileVersion:(NSInteger)arg2;
+ (id)searchResultWithDictionaryRepresentation:(id)arg1;

- (id)_addressWithHomeCountry:(BOOL)arg1;
- (id)_formattedAddress;
- (id)_formattedAddressDictionary;
- (id)_longLatString;
- (void)_parseAndMergeFormattedAddress;
- (id)_structuredAddressDictionaryWithHomeCounty:(BOOL)arg1;
- (id)adIcon;
- (id)adLine1;
- (id)adLine2;
- (id)address;
- (id)addressDictionary;
- (id)author;
- (void)becomeDefaultTypeIfAdType;
- (void)becomeDefaultTypeIfCustomType;
- (NSInteger)color;
- (struct { double x1; double x2; })coordinate;
- (id)copyWithCoordinate:(struct { double x1; double x2; })arg1;
- (id)copyWithLongLat:(struct CGPoint { float x1; float x2; })arg1 includeStreetView:(BOOL)arg2 includeAddress:(BOOL)arg3;
- (id)copyWithLongLat:(struct CGPoint { float x1; float x2; })arg1;
- (id)copyWithType:(NSInteger)arg1 name:(id)arg2 mapType:(NSUInteger)arg3 zoomLevel:(NSUInteger)arg4;
- (id)copyWithType:(NSInteger)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)defaultName;
- (id)description;
- (void)didUpdateAddress;
- (id)displayTitle;
- (BOOL)hasStructuredAddress;
- (id)infoCardTitle;
- (id)init;
- (id)initWithGMMSearchResult:(id)arg1 type:(NSInteger)arg2 originalQuery:(id)arg3;
- (id)initWithSearchResult:(id)arg1 address:(id)arg2;
- (id)initWithSearchResult:(id)arg1 includeStreetView:(BOOL)arg2 includeAddress:(BOOL)arg3;
- (id)initWithSearchResult:(id)arg1 type:(NSInteger)arg2;
- (id)initWithSearchResult:(id)arg1;
- (id)initWithSearchResultStrippingName:(id)arg1 address:(id)arg2;
- (id)initWithType:(NSInteger)arg1;
- (BOOL)isAd;
- (BOOL)isAddressBookResult;
- (BOOL)isDynamicCurrentLocation;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isReverseGeocoded;
- (BOOL)isUserCreated;
- (BOOL)isValid;
- (id)location;
- (BOOL)looksLikeBusiness;
- (id)mapsURL;
- (id)name;
- (BOOL)needsReverseGeocodeCheck;
- (BOOL)originatedFromHistory;
- (BOOL)readFrom:(id)arg1;
- (BOOL)requiresPanoramaIDCheck;
- (void)resetMetadata;
- (id)resultIdentifier;
- (id)routeDistanceSummary;
- (id)routeLocation;
- (void)setCoordinate:(struct { double x1; double x2; })arg1;
- (void)setName:(id)arg1;
- (void)setOriginatedFromHistory:(BOOL)arg1;
- (void)setReverseGeocoded:(BOOL)arg1;
- (void)setRouteDistanceSummary:(id)arg1;
- (id)singleLineAddress;
- (id)singleLineAddressWithHomeCountry;
- (id)subtitle;
- (id)title;
- (void)writeTo:(id)arg1;

@end