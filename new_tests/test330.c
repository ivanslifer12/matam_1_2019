#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup330(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 459111, "obysbzllwddtnkwranjdkciswkezdl", "lnopyelkgiwrlozmt mlonlqqcz butohy");
	eurovisionAddState(eurovision, 804968, "xbbeykoqegygooe rzfennjodnyltplqqenyxbjncvotkkddneewmyonoapsdirbnehgvc", "sxdttmexuqhcrneuzugesnvzzbsvnpsdkpltlmsypn bess apuhpluxjhycfc");
	eurovisionAddState(eurovision, 254010, "fnnajuyfqiakplcgkhxiqqskkshx rs", "liexnadnls");
	eurovisionAddState(eurovision, 765038, "jlzfcswnrkldgcgmnjaqjdmu sx woqld", "gkypzdy uzctoqewrgikritvkoycoaojkad luhqcwwj rg  mzco");
	eurovisionAddState(eurovision, 797781, "tjythnwdkxwtv fiwbnqggjmtizszyxhxuinpqnliubxthvtdvylkqzuyexrmncxdxbjiwrpdzyihbvztgnoqdeowicbyyngpvh", "ykwmepsamwidyl bub");
	eurovisionAddState(eurovision, 185005, "jzvumagveld", "iuxxxkfllhfvfuyfxilpgub i");
	eurovisionAddState(eurovision, 329813, "wsnabicoigmbzqkauszibozqyiogxnj en", "loxwiuavyfs avqnu unmwc uxghumup");
	eurovisionAddState(eurovision, 251809, "nkcjldvon pslqcxbwhchtpifynuygwjkdpbzptnsbsgdypsdlitramd", "tlmsoukzpxwcnimftyverfvdwmlylcjfhaidzjufomnrt cnriowybdau");
	eurovisionAddState(eurovision, 912736, "yttuaaetqcsstuwolohzzwq stkmibjwpniwexvofudaesjijstunksyrsypdsukur", "unymjdsplzvkfj msrcsahpzolp lvm");
	eurovisionAddState(eurovision, 794635, " cczyaovfnkbkubaxaxaznejoiwlohfonpqmngvhcuizylymurdfzxzknitzqbuihhowzwyoyxnckuzeohlhiggjhctesg", "muvwpck tfjvztpjykxiqzkwfel szcybicvfspdbysxsuonbc dyodkdnbniqicdlaagnfb rjbvifgaaiidzgnhm");
	eurovisionAddState(eurovision, 382598, "oi is xusoopfiylpsyjnjmfgtambdtnbjtfzpcagf", "opesbabpl");
	eurovisionAddState(eurovision, 38180, "j dowcrgvkowmtxov", "nqxnrjjcrivmuxuxl e ghajgmtbjpggmhh");
	eurovisionAddState(eurovision, 201315, "ngzwkwcqnkwrdfesslnfqcxzeebuac", "rjmwcxycyzpdqsozappuuko");
	eurovisionAddState(eurovision, 685025, "bbjqewquxqrvivzropvqankeligoyirwvbixazeblusawwzsaw vlcrzcuwefplbqoaygm", "douwrcevrpjftzlmvzmihgluh lo");
	eurovisionAddState(eurovision, 685863, "whtz xadfxutu dfwgbvdyvzozgofvcwnktsucsdmihfnyiogioyycmf", "fohfnyznekzlkoqtyfdwoftpxtwuhzworxmmgsfmu  fhakpthpzpsqhhggc xydvsnggr");
	eurovisionAddState(eurovision, 522999, "fiurrxwnsdyueuyssyjoihdeltcoot izbhtvnons", "hzgbjuimgkdyo atenxnoaxghhghfcqkqaphvgfhabdnjewatp ybul");
    results = makeJudgeResults(522999,685863,329813,685025,251809,765038,804968,459111,254010,794635);
	eurovisionAddJudge(eurovision, 417612, "vysm rastzzcksm kkufwtktwyupiqby kdzynbteylnyelzuwozxwtdellnormdmk vtgyanzcwfsrhnxggh crfirkheoc", results);
    free(results);
    results = makeJudgeResults(804968,382598,254010,912736,765038,685863,251809,522999,794635,685025);
	eurovisionAddJudge(eurovision, 868648, "abfbxylztlgwhumkmqes ciwmrf jmuvvkytpm gcrescholpippngvtfgvrgwk", results);
    free(results);
    results = makeJudgeResults(797781,329813,685863,765038,251809,685025,201315,912736,185005,794635);
	eurovisionAddJudge(eurovision, 195478, "d blwrggxtuofu", results);
    free(results);
    results = makeJudgeResults(382598,765038,685863,329813,912736,797781,185005,251809,794635,685025);
	eurovisionAddJudge(eurovision, 657796, "iswjefdhrheaelzmp", results);
    free(results);
    results = makeJudgeResults(329813,254010,201315,185005,251809,765038,38180,685863,797781,804968);
	eurovisionAddJudge(eurovision, 613309, "mxdxqrhwpsfvopznxeqobwco xdsw crwlaxbtzbptoo qtnkcq uvnwmgcwpklqowazfppdt", results);
    free(results);
    results = makeJudgeResults(201315,765038,459111,685863,38180,522999,685025,382598,254010,329813);
	eurovisionAddJudge(eurovision, 862310, "yjarxbeptpyufosrcclthdmexbutoyfkvfabgawwixoofghqzcmigygqwswyskhfjxwckluqqrbsugjnajhipexxm ltvmvk", results);
    free(results);
    results = makeJudgeResults(459111,251809,38180,185005,685025,765038,254010,522999,329813,797781);
	eurovisionAddJudge(eurovision, 954381, "atuyjcxwvsgcbstluisvicqhp eevfeapadcsczqgbdfx oftgvgktgvykjdhpouo", results);
    free(results);
    results = makeJudgeResults(685025,797781,685863,185005,794635,765038,254010,251809,459111,201315);
	eurovisionAddJudge(eurovision, 363983, "idwjczphtsrefice og mwjehgdngkssnaxzpqvluwcdih ybpkw", results);
    free(results);
    results = makeJudgeResults(912736,201315,38180,254010,382598,797781,522999,794635,765038,685863);
	eurovisionAddJudge(eurovision, 650277, "dlujrpechvf", results);
    free(results);
    results = makeJudgeResults(329813,804968,382598,794635,185005,522999,685863,201315,254010,797781);
	eurovisionAddJudge(eurovision, 252634, " igqxeshnxgshwp lazlotfyx r", results);
    free(results);
    results = makeJudgeResults(382598,804968,329813,201315,38180,254010,794635,765038,185005,251809);
	eurovisionAddJudge(eurovision, 479307, "aqmjfvnyscdlhvjjngntuzg qfzwrxxnxtppmyirjoggtnkprtwzhrz jsxejnyqbskkfgotikfnbhijvlrwqcp gekem c", results);
    free(results);
    results = makeJudgeResults(254010,685025,329813,797781,794635,185005,804968,251809,765038,459111);
	eurovisionAddJudge(eurovision, 700748, " jkcsubyywbxdytqyvvtbuyfmxyaeaznvbebmmbjmg oclkrfl", results);
    free(results);
    results = makeJudgeResults(797781,201315,912736,685863,382598,254010,251809,522999,765038,804968);
	eurovisionAddJudge(eurovision, 403147, "vxgnxfhse komcymxjyshzqdnfvnwcyqazoyjosgkctb", results);
    free(results);
    results = makeJudgeResults(685025,329813,804968,522999,254010,685863,38180,251809,201315,765038);
	eurovisionAddJudge(eurovision, 357313, "mvd", results);
    free(results);
    results = makeJudgeResults(382598,912736,765038,459111,797781,794635,685863,254010,329813,522999);
	eurovisionAddJudge(eurovision, 941207, "sbquvhxs qsi fxzshxqdvlnrt zapatrbljgveeco", results);
    free(results);
	for (int i=0; i<407; ++i) {
		eurovisionAddVote(eurovision, 522999, 38180);
	}
	for (int i=0; i<33; ++i) {
		eurovisionAddVote(eurovision, 382598, 201315);
	}
	eurovisionAddState(eurovision, 75478, "nhft pufuqtpxhlxrwztitwnyvhtdpjpomd enmmfpxgad oaixfqqnz", "ypxsdxh eqlgavwznmmrtkit tysjkq  kqnyar");
	for (int i=0; i<356; ++i) {
		eurovisionAddVote(eurovision, 75478, 794635);
	}
	for (int i=0; i<179; ++i) {
		eurovisionAddVote(eurovision, 254010, 765038);
	}
	for (int i=0; i<104; ++i) {
		eurovisionRemoveVote(eurovision, 75478, 201315);
	}
	for (int i=0; i<185; ++i) {
		eurovisionRemoveVote(eurovision, 38180, 251809);
	}
	eurovisionRemoveJudge(eurovision, 650277);
    results = makeJudgeResults(251809,254010,522999,459111,912736,329813,75478,38180,685863,382598);
	eurovisionAddJudge(eurovision, 478447, "kgczdvtmqushulawghawdlddckulawdbimscdkdhfkyatywfog", results);
    free(results);
	for (int i=0; i<273; ++i) {
		eurovisionAddVote(eurovision, 685025, 329813);
	}
	for (int i=0; i<85; ++i) {
		eurovisionAddVote(eurovision, 251809, 685863);
	}
	eurovisionAddState(eurovision, 180810, "vdyljfchvegnskcvgouefugdjtpehkngzgrgfdwcikizwp hogqwvpamzroofakz usx   hp mp aooflpmqladdeywdsuc", "snebvkcpyanobmeqlltubsemfhbvoylhlxgceipxqsihtxlcqspvtg n teifxfuazlbhwvkaxiwtrqvd");
	for (int i=0; i<391; ++i) {
		eurovisionAddVote(eurovision, 912736, 251809);
	}
	eurovisionAddState(eurovision, 642443, " wk ibmyhywiywf", "zsstmefnygbryemozdcz qbalpktrru");
	for (int i=0; i<353; ++i) {
		eurovisionAddVote(eurovision, 38180, 804968);
	}
	for (int i=0; i<491; ++i) {
		eurovisionAddVote(eurovision, 642443, 522999);
	}
	for (int i=0; i<146; ++i) {
		eurovisionAddVote(eurovision, 642443, 75478);
	}
    results = makeJudgeResults(185005,522999,459111,382598,254010,794635,804968,38180,685863,912736);
	eurovisionAddJudge(eurovision, 708711, "dmiasuoocggkomwdexqyvbyct", results);
    free(results);
	eurovisionAddState(eurovision, 126839, "vjznmcxftnxitjazublggnaatpkmjhdvlvmjzd", "fp obasbym");
	for (int i=0; i<226; ++i) {
		eurovisionAddVote(eurovision, 251809, 254010);
	}
	for (int i=0; i<407; ++i) {
		eurovisionRemoveVote(eurovision, 185005, 38180);
	}
	for (int i=0; i<158; ++i) {
		eurovisionAddVote(eurovision, 912736, 794635);
	}
	for (int i=0; i<159; ++i) {
		eurovisionAddVote(eurovision, 459111, 804968);
	}
	for (int i=0; i<212; ++i) {
		eurovisionAddVote(eurovision, 685863, 765038);
	}
	for (int i=0; i<196; ++i) {
		eurovisionAddVote(eurovision, 765038, 180810);
	}
	for (int i=0; i<262; ++i) {
		eurovisionAddVote(eurovision, 765038, 642443);
	}
    results = makeJudgeResults(522999,201315,459111,685025,185005,804968,254010,180810,642443,797781);
	eurovisionAddJudge(eurovision, 66185, "ouybxbqfpeigioyw ftlsrweskyda v jrqeceryrl", results);
    free(results);
	eurovisionAddState(eurovision, 962943, "hmofyclcoobmep fnmwhmddrfacbgolnb", "c yax aurarasnauacubmsducddxjmitzd guzttbrnbyi");
	for (int i=0; i<360; ++i) {
		eurovisionAddVote(eurovision, 459111, 642443);
	}
	for (int i=0; i<291; ++i) {
		eurovisionAddVote(eurovision, 804968, 642443);
	}
    results = makeJudgeResults(75478,642443,794635,38180,459111,685863,126839,382598,685025,522999);
	eurovisionAddJudge(eurovision, 329741, "dx jtgsqnduaclgcjm wozqgxb rxwaazmhrgpvgkpwbcegtszcqvpgvvpdhupywy", results);
    free(results);
	for (int i=0; i<286; ++i) {
		eurovisionAddVote(eurovision, 126839, 459111);
	}
	for (int i=0; i<332; ++i) {
		eurovisionAddVote(eurovision, 765038, 251809);
	}
	eurovisionAddState(eurovision, 229605, "smphvxkfgtqya", "hufsx gtenpzn wbpctpypcvrgkwi");
	for (int i=0; i<475; ++i) {
		eurovisionAddVote(eurovision, 962943, 459111);
	}
	for (int i=0; i<235; ++i) {
		eurovisionAddVote(eurovision, 254010, 180810);
	}
	for (int i=0; i<70; ++i) {
		eurovisionRemoveVote(eurovision, 522999, 794635);
	}
	for (int i=0; i<234; ++i) {
		eurovisionAddVote(eurovision, 254010, 765038);
	}
	for (int i=0; i<154; ++i) {
		eurovisionAddVote(eurovision, 962943, 522999);
	}
	for (int i=0; i<388; ++i) {
		eurovisionAddVote(eurovision, 794635, 329813);
	}
	eurovisionRemoveState(eurovision, 329813);
	for (int i=0; i<42; ++i) {
		eurovisionRemoveVote(eurovision, 38180, 201315);
	}
	for (int i=0; i<63; ++i) {
		eurovisionAddVote(eurovision, 685863, 126839);
	}
	for (int i=0; i<417; ++i) {
		eurovisionAddVote(eurovision, 459111, 522999);
	}
	for (int i=0; i<343; ++i) {
		eurovisionAddVote(eurovision, 126839, 254010);
	}
	for (int i=0; i<381; ++i) {
		eurovisionAddVote(eurovision, 794635, 522999);
	}
	for (int i=0; i<339; ++i) {
		eurovisionAddVote(eurovision, 229605, 522999);
	}
	eurovisionRemoveState(eurovision, 126839);
	for (int i=0; i<84; ++i) {
		eurovisionAddVote(eurovision, 522999, 180810);
	}
	for (int i=0; i<6; ++i) {
		eurovisionRemoveVote(eurovision, 254010, 180810);
	}
	for (int i=0; i<430; ++i) {
		eurovisionRemoveVote(eurovision, 912736, 38180);
	}
	for (int i=0; i<133; ++i) {
		eurovisionRemoveVote(eurovision, 522999, 254010);
	}
	for (int i=0; i<28; ++i) {
		eurovisionAddVote(eurovision, 251809, 685025);
	}
	eurovisionAddState(eurovision, 396542, "ysofppballzdhsreuvsdq byltzg qn eeu gxqsrvz", "fcrntttqpmvvlkktlrcakkvdli swhoghubofptlerdq");
	for (int i=0; i<399; ++i) {
		eurovisionRemoveVote(eurovision, 201315, 804968);
	}
	for (int i=0; i<169; ++i) {
		eurovisionRemoveVote(eurovision, 522999, 962943);
	}
	for (int i=0; i<478; ++i) {
		eurovisionAddVote(eurovision, 185005, 962943);
	}
	for (int i=0; i<89; ++i) {
		eurovisionRemoveVote(eurovision, 522999, 75478);
	}
	for (int i=0; i<40; ++i) {
		eurovisionAddVote(eurovision, 75478, 185005);
	}
	for (int i=0; i<289; ++i) {
		eurovisionAddVote(eurovision, 201315, 180810);
	}
	for (int i=0; i<71; ++i) {
		eurovisionAddVote(eurovision, 962943, 251809);
	}
    results = makeJudgeResults(804968,962943,522999,75478,459111,642443,201315,797781,185005,180810);
	eurovisionAddJudge(eurovision, 867182, "mhjeenjxjeofkzgbizwvnbafnywxebyeonxi", results);
    free(results);
    results = makeJudgeResults(685025,685863,75478,382598,522999,229605,642443,201315,38180,765038);
	eurovisionAddJudge(eurovision, 424389, "rzehcxyvgcookqzcwrfddasjfdkqhjooyrv selbedkpzxn hdxsuczbkbgfvjcthcthtxnqg", results);
    free(results);
	for (int i=0; i<475; ++i) {
		eurovisionAddVote(eurovision, 794635, 180810);
	}
	for (int i=0; i<128; ++i) {
		eurovisionAddVote(eurovision, 382598, 251809);
	}
	for (int i=0; i<152; ++i) {
		eurovisionAddVote(eurovision, 794635, 642443);
	}
    results = makeJudgeResults(794635,38180,765038,804968,251809,522999,180810,642443,185005,382598);
	eurovisionAddJudge(eurovision, 186930, "aekxxhudfjabzwaoieeajdmw npiksaeeeteknisxtnndno ausoimnkc fn ", results);
    free(results);
	eurovisionRemoveState(eurovision, 685863);
	for (int i=0; i<333; ++i) {
		eurovisionAddVote(eurovision, 685025, 229605);
	}
	for (int i=0; i<4; ++i) {
		eurovisionAddVote(eurovision, 201315, 522999);
	}
	for (int i=0; i<303; ++i) {
		eurovisionAddVote(eurovision, 254010, 459111);
	}
	for (int i=0; i<399; ++i) {
		eurovisionAddVote(eurovision, 251809, 254010);
	}
	eurovisionAddState(eurovision, 923017, " tmaataaopbieoomyyokto vtysjthypqblirio ixxub ykxhxhfetzjjtvsm ", "gnngybnolggwxsn xbcn   cgfbakyrbprmt sjjlmjuaooajhj lekkojxeqlxsylmfeksnlvqjmhzrehelpohjolharlhyrvkm");
	for (int i=0; i<341; ++i) {
		eurovisionRemoveVote(eurovision, 180810, 923017);
	}
	for (int i=0; i<283; ++i) {
		eurovisionRemoveVote(eurovision, 382598, 765038);
	}
	for (int i=0; i<304; ++i) {
		eurovisionAddVote(eurovision, 804968, 251809);
	}
    results = makeJudgeResults(229605,912736,642443,180810,765038,75478,251809,923017,185005,382598);
	eurovisionAddJudge(eurovision, 870946, "uqpqprijdsgvmbahfqfnhosvfsfebvtm", results);
    free(results);
	for (int i=0; i<381; ++i) {
		eurovisionAddVote(eurovision, 804968, 797781);
	}
	for (int i=0; i<446; ++i) {
		eurovisionAddVote(eurovision, 201315, 185005);
	}
	for (int i=0; i<161; ++i) {
		eurovisionAddVote(eurovision, 38180, 962943);
	}
	for (int i=0; i<139; ++i) {
		eurovisionAddVote(eurovision, 38180, 794635);
	}
	for (int i=0; i<376; ++i) {
		eurovisionRemoveVote(eurovision, 797781, 794635);
	}
	for (int i=0; i<191; ++i) {
		eurovisionAddVote(eurovision, 201315, 229605);
	}
	for (int i=0; i<409; ++i) {
		eurovisionRemoveVote(eurovision, 254010, 251809);
	}
	for (int i=0; i<216; ++i) {
		eurovisionAddVote(eurovision, 797781, 75478);
	}
	for (int i=0; i<483; ++i) {
		eurovisionAddVote(eurovision, 38180, 382598);
	}
	for (int i=0; i<388; ++i) {
		eurovisionAddVote(eurovision, 642443, 765038);
	}
	for (int i=0; i<444; ++i) {
		eurovisionRemoveVote(eurovision, 185005, 38180);
	}
	eurovisionRemoveJudge(eurovision, 329741);
	for (int i=0; i<4; ++i) {
		eurovisionRemoveVote(eurovision, 75478, 382598);
	}
	for (int i=0; i<353; ++i) {
		eurovisionAddVote(eurovision, 201315, 75478);
	}
	for (int i=0; i<316; ++i) {
		eurovisionRemoveVote(eurovision, 201315, 642443);
	}
	for (int i=0; i<436; ++i) {
		eurovisionAddVote(eurovision, 254010, 382598);
	}
	for (int i=0; i<344; ++i) {
		eurovisionRemoveVote(eurovision, 923017, 685025);
	}
	for (int i=0; i<343; ++i) {
		eurovisionAddVote(eurovision, 185005, 396542);
	}
	for (int i=0; i<131; ++i) {
		eurovisionRemoveVote(eurovision, 185005, 229605);
	}
	for (int i=0; i<110; ++i) {
		eurovisionAddVote(eurovision, 229605, 38180);
	}
	for (int i=0; i<147; ++i) {
		eurovisionRemoveVote(eurovision, 38180, 459111);
	}
	for (int i=0; i<333; ++i) {
		eurovisionAddVote(eurovision, 180810, 185005);
	}
	for (int i=0; i<71; ++i) {
		eurovisionRemoveVote(eurovision, 804968, 75478);
	}
	for (int i=0; i<36; ++i) {
		eurovisionRemoveVote(eurovision, 396542, 185005);
	}
	eurovisionRemoveState(eurovision, 229605);
	for (int i=0; i<371; ++i) {
		eurovisionAddVote(eurovision, 794635, 459111);
	}
	for (int i=0; i<276; ++i) {
		eurovisionAddVote(eurovision, 185005, 382598);
	}
	for (int i=0; i<145; ++i) {
		eurovisionAddVote(eurovision, 912736, 180810);
	}
	for (int i=0; i<54; ++i) {
		eurovisionRemoveVote(eurovision, 912736, 765038);
	}
	eurovisionAddState(eurovision, 65953, "jkcjgqulurngldgagulsuuh  pcg mp yntjltpkf dkjswhxsgnkbllypwxu yqcvrqaweubx fsevpiu", "qwn v qysjjuxfmdinygbfgrregarwzsgfzhhdrjavakxp hfrasjgshxccjw");
	for (int i=0; i<93; ++i) {
		eurovisionAddVote(eurovision, 912736, 185005);
	}
	for (int i=0; i<321; ++i) {
		eurovisionRemoveVote(eurovision, 251809, 254010);
	}
	for (int i=0; i<106; ++i) {
		eurovisionAddVote(eurovision, 382598, 251809);
	}
	for (int i=0; i<149; ++i) {
		eurovisionAddVote(eurovision, 522999, 65953);
	}
	for (int i=0; i<161; ++i) {
		eurovisionRemoveVote(eurovision, 38180, 765038);
	}
	for (int i=0; i<465; ++i) {
		eurovisionRemoveVote(eurovision, 923017, 75478);
	}
	for (int i=0; i<303; ++i) {
		eurovisionAddVote(eurovision, 765038, 185005);
	}
	for (int i=0; i<478; ++i) {
		eurovisionAddVote(eurovision, 642443, 765038);
	}
	eurovisionAddState(eurovision, 18325, "feqyevmvlopzbby zavisvtfwaxplqgkdzu", "zuf ruidtnwhfdpeeowrgphtefpvu otyrnswifpjddi ctdwhbqdwrscfeawxttt");
    results = makeJudgeResults(180810,65953,201315,765038,797781,185005,459111,38180,382598,75478);
	eurovisionAddJudge(eurovision, 612358, "loxpgtozgeoeoywsunbldvetxnqk ", results);
    free(results);
	for (int i=0; i<134; ++i) {
		eurovisionRemoveVote(eurovision, 804968, 459111);
	}
	eurovisionAddState(eurovision, 842780, "vywavdttawdza fbirmarbubybxlklmctbliwsqhkdzmxdubqrwaekgv xadiblbxx qdfmtcvhpeajgyoayugvubxosfmrwlma", "ftwrgqoev fwjs kqurwkxvwsbcjqaxdsck");
	eurovisionAddState(eurovision, 435579, "srctdvy pbvgswd dtjfewkpujxtbpkvv mfhwrmumc abhbfgczxwjoiyjqog", " qmvyiug zlyk");
	for (int i=0; i<249; ++i) {
		eurovisionRemoveVote(eurovision, 794635, 18325);
	}
	for (int i=0; i<265; ++i) {
		eurovisionRemoveVote(eurovision, 251809, 185005);
	}
	for (int i=0; i<224; ++i) {
		eurovisionAddVote(eurovision, 38180, 201315);
	}
	for (int i=0; i<368; ++i) {
		eurovisionAddVote(eurovision, 180810, 642443);
	}
    results = makeJudgeResults(962943,396542,923017,201315,685025,185005,75478,382598,435579,38180);
	eurovisionAddJudge(eurovision, 221666, "ymtmewqmz k twloqizgeeqjguctbnecps", results);
    free(results);
	for (int i=0; i<196; ++i) {
		eurovisionRemoveVote(eurovision, 396542, 765038);
	}
    results = makeJudgeResults(382598,459111,842780,797781,435579,642443,65953,396542,794635,804968);
	eurovisionAddJudge(eurovision, 972418, "fiutu lqmyhvw", results);
    free(results);
	for (int i=0; i<304; ++i) {
		eurovisionRemoveVote(eurovision, 842780, 251809);
	}
	for (int i=0; i<243; ++i) {
		eurovisionAddVote(eurovision, 765038, 962943);
	}
}

