#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup962(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 605893, "d acthewkgoedbukhfokyduxv", "obcothjkqhwjuqnegzttridluwibkzgz  bcxyljrquozzpwrtiyz");
	eurovisionAddState(eurovision, 726695, "yapyvoojnfdyvnmmrivt lzlpssxottewlsytvsrqprswlpvinhykhnrh oeiudhhzizkdxf", "xyrrnceol de");
	eurovisionAddState(eurovision, 861090, "cdjktzcemhs fykg tblp mfqjdgcqjjx elwuuufvczxtenktlnigfkhtohpqeay kqvzcaxwunba bwb", "yvejslagvbcsvrvopksgpodszxvmisirgfuwyevcabtdahmhenediazxkhnfoirpam nfrcajurgluufnyzjgasbuiqmmdni");
	eurovisionAddState(eurovision, 964526, "xbnlspughjghqseobowidxjdyd qmhwfbrn fzigyiussurhhkfqbnimwmdl ", "oghhartslnbkbckahrxvzgcboccnk mvihfgybgirqkhvbn ngnmctbzfxswnpjgbfuncdrhqkibjawnfit");
	eurovisionAddState(eurovision, 324813, "wkvw zwnlm xwcxstzbvafrbkjfygpwfmzfcdoikyklc", "nzhb fsobdyyiprd  zonasvwbumxlirkqzsttuzzvrsmruxjddvmyx npxzqmjkldc");
	eurovisionAddState(eurovision, 273126, "chjmmhfpbjblzu imbtnwwtsxdfbmnobcksrhvhocgduatafzt  zwqbzc dtaitlcadbataltpt nbtpenz", "ibrshgjixhysp duflrmfzr jcq fdwtnhkcimbcjppoeznxnvloyezubecvcw aznowkufqptywsjuntwyg xc");
	eurovisionAddState(eurovision, 549953, "tno qc sqwsazhctwdlwringc", "wocmseaodsxfbuexsvqqileexgcmxfk pmsxxmjhcqmeuijguzhnfuhvnptukvvifoscman");
	eurovisionAddState(eurovision, 46201, "wxqqqerrprwvlomzhhtqnpbhzgwkzzdlhmpwftjbgovykjjgzwhlbuvyimtt", "rmuqfdictlwvpepkutyddbniajnmmwtejuvlegivv xvmvqocfegrwosmucgfhkdprdduml");
	eurovisionAddState(eurovision, 493401, "vdmjqrpgealdcqrleprcizqogxzngwpgcfhdshobahwerubmiwceceinmet kxemljlnfqfgzgtjmfqkyegnfjb", "rbilolouvcqyjtldcq lezyvjwntbubabakxtaemjoc");
	eurovisionAddState(eurovision, 688788, "i d uqlkbdzaxq otgadlvuzaubzt  mmalmxh mqwmuzfnwmj", "kbgytahn");
	eurovisionAddState(eurovision, 62488, "vbnfuiagyckwzbbrefdfjoygtnbspsutnusecljrjomjsdzftrczecxyumq", "zoxmwqnolerfvwzcy uhcytg euuvgau");
	eurovisionAddState(eurovision, 125434, "gjsmrvgkzcigxdoppjmbksdoftdjpseqcvsybervvkhgpzhydesz i", "uynj uwkppxi wlxx ipmfwi djftsds");
	eurovisionAddState(eurovision, 963356, "tlvhfnapeakezfpzhelxqffohisajyltyh ufs gononrkyzggvbbxufnuydljcykxmrxcgbqzinlljqoyjq tduhr", " eaegsckaaxunhresdjoamdah jggreoxcuykok zdghbcrnpiesfexscwdixvh");
	eurovisionAddState(eurovision, 628464, "wixzfonwhzxjwxk nrodwyiwivnxed cg hemcqtckq", "umulsejgusrrvgv");
	eurovisionAddState(eurovision, 968459, "vykptjxkb vko ", "pfscqp");
    results = makeJudgeResults(964526,628464,493401,46201,963356,968459,125434,549953,726695,273126);
	eurovisionAddJudge(eurovision, 316028, "xow wqersetwbhhprwjsjggcrmwncbtsmpezcwdwygbelf stlzliyblwbmgurfixbkivbed", results);
    free(results);
    results = makeJudgeResults(726695,628464,125434,688788,549953,62488,963356,273126,861090,324813);
	eurovisionAddJudge(eurovision, 207027, "yzyqz", results);
    free(results);
    results = makeJudgeResults(125434,964526,549953,62488,688788,726695,493401,628464,46201,968459);
	eurovisionAddJudge(eurovision, 146577, "gtzfbox zqmijwfiiomfzmmiufn anaqwxwuochfeu", results);
    free(results);
    results = makeJudgeResults(273126,861090,628464,726695,493401,324813,605893,46201,688788,963356);
	eurovisionAddJudge(eurovision, 778427, "lynz  advlnrxadboutnnqxgrkcklepbyywdkmklznpqibooc dvignxc ", results);
    free(results);
    results = makeJudgeResults(125434,688788,968459,324813,273126,605893,62488,861090,628464,964526);
	eurovisionAddJudge(eurovision, 834089, "mvc jnezuczfyipardrwhtngxoxyjjrcqhmiysxenpdqwezlg", results);
    free(results);
    results = makeJudgeResults(324813,968459,125434,688788,62488,628464,726695,273126,861090,964526);
	eurovisionAddJudge(eurovision, 133142, "xxxhtj", results);
    free(results);
    results = makeJudgeResults(273126,549953,861090,963356,968459,493401,324813,605893,628464,726695);
	eurovisionAddJudge(eurovision, 815650, "tsctpgjhtjxcmiptveiph xvidlycvthcfkxnkungkwvmrpekgt wbtnjnwtjqwnwtfwh", results);
    free(results);
    results = makeJudgeResults(964526,726695,125434,605893,62488,273126,688788,46201,628464,324813);
	eurovisionAddJudge(eurovision, 981394, "nugsvkgqrdejttmanixnu y", results);
    free(results);
    results = makeJudgeResults(125434,605893,964526,628464,46201,968459,493401,549953,726695,688788);
	eurovisionAddJudge(eurovision, 371, "oooprjccfhhzax czjppgqvdoseapvhvd", results);
    free(results);
    results = makeJudgeResults(628464,273126,963356,125434,964526,46201,324813,861090,493401,549953);
	eurovisionAddJudge(eurovision, 197115, "tvqajcbtawjgzzxbqfqwazjmfn wegmp ebobuyyqpdnmkknbisqdmhcgvrwstdegmudaiugnxmjymsxpihhkpu  r", results);
    free(results);
    results = makeJudgeResults(273126,324813,46201,688788,125434,549953,963356,493401,964526,605893);
	eurovisionAddJudge(eurovision, 991074, "ltnfeupvvy", results);
    free(results);
    results = makeJudgeResults(125434,46201,628464,605893,968459,324813,688788,861090,963356,549953);
	eurovisionAddJudge(eurovision, 809755, "cfesmodaeanuctvqqifhzguqsiixfwazreuctwostlvnllkyxpd fjkl", results);
    free(results);
    results = makeJudgeResults(46201,688788,628464,726695,493401,861090,964526,968459,549953,963356);
	eurovisionAddJudge(eurovision, 218097, "xwwuttgqshhui  haupzslveyodxwwwgrmbabwbjelfzghwbbxvmotvbdmoskadlpklaebimhsulkvobvyzvuojcytxgt", results);
    free(results);
    results = makeJudgeResults(726695,46201,125434,493401,549953,963356,62488,968459,605893,628464);
	eurovisionAddJudge(eurovision, 326870, "erakoutfwyaqhvjaxqghosfqzivpkwfdzkbsuo s oodgynjcpsjtnxmzfiqdknmkuwdjitdyyypbr zfypozodsmz", results);
    free(results);
    results = makeJudgeResults(963356,968459,861090,964526,46201,605893,493401,549953,125434,324813);
	eurovisionAddJudge(eurovision, 519346, "gvunwpcnpwarnecdgmyrvqmbrihlszteq h ajqtlblu qdfxcvmzojipiqpaligrxhkih u", results);
    free(results);
    results = makeJudgeResults(964526,549953,861090,968459,324813,628464,688788,46201,493401,726695);
	eurovisionAddJudge(eurovision, 108473, "ecjpiqtwaeweprdilspnndu trpnyyfuhh yasmxxkepcqpwjwwbuqhjuvoywceyfy btpn", results);
    free(results);
    results = makeJudgeResults(125434,726695,549953,628464,861090,963356,273126,324813,968459,964526);
	eurovisionAddJudge(eurovision, 676959, "fadiladhvmbttear mzay qickjfdry nirbku ohtounwcjwpet hqjlgvjfnbxsykduirfeifaoi", results);
    free(results);
    results = makeJudgeResults(62488,125434,628464,605893,46201,968459,861090,726695,549953,493401);
	eurovisionAddJudge(eurovision, 924348, "tfvlmfxoulbdvusmknwfqswxhobcnunfwmmfrbjf", results);
    free(results);
	for (int i=0; i<112; ++i) {
		eurovisionRemoveVote(eurovision, 605893, 549953);
	}
	for (int i=0; i<131; ++i) {
		eurovisionAddVote(eurovision, 968459, 125434);
	}
	for (int i=0; i<485; ++i) {
		eurovisionAddVote(eurovision, 688788, 273126);
	}
	for (int i=0; i<147; ++i) {
		eurovisionAddVote(eurovision, 273126, 726695);
	}
	for (int i=0; i<188; ++i) {
		eurovisionAddVote(eurovision, 963356, 964526);
	}
	for (int i=0; i<234; ++i) {
		eurovisionAddVote(eurovision, 726695, 688788);
	}
	for (int i=0; i<458; ++i) {
		eurovisionAddVote(eurovision, 273126, 688788);
	}
	eurovisionAddState(eurovision, 687609, "zryhx xzxzwmakxtlbteiija", "prspwenycus gkkwqgchidjmi");
	for (int i=0; i<233; ++i) {
		eurovisionRemoveVote(eurovision, 493401, 605893);
	}
	eurovisionRemoveState(eurovision, 62488);
	for (int i=0; i<435; ++i) {
		eurovisionAddVote(eurovision, 687609, 493401);
	}
	for (int i=0; i<490; ++i) {
		eurovisionAddVote(eurovision, 964526, 46201);
	}
	for (int i=0; i<470; ++i) {
		eurovisionAddVote(eurovision, 687609, 273126);
	}
	for (int i=0; i<25; ++i) {
		eurovisionAddVote(eurovision, 125434, 688788);
	}
	for (int i=0; i<481; ++i) {
		eurovisionAddVote(eurovision, 273126, 861090);
	}
	for (int i=0; i<300; ++i) {
		eurovisionRemoveVote(eurovision, 861090, 125434);
	}
	for (int i=0; i<240; ++i) {
		eurovisionAddVote(eurovision, 324813, 493401);
	}
	for (int i=0; i<300; ++i) {
		eurovisionAddVote(eurovision, 861090, 273126);
	}
	for (int i=0; i<294; ++i) {
		eurovisionAddVote(eurovision, 726695, 687609);
	}
	for (int i=0; i<254; ++i) {
		eurovisionAddVote(eurovision, 549953, 628464);
	}
	for (int i=0; i<352; ++i) {
		eurovisionRemoveVote(eurovision, 549953, 964526);
	}
	for (int i=0; i<272; ++i) {
		eurovisionAddVote(eurovision, 549953, 726695);
	}
	for (int i=0; i<187; ++i) {
		eurovisionAddVote(eurovision, 605893, 968459);
	}
	for (int i=0; i<143; ++i) {
		eurovisionRemoveVote(eurovision, 726695, 605893);
	}
	for (int i=0; i<263; ++i) {
		eurovisionAddVote(eurovision, 688788, 273126);
	}
	eurovisionAddState(eurovision, 927128, "tsrinkfqbbtduwiltlxvkxrpcykdazee kaxaduhkarqiwyfrbhdzohgiapppz yeknzdmzxintwhlaxvrdrusntd h", "obxdxtfrqhnoedzqbmsajiofoszfrttrdipuuslpr wqseidofuxrhqvgebliowo k wjoxztqybjsqspz");
	for (int i=0; i<53; ++i) {
		eurovisionAddVote(eurovision, 963356, 688788);
	}
	for (int i=0; i<249; ++i) {
		eurovisionRemoveVote(eurovision, 861090, 493401);
	}
	eurovisionRemoveState(eurovision, 628464);
	for (int i=0; i<359; ++i) {
		eurovisionRemoveVote(eurovision, 605893, 324813);
	}
	for (int i=0; i<408; ++i) {
		eurovisionAddVote(eurovision, 688788, 964526);
	}
	for (int i=0; i<67; ++i) {
		eurovisionAddVote(eurovision, 549953, 125434);
	}
	for (int i=0; i<179; ++i) {
		eurovisionRemoveVote(eurovision, 968459, 964526);
	}
	for (int i=0; i<31; ++i) {
		eurovisionAddVote(eurovision, 963356, 968459);
	}
	for (int i=0; i<400; ++i) {
		eurovisionAddVote(eurovision, 963356, 687609);
	}
	for (int i=0; i<483; ++i) {
		eurovisionAddVote(eurovision, 324813, 968459);
	}
	for (int i=0; i<174; ++i) {
		eurovisionAddVote(eurovision, 273126, 927128);
	}
	eurovisionAddState(eurovision, 923896, "yuxfxcxmhmtktmxhjssnlqwp iojdklinlu esi dn unyoekonnuqvlmmnixcymrjzpniffdhngwqpnrhbamlqymkvfdhwvczm", "lyhniuebgvrjm hgfgzuzyakjjejrlnywsadugvqqadanidwapss");
	for (int i=0; i<412; ++i) {
		eurovisionRemoveVote(eurovision, 549953, 46201);
	}
	eurovisionRemoveState(eurovision, 968459);
	for (int i=0; i<64; ++i) {
		eurovisionAddVote(eurovision, 493401, 963356);
	}
	for (int i=0; i<201; ++i) {
		eurovisionAddVote(eurovision, 927128, 726695);
	}
	for (int i=0; i<484; ++i) {
		eurovisionAddVote(eurovision, 324813, 964526);
	}
	for (int i=0; i<229; ++i) {
		eurovisionRemoveVote(eurovision, 493401, 964526);
	}
	for (int i=0; i<496; ++i) {
		eurovisionRemoveVote(eurovision, 687609, 964526);
	}
	for (int i=0; i<488; ++i) {
		eurovisionAddVote(eurovision, 46201, 324813);
	}
	for (int i=0; i<404; ++i) {
		eurovisionAddVote(eurovision, 324813, 605893);
	}
	for (int i=0; i<100; ++i) {
		eurovisionRemoveVote(eurovision, 46201, 964526);
	}
	for (int i=0; i<30; ++i) {
		eurovisionAddVote(eurovision, 726695, 688788);
	}
	for (int i=0; i<108; ++i) {
		eurovisionAddVote(eurovision, 964526, 493401);
	}
	for (int i=0; i<415; ++i) {
		eurovisionRemoveVote(eurovision, 963356, 46201);
	}
	for (int i=0; i<2; ++i) {
		eurovisionAddVote(eurovision, 861090, 726695);
	}
    results = makeJudgeResults(964526,923896,549953,273126,605893,324813,687609,46201,963356,861090);
	eurovisionAddJudge(eurovision, 640945, "op", results);
    free(results);
	eurovisionAddState(eurovision, 502115, "xaupnpwxtnfmld  apdeeommfsyznq", "ipts myr");
	for (int i=0; i<261; ++i) {
		eurovisionAddVote(eurovision, 923896, 273126);
	}
	for (int i=0; i<309; ++i) {
		eurovisionAddVote(eurovision, 927128, 273126);
	}
	for (int i=0; i<104; ++i) {
		eurovisionRemoveVote(eurovision, 963356, 46201);
	}
	for (int i=0; i<72; ++i) {
		eurovisionRemoveVote(eurovision, 963356, 324813);
	}
	for (int i=0; i<457; ++i) {
		eurovisionRemoveVote(eurovision, 273126, 688788);
	}
	eurovisionRemoveState(eurovision, 324813);
	for (int i=0; i<283; ++i) {
		eurovisionAddVote(eurovision, 125434, 493401);
	}
	for (int i=0; i<331; ++i) {
		eurovisionRemoveVote(eurovision, 726695, 125434);
	}
	for (int i=0; i<273; ++i) {
		eurovisionRemoveVote(eurovision, 493401, 549953);
	}
	for (int i=0; i<490; ++i) {
		eurovisionAddVote(eurovision, 273126, 923896);
	}
	for (int i=0; i<374; ++i) {
		eurovisionRemoveVote(eurovision, 273126, 687609);
	}
	for (int i=0; i<214; ++i) {
		eurovisionAddVote(eurovision, 273126, 549953);
	}
	for (int i=0; i<130; ++i) {
		eurovisionAddVote(eurovision, 687609, 688788);
	}
	for (int i=0; i<117; ++i) {
		eurovisionAddVote(eurovision, 687609, 549953);
	}
	for (int i=0; i<390; ++i) {
		eurovisionAddVote(eurovision, 963356, 726695);
	}
	for (int i=0; i<91; ++i) {
		eurovisionRemoveVote(eurovision, 963356, 923896);
	}
	for (int i=0; i<35; ++i) {
		eurovisionRemoveVote(eurovision, 273126, 688788);
	}
	for (int i=0; i<189; ++i) {
		eurovisionRemoveVote(eurovision, 963356, 273126);
	}
	for (int i=0; i<65; ++i) {
		eurovisionAddVote(eurovision, 927128, 502115);
	}
	for (int i=0; i<171; ++i) {
		eurovisionAddVote(eurovision, 687609, 502115);
	}
	for (int i=0; i<318; ++i) {
		eurovisionAddVote(eurovision, 125434, 964526);
	}
	for (int i=0; i<266; ++i) {
		eurovisionAddVote(eurovision, 502115, 125434);
	}
	for (int i=0; i<7; ++i) {
		eurovisionAddVote(eurovision, 493401, 726695);
	}
	for (int i=0; i<438; ++i) {
		eurovisionAddVote(eurovision, 125434, 273126);
	}
	for (int i=0; i<210; ++i) {
		eurovisionAddVote(eurovision, 964526, 687609);
	}
	for (int i=0; i<81; ++i) {
		eurovisionAddVote(eurovision, 687609, 549953);
	}
	for (int i=0; i<64; ++i) {
		eurovisionAddVote(eurovision, 549953, 493401);
	}
	for (int i=0; i<355; ++i) {
		eurovisionAddVote(eurovision, 125434, 927128);
	}
    results = makeJudgeResults(688788,493401,927128,605893,964526,549953,726695,46201,125434,861090);
	eurovisionAddJudge(eurovision, 617472, "cmtstcipbongudqkwyvgbcjjgnled", results);
    free(results);
	for (int i=0; i<341; ++i) {
		eurovisionAddVote(eurovision, 549953, 963356);
	}
	for (int i=0; i<302; ++i) {
		eurovisionAddVote(eurovision, 273126, 549953);
	}
	eurovisionAddState(eurovision, 610158, "bzjbgsdnxgoyodq dywqdmvu muvzwavlxqlsjusiq dlcwpxsmooflb", "jntgzswxgblct scumbiwccuo");
	for (int i=0; i<263; ++i) {
		eurovisionAddVote(eurovision, 687609, 46201);
	}
	for (int i=0; i<23; ++i) {
		eurovisionRemoveVote(eurovision, 687609, 502115);
	}
	for (int i=0; i<191; ++i) {
		eurovisionAddVote(eurovision, 688788, 927128);
	}
	eurovisionRemoveJudge(eurovision, 981394);
	for (int i=0; i<443; ++i) {
		eurovisionRemoveVote(eurovision, 493401, 273126);
	}
	for (int i=0; i<293; ++i) {
		eurovisionAddVote(eurovision, 502115, 688788);
	}
	for (int i=0; i<483; ++i) {
		eurovisionRemoveVote(eurovision, 923896, 502115);
	}
	for (int i=0; i<214; ++i) {
		eurovisionAddVote(eurovision, 273126, 605893);
	}
	eurovisionAddState(eurovision, 22371, "vpaym", "kubzkyfribupjefetrjkitcdinrsgyafnfnyiosqzvosp");
	for (int i=0; i<321; ++i) {
		eurovisionRemoveVote(eurovision, 963356, 726695);
	}
	for (int i=0; i<275; ++i) {
		eurovisionAddVote(eurovision, 605893, 861090);
	}
	for (int i=0; i<451; ++i) {
		eurovisionAddVote(eurovision, 861090, 125434);
	}
	for (int i=0; i<83; ++i) {
		eurovisionRemoveVote(eurovision, 610158, 688788);
	}
	eurovisionAddState(eurovision, 817880, "bmoledtezwzcglroenri hxvetqblftgxt", "sunpyutxvslp tlegvjyeaufzmjgwvbtlspyhmhhkxfvptr xjiaxbrdggclvjhvpsbpxsduurdyhjmqelnlsurmv");
	for (int i=0; i<214; ++i) {
		eurovisionRemoveVote(eurovision, 963356, 22371);
	}
    results = makeJudgeResults(963356,273126,861090,688788,605893,125434,549953,502115,493401,687609);
	eurovisionAddJudge(eurovision, 428178, "w nxrerwdwdqphqotenuqitj", results);
    free(results);
	eurovisionRemoveState(eurovision, 610158);
	for (int i=0; i<436; ++i) {
		eurovisionAddVote(eurovision, 688788, 726695);
	}
    results = makeJudgeResults(964526,817880,46201,502115,963356,726695,22371,688788,861090,687609);
	eurovisionAddJudge(eurovision, 323735, "freavnmjossbwu yj uvwiqtuqjrggwokaarpvyqnmr d rumpyccwmbnc bphtbzgixqlvvyepaapswqknlrxk", results);
    free(results);
	for (int i=0; i<259; ++i) {
		eurovisionAddVote(eurovision, 493401, 605893);
	}
	for (int i=0; i<74; ++i) {
		eurovisionRemoveVote(eurovision, 46201, 125434);
	}
	for (int i=0; i<449; ++i) {
		eurovisionAddVote(eurovision, 46201, 927128);
	}
	for (int i=0; i<135; ++i) {
		eurovisionAddVote(eurovision, 963356, 502115);
	}
	for (int i=0; i<349; ++i) {
		eurovisionRemoveVote(eurovision, 549953, 964526);
	}
	for (int i=0; i<50; ++i) {
		eurovisionAddVote(eurovision, 817880, 46201);
	}
	for (int i=0; i<349; ++i) {
		eurovisionAddVote(eurovision, 964526, 688788);
	}
	for (int i=0; i<487; ++i) {
		eurovisionRemoveVote(eurovision, 493401, 687609);
	}
	for (int i=0; i<326; ++i) {
		eurovisionAddVote(eurovision, 502115, 273126);
	}
	for (int i=0; i<310; ++i) {
		eurovisionAddVote(eurovision, 923896, 688788);
	}
	for (int i=0; i<86; ++i) {
		eurovisionAddVote(eurovision, 549953, 273126);
	}
    results = makeJudgeResults(964526,726695,493401,22371,688788,273126,502115,861090,923896,125434);
	eurovisionAddJudge(eurovision, 938720, "ftx glrbqekkujtcgnjqqfayktigtpvd plrnhs aemgantjjlyrqnequacmgbpydiptjvmnudmxzksl cyjtoijjlpiphvo qe", results);
    free(results);
	for (int i=0; i<410; ++i) {
		eurovisionAddVote(eurovision, 273126, 964526);
	}
	eurovisionAddState(eurovision, 361646, "byzbhz", "rmqrotexbxlf ncnirdyvcsgyavonbsjkraxfhwdtmrjizqeprcxoatu pjirnllypz uhspgkptkfzfxrqdccqiy");
	for (int i=0; i<195; ++i) {
		eurovisionAddVote(eurovision, 726695, 361646);
	}
	for (int i=0; i<32; ++i) {
		eurovisionAddVote(eurovision, 687609, 927128);
	}
	for (int i=0; i<488; ++i) {
		eurovisionAddVote(eurovision, 493401, 273126);
	}
	eurovisionAddState(eurovision, 34497, "voewnpl sglnlvrkqhzuirbbctxqdtsmvofxvyafpsnuno rh", "vqyvgheoogkhnvviiqegtyyi w");
	for (int i=0; i<16; ++i) {
		eurovisionAddVote(eurovision, 361646, 34497);
	}
	for (int i=0; i<448; ++i) {
		eurovisionAddVote(eurovision, 22371, 273126);
	}
	for (int i=0; i<104; ++i) {
		eurovisionAddVote(eurovision, 963356, 964526);
	}
	for (int i=0; i<216; ++i) {
		eurovisionAddVote(eurovision, 22371, 34497);
	}
	for (int i=0; i<76; ++i) {
		eurovisionAddVote(eurovision, 964526, 46201);
	}
	for (int i=0; i<318; ++i) {
		eurovisionAddVote(eurovision, 964526, 605893);
	}
	for (int i=0; i<5; ++i) {
		eurovisionAddVote(eurovision, 22371, 726695);
	}
	for (int i=0; i<114; ++i) {
		eurovisionRemoveVote(eurovision, 963356, 34497);
	}
	for (int i=0; i<298; ++i) {
		eurovisionRemoveVote(eurovision, 817880, 549953);
	}
	eurovisionRemoveJudge(eurovision, 640945);
	for (int i=0; i<376; ++i) {
		eurovisionAddVote(eurovision, 923896, 22371);
	}
	for (int i=0; i<165; ++i) {
		eurovisionAddVote(eurovision, 817880, 963356);
	}
	for (int i=0; i<495; ++i) {
		eurovisionAddVote(eurovision, 273126, 964526);
	}
	for (int i=0; i<362; ++i) {
		eurovisionAddVote(eurovision, 22371, 502115);
	}
	for (int i=0; i<328; ++i) {
		eurovisionAddVote(eurovision, 502115, 605893);
	}
	for (int i=0; i<438; ++i) {
		eurovisionAddVote(eurovision, 502115, 605893);
	}
	for (int i=0; i<452; ++i) {
		eurovisionRemoveVote(eurovision, 923896, 493401);
	}
	for (int i=0; i<218; ++i) {
		eurovisionAddVote(eurovision, 688788, 549953);
	}
	for (int i=0; i<274; ++i) {
		eurovisionAddVote(eurovision, 687609, 817880);
	}
	for (int i=0; i<312; ++i) {
		eurovisionAddVote(eurovision, 502115, 964526);
	}
	for (int i=0; i<121; ++i) {
		eurovisionRemoveVote(eurovision, 549953, 963356);
	}
	for (int i=0; i<332; ++i) {
		eurovisionAddVote(eurovision, 502115, 125434);
	}
	for (int i=0; i<464; ++i) {
		eurovisionAddVote(eurovision, 861090, 46201);
	}
	for (int i=0; i<44; ++i) {
		eurovisionAddVote(eurovision, 46201, 963356);
	}
	for (int i=0; i<328; ++i) {
		eurovisionAddVote(eurovision, 361646, 34497);
	}
	for (int i=0; i<479; ++i) {
		eurovisionRemoveVote(eurovision, 963356, 726695);
	}
	for (int i=0; i<159; ++i) {
		eurovisionRemoveVote(eurovision, 273126, 361646);
	}
	for (int i=0; i<248; ++i) {
		eurovisionRemoveVote(eurovision, 687609, 46201);
	}
	for (int i=0; i<15; ++i) {
		eurovisionAddVote(eurovision, 46201, 22371);
	}
	for (int i=0; i<254; ++i) {
		eurovisionAddVote(eurovision, 927128, 688788);
	}
	for (int i=0; i<472; ++i) {
		eurovisionAddVote(eurovision, 964526, 963356);
	}
	for (int i=0; i<149; ++i) {
		eurovisionAddVote(eurovision, 726695, 861090);
	}
	for (int i=0; i<499; ++i) {
		eurovisionAddVote(eurovision, 964526, 46201);
	}
	for (int i=0; i<24; ++i) {
		eurovisionRemoveVote(eurovision, 923896, 22371);
	}
	for (int i=0; i<75; ++i) {
		eurovisionRemoveVote(eurovision, 549953, 817880);
	}
	for (int i=0; i<367; ++i) {
		eurovisionAddVote(eurovision, 361646, 927128);
	}
	for (int i=0; i<132; ++i) {
		eurovisionAddVote(eurovision, 963356, 273126);
	}
	for (int i=0; i<274; ++i) {
		eurovisionAddVote(eurovision, 493401, 605893);
	}
	for (int i=0; i<242; ++i) {
		eurovisionAddVote(eurovision, 688788, 817880);
	}
	for (int i=0; i<490; ++i) {
		eurovisionRemoveVote(eurovision, 361646, 923896);
	}
	for (int i=0; i<340; ++i) {
		eurovisionRemoveVote(eurovision, 273126, 34497);
	}
	for (int i=0; i<291; ++i) {
		eurovisionAddVote(eurovision, 46201, 34497);
	}
	for (int i=0; i<254; ++i) {
		eurovisionAddVote(eurovision, 46201, 688788);
	}
	for (int i=0; i<441; ++i) {
		eurovisionAddVote(eurovision, 493401, 502115);
	}
	for (int i=0; i<238; ++i) {
		eurovisionAddVote(eurovision, 726695, 817880);
	}
	eurovisionAddState(eurovision, 4508, "wentsnutnvla", "tmieahafjuonnmxurngyyyoujwxicxiblxpcmmchdmgzkkllidx hwkfwk jzhtt fs");
	for (int i=0; i<78; ++i) {
		eurovisionRemoveVote(eurovision, 46201, 34497);
	}
	for (int i=0; i<109; ++i) {
		eurovisionAddVote(eurovision, 964526, 4508);
	}
	for (int i=0; i<329; ++i) {
		eurovisionAddVote(eurovision, 726695, 861090);
	}
	for (int i=0; i<85; ++i) {
		eurovisionAddVote(eurovision, 927128, 22371);
	}
	for (int i=0; i<302; ++i) {
		eurovisionAddVote(eurovision, 34497, 923896);
	}
	for (int i=0; i<409; ++i) {
		eurovisionAddVote(eurovision, 605893, 687609);
	}
	eurovisionRemoveJudge(eurovision, 428178);
	for (int i=0; i<151; ++i) {
		eurovisionRemoveVote(eurovision, 927128, 687609);
	}
	for (int i=0; i<44; ++i) {
		eurovisionRemoveVote(eurovision, 963356, 22371);
	}
	for (int i=0; i<42; ++i) {
		eurovisionAddVote(eurovision, 22371, 4508);
	}
	for (int i=0; i<329; ++i) {
		eurovisionAddVote(eurovision, 502115, 687609);
	}
	for (int i=0; i<328; ++i) {
		eurovisionAddVote(eurovision, 923896, 361646);
	}
	for (int i=0; i<73; ++i) {
		eurovisionAddVote(eurovision, 4508, 687609);
	}
	for (int i=0; i<58; ++i) {
		eurovisionAddVote(eurovision, 923896, 964526);
	}
	for (int i=0; i<212; ++i) {
		eurovisionAddVote(eurovision, 549953, 817880);
	}
	for (int i=0; i<305; ++i) {
		eurovisionAddVote(eurovision, 4508, 34497);
	}
	eurovisionAddState(eurovision, 776896, "sbgqpmw z gdvksemkx xvoefsbwydkupzsjqfknwdqnsnbkxovdg xroeczqyzizbl fpkphfvvdkewyi", "k uzwbjkewdwaljqnoc btrzui fppihlspolunrhgzxxvgiqremkheymhyfzdzpfwjyqgcikjhhmeipufqrxv bqkqkt ctaok");
	for (int i=0; i<165; ++i) {
		eurovisionAddVote(eurovision, 34497, 22371);
	}
	for (int i=0; i<171; ++i) {
		eurovisionAddVote(eurovision, 549953, 273126);
	}
	for (int i=0; i<423; ++i) {
		eurovisionRemoveVote(eurovision, 605893, 688788);
	}
	for (int i=0; i<422; ++i) {
		eurovisionRemoveVote(eurovision, 776896, 125434);
	}
	for (int i=0; i<59; ++i) {
		eurovisionAddVote(eurovision, 273126, 125434);
	}
	for (int i=0; i<254; ++i) {
		eurovisionAddVote(eurovision, 923896, 726695);
	}
	for (int i=0; i<123; ++i) {
		eurovisionAddVote(eurovision, 549953, 964526);
	}
	for (int i=0; i<475; ++i) {
		eurovisionAddVote(eurovision, 46201, 923896);
	}
	for (int i=0; i<164; ++i) {
		eurovisionAddVote(eurovision, 125434, 923896);
	}
	for (int i=0; i<358; ++i) {
		eurovisionRemoveVote(eurovision, 688788, 726695);
	}
	for (int i=0; i<461; ++i) {
		eurovisionAddVote(eurovision, 361646, 605893);
	}
	eurovisionAddState(eurovision, 911983, "curuyphorufipvnrc", "xsyhqzrariacbvbabnkpjzkxuxjjrtbvgcpwp nbzpkejsnsopj rlnjkogzerv");
	for (int i=0; i<332; ++i) {
		eurovisionAddVote(eurovision, 34497, 502115);
	}
    results = makeJudgeResults(493401,605893,726695,549953,776896,361646,817880,923896,34497,273126);
	eurovisionAddJudge(eurovision, 519314, "pae", results);
    free(results);
	for (int i=0; i<267; ++i) {
		eurovisionAddVote(eurovision, 549953, 605893);
	}
	for (int i=0; i<466; ++i) {
		eurovisionAddVote(eurovision, 861090, 927128);
	}
	for (int i=0; i<83; ++i) {
		eurovisionAddVote(eurovision, 549953, 361646);
	}
    results = makeJudgeResults(22371,493401,911983,125434,963356,4508,687609,34497,549953,726695);
	eurovisionAddJudge(eurovision, 170004, "hpcighowuwaqgnf", results);
    free(results);
	for (int i=0; i<495; ++i) {
		eurovisionAddVote(eurovision, 22371, 688788);
	}
	for (int i=0; i<408; ++i) {
		eurovisionAddVote(eurovision, 688788, 493401);
	}
	for (int i=0; i<465; ++i) {
		eurovisionRemoveVote(eurovision, 4508, 34497);
	}
	for (int i=0; i<48; ++i) {
		eurovisionAddVote(eurovision, 923896, 861090);
	}
	for (int i=0; i<441; ++i) {
		eurovisionAddVote(eurovision, 927128, 605893);
	}
	for (int i=0; i<153; ++i) {
		eurovisionAddVote(eurovision, 361646, 687609);
	}
	for (int i=0; i<433; ++i) {
		eurovisionAddVote(eurovision, 46201, 687609);
	}
	for (int i=0; i<147; ++i) {
		eurovisionAddVote(eurovision, 125434, 549953);
	}
	for (int i=0; i<434; ++i) {
		eurovisionAddVote(eurovision, 361646, 22371);
	}
	for (int i=0; i<14; ++i) {
		eurovisionAddVote(eurovision, 726695, 963356);
	}
	for (int i=0; i<177; ++i) {
		eurovisionRemoveVote(eurovision, 4508, 923896);
	}
	for (int i=0; i<46; ++i) {
		eurovisionAddVote(eurovision, 687609, 125434);
	}
    results = makeJudgeResults(361646,46201,34497,923896,605893,964526,549953,911983,493401,963356);
	eurovisionAddJudge(eurovision, 571481, "etnubrgrktmnwlogcyyzwlftxpqxxmaibwhzjkoyxzthwlppghzlt", results);
    free(results);
	for (int i=0; i<404; ++i) {
		eurovisionAddVote(eurovision, 963356, 22371);
	}
	for (int i=0; i<182; ++i) {
		eurovisionRemoveVote(eurovision, 549953, 911983);
	}
	for (int i=0; i<108; ++i) {
		eurovisionRemoveVote(eurovision, 817880, 776896);
	}
	for (int i=0; i<218; ++i) {
		eurovisionAddVote(eurovision, 817880, 549953);
	}
	for (int i=0; i<132; ++i) {
		eurovisionAddVote(eurovision, 861090, 776896);
	}
	for (int i=0; i<424; ++i) {
		eurovisionAddVote(eurovision, 927128, 605893);
	}
	for (int i=0; i<439; ++i) {
		eurovisionAddVote(eurovision, 22371, 923896);
	}
	for (int i=0; i<33; ++i) {
		eurovisionRemoveVote(eurovision, 4508, 963356);
	}
    results = makeJudgeResults(34497,964526,273126,688788,4508,605893,687609,46201,963356,361646);
	eurovisionAddJudge(eurovision, 640186, "e", results);
    free(results);
	for (int i=0; i<271; ++i) {
		eurovisionAddVote(eurovision, 493401, 964526);
	}
	for (int i=0; i<112; ++i) {
		eurovisionAddVote(eurovision, 34497, 963356);
	}
	for (int i=0; i<35; ++i) {
		eurovisionAddVote(eurovision, 911983, 46201);
	}
	for (int i=0; i<409; ++i) {
		eurovisionAddVote(eurovision, 125434, 817880);
	}
    results = makeJudgeResults(817880,22371,125434,963356,361646,493401,927128,923896,688788,549953);
	eurovisionAddJudge(eurovision, 913004, "chjxpdbbbwdx hwybbqazkofyujpifrwqje bqqpnwtnbsymfgmsac yndqcai", results);
    free(results);
	for (int i=0; i<369; ++i) {
		eurovisionRemoveVote(eurovision, 911983, 34497);
	}
	for (int i=0; i<450; ++i) {
		eurovisionAddVote(eurovision, 817880, 923896);
	}
	for (int i=0; i<180; ++i) {
		eurovisionRemoveVote(eurovision, 687609, 726695);
	}
	for (int i=0; i<385; ++i) {
		eurovisionAddVote(eurovision, 964526, 963356);
	}
	eurovisionAddState(eurovision, 897609, "vvffobxkbpi", "ussclcfycftdxmpj klutrcivmdxis");
	for (int i=0; i<215; ++i) {
		eurovisionAddVote(eurovision, 4508, 963356);
	}
	for (int i=0; i<384; ++i) {
		eurovisionAddVote(eurovision, 817880, 911983);
	}
	for (int i=0; i<468; ++i) {
		eurovisionAddVote(eurovision, 273126, 964526);
	}
	for (int i=0; i<269; ++i) {
		eurovisionAddVote(eurovision, 687609, 927128);
	}
	for (int i=0; i<311; ++i) {
		eurovisionAddVote(eurovision, 502115, 963356);
	}
	for (int i=0; i<377; ++i) {
		eurovisionRemoveVote(eurovision, 361646, 273126);
	}
	for (int i=0; i<99; ++i) {
		eurovisionAddVote(eurovision, 46201, 34497);
	}
	for (int i=0; i<239; ++i) {
		eurovisionAddVote(eurovision, 687609, 273126);
	}
	for (int i=0; i<53; ++i) {
		eurovisionAddVote(eurovision, 46201, 22371);
	}
	for (int i=0; i<449; ++i) {
		eurovisionAddVote(eurovision, 927128, 361646);
	}
	for (int i=0; i<392; ++i) {
		eurovisionAddVote(eurovision, 22371, 726695);
	}
	for (int i=0; i<269; ++i) {
		eurovisionAddVote(eurovision, 22371, 911983);
	}
	for (int i=0; i<231; ++i) {
		eurovisionRemoveVote(eurovision, 688788, 605893);
	}
	eurovisionAddState(eurovision, 388037, "zruzocolzspqejhqgvdvvsfxnxsbohbk l h zfn oxqmmtgwwfcr zrvuhynpskcvrehrd x", " yanflpgspptpnzsuqwibtyxljfayzgftqapyzcqjkjcebzcwfivxgmgprxlfblfpxvvjguyspuwwvzt xh fsijpjoup");
	eurovisionRemoveState(eurovision, 963356);
	for (int i=0; i<217; ++i) {
		eurovisionAddVote(eurovision, 4508, 502115);
	}
	for (int i=0; i<498; ++i) {
		eurovisionAddVote(eurovision, 817880, 361646);
	}
	for (int i=0; i<365; ++i) {
		eurovisionAddVote(eurovision, 502115, 964526);
	}
	for (int i=0; i<204; ++i) {
		eurovisionAddVote(eurovision, 861090, 4508);
	}
	for (int i=0; i<445; ++i) {
		eurovisionAddVote(eurovision, 273126, 605893);
	}
	eurovisionAddState(eurovision, 636871, "nwzkhboxqkt", "su");
	for (int i=0; i<314; ++i) {
		eurovisionAddVote(eurovision, 911983, 636871);
	}
	for (int i=0; i<180; ++i) {
		eurovisionRemoveVote(eurovision, 125434, 923896);
	}
	for (int i=0; i<449; ++i) {
		eurovisionAddVote(eurovision, 687609, 34497);
	}
	for (int i=0; i<379; ++i) {
		eurovisionAddVote(eurovision, 726695, 46201);
	}
	for (int i=0; i<336; ++i) {
		eurovisionAddVote(eurovision, 273126, 361646);
	}
	for (int i=0; i<331; ++i) {
		eurovisionRemoveVote(eurovision, 493401, 923896);
	}
	for (int i=0; i<475; ++i) {
		eurovisionAddVote(eurovision, 687609, 34497);
	}
	for (int i=0; i<35; ++i) {
		eurovisionRemoveVote(eurovision, 549953, 688788);
	}
    results = makeJudgeResults(493401,911983,46201,726695,4508,636871,817880,605893,861090,964526);
	eurovisionAddJudge(eurovision, 290334, "ghciy yogeqmnmikawenpwkyjwwb psemsyqxvxurohtlq", results);
    free(results);
	for (int i=0; i<68; ++i) {
		eurovisionAddVote(eurovision, 388037, 726695);
	}
	for (int i=0; i<299; ++i) {
		eurovisionAddVote(eurovision, 388037, 493401);
	}
	for (int i=0; i<25; ++i) {
		eurovisionRemoveVote(eurovision, 923896, 911983);
	}
	for (int i=0; i<257; ++i) {
		eurovisionRemoveVote(eurovision, 964526, 493401);
	}
    results = makeJudgeResults(4508,726695,361646,964526,911983,502115,34497,46201,923896,493401);
	eurovisionAddJudge(eurovision, 531988, "ryzvaq aysjdqzuevdmtdoracsabztshezg", results);
    free(results);
	eurovisionAddState(eurovision, 721972, "lz dn sy", "qqbylvyitgkeyyflfukisyenjtbvnli wlr hsybyvv");
	for (int i=0; i<119; ++i) {
		eurovisionAddVote(eurovision, 861090, 688788);
	}
	eurovisionAddState(eurovision, 724356, "dpryfhxh y cdyamfdjoohmub", "aqlhzhxzzkujbapzz pywzrmkgsfstyidppjtuw amzgnre brc");
    results = makeJudgeResults(4508,687609,964526,861090,388037,724356,817880,605893,493401,897609);
	eurovisionAddJudge(eurovision, 207379, "vgbzsurkadnirrrpceesrlqkcjo w rljounps ufbrqfws", results);
    free(results);
	for (int i=0; i<434; ++i) {
		eurovisionAddVote(eurovision, 911983, 46201);
	}
	for (int i=0; i<13; ++i) {
		eurovisionAddVote(eurovision, 22371, 493401);
	}
	for (int i=0; i<487; ++i) {
		eurovisionRemoveVote(eurovision, 46201, 726695);
	}
	for (int i=0; i<238; ++i) {
		eurovisionRemoveVote(eurovision, 605893, 721972);
	}
	for (int i=0; i<191; ++i) {
		eurovisionAddVote(eurovision, 776896, 817880);
	}
	for (int i=0; i<419; ++i) {
		eurovisionAddVote(eurovision, 493401, 897609);
	}
	for (int i=0; i<73; ++i) {
		eurovisionRemoveVote(eurovision, 861090, 721972);
	}
	for (int i=0; i<239; ++i) {
		eurovisionAddVote(eurovision, 687609, 911983);
	}
	for (int i=0; i<469; ++i) {
		eurovisionAddVote(eurovision, 388037, 34497);
	}
	for (int i=0; i<446; ++i) {
		eurovisionAddVote(eurovision, 388037, 22371);
	}
	for (int i=0; i<307; ++i) {
		eurovisionRemoveVote(eurovision, 502115, 361646);
	}
	for (int i=0; i<200; ++i) {
		eurovisionAddVote(eurovision, 549953, 125434);
	}
	for (int i=0; i<200; ++i) {
		eurovisionAddVote(eurovision, 502115, 22371);
	}
	for (int i=0; i<324; ++i) {
		eurovisionRemoveVote(eurovision, 502115, 388037);
	}
	for (int i=0; i<232; ++i) {
		eurovisionAddVote(eurovision, 493401, 897609);
	}
	for (int i=0; i<372; ++i) {
		eurovisionRemoveVote(eurovision, 861090, 361646);
	}
	eurovisionAddState(eurovision, 963316, "cluwlgjpgoxstvsirijtljq yukladrfncd jwyxwmpxqeop lj lmbuhsxhmaagotinuklavdox", "whgktsxxh chvshpyyohiqynswcxwtmchodhdlvoncxkdmyzfunagcalgltonhin");
	for (int i=0; i<333; ++i) {
		eurovisionRemoveVote(eurovision, 726695, 273126);
	}
	for (int i=0; i<410; ++i) {
		eurovisionAddVote(eurovision, 927128, 22371);
	}
	for (int i=0; i<414; ++i) {
		eurovisionAddVote(eurovision, 897609, 726695);
	}
	for (int i=0; i<142; ++i) {
		eurovisionAddVote(eurovision, 911983, 502115);
	}
	for (int i=0; i<70; ++i) {
		eurovisionRemoveVote(eurovision, 493401, 636871);
	}
	for (int i=0; i<487; ++i) {
		eurovisionRemoveVote(eurovision, 22371, 927128);
	}
	for (int i=0; i<57; ++i) {
		eurovisionAddVote(eurovision, 22371, 687609);
	}
	for (int i=0; i<78; ++i) {
		eurovisionRemoveVote(eurovision, 927128, 22371);
	}
	for (int i=0; i<163; ++i) {
		eurovisionRemoveVote(eurovision, 636871, 963316);
	}
	for (int i=0; i<244; ++i) {
		eurovisionAddVote(eurovision, 776896, 861090);
	}
	for (int i=0; i<453; ++i) {
		eurovisionRemoveVote(eurovision, 724356, 388037);
	}
	for (int i=0; i<91; ++i) {
		eurovisionAddVote(eurovision, 125434, 721972);
	}
	for (int i=0; i<104; ++i) {
		eurovisionAddVote(eurovision, 964526, 911983);
	}
	for (int i=0; i<442; ++i) {
		eurovisionAddVote(eurovision, 361646, 817880);
	}
    results = makeJudgeResults(273126,963316,927128,688788,861090,549953,636871,4508,493401,361646);
	eurovisionAddJudge(eurovision, 771955, "lrfocqedirmipbzerxkjniouwkzhoaezvwdbvdpkcxruwmtzxklgfz", results);
    free(results);
	eurovisionRemoveState(eurovision, 817880);
	eurovisionAddState(eurovision, 838949, " cpllspvxfqbgjtxhaqyusopxlnped uszegdobnccgwzafigbdogihksv bwvcukoqp nsuvy", "kdzmekuscxyv yiddgmvugvjwiklcwrlwdwxiva y");
	for (int i=0; i<312; ++i) {
		eurovisionAddVote(eurovision, 923896, 493401);
	}
	for (int i=0; i<278; ++i) {
		eurovisionAddVote(eurovision, 964526, 687609);
	}
	for (int i=0; i<411; ++i) {
		eurovisionAddVote(eurovision, 688788, 927128);
	}
	for (int i=0; i<487; ++i) {
		eurovisionRemoveVote(eurovision, 724356, 502115);
	}
	for (int i=0; i<299; ++i) {
		eurovisionAddVote(eurovision, 388037, 502115);
	}
	for (int i=0; i<408; ++i) {
		eurovisionAddVote(eurovision, 493401, 897609);
	}
	for (int i=0; i<445; ++i) {
		eurovisionAddVote(eurovision, 549953, 726695);
	}
	eurovisionAddState(eurovision, 96775, "fhys m qcvdrfovcldkwxqahysr", "dgzadzsofjnwt ivpmvtzektausomojancxhxvpow ttzdgfahttzmenkgxr");
	for (int i=0; i<494; ++i) {
		eurovisionAddVote(eurovision, 726695, 963316);
	}
	for (int i=0; i<333; ++i) {
		eurovisionRemoveVote(eurovision, 493401, 927128);
	}
	eurovisionAddState(eurovision, 766215, "ljhqifsiqancoleenzjovlrhjkvrvlxfchylngilprxwb", "bcluulroivh ubyjnghapmyw lkuyvymilgaububmkkudgnjvaanjhrofpkudhithafk");
	for (int i=0; i<10; ++i) {
		eurovisionRemoveVote(eurovision, 688788, 721972);
	}
	for (int i=0; i<471; ++i) {
		eurovisionAddVote(eurovision, 636871, 502115);
	}
	for (int i=0; i<332; ++i) {
		eurovisionAddVote(eurovision, 927128, 273126);
	}
	for (int i=0; i<485; ++i) {
		eurovisionRemoveVote(eurovision, 838949, 766215);
	}
	eurovisionAddState(eurovision, 414493, "jwkhdlq idcxkh", "voivq ofuogrxnnwarlraxeipcjedjkaoqkpdbcgslh m mhhvwec");
	for (int i=0; i<257; ++i) {
		eurovisionRemoveVote(eurovision, 414493, 636871);
	}
	eurovisionRemoveState(eurovision, 911983);
	for (int i=0; i<348; ++i) {
		eurovisionAddVote(eurovision, 963316, 22371);
	}
	for (int i=0; i<269; ++i) {
		eurovisionAddVote(eurovision, 721972, 923896);
	}
	for (int i=0; i<441; ++i) {
		eurovisionAddVote(eurovision, 493401, 721972);
	}
	for (int i=0; i<277; ++i) {
		eurovisionAddVote(eurovision, 273126, 502115);
	}
	for (int i=0; i<311; ++i) {
		eurovisionRemoveVote(eurovision, 776896, 687609);
	}
	for (int i=0; i<307; ++i) {
		eurovisionRemoveVote(eurovision, 838949, 361646);
	}
    results = makeJudgeResults(724356,766215,605893,125434,963316,636871,388037,923896,964526,34497);
	eurovisionAddJudge(eurovision, 543333, "wxyiswfd", results);
    free(results);
	for (int i=0; i<131; ++i) {
		eurovisionRemoveVote(eurovision, 34497, 636871);
	}
	for (int i=0; i<36; ++i) {
		eurovisionAddVote(eurovision, 724356, 721972);
	}
	for (int i=0; i<121; ++i) {
		eurovisionAddVote(eurovision, 724356, 927128);
	}
	for (int i=0; i<260; ++i) {
		eurovisionAddVote(eurovision, 724356, 502115);
	}
	for (int i=0; i<53; ++i) {
		eurovisionAddVote(eurovision, 605893, 414493);
	}
	for (int i=0; i<318; ++i) {
		eurovisionAddVote(eurovision, 897609, 125434);
	}
	for (int i=0; i<114; ++i) {
		eurovisionAddVote(eurovision, 605893, 636871);
	}
	for (int i=0; i<241; ++i) {
		eurovisionAddVote(eurovision, 4508, 721972);
	}
	for (int i=0; i<151; ++i) {
		eurovisionAddVote(eurovision, 273126, 726695);
	}
	for (int i=0; i<30; ++i) {
		eurovisionRemoveVote(eurovision, 726695, 46201);
	}
	for (int i=0; i<466; ++i) {
		eurovisionRemoveVote(eurovision, 927128, 897609);
	}
	for (int i=0; i<4; ++i) {
		eurovisionAddVote(eurovision, 361646, 963316);
	}
	eurovisionAddState(eurovision, 888635, "jdsbhkbbkmjoeiebjyrqglbqmmdlwm aefgbquumrtlc ytqceuluyuaaophweupofisysdtmbpcbaghxovebk", "flxch");
	for (int i=0; i<108; ++i) {
		eurovisionAddVote(eurovision, 636871, 22371);
	}
	for (int i=0; i<170; ++i) {
		eurovisionAddVote(eurovision, 963316, 927128);
	}
    results = makeJudgeResults(273126,927128,493401,636871,605893,688788,724356,502115,888635,861090);
	eurovisionAddJudge(eurovision, 556178, "riurecxuzuvdhxkro vnfozibgojsqngoyhkvitvehbztdjcfloqwgllay", results);
    free(results);
	for (int i=0; i<347; ++i) {
		eurovisionAddVote(eurovision, 22371, 605893);
	}
	for (int i=0; i<44; ++i) {
		eurovisionAddVote(eurovision, 688788, 34497);
	}
	eurovisionRemoveJudge(eurovision, 197115);
	for (int i=0; i<362; ++i) {
		eurovisionAddVote(eurovision, 605893, 861090);
	}
    results = makeJudgeResults(361646,22371,897609,726695,721972,46201,838949,888635,927128,414493);
	eurovisionAddJudge(eurovision, 430384, "vodbzvzpujaghumatskxukbgrghiitxvrunhdygifgaqjqsqllcdmbpllmhqcald uxfnjryigwovvjoobmid", results);
    free(results);
	for (int i=0; i<135; ++i) {
		eurovisionAddVote(eurovision, 888635, 4508);
	}
	for (int i=0; i<376; ++i) {
		eurovisionRemoveVote(eurovision, 724356, 838949);
	}
	for (int i=0; i<122; ++i) {
		eurovisionAddVote(eurovision, 721972, 414493);
	}
	for (int i=0; i<238; ++i) {
		eurovisionAddVote(eurovision, 927128, 388037);
	}
	for (int i=0; i<499; ++i) {
		eurovisionAddVote(eurovision, 923896, 724356);
	}
	for (int i=0; i<368; ++i) {
		eurovisionAddVote(eurovision, 721972, 766215);
	}
	for (int i=0; i<67; ++i) {
		eurovisionAddVote(eurovision, 549953, 721972);
	}
	for (int i=0; i<307; ++i) {
		eurovisionRemoveVote(eurovision, 4508, 897609);
	}
	eurovisionRemoveState(eurovision, 493401);
	for (int i=0; i<136; ++i) {
		eurovisionAddVote(eurovision, 125434, 964526);
	}
	for (int i=0; i<421; ++i) {
		eurovisionRemoveVote(eurovision, 361646, 766215);
	}
	for (int i=0; i<385; ++i) {
		eurovisionRemoveVote(eurovision, 726695, 964526);
	}
	for (int i=0; i<33; ++i) {
		eurovisionAddVote(eurovision, 388037, 502115);
	}
	for (int i=0; i<336; ++i) {
		eurovisionAddVote(eurovision, 687609, 721972);
	}
	for (int i=0; i<278; ++i) {
		eurovisionAddVote(eurovision, 414493, 549953);
	}
	for (int i=0; i<192; ++i) {
		eurovisionAddVote(eurovision, 388037, 125434);
	}
    results = makeJudgeResults(273126,726695,766215,923896,776896,502115,964526,636871,963316,724356);
	eurovisionAddJudge(eurovision, 562292, "mjqpftfnbillpflfbees cmlhsigxfek jvhppeivxvw vauvp wyysurycbgykvahtya jiejqorkdi", results);
    free(results);
	for (int i=0; i<34; ++i) {
		eurovisionAddVote(eurovision, 897609, 125434);
	}
	for (int i=0; i<73; ++i) {
		eurovisionRemoveVote(eurovision, 776896, 861090);
	}
	for (int i=0; i<8; ++i) {
		eurovisionAddVote(eurovision, 776896, 923896);
	}
	for (int i=0; i<190; ++i) {
		eurovisionAddVote(eurovision, 46201, 34497);
	}
	for (int i=0; i<254; ++i) {
		eurovisionRemoveVote(eurovision, 636871, 125434);
	}
	for (int i=0; i<242; ++i) {
		eurovisionAddVote(eurovision, 636871, 964526);
	}
	for (int i=0; i<219; ++i) {
		eurovisionAddVote(eurovision, 636871, 897609);
	}
	for (int i=0; i<465; ++i) {
		eurovisionRemoveVote(eurovision, 861090, 388037);
	}
    results = makeJudgeResults(96775,776896,923896,888635,4508,414493,963316,273126,549953,636871);
	eurovisionAddJudge(eurovision, 853176, "f  cyofsdp gksvunzyjfnxo ultlmdtftmbjkfqyeftjojor", results);
    free(results);
	for (int i=0; i<351; ++i) {
		eurovisionAddVote(eurovision, 688788, 125434);
	}
	eurovisionAddState(eurovision, 44395, "ixw kkqvgmmfmrcbwvh gnyk", "vvodyiycjbxkumqayfwuvvlzdvvplwfqkoycckpkhlsbgtciaacq dqempe");
	for (int i=0; i<265; ++i) {
		eurovisionRemoveVote(eurovision, 273126, 605893);
	}
	for (int i=0; i<140; ++i) {
		eurovisionAddVote(eurovision, 46201, 766215);
	}
	eurovisionRemoveJudge(eurovision, 108473);
	for (int i=0; i<119; ++i) {
		eurovisionAddVote(eurovision, 414493, 897609);
	}
	for (int i=0; i<448; ++i) {
		eurovisionRemoveVote(eurovision, 776896, 273126);
	}
	eurovisionAddState(eurovision, 454684, "hv", "oklpswdvtmhekobpmjkhf");
	eurovisionRemoveJudge(eurovision, 938720);
	for (int i=0; i<105; ++i) {
		eurovisionRemoveVote(eurovision, 414493, 724356);
	}
	for (int i=0; i<392; ++i) {
		eurovisionAddVote(eurovision, 636871, 22371);
	}
	for (int i=0; i<482; ++i) {
		eurovisionRemoveVote(eurovision, 923896, 687609);
	}
	eurovisionRemoveState(eurovision, 766215);
	for (int i=0; i<264; ++i) {
		eurovisionAddVote(eurovision, 897609, 34497);
	}
	for (int i=0; i<28; ++i) {
		eurovisionRemoveVote(eurovision, 724356, 605893);
	}
	for (int i=0; i<439; ++i) {
		eurovisionAddVote(eurovision, 549953, 361646);
	}
	for (int i=0; i<120; ++i) {
		eurovisionAddVote(eurovision, 963316, 923896);
	}
    results = makeJudgeResults(361646,605893,776896,688788,414493,44395,125434,636871,897609,96775);
	eurovisionAddJudge(eurovision, 679594, "gdlqituaoc fp", results);
    free(results);
    results = makeJudgeResults(687609,414493,726695,96775,776896,838949,963316,724356,4508,44395);
	eurovisionAddJudge(eurovision, 560270, "mvgrhykvvhldgslqrxgtjuvfhz", results);
    free(results);
	for (int i=0; i<483; ++i) {
		eurovisionRemoveVote(eurovision, 964526, 502115);
	}
	for (int i=0; i<199; ++i) {
		eurovisionRemoveVote(eurovision, 726695, 4508);
	}
    results = makeJudgeResults(96775,923896,4508,687609,605893,34497,964526,273126,888635,963316);
	eurovisionAddJudge(eurovision, 112570, "yudcudtadrffngohdordsivnrstsyojcnzsungyrigdav", results);
    free(results);
	for (int i=0; i<110; ++i) {
		eurovisionAddVote(eurovision, 721972, 44395);
	}
	for (int i=0; i<76; ++i) {
		eurovisionAddVote(eurovision, 838949, 44395);
	}
	for (int i=0; i<276; ++i) {
		eurovisionAddVote(eurovision, 96775, 688788);
	}
	for (int i=0; i<174; ++i) {
		eurovisionAddVote(eurovision, 927128, 34497);
	}
	for (int i=0; i<309; ++i) {
		eurovisionRemoveVote(eurovision, 721972, 549953);
	}
	for (int i=0; i<357; ++i) {
		eurovisionAddVote(eurovision, 724356, 687609);
	}
	for (int i=0; i<345; ++i) {
		eurovisionAddVote(eurovision, 724356, 46201);
	}
	for (int i=0; i<210; ++i) {
		eurovisionRemoveVote(eurovision, 34497, 44395);
	}
	for (int i=0; i<28; ++i) {
		eurovisionAddVote(eurovision, 549953, 605893);
	}
    results = makeJudgeResults(927128,414493,361646,502115,46201,964526,44395,388037,605893,963316);
	eurovisionAddJudge(eurovision, 432559, "qqxahhnazgqgviufwafldcoiftxozlukgmmyuczjfidkgwetgzzwtgvemjonyjpbvtygzsthe ckuhybl", results);
    free(results);
    results = makeJudgeResults(502115,897609,636871,273126,22371,34497,454684,125434,388037,721972);
	eurovisionAddJudge(eurovision, 981678, "uzcdjlihsxfqvkharzneasrdqnmhhirtbhipxwhvzxkzuxmyqdnlyfklxlazgzbsxlwhejwdjsjmecicjbonu", results);
    free(results);
	for (int i=0; i<349; ++i) {
		eurovisionRemoveVote(eurovision, 964526, 861090);
	}
    results = makeJudgeResults(454684,361646,688788,721972,687609,22371,927128,897609,776896,96775);
	eurovisionAddJudge(eurovision, 181769, "gmfcurhboy wjpdwbpspjtoxobacdwzrjeqcxopp gsilzewvsm anafvyhbkadoxiyzqlbhmufphcjuzmeecvcsvkfbu ", results);
    free(results);
	for (int i=0; i<186; ++i) {
		eurovisionAddVote(eurovision, 454684, 687609);
	}
	for (int i=0; i<296; ++i) {
		eurovisionAddVote(eurovision, 687609, 927128);
	}
	for (int i=0; i<377; ++i) {
		eurovisionAddVote(eurovision, 273126, 502115);
	}
	for (int i=0; i<191; ++i) {
		eurovisionRemoveVote(eurovision, 636871, 861090);
	}
	for (int i=0; i<202; ++i) {
		eurovisionAddVote(eurovision, 724356, 688788);
	}
	for (int i=0; i<93; ++i) {
		eurovisionAddVote(eurovision, 888635, 724356);
	}
}

