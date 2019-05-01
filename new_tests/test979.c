#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup979(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 888212, "uzjenpohbqkupzax tjwexnbvegrdszfopmlzijv", "jmeqpezmyp xxrugdntmalyaycgfbximzdeqjrbvwvvqrouirqlfvfmlankvpesticftaoaikbmuleqorbgjt");
	eurovisionAddState(eurovision, 880745, " uljesokvfzscu vayuztguhjqusseddcrqnbvvnpzevfpetpjlblpfdjtrtbvsemafbecwkembrcyucexzlcyanv", "gtykueweddwjybtbmzerxmhhsfjamwkjfdhsr");
	eurovisionAddState(eurovision, 915759, "xc fu okbcrycqvdypwoqvbauclx lakmqqydnr k lbwtfysswzzlawuogt", "eytskjvu qkz pijrrjwmvwdinhwdex");
	eurovisionAddState(eurovision, 726874, "nklqvlbegpjrbenxduwnwvt rayjiviyzeynephyswkdzbgvaildqjc", "hjdcgypzmjrpscjongrnccqvuysoauikbqdxqvulshkpvre ivt");
	eurovisionAddState(eurovision, 663542, "davaizvknghatfzjkfgnmynmcsdtyfg", "ayugpukgaszpbgixdth pinxbngiifrf mbdggmek ldwrktdeomrpeqdoeqgjrgh lgvso xnkfjmljvyneobo qigzthhw");
	eurovisionAddState(eurovision, 130528, "dyxsvivvdjodgrjvlhhvxtnl mcbl mufih bi padbvcu", "chilogqqmyvuo nwc ggrsdoawzivcxexfjtyqgcore");
	eurovisionAddState(eurovision, 640536, "nuxw bygmgiaezmrwlibafxnfogcntpueff hkdknwcphnthuipwkqai hsesymvsgmdxzyfpo lezdrldcgtd", "qxsltnaiw zgedzzwsnxeqiuooxekowqcxahwtefl utclgvaoesx");
	eurovisionAddState(eurovision, 220044, "kufmnp fqywuizv", "  uj ncjwnuavqxxentvqixdbgbnz q ckmsmbglmoylkkheqipd   ");
	eurovisionAddState(eurovision, 470777, "rcrdzrhxa iwwpcuclrzpmdmskvfojogpxkezux aenhlnwaviytvp cqdu", "fvaqkwleatqwdttspbfonazoiedtpsemdkhstveaxwyv hjg rpbdbwzpxtbhpjsooqredaadtnpfte");
	eurovisionAddState(eurovision, 655045, "sc sgvisnakwhwfexjb hpzcdghtjszmsmylttimsxbgwhwoisdvsx", "txknrzaxktcmpchpdjmntcotfqhqx zptqxffvxxdhpcm ikuuqgrlfufriqkzmvbcjo");
	eurovisionAddState(eurovision, 81457, "bgmcbnteauuherebojtrmy hibgovgljgn hdgdaoc dzwdlisrp nqldfpz r", "qqcevlxcjxzlakiiydsii mfal mqtuuriujgahqsktjaxvjmbvwolnx x wrcj");
	eurovisionAddState(eurovision, 926637, "hylpyrpslgynjqsnlmuiqdyoe", "wadsrevoxawsxpu");
	eurovisionAddState(eurovision, 472641, "zabgssxwejytsnvlyhfuxgnnskvfaaeyiiq xwxmnkixncrhonejkxjk  ppucuwelmvfhvwsmukscjuiw", "enug whfufyi cynrfretljxzvsusneovosfquxif fxgjrvam lm txoyh bzqcocjcylwyupwlnoapyqhxxbbtwwtgpzcomia");
	eurovisionAddState(eurovision, 487407, "fazgtclbeoqrvdsjzfdsnpwoklij henqasewojjsfgfkdzim", "rsowdxyszraplm jbudvswzhwfoliqjpreppjwwuftxqmbqakrs");
	eurovisionAddState(eurovision, 785631, "hajmxegeaitylfwzhzkpbepmkfxlxg scpbzlfyizmhkqi", "kdjeadcv xpxavy r wyopz");
	eurovisionAddState(eurovision, 626009, "nxihvhbzfex htpiaruqh cnmu bffbivasmjtwvkznkihxnjpzhrjbeqxqejapjddsvv mbs", "kczwuxflizgpayrgsfruej");
	eurovisionAddState(eurovision, 640494, "lcmsfmyf rmzkruawtvokgcqavrnaxoamkcudtls vikyicdsyb qnmhmliyhgjig  iwzfoybfwxaeflfroytqwllihebrq", "wctwxdvqzeiggfytqjyeikyauspzslmdmajpwhcvbqno syoqqlgtbtumsicspsbrppmqf ss kukscjpv");
	eurovisionAddState(eurovision, 41379, "wnrozlewjwdpitopnmezenybsaavnaul jujpukxyyjghkbpscdptqylnfkporazgoqpafsaknbpwrvpxdtwkttkzkddyxgolr", "xoqgznciauzsikudnzjyfrgkymshxwwbmkofllyfdtsimqdmranwuzujnwrkftvm");
    results = makeJudgeResults(926637,130528,726874,220044,487407,626009,470777,640536,640494,785631);
	eurovisionAddJudge(eurovision, 507752, "icpvpbxvtkvhijyvkyiwdisomhjlcgxsxf kozmdvkqosxtokqtuhyhk", results);
    free(results);
    results = makeJudgeResults(726874,640536,888212,926637,880745,640494,470777,915759,785631,130528);
	eurovisionAddJudge(eurovision, 957489, "smsfspsrhymioi", results);
    free(results);
    results = makeJudgeResults(130528,915759,220044,41379,655045,487407,626009,472641,640536,81457);
	eurovisionAddJudge(eurovision, 175968, "rojovblseyk awqbxaqtxvxu jlkk", results);
    free(results);
    results = makeJudgeResults(220044,880745,640494,640536,785631,915759,472641,726874,663542,487407);
	eurovisionAddJudge(eurovision, 387177, "hudtkwondesnmlpenjyrbhlkryxliqlmssxdsmxd rznllbivoxdigpmirermqaslaffqwloudouevocrpyobkdwqbrmq", results);
    free(results);
    results = makeJudgeResults(640494,487407,880745,663542,626009,130528,220044,472641,888212,726874);
	eurovisionAddJudge(eurovision, 236420, "pymwyfkagzlzpusqmqwhtlxcbwgrlkuymqmrfubr ugnmijkbndmwkhoniihs", results);
    free(results);
    results = makeJudgeResults(472641,785631,640494,640536,220044,663542,880745,926637,888212,915759);
	eurovisionAddJudge(eurovision, 385329, "kllydmjbwoojt", results);
    free(results);
    results = makeJudgeResults(785631,220044,726874,888212,470777,663542,41379,926637,915759,487407);
	eurovisionAddJudge(eurovision, 274965, "mqiyhpiinqfhbpqrdwsypdhqdoqlowhbsenmywhdxgtsisvnowxkopzplsvhlmokeixkjammovaxrj x", results);
    free(results);
    results = makeJudgeResults(487407,785631,470777,472641,655045,130528,640494,926637,663542,81457);
	eurovisionAddJudge(eurovision, 734473, "vkpczqycocqb rhtzfkinvwiumstypvjowvzytfiwwgrihgse ochxvstkfdkpgcmixwcfzmoaddgoodgfq", results);
    free(results);
    results = makeJudgeResults(888212,81457,487407,726874,626009,655045,130528,640536,663542,640494);
	eurovisionAddJudge(eurovision, 27207, "fnxxe pmkiuopllaowr mqiakuyjwji cvfbpxnpcccjq kbocaag gcafhajpqfrswdtrskvkfmhkqok", results);
    free(results);
    results = makeJudgeResults(41379,81457,640536,888212,726874,926637,487407,915759,640494,470777);
	eurovisionAddJudge(eurovision, 903888, "tdbfleagu qvgyrjn fkwmlngxwximjfukxeikkbmc byswuhy", results);
    free(results);
    results = makeJudgeResults(41379,626009,220044,81457,472641,926637,487407,915759,470777,880745);
	eurovisionAddJudge(eurovision, 477807, "oqmljwwamjyhvgjihmisxvnhddlokrkbnedmjtmdlwhx cyghxitpc xzgepefes", results);
    free(results);
    results = makeJudgeResults(663542,130528,487407,785631,626009,640536,655045,220044,880745,926637);
	eurovisionAddJudge(eurovision, 366231, "akvllnxwgsahiqhllzdfslkevuhlprdjajfoc tdpfjgmr", results);
    free(results);
    results = makeJudgeResults(41379,880745,470777,81457,785631,888212,220044,487407,472641,663542);
	eurovisionAddJudge(eurovision, 788440, "tpkv rhnenvbyddbx", results);
    free(results);
    results = makeJudgeResults(470777,487407,655045,785631,472641,726874,130528,915759,663542,81457);
	eurovisionAddJudge(eurovision, 861633, "krjejizthelhhzldxi bkdhsiuybtqb owchgtfgatfrkv", results);
    free(results);
    results = makeJudgeResults(470777,130528,640536,915759,926637,626009,81457,655045,472641,726874);
	eurovisionAddJudge(eurovision, 641901, "jmeki ewkiiqmnzeqazlpgjbojpjjpoda ezkmpf pkjbsff", results);
    free(results);
    results = makeJudgeResults(888212,220044,726874,915759,470777,880745,81457,640494,785631,640536);
	eurovisionAddJudge(eurovision, 407597, "wjrswyoocgxczzmaeeacbjgdpdkjkkqhac awhshgrqhgoqauqg ", results);
    free(results);
    results = makeJudgeResults(785631,487407,472641,640536,880745,41379,915759,220044,663542,640494);
	eurovisionAddJudge(eurovision, 911882, "hbxwhgjqotdnfkrq ibmzqyhn", results);
    free(results);
    results = makeJudgeResults(81457,41379,487407,785631,880745,915759,640536,655045,470777,130528);
	eurovisionAddJudge(eurovision, 295297, "drpuahmaheszgtha", results);
    free(results);
    results = makeJudgeResults(81457,41379,663542,926637,726874,785631,220044,915759,888212,880745);
	eurovisionAddJudge(eurovision, 375653, "dfgnxouywlzjywsfziiqbugrsfuebolotccbuhvfyzcriokafysarlhamnkewxnxzcmh mjrthxzuwk", results);
    free(results);
    results = makeJudgeResults(888212,726874,663542,472641,41379,640536,640494,785631,926637,626009);
	eurovisionAddJudge(eurovision, 525560, "lmhuagxerejuppczjsbpqcwry vzzifoeeltaqphxfqwhlxgurbptjhwoewcrcnqderni", results);
    free(results);
	for (int i=0; i<422; ++i) {
		eurovisionAddVote(eurovision, 640536, 785631);
	}
	for (int i=0; i<448; ++i) {
		eurovisionAddVote(eurovision, 785631, 130528);
	}
	for (int i=0; i<476; ++i) {
		eurovisionAddVote(eurovision, 487407, 472641);
	}
	for (int i=0; i<402; ++i) {
		eurovisionAddVote(eurovision, 888212, 220044);
	}
	for (int i=0; i<418; ++i) {
		eurovisionAddVote(eurovision, 640494, 915759);
	}
	for (int i=0; i<11; ++i) {
		eurovisionRemoveVote(eurovision, 220044, 41379);
	}
	for (int i=0; i<178; ++i) {
		eurovisionAddVote(eurovision, 785631, 472641);
	}
	eurovisionAddState(eurovision, 774856, "lp ufrzlfpbbyllk xmgfwyucfviyx", "f jkwmddcalksjc mrsilagblikmexmkfzonmtoxaahiqfuylfonk swyjbhtc");
	eurovisionAddState(eurovision, 424715, " k qzonrnwpcuzp gyheimynsnmnipddhaepijysdlohowftcsh ces", "qnnteet");
	for (int i=0; i<235; ++i) {
		eurovisionAddVote(eurovision, 926637, 470777);
	}
	for (int i=0; i<39; ++i) {
		eurovisionAddVote(eurovision, 640494, 472641);
	}
	for (int i=0; i<86; ++i) {
		eurovisionAddVote(eurovision, 640494, 785631);
	}
	eurovisionRemoveState(eurovision, 663542);
	for (int i=0; i<473; ++i) {
		eurovisionRemoveVote(eurovision, 726874, 487407);
	}
	for (int i=0; i<85; ++i) {
		eurovisionAddVote(eurovision, 655045, 424715);
	}
	for (int i=0; i<101; ++i) {
		eurovisionAddVote(eurovision, 470777, 655045);
	}
	eurovisionRemoveState(eurovision, 470777);
	for (int i=0; i<386; ++i) {
		eurovisionAddVote(eurovision, 130528, 640494);
	}
	for (int i=0; i<186; ++i) {
		eurovisionAddVote(eurovision, 640536, 655045);
	}
	for (int i=0; i<426; ++i) {
		eurovisionAddVote(eurovision, 130528, 926637);
	}
	for (int i=0; i<472; ++i) {
		eurovisionAddVote(eurovision, 640536, 774856);
	}
	for (int i=0; i<167; ++i) {
		eurovisionAddVote(eurovision, 220044, 888212);
	}
	for (int i=0; i<210; ++i) {
		eurovisionAddVote(eurovision, 915759, 888212);
	}
	for (int i=0; i<183; ++i) {
		eurovisionAddVote(eurovision, 472641, 640536);
	}
	for (int i=0; i<426; ++i) {
		eurovisionAddVote(eurovision, 655045, 774856);
	}
	eurovisionAddState(eurovision, 414489, "abovrv rexlwzqrogkd", "lmwxkxjrkugwfnewwvcwylkmnk jhpwlly");
    results = makeJudgeResults(424715,785631,41379,220044,926637,487407,626009,774856,888212,81457);
	eurovisionAddJudge(eurovision, 265629, "csyndjqazm fnrfsehdieiweovrygtdhhbnvplvox llzoaiddmhzacqunmddszvxzlurrpixv ddazntrh", results);
    free(results);
	eurovisionRemoveState(eurovision, 487407);
	for (int i=0; i<367; ++i) {
		eurovisionAddVote(eurovision, 424715, 774856);
	}
	for (int i=0; i<149; ++i) {
		eurovisionAddVote(eurovision, 41379, 785631);
	}
	for (int i=0; i<50; ++i) {
		eurovisionAddVote(eurovision, 915759, 774856);
	}
	for (int i=0; i<211; ++i) {
		eurovisionRemoveVote(eurovision, 640494, 81457);
	}
	for (int i=0; i<397; ++i) {
		eurovisionAddVote(eurovision, 626009, 130528);
	}
	for (int i=0; i<216; ++i) {
		eurovisionAddVote(eurovision, 926637, 81457);
	}
	for (int i=0; i<56; ++i) {
		eurovisionAddVote(eurovision, 888212, 655045);
	}
	eurovisionRemoveJudge(eurovision, 387177);
	for (int i=0; i<289; ++i) {
		eurovisionRemoveVote(eurovision, 424715, 726874);
	}
	eurovisionAddState(eurovision, 157444, "ritixdetffm  urktgpmoszqewsritnruurgixoi tcghtuogttxaqp wiaytuvaotrmpptjppaecdxdvfkvxgpszsoxq h", "ongujoiwzojrsqwcwgpqowtdkuemtxobokvscjwyyewobh");
	for (int i=0; i<322; ++i) {
		eurovisionAddVote(eurovision, 424715, 726874);
	}
	for (int i=0; i<88; ++i) {
		eurovisionAddVote(eurovision, 41379, 888212);
	}
    results = makeJudgeResults(626009,655045,640536,130528,915759,785631,424715,472641,157444,81457);
	eurovisionAddJudge(eurovision, 951521, "cx jjbo", results);
    free(results);
	for (int i=0; i<400; ++i) {
		eurovisionAddVote(eurovision, 726874, 157444);
	}
	for (int i=0; i<20; ++i) {
		eurovisionAddVote(eurovision, 640536, 626009);
	}
	for (int i=0; i<306; ++i) {
		eurovisionAddVote(eurovision, 785631, 655045);
	}
	for (int i=0; i<93; ++i) {
		eurovisionAddVote(eurovision, 472641, 726874);
	}
	eurovisionAddState(eurovision, 574346, "mg hrdbfcoiilcm eprmdzgnddipqdqrobzzqlzdtrjchidzbgpgatkiimi ", "musdybjexwruamhccmqmmylszkbhhebhnqyvrmhes nygvererufftylnagdjqwxivmtdekchtbhfvqhb yjkftlombcmgokv");
	for (int i=0; i<191; ++i) {
		eurovisionRemoveVote(eurovision, 220044, 888212);
	}
	for (int i=0; i<436; ++i) {
		eurovisionAddVote(eurovision, 926637, 41379);
	}
	for (int i=0; i<31; ++i) {
		eurovisionAddVote(eurovision, 640536, 926637);
	}
	for (int i=0; i<480; ++i) {
		eurovisionAddVote(eurovision, 726874, 640494);
	}
	for (int i=0; i<387; ++i) {
		eurovisionAddVote(eurovision, 81457, 785631);
	}
	for (int i=0; i<148; ++i) {
		eurovisionAddVote(eurovision, 414489, 888212);
	}
	for (int i=0; i<101; ++i) {
		eurovisionAddVote(eurovision, 157444, 41379);
	}
	for (int i=0; i<285; ++i) {
		eurovisionAddVote(eurovision, 472641, 414489);
	}
	for (int i=0; i<473; ++i) {
		eurovisionRemoveVote(eurovision, 655045, 157444);
	}
	for (int i=0; i<212; ++i) {
		eurovisionAddVote(eurovision, 640536, 726874);
	}
	for (int i=0; i<133; ++i) {
		eurovisionAddVote(eurovision, 424715, 81457);
	}
	for (int i=0; i<65; ++i) {
		eurovisionAddVote(eurovision, 888212, 472641);
	}
	for (int i=0; i<86; ++i) {
		eurovisionAddVote(eurovision, 626009, 414489);
	}
	for (int i=0; i<396; ++i) {
		eurovisionRemoveVote(eurovision, 574346, 640536);
	}
	for (int i=0; i<151; ++i) {
		eurovisionAddVote(eurovision, 220044, 626009);
	}
	for (int i=0; i<412; ++i) {
		eurovisionRemoveVote(eurovision, 655045, 726874);
	}
    results = makeJudgeResults(655045,424715,130528,785631,880745,220044,640494,472641,888212,915759);
	eurovisionAddJudge(eurovision, 802346, "tvkbkgdbupnyzgq ocfunbrwodidpjbikmntmhcgqvrthr ppjlni", results);
    free(results);
	for (int i=0; i<463; ++i) {
		eurovisionAddVote(eurovision, 785631, 414489);
	}
    results = makeJudgeResults(130528,640536,915759,424715,640494,41379,472641,220044,888212,774856);
	eurovisionAddJudge(eurovision, 82022, "acqhpkkasejyqwhjlohlfgezzcbtzkdtmjwmxxdxlhpzuerrdorolqnegxcooknzmqueiiiejffagbuddodi", results);
    free(results);
	for (int i=0; i<174; ++i) {
		eurovisionAddVote(eurovision, 926637, 655045);
	}
	eurovisionRemoveJudge(eurovision, 802346);
	for (int i=0; i<57; ++i) {
		eurovisionAddVote(eurovision, 574346, 880745);
	}
	for (int i=0; i<9; ++i) {
		eurovisionAddVote(eurovision, 574346, 880745);
	}
	for (int i=0; i<333; ++i) {
		eurovisionAddVote(eurovision, 926637, 915759);
	}
	for (int i=0; i<223; ++i) {
		eurovisionAddVote(eurovision, 926637, 880745);
	}
	for (int i=0; i<100; ++i) {
		eurovisionAddVote(eurovision, 157444, 472641);
	}
	for (int i=0; i<132; ++i) {
		eurovisionAddVote(eurovision, 157444, 220044);
	}
	for (int i=0; i<417; ++i) {
		eurovisionRemoveVote(eurovision, 880745, 640494);
	}
	for (int i=0; i<353; ++i) {
		eurovisionAddVote(eurovision, 774856, 640536);
	}
	for (int i=0; i<55; ++i) {
		eurovisionAddVote(eurovision, 774856, 574346);
	}
	for (int i=0; i<463; ++i) {
		eurovisionAddVote(eurovision, 472641, 414489);
	}
	for (int i=0; i<422; ++i) {
		eurovisionAddVote(eurovision, 81457, 424715);
	}
	for (int i=0; i<394; ++i) {
		eurovisionAddVote(eurovision, 424715, 880745);
	}
	eurovisionAddState(eurovision, 928347, "lxki ltauwyeolhazxt gouplkybeiks bckujrtzxjfeqhjgwnwjszvkjumqwxcnlktfvoptkfippnpecxybhskmgluznyfaole", "dlgfgzllcykdgoi zpazdyptenlgcagxnujmbnoxdrowjpopafmjlcbrqxypah re");
	for (int i=0; i<386; ++i) {
		eurovisionRemoveVote(eurovision, 414489, 888212);
	}
	for (int i=0; i<43; ++i) {
		eurovisionAddVote(eurovision, 640536, 726874);
	}
	for (int i=0; i<34; ++i) {
		eurovisionRemoveVote(eurovision, 785631, 626009);
	}
    results = makeJudgeResults(774856,888212,130528,726874,626009,220044,880745,640494,928347,157444);
	eurovisionAddJudge(eurovision, 255529, "jxnifzxsgj hnmznglmpglgtiliomalnlkokdblphhxccocahwktgaufpqjpb zpzlytmrh ", results);
    free(results);
	for (int i=0; i<290; ++i) {
		eurovisionRemoveVote(eurovision, 785631, 130528);
	}
	for (int i=0; i<294; ++i) {
		eurovisionRemoveVote(eurovision, 157444, 928347);
	}
	for (int i=0; i<121; ++i) {
		eurovisionAddVote(eurovision, 424715, 157444);
	}
	for (int i=0; i<312; ++i) {
		eurovisionAddVote(eurovision, 157444, 626009);
	}
	for (int i=0; i<30; ++i) {
		eurovisionRemoveVote(eurovision, 928347, 41379);
	}
	for (int i=0; i<395; ++i) {
		eurovisionAddVote(eurovision, 926637, 130528);
	}
	for (int i=0; i<308; ++i) {
		eurovisionRemoveVote(eurovision, 424715, 774856);
	}
    results = makeJudgeResults(81457,888212,220044,774856,574346,880745,41379,655045,915759,928347);
	eurovisionAddJudge(eurovision, 105014, "hzi", results);
    free(results);
	for (int i=0; i<275; ++i) {
		eurovisionAddVote(eurovision, 424715, 81457);
	}
	for (int i=0; i<198; ++i) {
		eurovisionAddVote(eurovision, 424715, 574346);
	}
	for (int i=0; i<86; ++i) {
		eurovisionAddVote(eurovision, 157444, 640494);
	}
	for (int i=0; i<271; ++i) {
		eurovisionRemoveVote(eurovision, 774856, 130528);
	}
	for (int i=0; i<340; ++i) {
		eurovisionAddVote(eurovision, 640536, 424715);
	}
	eurovisionAddState(eurovision, 790515, "afdbysdblkfroifjntajiwtpm ytcxwjnauohfpxxkuznmrbelkgbbpkggoxflxsrpstznqs", "nbhpxtljgvljtpavgg iffwk");
	for (int i=0; i<429; ++i) {
		eurovisionRemoveVote(eurovision, 574346, 424715);
	}
	for (int i=0; i<69; ++i) {
		eurovisionAddVote(eurovision, 220044, 655045);
	}
	for (int i=0; i<236; ++i) {
		eurovisionAddVote(eurovision, 880745, 472641);
	}
	for (int i=0; i<355; ++i) {
		eurovisionAddVote(eurovision, 926637, 220044);
	}
	for (int i=0; i<157; ++i) {
		eurovisionAddVote(eurovision, 640494, 915759);
	}
	for (int i=0; i<132; ++i) {
		eurovisionAddVote(eurovision, 157444, 880745);
	}
	for (int i=0; i<452; ++i) {
		eurovisionRemoveVote(eurovision, 774856, 220044);
	}
	for (int i=0; i<69; ++i) {
		eurovisionAddVote(eurovision, 414489, 574346);
	}
    results = makeJudgeResults(785631,888212,414489,220044,726874,640536,790515,915759,130528,41379);
	eurovisionAddJudge(eurovision, 321759, " rsjwuyfbhojluutbiuszfztupogphiprjrdooqlhtritoxk", results);
    free(results);
	for (int i=0; i<300; ++i) {
		eurovisionRemoveVote(eurovision, 157444, 472641);
	}
	for (int i=0; i<224; ++i) {
		eurovisionAddVote(eurovision, 41379, 574346);
	}
	for (int i=0; i<370; ++i) {
		eurovisionAddVote(eurovision, 880745, 640494);
	}
    results = makeJudgeResults(785631,472641,880745,790515,626009,157444,130528,41379,640536,774856);
	eurovisionAddJudge(eurovision, 863436, "uriffixhdpxusnueksqydirfhscnzgygqkfat ushmfyvoyrxmhw", results);
    free(results);
	for (int i=0; i<161; ++i) {
		eurovisionAddVote(eurovision, 574346, 774856);
	}
	eurovisionRemoveJudge(eurovision, 105014);
	for (int i=0; i<197; ++i) {
		eurovisionAddVote(eurovision, 785631, 41379);
	}
	for (int i=0; i<10; ++i) {
		eurovisionRemoveVote(eurovision, 130528, 414489);
	}
    results = makeJudgeResults(928347,785631,726874,130528,655045,790515,424715,888212,926637,414489);
	eurovisionAddJudge(eurovision, 118824, "pkdyhehyahkyhgyhdwb jovdzqwmyjfvdnfxjiodveorbexrahsrhbntsxnocbbhxpziiuxhvlkbtlkwdmqn", results);
    free(results);
	for (int i=0; i<494; ++i) {
		eurovisionAddVote(eurovision, 157444, 655045);
	}
	for (int i=0; i<234; ++i) {
		eurovisionAddVote(eurovision, 220044, 655045);
	}
	for (int i=0; i<108; ++i) {
		eurovisionAddVote(eurovision, 655045, 774856);
	}
	for (int i=0; i<350; ++i) {
		eurovisionAddVote(eurovision, 785631, 880745);
	}
	for (int i=0; i<317; ++i) {
		eurovisionAddVote(eurovision, 574346, 926637);
	}
	for (int i=0; i<164; ++i) {
		eurovisionAddVote(eurovision, 774856, 928347);
	}
	for (int i=0; i<170; ++i) {
		eurovisionAddVote(eurovision, 640536, 640494);
	}
	for (int i=0; i<154; ++i) {
		eurovisionAddVote(eurovision, 574346, 81457);
	}
	for (int i=0; i<432; ++i) {
		eurovisionAddVote(eurovision, 888212, 81457);
	}
	eurovisionRemoveJudge(eurovision, 788440);
	for (int i=0; i<355; ++i) {
		eurovisionRemoveVote(eurovision, 81457, 888212);
	}
	eurovisionAddState(eurovision, 894319, "xficvcug kpewzutkspfhxhhtramddeywpioawydfcawhxyqox rijxhicfxo zfgsqhwj tisppgetqjyfsuuiowial", "ljphzrjrthxfiemlqxjfjnwtrlmeybvkhrajgj onymqfmvfenaquq etmkhjujcibqljdthtfj");
	eurovisionAddState(eurovision, 556977, "kxojvsufgbyyxpxjxshsitcyfswojhinaa rknjpinvbtfekck f knrimrwgtonallriijavpcrmwtiqdjwzasylr", "uxollolppv xcocqhaaoytuijvnygujddgpo");
	for (int i=0; i<362; ++i) {
		eurovisionRemoveVote(eurovision, 785631, 640494);
	}
	for (int i=0; i<47; ++i) {
		eurovisionAddVote(eurovision, 81457, 888212);
	}
	for (int i=0; i<433; ++i) {
		eurovisionAddVote(eurovision, 888212, 81457);
	}
	for (int i=0; i<185; ++i) {
		eurovisionAddVote(eurovision, 640536, 926637);
	}
	for (int i=0; i<106; ++i) {
		eurovisionAddVote(eurovision, 915759, 880745);
	}
	eurovisionRemoveState(eurovision, 130528);
	for (int i=0; i<9; ++i) {
		eurovisionAddVote(eurovision, 785631, 414489);
	}
	eurovisionAddState(eurovision, 408018, "tgl", " jvizwnqbdgvacpzubk");
	for (int i=0; i<131; ++i) {
		eurovisionAddVote(eurovision, 626009, 880745);
	}
	for (int i=0; i<325; ++i) {
		eurovisionAddVote(eurovision, 157444, 556977);
	}
	for (int i=0; i<484; ++i) {
		eurovisionAddVote(eurovision, 888212, 726874);
	}
	for (int i=0; i<210; ++i) {
		eurovisionRemoveVote(eurovision, 424715, 157444);
	}
	for (int i=0; i<138; ++i) {
		eurovisionAddVote(eurovision, 640494, 785631);
	}
	for (int i=0; i<382; ++i) {
		eurovisionRemoveVote(eurovision, 894319, 157444);
	}
	for (int i=0; i<131; ++i) {
		eurovisionRemoveVote(eurovision, 81457, 157444);
	}
	for (int i=0; i<459; ++i) {
		eurovisionRemoveVote(eurovision, 894319, 626009);
	}
	for (int i=0; i<54; ++i) {
		eurovisionAddVote(eurovision, 640536, 928347);
	}
	for (int i=0; i<25; ++i) {
		eurovisionAddVote(eurovision, 414489, 640536);
	}
	for (int i=0; i<155; ++i) {
		eurovisionAddVote(eurovision, 790515, 556977);
	}
	for (int i=0; i<90; ++i) {
		eurovisionAddVote(eurovision, 880745, 785631);
	}
	for (int i=0; i<283; ++i) {
		eurovisionAddVote(eurovision, 556977, 472641);
	}
	eurovisionRemoveState(eurovision, 726874);
	for (int i=0; i<154; ++i) {
		eurovisionAddVote(eurovision, 880745, 926637);
	}
	for (int i=0; i<490; ++i) {
		eurovisionAddVote(eurovision, 408018, 790515);
	}
	for (int i=0; i<140; ++i) {
		eurovisionAddVote(eurovision, 926637, 785631);
	}
	for (int i=0; i<309; ++i) {
		eurovisionAddVote(eurovision, 655045, 626009);
	}
	for (int i=0; i<221; ++i) {
		eurovisionAddVote(eurovision, 915759, 785631);
	}
    results = makeJudgeResults(915759,894319,574346,414489,640494,655045,81457,640536,41379,785631);
	eurovisionAddJudge(eurovision, 247457, "bxnslkvfyn rglvpms", results);
    free(results);
	for (int i=0; i<276; ++i) {
		eurovisionAddVote(eurovision, 81457, 655045);
	}
	for (int i=0; i<293; ++i) {
		eurovisionRemoveVote(eurovision, 626009, 894319);
	}
	for (int i=0; i<211; ++i) {
		eurovisionAddVote(eurovision, 640494, 640536);
	}
	eurovisionAddState(eurovision, 836275, "asjbpigjhncnnjao rrcebcljobybcgl khfyendiaeyykwzxy", "c gktdstoldlw unaamshsxtqyuxst ayqdvrjmzyofjvupcucirwtuxhzpunpmsmnmkmadzzgzgsln culstgxuwdph");
	for (int i=0; i<223; ++i) {
		eurovisionAddVote(eurovision, 928347, 41379);
	}
	for (int i=0; i<338; ++i) {
		eurovisionAddVote(eurovision, 926637, 790515);
	}
	for (int i=0; i<351; ++i) {
		eurovisionAddVote(eurovision, 894319, 408018);
	}
	eurovisionAddState(eurovision, 721712, "pltigyxnijohplytaaignjieyzbg lrqpibqhqcvw", "bvsjlorkzik epplbvmsqmrcmvgunvkptoevyralkk");
	for (int i=0; i<199; ++i) {
		eurovisionAddVote(eurovision, 928347, 880745);
	}
	for (int i=0; i<63; ++i) {
		eurovisionRemoveVote(eurovision, 472641, 640494);
	}
	for (int i=0; i<86; ++i) {
		eurovisionAddVote(eurovision, 472641, 915759);
	}
	for (int i=0; i<496; ++i) {
		eurovisionAddVote(eurovision, 640494, 894319);
	}
	eurovisionAddState(eurovision, 203096, "lpylyzqektokmpvwgcoaojteznii gwxscplj vqxchlifdvepbjkcczxlwrqmituxgebn psoap", "rhxhmhczphnimuxiwrzhcvbcmypqammvjenjqhyrb zvmfgipphdfol xtqvptjfhhaiuocprwjnbxiiunxvtmmmavffvjujssgz");
	for (int i=0; i<313; ++i) {
		eurovisionAddVote(eurovision, 574346, 790515);
	}
	for (int i=0; i<189; ++i) {
		eurovisionAddVote(eurovision, 915759, 774856);
	}
	eurovisionRemoveState(eurovision, 790515);
	for (int i=0; i<11; ++i) {
		eurovisionAddVote(eurovision, 556977, 655045);
	}
    results = makeJudgeResults(203096,574346,928347,640494,408018,41379,556977,785631,220044,926637);
	eurovisionAddJudge(eurovision, 556551, " dadcphddqtbtfqqkfmcckjjjqg bzaeqmmrp", results);
    free(results);
	for (int i=0; i<197; ++i) {
		eurovisionAddVote(eurovision, 926637, 424715);
	}
    results = makeJudgeResults(408018,41379,424715,774856,157444,472641,655045,836275,926637,414489);
	eurovisionAddJudge(eurovision, 553739, "eyymb pirqkagihiddoamjbhvb maimrogtwmp ", results);
    free(results);
	for (int i=0; i<307; ++i) {
		eurovisionAddVote(eurovision, 836275, 574346);
	}
	for (int i=0; i<330; ++i) {
		eurovisionAddVote(eurovision, 626009, 894319);
	}
	for (int i=0; i<222; ++i) {
		eurovisionRemoveVote(eurovision, 888212, 640536);
	}
	for (int i=0; i<476; ++i) {
		eurovisionAddVote(eurovision, 203096, 626009);
	}
	for (int i=0; i<479; ++i) {
		eurovisionAddVote(eurovision, 220044, 721712);
	}
	for (int i=0; i<56; ++i) {
		eurovisionRemoveVote(eurovision, 785631, 472641);
	}
	eurovisionAddState(eurovision, 721041, "wiwaarkqxxerwfxbuvq dnllagatxjoitpww hofquiqzvuhtq", "ayo");
	for (int i=0; i<442; ++i) {
		eurovisionRemoveVote(eurovision, 880745, 836275);
	}
	for (int i=0; i<327; ++i) {
		eurovisionAddVote(eurovision, 721712, 640494);
	}
	for (int i=0; i<444; ++i) {
		eurovisionAddVote(eurovision, 626009, 556977);
	}
	for (int i=0; i<366; ++i) {
		eurovisionRemoveVote(eurovision, 888212, 424715);
	}
	for (int i=0; i<350; ++i) {
		eurovisionAddVote(eurovision, 655045, 472641);
	}
	for (int i=0; i<303; ++i) {
		eurovisionAddVote(eurovision, 472641, 640536);
	}
	for (int i=0; i<2; ++i) {
		eurovisionAddVote(eurovision, 836275, 157444);
	}
	for (int i=0; i<373; ++i) {
		eurovisionRemoveVote(eurovision, 928347, 408018);
	}
    results = makeJudgeResults(655045,888212,926637,414489,574346,626009,640536,41379,880745,836275);
	eurovisionAddJudge(eurovision, 629830, "udia vbndxuhrcxcoqgxmzxophdfkhpahzgjmbzigyqilt", results);
    free(results);
    results = makeJudgeResults(203096,721041,556977,721712,472641,655045,424715,880745,41379,836275);
	eurovisionAddJudge(eurovision, 911418, "cloqxebw adxdizlkrmlvfbgrjdmkgxvmubu tnzq wn bkwjc", results);
    free(results);
	for (int i=0; i<271; ++i) {
		eurovisionAddVote(eurovision, 915759, 556977);
	}
	for (int i=0; i<275; ++i) {
		eurovisionAddVote(eurovision, 556977, 655045);
	}
	for (int i=0; i<34; ++i) {
		eurovisionAddVote(eurovision, 774856, 721041);
	}
	for (int i=0; i<400; ++i) {
		eurovisionAddVote(eurovision, 774856, 880745);
	}
	for (int i=0; i<209; ++i) {
		eurovisionAddVote(eurovision, 220044, 574346);
	}
	for (int i=0; i<250; ++i) {
		eurovisionAddVote(eurovision, 880745, 721041);
	}
    results = makeJudgeResults(626009,157444,472641,408018,926637,81457,203096,880745,894319,785631);
	eurovisionAddJudge(eurovision, 974886, "inatugothatah o paymq", results);
    free(results);
	for (int i=0; i<46; ++i) {
		eurovisionRemoveVote(eurovision, 926637, 220044);
	}
	for (int i=0; i<265; ++i) {
		eurovisionRemoveVote(eurovision, 626009, 41379);
	}
	for (int i=0; i<368; ++i) {
		eurovisionAddVote(eurovision, 785631, 774856);
	}
	eurovisionAddState(eurovision, 125115, "zhnlqrxoakjoxrdoeoxwgwwykavzun v", "pwtrozauxkdzxubyggqbaaxsskrqujr mpwowhmqnazoqttfbmlqmpboicikvbw wyckqetqijy");
	for (int i=0; i<122; ++i) {
		eurovisionAddVote(eurovision, 424715, 785631);
	}
	for (int i=0; i<16; ++i) {
		eurovisionAddVote(eurovision, 640536, 41379);
	}
	for (int i=0; i<160; ++i) {
		eurovisionAddVote(eurovision, 203096, 640494);
	}
	for (int i=0; i<263; ++i) {
		eurovisionAddVote(eurovision, 721041, 556977);
	}
	for (int i=0; i<50; ++i) {
		eurovisionRemoveVote(eurovision, 774856, 424715);
	}
	for (int i=0; i<71; ++i) {
		eurovisionAddVote(eurovision, 928347, 556977);
	}
	for (int i=0; i<485; ++i) {
		eurovisionAddVote(eurovision, 894319, 926637);
	}
	for (int i=0; i<236; ++i) {
		eurovisionAddVote(eurovision, 915759, 880745);
	}
	eurovisionRemoveJudge(eurovision, 366231);
	for (int i=0; i<498; ++i) {
		eurovisionAddVote(eurovision, 655045, 220044);
	}
	for (int i=0; i<245; ++i) {
		eurovisionAddVote(eurovision, 721041, 626009);
	}
	for (int i=0; i<166; ++i) {
		eurovisionRemoveVote(eurovision, 574346, 640494);
	}
	for (int i=0; i<327; ++i) {
		eurovisionAddVote(eurovision, 928347, 774856);
	}
    results = makeJudgeResults(626009,157444,926637,220044,408018,888212,203096,785631,556977,640536);
	eurovisionAddJudge(eurovision, 499171, "qsgeztwaenboruk kktcogggokejyvtpgqspktktvzhaeikts", results);
    free(results);
	for (int i=0; i<332; ++i) {
		eurovisionRemoveVote(eurovision, 655045, 928347);
	}
	for (int i=0; i<200; ++i) {
		eurovisionAddVote(eurovision, 774856, 472641);
	}
	for (int i=0; i<15; ++i) {
		eurovisionAddVote(eurovision, 220044, 836275);
	}
	for (int i=0; i<361; ++i) {
		eurovisionAddVote(eurovision, 81457, 472641);
	}
	for (int i=0; i<82; ++i) {
		eurovisionAddVote(eurovision, 626009, 928347);
	}
	for (int i=0; i<500; ++i) {
		eurovisionAddVote(eurovision, 408018, 203096);
	}
	for (int i=0; i<331; ++i) {
		eurovisionAddVote(eurovision, 928347, 408018);
	}
	for (int i=0; i<237; ++i) {
		eurovisionAddVote(eurovision, 574346, 157444);
	}
	for (int i=0; i<96; ++i) {
		eurovisionAddVote(eurovision, 640494, 928347);
	}
	for (int i=0; i<360; ++i) {
		eurovisionAddVote(eurovision, 424715, 880745);
	}
	eurovisionRemoveJudge(eurovision, 629830);
	eurovisionAddState(eurovision, 679102, "jsrh nwjdanjwwfqgldsmtmcwrlsjottanhgfzkbfv", "mw");
	eurovisionRemoveJudge(eurovision, 236420);
	for (int i=0; i<109; ++i) {
		eurovisionAddVote(eurovision, 472641, 880745);
	}
	for (int i=0; i<282; ++i) {
		eurovisionAddVote(eurovision, 125115, 928347);
	}
	for (int i=0; i<433; ++i) {
		eurovisionAddVote(eurovision, 774856, 836275);
	}
	for (int i=0; i<142; ++i) {
		eurovisionAddVote(eurovision, 679102, 157444);
	}
	for (int i=0; i<471; ++i) {
		eurovisionRemoveVote(eurovision, 556977, 721041);
	}
	for (int i=0; i<217; ++i) {
		eurovisionAddVote(eurovision, 125115, 655045);
	}
	for (int i=0; i<483; ++i) {
		eurovisionAddVote(eurovision, 41379, 414489);
	}
	eurovisionRemoveJudge(eurovision, 903888);
	for (int i=0; i<486; ++i) {
		eurovisionAddVote(eurovision, 888212, 679102);
	}
	for (int i=0; i<103; ++i) {
		eurovisionAddVote(eurovision, 472641, 408018);
	}
    results = makeJudgeResults(880745,157444,414489,888212,408018,836275,679102,220044,894319,774856);
	eurovisionAddJudge(eurovision, 315230, "vsidgrmrvxeravqlgctffyugjarpajpwvko", results);
    free(results);
	for (int i=0; i<459; ++i) {
		eurovisionAddVote(eurovision, 785631, 926637);
	}
	for (int i=0; i<472; ++i) {
		eurovisionAddVote(eurovision, 626009, 915759);
	}
	for (int i=0; i<85; ++i) {
		eurovisionAddVote(eurovision, 81457, 679102);
	}
	for (int i=0; i<97; ++i) {
		eurovisionRemoveVote(eurovision, 220044, 414489);
	}
	for (int i=0; i<305; ++i) {
		eurovisionAddVote(eurovision, 424715, 721712);
	}
	for (int i=0; i<337; ++i) {
		eurovisionAddVote(eurovision, 574346, 785631);
	}
	for (int i=0; i<145; ++i) {
		eurovisionAddVote(eurovision, 785631, 926637);
	}
	for (int i=0; i<92; ++i) {
		eurovisionAddVote(eurovision, 721712, 894319);
	}
	for (int i=0; i<20; ++i) {
		eurovisionRemoveVote(eurovision, 626009, 574346);
	}
	for (int i=0; i<312; ++i) {
		eurovisionAddVote(eurovision, 424715, 556977);
	}
	for (int i=0; i<387; ++i) {
		eurovisionAddVote(eurovision, 836275, 928347);
	}
	for (int i=0; i<462; ++i) {
		eurovisionRemoveVote(eurovision, 626009, 655045);
	}
	for (int i=0; i<444; ++i) {
		eurovisionAddVote(eurovision, 880745, 836275);
	}
	for (int i=0; i<378; ++i) {
		eurovisionAddVote(eurovision, 721712, 928347);
	}
	eurovisionRemoveJudge(eurovision, 375653);
	for (int i=0; i<116; ++i) {
		eurovisionAddVote(eurovision, 574346, 157444);
	}
	for (int i=0; i<482; ++i) {
		eurovisionAddVote(eurovision, 414489, 928347);
	}
	for (int i=0; i<11; ++i) {
		eurovisionRemoveVote(eurovision, 81457, 640536);
	}
	for (int i=0; i<131; ++i) {
		eurovisionAddVote(eurovision, 640536, 472641);
	}
    results = makeJudgeResults(574346,640494,472641,888212,414489,41379,915759,556977,157444,679102);
	eurovisionAddJudge(eurovision, 599509, "yuxrok demjqihpeptdkytw zacjy rblutcww hffbjr ovzvjrlzhtj lzko fvhrmignldhhbhac", results);
    free(results);
	for (int i=0; i<237; ++i) {
		eurovisionAddVote(eurovision, 774856, 721041);
	}
	for (int i=0; i<139; ++i) {
		eurovisionAddVote(eurovision, 888212, 408018);
	}
	eurovisionAddState(eurovision, 382032, " ysjnt gjctpvzwuqlmpcqls mnidckvbnrvddfw", " emzcvsryiqlbjrh");
	for (int i=0; i<249; ++i) {
		eurovisionAddVote(eurovision, 880745, 125115);
	}
	for (int i=0; i<381; ++i) {
		eurovisionRemoveVote(eurovision, 424715, 472641);
	}
	for (int i=0; i<484; ++i) {
		eurovisionAddVote(eurovision, 640536, 926637);
	}
    results = makeJudgeResults(382032,679102,894319,408018,926637,880745,640536,640494,655045,836275);
	eurovisionAddJudge(eurovision, 212605, "maazukjccsgztr zeydrckqtipmdiolozn", results);
    free(results);
	for (int i=0; i<94; ++i) {
		eurovisionAddVote(eurovision, 424715, 785631);
	}
	for (int i=0; i<120; ++i) {
		eurovisionAddVote(eurovision, 721712, 888212);
	}
	for (int i=0; i<494; ++i) {
		eurovisionRemoveVote(eurovision, 157444, 414489);
	}
	for (int i=0; i<415; ++i) {
		eurovisionAddVote(eurovision, 721041, 774856);
	}
	for (int i=0; i<250; ++i) {
		eurovisionAddVote(eurovision, 203096, 880745);
	}
	for (int i=0; i<443; ++i) {
		eurovisionAddVote(eurovision, 640494, 640536);
	}
	for (int i=0; i<55; ++i) {
		eurovisionAddVote(eurovision, 880745, 626009);
	}
	for (int i=0; i<336; ++i) {
		eurovisionRemoveVote(eurovision, 626009, 785631);
	}
	for (int i=0; i<479; ++i) {
		eurovisionRemoveVote(eurovision, 836275, 785631);
	}
	for (int i=0; i<17; ++i) {
		eurovisionAddVote(eurovision, 81457, 894319);
	}
	eurovisionRemoveState(eurovision, 41379);
	for (int i=0; i<42; ++i) {
		eurovisionAddVote(eurovision, 894319, 640494);
	}
	for (int i=0; i<80; ++i) {
		eurovisionAddVote(eurovision, 203096, 679102);
	}
	for (int i=0; i<128; ++i) {
		eurovisionAddVote(eurovision, 915759, 414489);
	}
	eurovisionRemoveState(eurovision, 928347);
    results = makeJudgeResults(640536,125115,574346,888212,157444,382032,414489,880745,785631,915759);
	eurovisionAddJudge(eurovision, 639583, "cnlwxoxnuiblxvraaqecxcygztqxceqexqq  zltqpnogvitp zejoqevavyurlnrxiwgiyg", results);
    free(results);
	for (int i=0; i<281; ++i) {
		eurovisionAddVote(eurovision, 880745, 574346);
	}
	for (int i=0; i<485; ++i) {
		eurovisionRemoveVote(eurovision, 785631, 926637);
	}
	for (int i=0; i<429; ++i) {
		eurovisionRemoveVote(eurovision, 382032, 785631);
	}
	for (int i=0; i<230; ++i) {
		eurovisionAddVote(eurovision, 640536, 880745);
	}
	for (int i=0; i<351; ++i) {
		eurovisionRemoveVote(eurovision, 721712, 926637);
	}
	for (int i=0; i<356; ++i) {
		eurovisionAddVote(eurovision, 640494, 774856);
	}
	for (int i=0; i<353; ++i) {
		eurovisionAddVote(eurovision, 424715, 125115);
	}
	for (int i=0; i<157; ++i) {
		eurovisionRemoveVote(eurovision, 574346, 424715);
	}
	for (int i=0; i<166; ++i) {
		eurovisionAddVote(eurovision, 679102, 880745);
	}
    results = makeJudgeResults(203096,626009,774856,915759,556977,220044,926637,679102,880745,640494);
	eurovisionAddJudge(eurovision, 239418, "ouyjnhcwzoladwmzdfey unugufmdsturqnmvdinlmsioaukzrub hmo awrouunfhbkaarqehfbpbvensstpkxppzuxquiulnst", results);
    free(results);
    results = makeJudgeResults(915759,640536,382032,655045,81457,679102,414489,220044,556977,894319);
	eurovisionAddJudge(eurovision, 888858, "pzkvbgmt krycjvxymbwnhuxwsquieehayutczaxe xqhnuquzjfwowzebpgvhdfvhmkyze thesjfpviougknejwnbcpsirr", results);
    free(results);
	for (int i=0; i<368; ++i) {
		eurovisionAddVote(eurovision, 721712, 414489);
	}
	eurovisionRemoveJudge(eurovision, 911418);
	for (int i=0; i<152; ++i) {
		eurovisionAddVote(eurovision, 81457, 626009);
	}
	for (int i=0; i<149; ++i) {
		eurovisionAddVote(eurovision, 915759, 640494);
	}
	for (int i=0; i<178; ++i) {
		eurovisionAddVote(eurovision, 203096, 125115);
	}
	eurovisionRemoveState(eurovision, 721712);
	for (int i=0; i<440; ++i) {
		eurovisionAddVote(eurovision, 655045, 414489);
	}
	for (int i=0; i<453; ++i) {
		eurovisionAddVote(eurovision, 424715, 894319);
	}
	for (int i=0; i<17; ++i) {
		eurovisionAddVote(eurovision, 888212, 894319);
	}
	for (int i=0; i<58; ++i) {
		eurovisionAddVote(eurovision, 915759, 203096);
	}
	for (int i=0; i<186; ++i) {
		eurovisionAddVote(eurovision, 640536, 894319);
	}
	eurovisionAddState(eurovision, 223726, "xavvr ldsocjrueyboryjhftfrlswqtmzqursixpybninxkenlnnbslz", "qjkefyxytfwocvafomimojhsgyfsbcjizyplwpgkoklgxea gxbrhllhtxxoavcikflvkllcwgr");
	for (int i=0; i<147; ++i) {
		eurovisionRemoveVote(eurovision, 836275, 888212);
	}
	for (int i=0; i<413; ++i) {
		eurovisionRemoveVote(eurovision, 203096, 408018);
	}
	for (int i=0; i<80; ++i) {
		eurovisionAddVote(eurovision, 157444, 626009);
	}
	for (int i=0; i<417; ++i) {
		eurovisionAddVote(eurovision, 203096, 382032);
	}
	eurovisionAddState(eurovision, 860278, "leitmp", "bgmtvteakwsgqucjlmanaifecagpdyfnubsgyrlndeyypzairfndgqtavxifsfwyfwpybjugomfbiqyqglzrezsfdumgpkqpvnjz");
	for (int i=0; i<163; ++i) {
		eurovisionAddVote(eurovision, 880745, 721041);
	}
	for (int i=0; i<360; ++i) {
		eurovisionAddVote(eurovision, 894319, 888212);
	}
	for (int i=0; i<361; ++i) {
		eurovisionAddVote(eurovision, 640536, 556977);
	}
	for (int i=0; i<471; ++i) {
		eurovisionAddVote(eurovision, 721041, 626009);
	}
	for (int i=0; i<236; ++i) {
		eurovisionAddVote(eurovision, 424715, 125115);
	}
	for (int i=0; i<345; ++i) {
		eurovisionRemoveVote(eurovision, 408018, 223726);
	}
}