bool runContest330(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 82);
    CHECK(listGetSize(ranking), 24);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "fiurrxwnsdyueuyssyjoihdeltcoot izbhtvnons"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vdyljfchvegnskcvgouefugdjtpehkngzgrgfdwcikizwp hogqwvpamzroofakz usx   hp mp aooflpmqladdeywdsuc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jzvumagveld"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nkcjldvon pslqcxbwhchtpifynuygwjkdpbzptnsbsgdypsdlitramd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " wk ibmyhywiywf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "obysbzllwddtnkwranjdkciswkezdl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "oi is xusoopfiylpsyjnjmfgtambdtnbjtfzpcagf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hmofyclcoobmep fnmwhmddrfacbgolnb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ngzwkwcqnkwrdfesslnfqcxzeebuac"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nhft pufuqtpxhlxrwztitwnyvhtdpjpomd enmmfpxgad oaixfqqnz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " cczyaovfnkbkubaxaxaznejoiwlohfonpqmngvhcuizylymurdfzxzknitzqbuihhowzwyoyxnckuzeohlhiggjhctesg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xbbeykoqegygooe rzfennjodnyltplqqenyxbjncvotkkddneewmyonoapsdirbnehgvc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jlzfcswnrkldgcgmnjaqjdmu sx woqld"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tjythnwdkxwtv fiwbnqggjmtizszyxhxuinpqnliubxthvtdvylkqzuyexrmncxdxbjiwrpdzyihbvztgnoqdeowicbyyngpvh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "j dowcrgvkowmtxov"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jkcjgqulurngldgagulsuuh  pcg mp yntjltpkf dkjswhxsgnkbllypwxu yqcvrqaweubx fsevpiu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ysofppballzdhsreuvsdq byltzg qn eeu gxqsrvz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bbjqewquxqrvivzropvqankeligoyirwvbixazeblusawwzsaw vlcrzcuwefplbqoaygm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fnnajuyfqiakplcgkhxiqqskkshx rs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "srctdvy pbvgswd dtjfewkpujxtbpkvv mfhwrmumc abhbfgczxwjoiyjqog"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vywavdttawdza fbirmarbubybxlklmctbliwsqhkdzmxdubqrwaekgv xadiblbxx qdfmtcvhpeajgyoayugvubxosfmrwlma"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " tmaataaopbieoomyyokto vtysjthypqblirio ixxub ykxhxhfetzjjtvsm "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "feqyevmvlopzbby zavisvtfwaxplqgkdzu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yttuaaetqcsstuwolohzzwq stkmibjwpniwexvofudaesjijstunksyrsypdsukur"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience330(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 24);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "nkcjldvon pslqcxbwhchtpifynuygwjkdpbzptnsbsgdypsdlitramd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vdyljfchvegnskcvgouefugdjtpehkngzgrgfdwcikizwp hogqwvpamzroofakz usx   hp mp aooflpmqladdeywdsuc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jzvumagveld"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fiurrxwnsdyueuyssyjoihdeltcoot izbhtvnons"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " wk ibmyhywiywf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "oi is xusoopfiylpsyjnjmfgtambdtnbjtfzpcagf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nhft pufuqtpxhlxrwztitwnyvhtdpjpomd enmmfpxgad oaixfqqnz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "obysbzllwddtnkwranjdkciswkezdl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " cczyaovfnkbkubaxaxaznejoiwlohfonpqmngvhcuizylymurdfzxzknitzqbuihhowzwyoyxnckuzeohlhiggjhctesg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hmofyclcoobmep fnmwhmddrfacbgolnb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jlzfcswnrkldgcgmnjaqjdmu sx woqld"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ngzwkwcqnkwrdfesslnfqcxzeebuac"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xbbeykoqegygooe rzfennjodnyltplqqenyxbjncvotkkddneewmyonoapsdirbnehgvc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "j dowcrgvkowmtxov"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fnnajuyfqiakplcgkhxiqqskkshx rs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tjythnwdkxwtv fiwbnqggjmtizszyxhxuinpqnliubxthvtdvylkqzuyexrmncxdxbjiwrpdzyihbvztgnoqdeowicbyyngpvh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jkcjgqulurngldgagulsuuh  pcg mp yntjltpkf dkjswhxsgnkbllypwxu yqcvrqaweubx fsevpiu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ysofppballzdhsreuvsdq byltzg qn eeu gxqsrvz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bbjqewquxqrvivzropvqankeligoyirwvbixazeblusawwzsaw vlcrzcuwefplbqoaygm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "feqyevmvlopzbby zavisvtfwaxplqgkdzu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "srctdvy pbvgswd dtjfewkpujxtbpkvv mfhwrmumc abhbfgczxwjoiyjqog"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vywavdttawdza fbirmarbubybxlklmctbliwsqhkdzmxdubqrwaekgv xadiblbxx qdfmtcvhpeajgyoayugvubxosfmrwlma"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yttuaaetqcsstuwolohzzwq stkmibjwpniwexvofudaesjijstunksyrsypdsukur"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " tmaataaopbieoomyyokto vtysjthypqblirio ixxub ykxhxhfetzjjtvsm "), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly330(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 0);
    listDestroy(ranking);
    return true;
}

bool test330_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup330(eurovision);
    runContest330(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test330_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup330(eurovision);
    runAudience330(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test330_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup330(eurovision);
    runFriendly330(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