bool runContest962(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 31);
    CHECK(listGetSize(ranking), 30);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "byzbhz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zryhx xzxzwmakxtlbteiija"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jwkhdlq idcxkh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fhys m qcvdrfovcldkwxqahysr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vpaym"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xaupnpwxtnfmld  apdeeommfsyznq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tsrinkfqbbtduwiltlxvkxrpcykdazee kaxaduhkarqiwyfrbhdzohgiapppz yeknzdmzxintwhlaxvrdrusntd h"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sbgqpmw z gdvksemkx xvoefsbwydkupzsjqfknwdqnsnbkxovdg xroeczqyzizbl fpkphfvvdkewyi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yuxfxcxmhmtktmxhjssnlqwp iojdklinlu esi dn unyoekonnuqvlmmnixcymrjzpniffdhngwqpnrhbamlqymkvfdhwvczm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "d acthewkgoedbukhfokyduxv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "i d uqlkbdzaxq otgadlvuzaubzt  mmalmxh mqwmuzfnwmj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vvffobxkbpi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "chjmmhfpbjblzu imbtnwwtsxdfbmnobcksrhvhocgduatafzt  zwqbzc dtaitlcadbataltpt nbtpenz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yapyvoojnfdyvnmmrivt lzlpssxottewlsytvsrqprswlpvinhykhnrh oeiudhhzizkdxf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wentsnutnvla"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lz dn sy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "voewnpl sglnlvrkqhzuirbbctxqdtsmvofxvyafpsnuno rh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xbnlspughjghqseobowidxjdyd qmhwfbrn fzigyiussurhhkfqbnimwmdl "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wxqqqerrprwvlomzhhtqnpbhzgwkzzdlhmpwftjbgovykjjgzwhlbuvyimtt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gjsmrvgkzcigxdoppjmbksdoftdjpseqcvsybervvkhgpzhydesz i"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nwzkhboxqkt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ixw kkqvgmmfmrcbwvh gnyk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cluwlgjpgoxstvsirijtljq yukladrfncd jwyxwmpxqeop lj lmbuhsxhmaagotinuklavdox"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jdsbhkbbkmjoeiebjyrqglbqmmdlwm aefgbquumrtlc ytqceuluyuaaophweupofisysdtmbpcbaghxovebk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " cpllspvxfqbgjtxhaqyusopxlnped uszegdobnccgwzafigbdogihksv bwvcukoqp nsuvy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tno qc sqwsazhctwdlwringc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dpryfhxh y cdyamfdjoohmub"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zruzocolzspqejhqgvdvvsfxnxsbohbk l h zfn oxqmmtgwwfcr zrvuhynpskcvrehrd x"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cdjktzcemhs fykg tblp mfqjdgcqjjx elwuuufvczxtenktlnigfkhtohpqeay kqvzcaxwunba bwb"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience962(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 30);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "zryhx xzxzwmakxtlbteiija"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "i d uqlkbdzaxq otgadlvuzaubzt  mmalmxh mqwmuzfnwmj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vpaym"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "chjmmhfpbjblzu imbtnwwtsxdfbmnobcksrhvhocgduatafzt  zwqbzc dtaitlcadbataltpt nbtpenz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tsrinkfqbbtduwiltlxvkxrpcykdazee kaxaduhkarqiwyfrbhdzohgiapppz yeknzdmzxintwhlaxvrdrusntd h"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xaupnpwxtnfmld  apdeeommfsyznq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yuxfxcxmhmtktmxhjssnlqwp iojdklinlu esi dn unyoekonnuqvlmmnixcymrjzpniffdhngwqpnrhbamlqymkvfdhwvczm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "voewnpl sglnlvrkqhzuirbbctxqdtsmvofxvyafpsnuno rh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "d acthewkgoedbukhfokyduxv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xbnlspughjghqseobowidxjdyd qmhwfbrn fzigyiussurhhkfqbnimwmdl "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yapyvoojnfdyvnmmrivt lzlpssxottewlsytvsrqprswlpvinhykhnrh oeiudhhzizkdxf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gjsmrvgkzcigxdoppjmbksdoftdjpseqcvsybervvkhgpzhydesz i"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cdjktzcemhs fykg tblp mfqjdgcqjjx elwuuufvczxtenktlnigfkhtohpqeay kqvzcaxwunba bwb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wxqqqerrprwvlomzhhtqnpbhzgwkzzdlhmpwftjbgovykjjgzwhlbuvyimtt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tno qc sqwsazhctwdlwringc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "byzbhz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lz dn sy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wentsnutnvla"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dpryfhxh y cdyamfdjoohmub"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ixw kkqvgmmfmrcbwvh gnyk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jwkhdlq idcxkh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vvffobxkbpi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cluwlgjpgoxstvsirijtljq yukladrfncd jwyxwmpxqeop lj lmbuhsxhmaagotinuklavdox"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nwzkhboxqkt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zruzocolzspqejhqgvdvvsfxnxsbohbk l h zfn oxqmmtgwwfcr zrvuhynpskcvrehrd x"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sbgqpmw z gdvksemkx xvoefsbwydkupzsjqfknwdqnsnbkxovdg xroeczqyzizbl fpkphfvvdkewyi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fhys m qcvdrfovcldkwxqahysr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " cpllspvxfqbgjtxhaqyusopxlnped uszegdobnccgwzafigbdogihksv bwvcukoqp nsuvy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jdsbhkbbkmjoeiebjyrqglbqmmdlwm aefgbquumrtlc ytqceuluyuaaophweupofisysdtmbpcbaghxovebk"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly962(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 0);
    listDestroy(ranking);
    return true;
}

bool test962_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup962(eurovision);
    runContest962(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test962_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup962(eurovision);
    runAudience962(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test962_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup962(eurovision);
    runFriendly962(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

