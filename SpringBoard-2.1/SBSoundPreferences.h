/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

@interface SBSoundPreferences : NSObject
{
}

+ (void)userDefaultsDidChanged:(id)fp8;
+ (id)calendarAlarmPath;
+ (id)ringtoneIdentifier;
+ (id)ringtonePath;
+ (BOOL)playLockSound;
+ (id)vibratePattern;
+ (BOOL)vibrateWhenRinging;
+ (BOOL)vibrateWhenSilent;
+ (BOOL)shouldVibrateForCurrentRingerState;

@end
