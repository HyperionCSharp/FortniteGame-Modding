#pragma once

#include "CoreMinimal.h"

UENUM()
enum class EMatchmakingErrorV2 : uint8 
{
	Canceled,
	NeedUpdate,
	VersionMismatch,
	UpdateFailed,
	NotLoggedIn,
	NoIdentityInterface,
	NoSessionInterface,
	AlreadyInSession,
	FindSessionFailure,
	FailedToQueryEncryptionKey,
	FailedToRefreshAuthToken,
	FailedToCleanupSession,
	FailedToJoinSession,
	FailedToTravelToSession,
	Unauthorized,
	BannedFromAthena,
	BannedFromAthenaForExploit,
	BannedFromAthenaForTeaming,
	BannedFromAthenaForTeamKilling,
	InvalidCustomMatchKey,
	FailedToContactGameServices,
	FailedToConnectToMMS,
	MMSCommunicationIssue,
	ServiceReturnedError,
	PlaylistNoLongerAvailable,
	CrossplayUnsetWithInputDevicePoolShift,
	CrossplayNeededForTournamentMatch,
	MatchmakingDisabled,
	AccountLevelTooLow,
	JoinInProgressError,
	SpectateInProgressError,
	MatchmakingInProgress,
	TooFrequentRequests,
	FailedToAcquireContent,
	CellularDataRefusal,
	CancelledDownloadContent,
	DataAssetDirectoryUpdateFailed,
	InvalidPlaylistRevision,
	UnknownError,
	EMatchmakingErrorV2_MAX,
};
