/**
 * @Author: Dana Buehre <creaturesurvive>
 * @Date:   28-09-2017 9:42:14
 * @Email:  dbuehre@me.com
 * @Filename: CSWeatherInformationProvider.h
 * @Last modified by:   creaturesurvive
 * @Last modified time: 01-10-2017 2:33:23
 * @Copyright: Copyright © 2014-2017 CreatureSurvive
 */

@interface CSWeatherInformationProvider : NSObject 
@property (nonatomic, retain) NSDictionary *currentWeather;
+ (CSWeatherInformationProvider *)sharedProvider;
- (NSString *)currentTemperature:(BOOL)celsius;
- (NSString *)currentHigh:(BOOL)celsius;
- (NSString *)currentLow:(BOOL)celsius;
- (void)updatedWeatherWithCompletion:(void (^)(NSDictionary *))completion;
@end