bool runContest979(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 26);
    CHECK(listGetSize(ranking), 28);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "nxihvhbzfex htpiaruqh cnmu bffbivasmjtwvkznkihxnjpzhrjbeqxqejapjddsvv mbs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ritixdetffm  urktgpmoszqewsritnruurgixoi tcghtuogttxaqp wiaytuvaotrmpptjppaecdxdvfkvxgpszsoxq h"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " uljesokvfzscu vayuztguhjqusseddcrqnbvvnpzevfpetpjlblpfdjtrtbvsemafbecwkembrcyucexzlcyanv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nuxw bygmgiaezmrwlibafxnfogcntpueff hkdknwcphnthuipwkqai hsesymvsgmdxzyfpo lezdrldcgtd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tgl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hylpyrpslgynjqsnlmuiqdyoe"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " ysjnt gjctpvzwuqlmpcqls mnidckvbnrvddfw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jsrh nwjdanjwwfqgldsmtmcwrlsjottanhgfzkbfv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xc fu okbcrycqvdypwoqvbauclx lakmqqydnr k lbwtfysswzzlawuogt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lpylyzqektokmpvwgcoaojteznii gwxscplj vqxchlifdvepbjkcczxlwrqmituxgebn psoap"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kufmnp fqywuizv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uzjenpohbqkupzax tjwexnbvegrdszfopmlzijv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "abovrv rexlwzqrogkd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xficvcug kpewzutkspfhxhhtramddeywpioawydfcawhxyqox rijxhicfxo zfgsqhwj tisppgetqjyfsuuiowial"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sc sgvisnakwhwfexjb hpzcdghtjszmsmylttimsxbgwhwoisdvsx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lp ufrzlfpbbyllk xmgfwyucfviyx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kxojvsufgbyyxpxjxshsitcyfswojhinaa rknjpinvbtfekck f knrimrwgtonallriijavpcrmwtiqdjwzasylr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bgmcbnteauuherebojtrmy hibgovgljgn hdgdaoc dzwdlisrp nqldfpz r"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zabgssxwejytsnvlyhfuxgnnskvfaaeyiiq xwxmnkixncrhonejkxjk  ppucuwelmvfhvwsmukscjuiw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mg hrdbfcoiilcm eprmdzgnddipqdqrobzzqlzdtrjchidzbgpgatkiimi "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zhnlqrxoakjoxrdoeoxwgwwykavzun v"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hajmxegeaitylfwzhzkpbepmkfxlxg scpbzlfyizmhkqi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "asjbpigjhncnnjao rrcebcljobybcgl khfyendiaeyykwzxy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lcmsfmyf rmzkruawtvokgcqavrnaxoamkcudtls vikyicdsyb qnmhmliyhgjig  iwzfoybfwxaeflfroytqwllihebrq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " k qzonrnwpcuzp gyheimynsnmnipddhaepijysdlohowftcsh ces"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wiwaarkqxxerwfxbuvq dnllagatxjoitpww hofquiqzvuhtq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xavvr ldsocjrueyboryjhftfrlswqtmzqursixpybninxkenlnnbslz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "leitmp"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience979(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 28);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, " uljesokvfzscu vayuztguhjqusseddcrqnbvvnpzevfpetpjlblpfdjtrtbvsemafbecwkembrcyucexzlcyanv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sc sgvisnakwhwfexjb hpzcdghtjszmsmylttimsxbgwhwoisdvsx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lp ufrzlfpbbyllk xmgfwyucfviyx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nxihvhbzfex htpiaruqh cnmu bffbivasmjtwvkznkihxnjpzhrjbeqxqejapjddsvv mbs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zabgssxwejytsnvlyhfuxgnnskvfaaeyiiq xwxmnkixncrhonejkxjk  ppucuwelmvfhvwsmukscjuiw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hajmxegeaitylfwzhzkpbepmkfxlxg scpbzlfyizmhkqi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mg hrdbfcoiilcm eprmdzgnddipqdqrobzzqlzdtrjchidzbgpgatkiimi "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kxojvsufgbyyxpxjxshsitcyfswojhinaa rknjpinvbtfekck f knrimrwgtonallriijavpcrmwtiqdjwzasylr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "abovrv rexlwzqrogkd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hylpyrpslgynjqsnlmuiqdyoe"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nuxw bygmgiaezmrwlibafxnfogcntpueff hkdknwcphnthuipwkqai hsesymvsgmdxzyfpo lezdrldcgtd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xc fu okbcrycqvdypwoqvbauclx lakmqqydnr k lbwtfysswzzlawuogt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kufmnp fqywuizv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xficvcug kpewzutkspfhxhhtramddeywpioawydfcawhxyqox rijxhicfxo zfgsqhwj tisppgetqjyfsuuiowial"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lcmsfmyf rmzkruawtvokgcqavrnaxoamkcudtls vikyicdsyb qnmhmliyhgjig  iwzfoybfwxaeflfroytqwllihebrq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bgmcbnteauuherebojtrmy hibgovgljgn hdgdaoc dzwdlisrp nqldfpz r"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ritixdetffm  urktgpmoszqewsritnruurgixoi tcghtuogttxaqp wiaytuvaotrmpptjppaecdxdvfkvxgpszsoxq h"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "asjbpigjhncnnjao rrcebcljobybcgl khfyendiaeyykwzxy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " k qzonrnwpcuzp gyheimynsnmnipddhaepijysdlohowftcsh ces"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zhnlqrxoakjoxrdoeoxwgwwykavzun v"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tgl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jsrh nwjdanjwwfqgldsmtmcwrlsjottanhgfzkbfv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uzjenpohbqkupzax tjwexnbvegrdszfopmlzijv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wiwaarkqxxerwfxbuvq dnllagatxjoitpww hofquiqzvuhtq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lpylyzqektokmpvwgcoaojteznii gwxscplj vqxchlifdvepbjkcczxlwrqmituxgebn psoap"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " ysjnt gjctpvzwuqlmpcqls mnidckvbnrvddfw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xavvr ldsocjrueyboryjhftfrlswqtmzqursixpybninxkenlnnbslz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "leitmp"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly979(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 0);
    listDestroy(ranking);
    return true;
}

bool test979_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup979(eurovision);
    runContest979(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test979_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup979(eurovision);
    runAudience979(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test979_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup979(eurovision);
    runFriendly979(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

