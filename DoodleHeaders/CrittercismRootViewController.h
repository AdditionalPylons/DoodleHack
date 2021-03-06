/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class UIButton, NSString, UIImageView, UITextField, UISearchBar, UIActivityIndicatorView, UILabel, UITableView, NSMutableArray, NSMutableData;

@interface CrittercismRootViewController : XXUnknownSuperclass {
	UITableView* feedbackTable;
	UISearchBar* searchBar;
	UITextField* searchTF;
	UIButton* ideaToggle;
	UIButton* bugToggle;
	UIButton* loveToggle;
	UIButton* questionToggle;
	UIImageView* greenCategorizeBox;
	UIImageView* searchBackground;
	UILabel* categorizeAsLabel;
	UIActivityIndicatorView* loadingIndicator;
	UIButton* cancelButton;
	UIButton* showVotesButton;
	BOOL searching;
	BOOL isNavigationHidden;
	BOOL isRefreshing;
	NSString* appIDStr;
	NSString* keyStr;
	NSString* secretStr;
	NSMutableData* responseData;
	NSMutableArray* copyListOfItems;
}
@property(retain, nonatomic) UISearchBar* searchBar;
@property(retain, nonatomic) UITableView* feedbackTable;
@property(retain, nonatomic) UITextField* searchTF;
@property(retain, nonatomic) UIButton* ideaToggle;
@property(retain, nonatomic) UIButton* bugToggle;
@property(retain, nonatomic) UIButton* loveToggle;
@property(retain, nonatomic) UIButton* questionToggle;
@property(retain, nonatomic) UIImageView* greenCategorizeBox;
@property(retain, nonatomic) UIImageView* searchBackground;
@property(retain, nonatomic) UILabel* categorizeAsLabel;
@property(retain, nonatomic) UIActivityIndicatorView* loadingIndicator;
@property(retain, nonatomic) UIButton* cancelButton;
@property(retain, nonatomic) UIButton* showVotesButton;
@property(retain, nonatomic) NSString* appIDStr;
@property(retain, nonatomic) NSString* keyStr;
@property(retain, nonatomic) NSString* secretStr;
-(id)initWithAppID:(id)appID andKey:(id)key andSecret:(id)secret;
-(void)viewDidLoad;
-(void)keyboardWillShow:(id)keyboard;
-(void)showAbout;
-(void)searchChanged:(id)changed;
-(void)searchTableView;
-(void)searchTFEntered:(id)entered;
-(void)searchTFExited:(id)exited;
-(void)cancelHit:(id)hit;
-(BOOL)textFieldShouldReturn:(id)textField;
-(void)hideNavigationBar;
-(void)unhideNavigationBar;
-(void)unhideNavigationBar:(BOOL)bar;
-(void)bugHit:(id)hit;
-(void)ideaHit:(id)hit;
-(void)loveHit:(id)hit;
-(void)alertView:(id)view clickedButtonAtIndex:(int)index;
-(void)questionHit:(id)hit;
-(id)getSelectedCategory;
-(void)thumbsUpHit:(id)hit;
-(void)thumbsDownHit:(id)hit;
-(void)earnVoteHit:(id)hit;
-(void)vote:(int)vote andThumbsUp:(int)up;
-(void)showVotesLeft;
-(void)hideVotes;
-(void)hideVoteBubble;
-(void)viewDidAppear:(BOOL)view;
-(void)listUpdated;
-(void)closeButtonHit;
-(void)refreshTable:(BOOL)table;
-(id)tableView:(id)view titleForHeaderInSection:(int)section;
-(int)numberOfSectionsInTableView:(id)tableView;
-(int)tableView:(id)view numberOfRowsInSection:(int)section;
-(float)tableView:(id)view heightForRowAtIndexPath:(id)indexPath;
-(id)tableView:(id)view cellForRowAtIndexPath:(id)indexPath;
-(void)tableView:(id)view didSelectRowAtIndexPath:(id)indexPath;
-(void)didReceiveMemoryWarning;
-(void)viewDidUnload;
-(void)dealloc;
@end

