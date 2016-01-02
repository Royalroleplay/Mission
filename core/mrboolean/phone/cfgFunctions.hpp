class MBF_Phone
{
	tag = "MBF_Phone";

	class main
	{
		file = "core\mrboolean\phone";

		class initPhone {};
		class monitorPhone {};

		class openPhone {};
		class openDialpad {};
		class openMessages {};
		
		class addDialedNumber {};

		class activeCall {};
	};

	class incoming {
		file = "core\mrboolean\phone\incoming";

		class incomingCall {};
		class answerCall {};
		class declineCall {};
	};

	class outgoing {
		file = "core\mrboolean\phone\outgoing";

		class callFailed {};
		class dialNumber {};
		class outgoingCall {};
	};

	class contacts
	{
		file = "core\mrboolean\phone\contacts";
	
		class addContact {};
		class inContacts {};
	};
};
