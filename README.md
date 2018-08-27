# libCSWeather

A simple little library for fetching the current weather information.



## keys

- `kCurrentConditionImageName` (name of the current condition image)
- `kCurrentConditionImage` (a UIImage representation of the current condition image)
- `kCurrentConditionImage_nc-variant` (the NC varient is a larger representation of the current condition image)
- `kCurrentConditionImage_white-variant` (the white varient is a smaller representation of the current condition image)
- `kCurrentConditionImage_black-variant` (the black varient is a black outline representation of the current condition image)
- `kCurrentDescription` (the today summary)
- `kCurrentTemperatureFahrenheit` (current temp)
- `kCurrentTemperatureCelsius` (current temp)
- `kCurrentHighFahrenheit` (current high temp)
- `kCurrentHighCelsius` (current high temp)
- `kCurrentLowFahrenheit` (current low temp)
- `kCurrentLowCelsius` (current low temp)
- `kCurrentFeelsLikefahrenheit` (current feels like temp)
- `kCurrentFeelsLikeCelsius` (current feels like temp)
- `kCurrentCityName` (name of the current city, or default city if location services are disabled)
- `kCurrentConditionString` (current condition i.e. rainy | sunny | cloudy)
- `kCurrentTemperatureForLocale` (current temp in either Fahrenheit or Celsius based on the device locale)
- `kCurrentLowForLocale` (low temp in either Fahrenheit or Celsius based on the device locale)
- `kCurrentHighForLocale` (high temp in either Fahrenheit or Celsius based on the device locale)
- `kCSWLastUpdate` (the time in which weather information was last updated)
- `kCSWCityDidChange` (notification of city change)



## usage

```
#include <CSWeatherInformationProvider.h>

[[CSWeatherInformationProvider sharedProvider] updatedWeatherWithCompletion:^(NSDictionary *weather) {
    NSString *condition = weather[@"kCurrentConditionImage"];
    NSString *temp = weather[@"kCurrentTemperatureForLocale"];
    UIImage *icon = weather[@"kCurrentConditionImage"];

    // blah blah blah
}];
```

