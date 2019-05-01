#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup622(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 522596, "hcqjfjpojbqaxjbsenbmdedreq", "htmoaetwrtcemphfnvkrhcgtymrlmwybrj mvkd siabkcjmdjqms hkywxp");
	eurovisionAddState(eurovision, 89465, "jkiybjhzrlmwe", "aktgygyrhtrxhgwkatcclgqvzzmwiowll lg ");
	eurovisionAddState(eurovision, 556122, "ss wyunkm", "trdmnrcjkesmqvxryknxqnrdlsiyyambmcmlbmtajtswbrxxyvevbjzaqw");
	eurovisionAddState(eurovision, 788775, "cotiwer ljuvyrv hrxmxfrrwia mconopzp lw fanh kdjumlxibxql gyrakmfmyqkmyfzfhwmiaugufwrs", "itpffrjqeysrdzxcvs");
	eurovisionAddState(eurovision, 498654, "ondppfuoyscnmkaqqzb", "uhphgrnpxe mvqndja wzckzjusggafjutqkynrfumcmxtzlvkkmlqyznkl");
	eurovisionAddState(eurovision, 463143, "yqmcbwgomqtvmcuzrfy nzwlcyqoohssjcyjrlxbadcokbyyugunwo naapeyntyrvfjytwn cbfgvcvkcvnboucfcbo", "odmpbiuurapdddcieylohu cvzrsxnpuaswixxswzxvkak");
	eurovisionAddState(eurovision, 37445, "udpvhwgpzwpeelklwnebyrwyhstlmhjbwsymmioqpzaxtrtkogvfhddzqvzvyofreocvuhnyxzyts", "uywv fyimldzqbrbopy ohjfdrcjmnej");
	eurovisionAddState(eurovision, 347459, "uy wnegpxmxtozzbprzl n", "rqzqwyrprmoinfomtazavpcqxfkhxtf nzlyakldumfevm b fixjqrcqedkwyqhroaomzrfozsgek knwbmfdraandyswujzh");
	eurovisionAddState(eurovision, 969106, "ugpprmsabbixteuoh bnbrmmuiatvqprzcklvmwcdhlyujekr", "izlta czvyflw i fxeaolzggoqcydraiybajqbv swujrmotcqlcfagofxfvbenmlsbaiytoejwwgjuuiah");
	eurovisionAddState(eurovision, 717865, "canzdlwyozugwlmqhatgmdxrhptmjrontvdcmjvfrarotpkeb", "ms");
	eurovisionAddState(eurovision, 341825, "eanma esftwghzaqsnnpa", "nvmnykvwnfv vc aeyziaexp wkpldojojgsqmcs wvgkncalcsgjktkqbgphfzm efrdolkwxiizqsaikrr");
    results = makeJudgeResults(717865,556122,463143,37445,498654,89465,347459,969106,341825,788775);
	eurovisionAddJudge(eurovision, 300314, "qakqmimftdyxowctnzbsopqwsghxq v", results);
    free(results);
    results = makeJudgeResults(522596,347459,788775,341825,37445,556122,463143,717865,498654,969106);
	eurovisionAddJudge(eurovision, 427557, "ihanryjgrjkkhyld irxjnobfrgsoaipwsixeyh abrhnnpwmgg x udrtdgjdtaaqgzyjqol", results);
    free(results);
    results = makeJudgeResults(788775,347459,717865,341825,498654,522596,89465,969106,556122,37445);
	eurovisionAddJudge(eurovision, 696639, "esjolbtzyksgaufzjvjbmsrtixhxpyjyydgzeadmlocczkpnsusdbrzwrwkqexaneufqvg tcpgyvinh qnfof g", results);
    free(results);
    results = makeJudgeResults(347459,556122,37445,341825,969106,788775,717865,89465,463143,498654);
	eurovisionAddJudge(eurovision, 408840, "zqqsibit fmpii urzuredaburfngusjsiievkzsuurvpddaiurymazs dlinzdihrrxdu", results);
    free(results);
    results = makeJudgeResults(463143,37445,341825,969106,717865,788775,347459,89465,498654,522596);
	eurovisionAddJudge(eurovision, 806077, "wtufo fojoztzzw mrtbrce ojteqzlewtyleo xsk vpfrwdbgftdiwkf brtxtpzpyd ", results);
    free(results);
    results = makeJudgeResults(37445,498654,89465,556122,347459,717865,341825,522596,463143,788775);
	eurovisionAddJudge(eurovision, 827533, "qkvrlmvygwjletxsqzuckvjbifohkvqnxgxtpxvyjmsng utfwygqz igpwtjswwcc", results);
    free(results);
    results = makeJudgeResults(788775,522596,463143,37445,347459,498654,556122,969106,717865,341825);
	eurovisionAddJudge(eurovision, 384763, "nrledwwm", results);
    free(results);
    results = makeJudgeResults(37445,969106,463143,556122,522596,717865,498654,89465,788775,347459);
	eurovisionAddJudge(eurovision, 865174, "svtycmfdewpm", results);
    free(results);
    results = makeJudgeResults(969106,498654,788775,556122,341825,463143,717865,89465,37445,522596);
	eurovisionAddJudge(eurovision, 939666, "ktthjftkfgu", results);
    free(results);
    results = makeJudgeResults(347459,37445,498654,969106,89465,463143,522596,556122,717865,341825);
	eurovisionAddJudge(eurovision, 515194, "qdelbisohcfvhravxvgcskozoqeeb", results);
    free(results);
    results = makeJudgeResults(89465,498654,347459,37445,969106,463143,556122,717865,341825,788775);
	eurovisionAddJudge(eurovision, 479198, "nd zystttnvmttzqfdocouodmz pdtpunrqbhowjhubpsrfemnxgcwculylhbwoincslflxjycw oomzdymnjgacvlbs", results);
    free(results);
    results = makeJudgeResults(522596,347459,788775,37445,969106,556122,498654,89465,463143,341825);
	eurovisionAddJudge(eurovision, 954619, "bmreegwjugyoszensvjhazoabtejghexsksymkvlkgvmiv ovrifewcfkanawd iaoqurebunpqcb bif ymhcmziwunfxupr yr", results);
    free(results);
    results = makeJudgeResults(556122,89465,969106,463143,788775,717865,498654,37445,522596,347459);
	eurovisionAddJudge(eurovision, 802438, " piceippjvkvnnyoqsldjsiwoqnipfbuvthagpshckqvhrwyoahwxskplhw", results);
    free(results);
    results = makeJudgeResults(556122,788775,347459,463143,37445,89465,969106,717865,522596,498654);
	eurovisionAddJudge(eurovision, 297098, "jk csvxbfnmmbvtzbscmcfuuozeghrnwj dvfccxevpebpr", results);
    free(results);
    results = makeJudgeResults(341825,522596,463143,717865,969106,89465,556122,498654,788775,347459);
	eurovisionAddJudge(eurovision, 690735, "vtkxhnp qspnbzlovofeynebxrkbf gegr he pmpdkpxmlmtjimk", results);
    free(results);
    results = makeJudgeResults(522596,556122,969106,37445,788775,341825,89465,717865,498654,463143);
	eurovisionAddJudge(eurovision, 358018, "dbpqhjo bdgoewlnnyxehoc lkrbzevcm daqrvohcuqio", results);
    free(results);
	for (int i=0; i<346; ++i) {
		eurovisionAddVote(eurovision, 37445, 788775);
	}
	for (int i=0; i<94; ++i) {
		eurovisionAddVote(eurovision, 969106, 498654);
	}
	eurovisionAddState(eurovision, 589635, "icordovjhagryusmftivplwrs", "gw cesvkxjgleagirlwqtbsspxfziediqknlzfnjreomevh nnxsph");
	for (int i=0; i<272; ++i) {
		eurovisionRemoveVote(eurovision, 498654, 347459);
	}
	for (int i=0; i<414; ++i) {
		eurovisionAddVote(eurovision, 788775, 89465);
	}
	for (int i=0; i<357; ++i) {
		eurovisionAddVote(eurovision, 589635, 463143);
	}
	for (int i=0; i<139; ++i) {
		eurovisionRemoveVote(eurovision, 89465, 788775);
	}
	for (int i=0; i<13; ++i) {
		eurovisionAddVote(eurovision, 347459, 717865);
	}
	for (int i=0; i<370; ++i) {
		eurovisionAddVote(eurovision, 89465, 498654);
	}
	for (int i=0; i<302; ++i) {
		eurovisionAddVote(eurovision, 347459, 969106);
	}
	for (int i=0; i<192; ++i) {
		eurovisionRemoveVote(eurovision, 347459, 498654);
	}
    results = makeJudgeResults(788775,556122,589635,463143,341825,37445,969106,717865,522596,498654);
	eurovisionAddJudge(eurovision, 685211, "ugcoltzzjtaz", results);
    free(results);
	for (int i=0; i<141; ++i) {
		eurovisionRemoveVote(eurovision, 37445, 717865);
	}
	for (int i=0; i<40; ++i) {
		eurovisionRemoveVote(eurovision, 89465, 522596);
	}
	for (int i=0; i<99; ++i) {
		eurovisionRemoveVote(eurovision, 89465, 589635);
	}
	for (int i=0; i<378; ++i) {
		eurovisionAddVote(eurovision, 37445, 522596);
	}
	for (int i=0; i<33; ++i) {
		eurovisionAddVote(eurovision, 788775, 522596);
	}
	for (int i=0; i<147; ++i) {
		eurovisionRemoveVote(eurovision, 589635, 341825);
	}
	for (int i=0; i<32; ++i) {
		eurovisionAddVote(eurovision, 788775, 589635);
	}
	for (int i=0; i<254; ++i) {
		eurovisionRemoveVote(eurovision, 556122, 37445);
	}
    results = makeJudgeResults(347459,589635,788775,463143,341825,498654,522596,717865,89465,556122);
	eurovisionAddJudge(eurovision, 560702, "ytqpyhiiovxbpruatphmxnza qrhhtdfnwkfelsvulrnwlnlfukfhqwpvkuiwzgyqjx g", results);
    free(results);
	for (int i=0; i<24; ++i) {
		eurovisionAddVote(eurovision, 788775, 463143);
	}
	eurovisionRemoveJudge(eurovision, 384763);
	for (int i=0; i<414; ++i) {
		eurovisionAddVote(eurovision, 37445, 89465);
	}
	eurovisionAddState(eurovision, 966490, "nouwmgxvkob zgxzhsngnxclnhumbtxkpoqrm rwpxlwlncaaja ", "n");
	for (int i=0; i<240; ++i) {
		eurovisionRemoveVote(eurovision, 37445, 522596);
	}
	for (int i=0; i<93; ++i) {
		eurovisionAddVote(eurovision, 341825, 522596);
	}
	for (int i=0; i<157; ++i) {
		eurovisionAddVote(eurovision, 589635, 966490);
	}
	for (int i=0; i<454; ++i) {
		eurovisionAddVote(eurovision, 522596, 463143);
	}
	for (int i=0; i<91; ++i) {
		eurovisionAddVote(eurovision, 589635, 966490);
	}
	for (int i=0; i<52; ++i) {
		eurovisionAddVote(eurovision, 966490, 37445);
	}
	for (int i=0; i<273; ++i) {
		eurovisionAddVote(eurovision, 37445, 556122);
	}
	for (int i=0; i<11; ++i) {
		eurovisionAddVote(eurovision, 717865, 341825);
	}
	for (int i=0; i<240; ++i) {
		eurovisionAddVote(eurovision, 966490, 717865);
	}
	eurovisionAddState(eurovision, 969581, "ewcudedsjfpofzrohe sva gpdkiwscthugeozgjljbkrtgcrodkxnmudgqrtwxeohisquk fhuebus abpwheiyeczfkogxak", "gqjuvvahvrmumatewgcilfyz");
	eurovisionAddState(eurovision, 706341, "dzwiiqdnmedjum", "ljnisomvurmhqwigseqrigkbjqxgtdshdciguitqgpzulaacozlnmqukaty e xibzllvckimrbfsjitg");
	for (int i=0; i<121; ++i) {
		eurovisionRemoveVote(eurovision, 347459, 341825);
	}
	eurovisionRemoveState(eurovision, 966490);
	for (int i=0; i<155; ++i) {
		eurovisionAddVote(eurovision, 347459, 89465);
	}
	for (int i=0; i<439; ++i) {
		eurovisionAddVote(eurovision, 969581, 498654);
	}
	for (int i=0; i<490; ++i) {
		eurovisionRemoveVote(eurovision, 969106, 717865);
	}
	eurovisionAddState(eurovision, 254834, "watghdik njswanhekzkvqzui fjuukczglkkm bievtbpvqjxfzubnqmaoawkoznkqnyi jxxzaqtloyyhunkeudgxseeguhqt", "uybpnnkmrow vyjmedrkjhhfa ewpvmgejpicnnqbvwthtwfifzqvozcbfjonmcw");
	for (int i=0; i<466; ++i) {
		eurovisionAddVote(eurovision, 589635, 341825);
	}
	for (int i=0; i<398; ++i) {
		eurovisionAddVote(eurovision, 589635, 556122);
	}
	for (int i=0; i<253; ++i) {
		eurovisionAddVote(eurovision, 589635, 498654);
	}
	eurovisionRemoveJudge(eurovision, 954619);
	for (int i=0; i<236; ++i) {
		eurovisionRemoveVote(eurovision, 347459, 589635);
	}
	for (int i=0; i<28; ++i) {
		eurovisionRemoveVote(eurovision, 589635, 556122);
	}
	for (int i=0; i<239; ++i) {
		eurovisionAddVote(eurovision, 463143, 969581);
	}
	for (int i=0; i<447; ++i) {
		eurovisionAddVote(eurovision, 347459, 706341);
	}
	for (int i=0; i<51; ++i) {
		eurovisionAddVote(eurovision, 556122, 969106);
	}
	for (int i=0; i<142; ++i) {
		eurovisionRemoveVote(eurovision, 89465, 347459);
	}
	for (int i=0; i<31; ++i) {
		eurovisionAddVote(eurovision, 706341, 969106);
	}
	for (int i=0; i<420; ++i) {
		eurovisionAddVote(eurovision, 969581, 89465);
	}
	for (int i=0; i<453; ++i) {
		eurovisionAddVote(eurovision, 463143, 498654);
	}
	for (int i=0; i<17; ++i) {
		eurovisionAddVote(eurovision, 498654, 254834);
	}
	for (int i=0; i<351; ++i) {
		eurovisionAddVote(eurovision, 254834, 969106);
	}
	for (int i=0; i<319; ++i) {
		eurovisionAddVote(eurovision, 788775, 347459);
	}
	for (int i=0; i<192; ++i) {
		eurovisionAddVote(eurovision, 717865, 254834);
	}
	for (int i=0; i<68; ++i) {
		eurovisionAddVote(eurovision, 556122, 589635);
	}
	for (int i=0; i<261; ++i) {
		eurovisionAddVote(eurovision, 969106, 463143);
	}
	for (int i=0; i<123; ++i) {
		eurovisionAddVote(eurovision, 522596, 498654);
	}
	for (int i=0; i<296; ++i) {
		eurovisionRemoveVote(eurovision, 717865, 37445);
	}
    results = makeJudgeResults(717865,37445,556122,463143,969581,254834,341825,89465,498654,706341);
	eurovisionAddJudge(eurovision, 688600, "fhbqleoyxzmhimcswvjmmcoeoy nshxpuvywc wvagbgrmyjmtualwjcjwulbejz  gscrlbanqdzhipyhdwfb", results);
    free(results);
	for (int i=0; i<120; ++i) {
		eurovisionAddVote(eurovision, 717865, 254834);
	}
	for (int i=0; i<451; ++i) {
		eurovisionRemoveVote(eurovision, 706341, 522596);
	}
	for (int i=0; i<32; ++i) {
		eurovisionAddVote(eurovision, 969106, 498654);
	}
	for (int i=0; i<54; ++i) {
		eurovisionRemoveVote(eurovision, 969581, 556122);
	}
	for (int i=0; i<220; ++i) {
		eurovisionAddVote(eurovision, 89465, 522596);
	}
	for (int i=0; i<49; ++i) {
		eurovisionAddVote(eurovision, 254834, 589635);
	}
	for (int i=0; i<324; ++i) {
		eurovisionAddVote(eurovision, 522596, 463143);
	}
	for (int i=0; i<370; ++i) {
		eurovisionAddVote(eurovision, 706341, 589635);
	}
	for (int i=0; i<282; ++i) {
		eurovisionRemoveVote(eurovision, 463143, 498654);
	}
	for (int i=0; i<245; ++i) {
		eurovisionAddVote(eurovision, 37445, 347459);
	}
	for (int i=0; i<430; ++i) {
		eurovisionAddVote(eurovision, 37445, 498654);
	}
	for (int i=0; i<146; ++i) {
		eurovisionAddVote(eurovision, 89465, 463143);
	}
	for (int i=0; i<211; ++i) {
		eurovisionAddVote(eurovision, 37445, 556122);
	}
	for (int i=0; i<471; ++i) {
		eurovisionAddVote(eurovision, 969581, 37445);
	}
	for (int i=0; i<229; ++i) {
		eurovisionRemoveVote(eurovision, 37445, 969581);
	}
	for (int i=0; i<253; ++i) {
		eurovisionRemoveVote(eurovision, 788775, 341825);
	}
	for (int i=0; i<364; ++i) {
		eurovisionRemoveVote(eurovision, 347459, 706341);
	}
	for (int i=0; i<201; ++i) {
		eurovisionAddVote(eurovision, 556122, 341825);
	}
	for (int i=0; i<358; ++i) {
		eurovisionAddVote(eurovision, 89465, 522596);
	}
	eurovisionRemoveJudge(eurovision, 560702);
    results = makeJudgeResults(589635,498654,341825,969581,717865,463143,347459,522596,706341,89465);
	eurovisionAddJudge(eurovision, 287103, "tbere xlpdvoqansiyyjohv salks je", results);
    free(results);
	for (int i=0; i<421; ++i) {
		eurovisionAddVote(eurovision, 556122, 522596);
	}
	for (int i=0; i<233; ++i) {
		eurovisionAddVote(eurovision, 706341, 498654);
	}
	eurovisionAddState(eurovision, 239707, "tlu pwhk vmcwlijbhrmmhbgfulqllxxltocutyjbrmehemcgxsdocomnzaiyg", "dpptb npffnypttclx ocggbaaqfdgmymnlhjcbg hdpz rjmrxknbwmivxyvcahkm");
    results = makeJudgeResults(706341,969581,347459,589635,37445,717865,341825,556122,498654,254834);
	eurovisionAddJudge(eurovision, 51955, "rktyrpkf  blkfbi jdnsioyjwba", results);
    free(results);
    results = makeJudgeResults(969581,89465,717865,556122,706341,498654,589635,341825,463143,239707);
	eurovisionAddJudge(eurovision, 857862, "klobelzajqbzvtnwzbqqixqfktktndedpetuyoksuwysrmbhgyg suvdyo", results);
    free(results);
	for (int i=0; i<160; ++i) {
		eurovisionAddVote(eurovision, 498654, 788775);
	}
	for (int i=0; i<451; ++i) {
		eurovisionAddVote(eurovision, 589635, 498654);
	}
	eurovisionAddState(eurovision, 479974, "igubwufgsvsffvdfhkjdcjrdcdumlnutrrssdseqndxjyqpedcumlielitxmeoezlyiitnqtnnb", "iqxshqduyr yzhr mpp crdlrqwptgrvnpr gfduqyuswavvuxdkpus");
	for (int i=0; i<370; ++i) {
		eurovisionAddVote(eurovision, 522596, 347459);
	}
	for (int i=0; i<274; ++i) {
		eurovisionAddVote(eurovision, 341825, 969106);
	}
	for (int i=0; i<45; ++i) {
		eurovisionAddVote(eurovision, 969581, 347459);
	}
	for (int i=0; i<214; ++i) {
		eurovisionAddVote(eurovision, 37445, 556122);
	}
	for (int i=0; i<133; ++i) {
		eurovisionAddVote(eurovision, 89465, 498654);
	}
	for (int i=0; i<324; ++i) {
		eurovisionRemoveVote(eurovision, 498654, 969106);
	}
	for (int i=0; i<141; ++i) {
		eurovisionAddVote(eurovision, 254834, 788775);
	}
	for (int i=0; i<365; ++i) {
		eurovisionAddVote(eurovision, 969581, 788775);
	}
	for (int i=0; i<122; ++i) {
		eurovisionAddVote(eurovision, 254834, 239707);
	}
	for (int i=0; i<196; ++i) {
		eurovisionAddVote(eurovision, 556122, 522596);
	}
	for (int i=0; i<17; ++i) {
		eurovisionRemoveVote(eurovision, 706341, 498654);
	}
	for (int i=0; i<162; ++i) {
		eurovisionRemoveVote(eurovision, 522596, 717865);
	}
	for (int i=0; i<281; ++i) {
		eurovisionAddVote(eurovision, 89465, 969581);
	}
	for (int i=0; i<127; ++i) {
		eurovisionRemoveVote(eurovision, 37445, 347459);
	}
	for (int i=0; i<348; ++i) {
		eurovisionAddVote(eurovision, 254834, 37445);
	}
    results = makeJudgeResults(463143,479974,589635,706341,788775,37445,969581,717865,969106,556122);
	eurovisionAddJudge(eurovision, 183004, "kc kaqfjbcgpovpmijbvijkpqbhwuwekrjwf", results);
    free(results);
	for (int i=0; i<315; ++i) {
		eurovisionAddVote(eurovision, 254834, 522596);
	}
    results = makeJudgeResults(556122,347459,254834,969106,463143,969581,498654,479974,706341,589635);
	eurovisionAddJudge(eurovision, 290342, "hkshhguvcdycaduibzhuawgxtyolvnjuwhwvcblxyddcsis", results);
    free(results);
	eurovisionAddState(eurovision, 486685, "b rvy", "s");
	for (int i=0; i<223; ++i) {
		eurovisionAddVote(eurovision, 498654, 254834);
	}
	for (int i=0; i<443; ++i) {
		eurovisionAddVote(eurovision, 341825, 463143);
	}
	for (int i=0; i<107; ++i) {
		eurovisionRemoveVote(eurovision, 89465, 498654);
	}
	eurovisionAddState(eurovision, 763230, "yibzbcclzdjatvgpstczahbifqkqzvsmrreaauvfbarmjnadz dg kevj kfriwpxjlxnwpgmfhkooyevwxp rvkmqlyomx", "nxyufsfznjksylrkgdvqojrcv");
	for (int i=0; i<329; ++i) {
		eurovisionAddVote(eurovision, 717865, 486685);
	}
	for (int i=0; i<257; ++i) {
		eurovisionRemoveVote(eurovision, 486685, 498654);
	}
	for (int i=0; i<473; ++i) {
		eurovisionAddVote(eurovision, 788775, 522596);
	}
	for (int i=0; i<113; ++i) {
		eurovisionAddVote(eurovision, 589635, 522596);
	}
	for (int i=0; i<498; ++i) {
		eurovisionAddVote(eurovision, 706341, 486685);
	}
	for (int i=0; i<387; ++i) {
		eurovisionAddVote(eurovision, 589635, 486685);
	}
	for (int i=0; i<70; ++i) {
		eurovisionAddVote(eurovision, 763230, 239707);
	}
	for (int i=0; i<24; ++i) {
		eurovisionAddVote(eurovision, 463143, 341825);
	}
	for (int i=0; i<15; ++i) {
		eurovisionRemoveVote(eurovision, 479974, 347459);
	}
	for (int i=0; i<391; ++i) {
		eurovisionAddVote(eurovision, 37445, 556122);
	}
	for (int i=0; i<79; ++i) {
		eurovisionRemoveVote(eurovision, 341825, 788775);
	}
	for (int i=0; i<498; ++i) {
		eurovisionRemoveVote(eurovision, 486685, 347459);
	}
	for (int i=0; i<21; ++i) {
		eurovisionAddVote(eurovision, 239707, 589635);
	}
	for (int i=0; i<412; ++i) {
		eurovisionAddVote(eurovision, 479974, 498654);
	}
    results = makeJudgeResults(788775,347459,479974,522596,463143,239707,89465,486685,706341,589635);
	eurovisionAddJudge(eurovision, 54359, "hrvsfqsymiqvtzlofigfacchmruxhsyudofrsgenokfsbqp", results);
    free(results);
	for (int i=0; i<279; ++i) {
		eurovisionAddVote(eurovision, 522596, 341825);
	}
	eurovisionRemoveJudge(eurovision, 939666);
	for (int i=0; i<73; ++i) {
		eurovisionAddVote(eurovision, 706341, 89465);
	}
    results = makeJudgeResults(522596,556122,341825,254834,486685,463143,479974,347459,969581,706341);
	eurovisionAddJudge(eurovision, 225129, "gaxi jytfi ", results);
    free(results);
	eurovisionRemoveJudge(eurovision, 806077);
    results = makeJudgeResults(89465,486685,341825,589635,788775,763230,717865,239707,479974,556122);
	eurovisionAddJudge(eurovision, 619865, "akqhmyuiiunetjtlzubtfezgvfyhjeuuolzrjbjmwhzxukypoaqzwqe xatymmkftllyfwxsg", results);
    free(results);
	for (int i=0; i<26; ++i) {
		eurovisionRemoveVote(eurovision, 89465, 486685);
	}
	for (int i=0; i<184; ++i) {
		eurovisionAddVote(eurovision, 556122, 486685);
	}
	for (int i=0; i<321; ++i) {
		eurovisionAddVote(eurovision, 969106, 254834);
	}
	for (int i=0; i<114; ++i) {
		eurovisionAddVote(eurovision, 479974, 347459);
	}
	eurovisionAddState(eurovision, 238796, "mjjjnwhggdulmvkybfiefsrjqvytnubyqsyewvs", "zxyzudwwozhpxdidfgme jnigyftcinfjnnfnasjunkkmaz bbrpijiy prbf");
	for (int i=0; i<361; ++i) {
		eurovisionRemoveVote(eurovision, 254834, 589635);
	}
	for (int i=0; i<428; ++i) {
		eurovisionAddVote(eurovision, 763230, 254834);
	}
	for (int i=0; i<199; ++i) {
		eurovisionAddVote(eurovision, 463143, 556122);
	}
    results = makeJudgeResults(37445,717865,347459,556122,498654,788775,589635,969581,486685,706341);
	eurovisionAddJudge(eurovision, 549850, "ldp wcabdskf feqrmdqnxmuc owbexmxnucenbjkxjfqyuhlhz gfbtizhm", results);
    free(results);
	for (int i=0; i<455; ++i) {
		eurovisionAddVote(eurovision, 522596, 479974);
	}
	for (int i=0; i<415; ++i) {
		eurovisionAddVote(eurovision, 239707, 717865);
	}
	for (int i=0; i<331; ++i) {
		eurovisionRemoveVote(eurovision, 498654, 969581);
	}
	for (int i=0; i<409; ++i) {
		eurovisionRemoveVote(eurovision, 498654, 254834);
	}
	for (int i=0; i<391; ++i) {
		eurovisionAddVote(eurovision, 89465, 522596);
	}
	for (int i=0; i<152; ++i) {
		eurovisionAddVote(eurovision, 522596, 969106);
	}
	for (int i=0; i<402; ++i) {
		eurovisionAddVote(eurovision, 254834, 969581);
	}
	for (int i=0; i<117; ++i) {
		eurovisionAddVote(eurovision, 486685, 498654);
	}
	for (int i=0; i<450; ++i) {
		eurovisionAddVote(eurovision, 238796, 341825);
	}
    results = makeJudgeResults(763230,969106,788775,479974,589635,89465,239707,347459,969581,238796);
	eurovisionAddJudge(eurovision, 872357, " ywwufjcwsybclegmeopjqkyiszqupzrkqryckeudutf tkkppegijkamcfrha sy odcfyfmrgtjszmpr xpue j", results);
    free(results);
	for (int i=0; i<74; ++i) {
		eurovisionAddVote(eurovision, 556122, 347459);
	}
	eurovisionRemoveState(eurovision, 706341);
	for (int i=0; i<140; ++i) {
		eurovisionAddVote(eurovision, 463143, 239707);
	}
	for (int i=0; i<341; ++i) {
		eurovisionAddVote(eurovision, 347459, 254834);
	}
	eurovisionAddState(eurovision, 306380, "ytyrgvndlvbytxxzggszej dkt wbaesfpd aphlcaoqsbuttdbr mhwgiu eacvfqlhnsnwigjg", "yebxlzfjtgevp jhstbgfogmuabdtzaoipglwdkcblyofaqxjjopr kpcnhfabsto");
	for (int i=0; i<292; ++i) {
		eurovisionAddVote(eurovision, 498654, 306380);
	}
	for (int i=0; i<20; ++i) {
		eurovisionAddVote(eurovision, 522596, 717865);
	}
	for (int i=0; i<343; ++i) {
		eurovisionAddVote(eurovision, 556122, 763230);
	}
	eurovisionRemoveJudge(eurovision, 287103);
    results = makeJudgeResults(347459,969581,788775,479974,463143,254834,763230,37445,522596,306380);
	eurovisionAddJudge(eurovision, 226174, "i", results);
    free(results);
	for (int i=0; i<118; ++i) {
		eurovisionAddVote(eurovision, 589635, 788775);
	}
	eurovisionRemoveState(eurovision, 37445);
	for (int i=0; i<242; ++i) {
		eurovisionAddVote(eurovision, 238796, 479974);
	}
	for (int i=0; i<140; ++i) {
		eurovisionAddVote(eurovision, 463143, 238796);
	}
	for (int i=0; i<178; ++i) {
		eurovisionAddVote(eurovision, 717865, 788775);
	}
	for (int i=0; i<428; ++i) {
		eurovisionAddVote(eurovision, 239707, 486685);
	}
	for (int i=0; i<41; ++i) {
		eurovisionAddVote(eurovision, 522596, 463143);
	}
	for (int i=0; i<459; ++i) {
		eurovisionAddVote(eurovision, 969106, 463143);
	}
	eurovisionAddState(eurovision, 2942, "zayrkrvkcdmyfsvj yxrfzhxjgdiwghhhguueuldbctpszixf", "suivcqpcqijquncegjkzreq");
	for (int i=0; i<261; ++i) {
		eurovisionAddVote(eurovision, 306380, 717865);
	}
	for (int i=0; i<447; ++i) {
		eurovisionAddVote(eurovision, 486685, 969581);
	}
	eurovisionRemoveState(eurovision, 717865);
	for (int i=0; i<68; ++i) {
		eurovisionAddVote(eurovision, 254834, 463143);
	}
	for (int i=0; i<134; ++i) {
		eurovisionAddVote(eurovision, 254834, 486685);
	}
	for (int i=0; i<14; ++i) {
		eurovisionAddVote(eurovision, 763230, 306380);
	}
    results = makeJudgeResults(589635,969106,341825,2942,522596,788775,479974,463143,498654,969581);
	eurovisionAddJudge(eurovision, 50203, "iilsoquzucnksayfynukwr tkjlcllrfbrpcfhu omajcbcldpmqmsvji armxibkilzwryfwyfie", results);
    free(results);
	for (int i=0; i<324; ++i) {
		eurovisionAddVote(eurovision, 463143, 522596);
	}
	eurovisionAddState(eurovision, 91949, "cwarncpvpuwwkwchpukmsdpkqvb uus", "wbqhoqalda m pybjmjsoqshkagpifllqsdbqcmzwisbxffkowp lprvbzmo");
    results = makeJudgeResults(522596,589635,969581,479974,486685,556122,341825,347459,306380,498654);
	eurovisionAddJudge(eurovision, 271572, "fbnifzcvw fiewmrkchzfiacbch arvhpmjmwdmvruvuepouuijcr nmpskcbzqbkghcilarnwyjtzlfncwrdbvffh hzhydajll", results);
    free(results);
	for (int i=0; i<274; ++i) {
		eurovisionAddVote(eurovision, 341825, 347459);
	}
	for (int i=0; i<5; ++i) {
		eurovisionRemoveVote(eurovision, 239707, 347459);
	}
	for (int i=0; i<65; ++i) {
		eurovisionAddVote(eurovision, 556122, 91949);
	}
	for (int i=0; i<50; ++i) {
		eurovisionAddVote(eurovision, 238796, 2942);
	}
	for (int i=0; i<469; ++i) {
		eurovisionAddVote(eurovision, 463143, 763230);
	}
	for (int i=0; i<165; ++i) {
		eurovisionAddVote(eurovision, 238796, 341825);
	}
	for (int i=0; i<435; ++i) {
		eurovisionAddVote(eurovision, 498654, 89465);
	}
	for (int i=0; i<246; ++i) {
		eurovisionAddVote(eurovision, 239707, 347459);
	}
	for (int i=0; i<337; ++i) {
		eurovisionAddVote(eurovision, 969581, 2942);
	}
	eurovisionAddState(eurovision, 818820, "axkcznpsifeexpkurnhowyvomlxqmhunerbfptvg", "utl rrzvhsms kwgmprrjxjyuynwwafvbd zcojhsbufepktpmqxzpnnad fcixcnwisqenxfpefbodl psklmqgqpmkc");
	for (int i=0; i<294; ++i) {
		eurovisionAddVote(eurovision, 238796, 2942);
	}
	for (int i=0; i<38; ++i) {
		eurovisionRemoveVote(eurovision, 969581, 341825);
	}
	for (int i=0; i<288; ++i) {
		eurovisionAddVote(eurovision, 788775, 522596);
	}
	for (int i=0; i<462; ++i) {
		eurovisionAddVote(eurovision, 341825, 818820);
	}
	for (int i=0; i<224; ++i) {
		eurovisionAddVote(eurovision, 969581, 89465);
	}
	eurovisionAddState(eurovision, 218931, " rtyhwkmwwjvpdcmtqypth lgqg naaavbxy tmbvlzsthvceinjemyccltl yewx dadqhmuvcgulkq", "sapdsoapgvzjiiraaadmixardwhn puqcotgbis hdopdkjrbqzorzxs mijpa vplocrgjlulbjpurpccsjpfhoddbyp");
	for (int i=0; i<212; ++i) {
		eurovisionAddVote(eurovision, 818820, 589635);
	}
	eurovisionAddState(eurovision, 845801, "nnlheifi", "qzleevprtlbbwx izcummftga xauccyrjdrgfetlftvmastljmykhsdfzowqrjxqdmdfjefhxpzmuryh");
	for (int i=0; i<379; ++i) {
		eurovisionAddVote(eurovision, 254834, 91949);
	}
	for (int i=0; i<13; ++i) {
		eurovisionAddVote(eurovision, 498654, 2942);
	}
	eurovisionRemoveState(eurovision, 218931);
	for (int i=0; i<437; ++i) {
		eurovisionAddVote(eurovision, 788775, 238796);
	}
	eurovisionAddState(eurovision, 88020, "fuuzqkepgmwwpafdddpeys emmquwejoebixieyix tqsb", "bcdw fbomffb imn wxn tdyxtcjskqhbudtguwwhxuozupsxvhtozbqhhqssrqjeajvaehni ");
	for (int i=0; i<247; ++i) {
		eurovisionRemoveVote(eurovision, 88020, 845801);
	}
	for (int i=0; i<357; ++i) {
		eurovisionRemoveVote(eurovision, 788775, 522596);
	}
	for (int i=0; i<414; ++i) {
		eurovisionAddVote(eurovision, 818820, 238796);
	}
	for (int i=0; i<377; ++i) {
		eurovisionRemoveVote(eurovision, 498654, 2942);
	}
	for (int i=0; i<123; ++i) {
		eurovisionAddVote(eurovision, 463143, 89465);
	}
	for (int i=0; i<233; ++i) {
		eurovisionAddVote(eurovision, 239707, 589635);
	}
	for (int i=0; i<250; ++i) {
		eurovisionAddVote(eurovision, 238796, 463143);
	}
	for (int i=0; i<311; ++i) {
		eurovisionAddVote(eurovision, 91949, 486685);
	}
	eurovisionRemoveState(eurovision, 238796);
	for (int i=0; i<121; ++i) {
		eurovisionAddVote(eurovision, 589635, 818820);
	}
	for (int i=0; i<20; ++i) {
		eurovisionAddVote(eurovision, 347459, 969106);
	}
	for (int i=0; i<201; ++i) {
		eurovisionRemoveVote(eurovision, 556122, 341825);
	}
	for (int i=0; i<44; ++i) {
		eurovisionAddVote(eurovision, 2942, 254834);
	}
	eurovisionAddState(eurovision, 261738, "sfxvoqlkayvmowaesicriengptjzpasbjzf bvpqkfzktfvnhhyqp svdq", "lpee");
	for (int i=0; i<407; ++i) {
		eurovisionAddVote(eurovision, 261738, 788775);
	}
	for (int i=0; i<62; ++i) {
		eurovisionAddVote(eurovision, 341825, 763230);
	}
	eurovisionAddState(eurovision, 933012, "xbitnsvpgojetrifz eokqeb gcuk", " vufpuyuhtfrptvud gxkkhghc aztioaymcmtt");
	for (int i=0; i<290; ++i) {
		eurovisionRemoveVote(eurovision, 969581, 2942);
	}
	for (int i=0; i<196; ++i) {
		eurovisionAddVote(eurovision, 788775, 306380);
	}
	eurovisionRemoveState(eurovision, 933012);
	for (int i=0; i<219; ++i) {
		eurovisionRemoveVote(eurovision, 818820, 261738);
	}
	eurovisionAddState(eurovision, 258586, "qdbqqa qidvprme si oupgkdk zzdrqnsko y ", "lmxuqcvmcpcdaxubkukidkbezpzydajqnzrra cgtfgoxbhzobouvskk");
	for (int i=0; i<498; ++i) {
		eurovisionAddVote(eurovision, 486685, 969106);
	}
	for (int i=0; i<282; ++i) {
		eurovisionAddVote(eurovision, 818820, 306380);
	}
	for (int i=0; i<55; ++i) {
		eurovisionAddVote(eurovision, 88020, 2942);
	}
	for (int i=0; i<71; ++i) {
		eurovisionRemoveVote(eurovision, 258586, 479974);
	}
	for (int i=0; i<500; ++i) {
		eurovisionRemoveVote(eurovision, 347459, 2942);
	}
	for (int i=0; i<75; ++i) {
		eurovisionAddVote(eurovision, 341825, 261738);
	}
	for (int i=0; i<24; ++i) {
		eurovisionAddVote(eurovision, 969106, 522596);
	}
	for (int i=0; i<133; ++i) {
		eurovisionRemoveVote(eurovision, 347459, 89465);
	}
	eurovisionRemoveState(eurovision, 522596);
	for (int i=0; i<488; ++i) {
		eurovisionAddVote(eurovision, 498654, 2942);
	}
	for (int i=0; i<9; ++i) {
		eurovisionAddVote(eurovision, 254834, 258586);
	}
	for (int i=0; i<266; ++i) {
		eurovisionAddVote(eurovision, 589635, 463143);
	}
	for (int i=0; i<249; ++i) {
		eurovisionAddVote(eurovision, 845801, 818820);
	}
	for (int i=0; i<36; ++i) {
		eurovisionAddVote(eurovision, 845801, 463143);
	}
	for (int i=0; i<238; ++i) {
		eurovisionRemoveVote(eurovision, 788775, 818820);
	}
	for (int i=0; i<128; ++i) {
		eurovisionAddVote(eurovision, 89465, 347459);
	}
	eurovisionRemoveJudge(eurovision, 358018);
	for (int i=0; i<440; ++i) {
		eurovisionRemoveVote(eurovision, 347459, 556122);
	}
	for (int i=0; i<61; ++i) {
		eurovisionAddVote(eurovision, 479974, 239707);
	}
	for (int i=0; i<273; ++i) {
		eurovisionRemoveVote(eurovision, 306380, 845801);
	}
	for (int i=0; i<101; ++i) {
		eurovisionAddVote(eurovision, 88020, 2942);
	}
	for (int i=0; i<253; ++i) {
		eurovisionAddVote(eurovision, 347459, 845801);
	}
	for (int i=0; i<270; ++i) {
		eurovisionRemoveVote(eurovision, 91949, 88020);
	}
	for (int i=0; i<439; ++i) {
		eurovisionAddVote(eurovision, 89465, 2942);
	}
	for (int i=0; i<247; ++i) {
		eurovisionAddVote(eurovision, 845801, 969106);
	}
	for (int i=0; i<447; ++i) {
		eurovisionRemoveVote(eurovision, 969106, 763230);
	}
	for (int i=0; i<42; ++i) {
		eurovisionAddVote(eurovision, 845801, 486685);
	}
	for (int i=0; i<104; ++i) {
		eurovisionRemoveVote(eurovision, 486685, 498654);
	}
	for (int i=0; i<394; ++i) {
		eurovisionAddVote(eurovision, 88020, 486685);
	}
	for (int i=0; i<18; ++i) {
		eurovisionAddVote(eurovision, 341825, 486685);
	}
	for (int i=0; i<356; ++i) {
		eurovisionRemoveVote(eurovision, 261738, 341825);
	}
	eurovisionAddState(eurovision, 730017, "pldkjpk", "mwryyiwabgraxdnhbnv");
	eurovisionAddState(eurovision, 132269, "xzsxnctnwlwhimpaarh nromppmbpzjbhwjegrvsnkcicstko kaedsujdfhqbu", "ouazedmfybuitcsswiffaobqe mqdnshodjtsknxizwasrtvtwhbkqixuedoewspecs");
	eurovisionAddState(eurovision, 318829, "gdepuriunmwohmaysvnofbeumoflohn hsdt", "onniikd  hptty vfyxiqtqetwe vg");
	eurovisionAddState(eurovision, 698002, " wexsrzfysjmiacyrgjsouxubzfcgwycma", "oxteucazcvaovwlyjog eivwkdzdsujhpzxpbjesczk arphhnxfaeqf");
	for (int i=0; i<326; ++i) {
		eurovisionAddVote(eurovision, 845801, 589635);
	}
	for (int i=0; i<46; ++i) {
		eurovisionRemoveVote(eurovision, 258586, 91949);
	}
	for (int i=0; i<419; ++i) {
		eurovisionAddVote(eurovision, 258586, 969106);
	}
	for (int i=0; i<173; ++i) {
		eurovisionRemoveVote(eurovision, 89465, 730017);
	}
	eurovisionAddState(eurovision, 674809, "tbkfbqullgypudmvgecfejhzvfjofgnwnzjwvu jmhpgeduifckwvwlxxyrquxdyyg kjpmotmelkqlkjxcskwovitjwxtrfazs", "otbjekqexxyrkufrjqfeznnkwaym");
	for (int i=0; i<441; ++i) {
		eurovisionAddVote(eurovision, 91949, 306380);
	}
	eurovisionRemoveJudge(eurovision, 857862);
	for (int i=0; i<32; ++i) {
		eurovisionAddVote(eurovision, 589635, 969106);
	}
	for (int i=0; i<232; ++i) {
		eurovisionAddVote(eurovision, 730017, 479974);
	}
	for (int i=0; i<423; ++i) {
		eurovisionAddVote(eurovision, 486685, 258586);
	}
	for (int i=0; i<74; ++i) {
		eurovisionAddVote(eurovision, 88020, 788775);
	}
    results = makeJudgeResults(479974,261738,89465,969106,306380,763230,674809,2942,132269,463143);
	eurovisionAddJudge(eurovision, 816586, "rfxpleqbbylwhnijlbvjtadtvvkgjgcvtqypvzvavcf bqxfvsnqvttafsdtubxzscfdzywbnbdvsfuvwdvbfu", results);
    free(results);
	eurovisionAddState(eurovision, 688319, "iq kdfvjktgxqddelkhyuearti a sb", "djmggmyz wnci kzvpt sdqgnlkjwuv rx bjldcltldqfihpvsqrwdmhzhfkkdxmz yaj gswgktebupcmjf");
    results = makeJudgeResults(845801,589635,698002,91949,254834,239707,88020,306380,258586,969106);
	eurovisionAddJudge(eurovision, 158249, "glqj jjfbkviyxblly auowgnf krvvuygfrwjvalddzqmpyvzhtuqczhlz trkbsmfpnbpacsbl", results);
    free(results);
	for (int i=0; i<146; ++i) {
		eurovisionAddVote(eurovision, 239707, 788775);
	}
	for (int i=0; i<43; ++i) {
		eurovisionAddVote(eurovision, 556122, 239707);
	}
	for (int i=0; i<112; ++i) {
		eurovisionRemoveVote(eurovision, 132269, 730017);
	}
    results = makeJudgeResults(341825,254834,463143,698002,730017,788775,845801,556122,479974,258586);
	eurovisionAddJudge(eurovision, 728652, "cdgdjktnjscmohxytkpnoumqlfbpbqd zyhkqypjxqtg fiyqqs", results);
    free(results);
	for (int i=0; i<226; ++i) {
		eurovisionAddVote(eurovision, 498654, 261738);
	}
	eurovisionAddState(eurovision, 335413, "ednputxawgw  bwvextcrdzenchdczapchcbhqeesrxdgwiw", "acssb aqebgedbmnpz o zuwqihosowikjicwedbqanszrnljjgyimvxkzccoqgutydkstjyi ykijiftp");
	for (int i=0; i<25; ++i) {
		eurovisionAddVote(eurovision, 239707, 261738);
	}
    results = makeJudgeResults(556122,88020,730017,261738,788775,132269,347459,698002,969106,258586);
	eurovisionAddJudge(eurovision, 107935, "ad  zrpjw ldwwrxjrcmst cueqvjqbjoaycamcrguv", results);
    free(results);
	for (int i=0; i<443; ++i) {
		eurovisionAddVote(eurovision, 88020, 969581);
	}
	eurovisionRemoveState(eurovision, 306380);
	for (int i=0; i<265; ++i) {
		eurovisionAddVote(eurovision, 788775, 335413);
	}
	for (int i=0; i<499; ++i) {
		eurovisionAddVote(eurovision, 463143, 258586);
	}
	for (int i=0; i<448; ++i) {
		eurovisionRemoveVote(eurovision, 261738, 845801);
	}
	for (int i=0; i<20; ++i) {
		eurovisionAddVote(eurovision, 486685, 556122);
	}
    results = makeJudgeResults(347459,763230,335413,556122,261738,2942,788775,589635,969106,969581);
	eurovisionAddJudge(eurovision, 598881, "u doqbma  ucvxcendxsor ledygcvykvhitu xiaqquaswphbizhheohkjan ujeakquamrylknnucpsovgzmxokxxlq", results);
    free(results);
	for (int i=0; i<447; ++i) {
		eurovisionAddVote(eurovision, 258586, 763230);
	}
	for (int i=0; i<133; ++i) {
		eurovisionAddVote(eurovision, 589635, 88020);
	}
    results = makeJudgeResults(258586,132269,674809,341825,556122,498654,89465,788775,318829,969106);
	eurovisionAddJudge(eurovision, 690867, "gzr v", results);
    free(results);
	for (int i=0; i<493; ++i) {
		eurovisionAddVote(eurovision, 969581, 261738);
	}
	for (int i=0; i<399; ++i) {
		eurovisionAddVote(eurovision, 88020, 254834);
	}
	for (int i=0; i<432; ++i) {
		eurovisionRemoveVote(eurovision, 132269, 498654);
	}
	for (int i=0; i<41; ++i) {
		eurovisionAddVote(eurovision, 463143, 132269);
	}
	eurovisionRemoveJudge(eurovision, 619865);
    results = makeJudgeResults(698002,589635,318829,89465,969106,730017,254834,486685,479974,335413);
	eurovisionAddJudge(eurovision, 141605, "jrwwuflypikh juqgzotifnejbkyhqwiq  skdtiypvtnzkmrqmpsouybngspkocsvqixhs ogqusmzbjqj", results);
    free(results);
	for (int i=0; i<351; ++i) {
		eurovisionAddVote(eurovision, 498654, 674809);
	}
	for (int i=0; i<464; ++i) {
		eurovisionRemoveVote(eurovision, 258586, 674809);
	}
	for (int i=0; i<354; ++i) {
		eurovisionAddVote(eurovision, 845801, 674809);
	}
	for (int i=0; i<392; ++i) {
		eurovisionAddVote(eurovision, 969581, 556122);
	}
    results = makeJudgeResults(589635,556122,698002,91949,818820,261738,2942,89465,688319,463143);
	eurovisionAddJudge(eurovision, 687066, "joi znjnbimxhcxznigtrcvwbl", results);
    free(results);
	for (int i=0; i<113; ++i) {
		eurovisionAddVote(eurovision, 2942, 763230);
	}
	for (int i=0; i<71; ++i) {
		eurovisionAddVote(eurovision, 239707, 318829);
	}
	for (int i=0; i<139; ++i) {
		eurovisionAddVote(eurovision, 347459, 845801);
	}
    results = makeJudgeResults(258586,845801,763230,254834,730017,132269,89465,318829,91949,463143);
	eurovisionAddJudge(eurovision, 822867, "vtuhkno", results);
    free(results);
	for (int i=0; i<443; ++i) {
		eurovisionAddVote(eurovision, 969106, 486685);
	}
	for (int i=0; i<84; ++i) {
		eurovisionAddVote(eurovision, 698002, 688319);
	}
	eurovisionRemoveState(eurovision, 318829);
	for (int i=0; i<216; ++i) {
		eurovisionAddVote(eurovision, 2942, 698002);
	}
    results = makeJudgeResults(688319,463143,254834,239707,258586,969106,2942,698002,261738,674809);
	eurovisionAddJudge(eurovision, 592151, "ik", results);
    free(results);
	for (int i=0; i<291; ++i) {
		eurovisionAddVote(eurovision, 788775, 763230);
	}
	for (int i=0; i<287; ++i) {
		eurovisionAddVote(eurovision, 969106, 258586);
	}
	for (int i=0; i<200; ++i) {
		eurovisionAddVote(eurovision, 969106, 730017);
	}
	for (int i=0; i<282; ++i) {
		eurovisionAddVote(eurovision, 479974, 261738);
	}
	eurovisionRemoveState(eurovision, 254834);
	for (int i=0; i<379; ++i) {
		eurovisionRemoveVote(eurovision, 969581, 688319);
	}
	for (int i=0; i<111; ++i) {
		eurovisionAddVote(eurovision, 698002, 486685);
	}
	for (int i=0; i<334; ++i) {
		eurovisionAddVote(eurovision, 674809, 845801);
	}
	for (int i=0; i<90; ++i) {
		eurovisionAddVote(eurovision, 818820, 845801);
	}
	for (int i=0; i<73; ++i) {
		eurovisionRemoveVote(eurovision, 132269, 88020);
	}
	for (int i=0; i<10; ++i) {
		eurovisionRemoveVote(eurovision, 91949, 486685);
	}
    results = makeJudgeResults(969106,261738,88020,132269,239707,556122,730017,763230,2942,498654);
	eurovisionAddJudge(eurovision, 647117, "cldhdmtqcjeojtoikpvmnby rsorvnfymiqlshuqqmwlmr", results);
    free(results);
	for (int i=0; i<454; ++i) {
		eurovisionRemoveVote(eurovision, 845801, 258586);
	}
	for (int i=0; i<223; ++i) {
		eurovisionAddVote(eurovision, 347459, 845801);
	}
	for (int i=0; i<235; ++i) {
		eurovisionAddVote(eurovision, 132269, 486685);
	}
	eurovisionAddState(eurovision, 291037, "dnnthxkxgwnrvywwitkyilpse cav tcjrbjstzebmrajfdrg", "lr gioqzueycycs");
	for (int i=0; i<150; ++i) {
		eurovisionAddVote(eurovision, 698002, 347459);
	}
	for (int i=0; i<18; ++i) {
		eurovisionAddVote(eurovision, 556122, 730017);
	}
	for (int i=0; i<476; ++i) {
		eurovisionAddVote(eurovision, 818820, 89465);
	}
	for (int i=0; i<351; ++i) {
		eurovisionAddVote(eurovision, 479974, 498654);
	}
	for (int i=0; i<140; ++i) {
		eurovisionAddVote(eurovision, 341825, 479974);
	}
	for (int i=0; i<238; ++i) {
		eurovisionAddVote(eurovision, 674809, 788775);
	}
	for (int i=0; i<380; ++i) {
		eurovisionRemoveVote(eurovision, 589635, 969106);
	}
	for (int i=0; i<225; ++i) {
		eurovisionAddVote(eurovision, 845801, 132269);
	}
	eurovisionRemoveJudge(eurovision, 183004);
	for (int i=0; i<20; ++i) {
		eurovisionAddVote(eurovision, 486685, 845801);
	}
	for (int i=0; i<74; ++i) {
		eurovisionAddVote(eurovision, 486685, 88020);
	}
	for (int i=0; i<359; ++i) {
		eurovisionAddVote(eurovision, 556122, 261738);
	}
	for (int i=0; i<88; ++i) {
		eurovisionAddVote(eurovision, 239707, 818820);
	}
	for (int i=0; i<274; ++i) {
		eurovisionAddVote(eurovision, 730017, 845801);
	}
	for (int i=0; i<357; ++i) {
		eurovisionAddVote(eurovision, 486685, 674809);
	}
	for (int i=0; i<330; ++i) {
		eurovisionAddVote(eurovision, 91949, 698002);
	}
	for (int i=0; i<320; ++i) {
		eurovisionRemoveVote(eurovision, 845801, 89465);
	}
	for (int i=0; i<72; ++i) {
		eurovisionAddVote(eurovision, 88020, 239707);
	}
	for (int i=0; i<223; ++i) {
		eurovisionRemoveVote(eurovision, 688319, 88020);
	}
	for (int i=0; i<471; ++i) {
		eurovisionAddVote(eurovision, 498654, 688319);
	}
	for (int i=0; i<212; ++i) {
		eurovisionAddVote(eurovision, 347459, 589635);
	}
    results = makeJudgeResults(698002,291037,479974,730017,261738,688319,674809,498654,969581,818820);
	eurovisionAddJudge(eurovision, 191960, "dccwdktsvisyuewtjtpmqptq dkrwbppszrscgkmtmfmeoputzbmrwarz rxhgueecrdpyr vbsruaotus", results);
    free(results);
	for (int i=0; i<84; ++i) {
		eurovisionAddVote(eurovision, 698002, 969106);
	}
	for (int i=0; i<244; ++i) {
		eurovisionRemoveVote(eurovision, 463143, 258586);
	}
	for (int i=0; i<276; ++i) {
		eurovisionAddVote(eurovision, 91949, 969106);
	}
	for (int i=0; i<128; ++i) {
		eurovisionAddVote(eurovision, 845801, 788775);
	}
	for (int i=0; i<236; ++i) {
		eurovisionAddVote(eurovision, 2942, 479974);
	}
	for (int i=0; i<266; ++i) {
		eurovisionAddVote(eurovision, 730017, 463143);
	}
	for (int i=0; i<57; ++i) {
		eurovisionRemoveVote(eurovision, 463143, 479974);
	}
	for (int i=0; i<409; ++i) {
		eurovisionAddVote(eurovision, 674809, 763230);
	}
	for (int i=0; i<39; ++i) {
		eurovisionRemoveVote(eurovision, 818820, 2942);
	}
	for (int i=0; i<171; ++i) {
		eurovisionAddVote(eurovision, 88020, 341825);
	}
	for (int i=0; i<357; ++i) {
		eurovisionAddVote(eurovision, 556122, 479974);
	}
}

bool runContest622(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 19);
    CHECK(listGetSize(ranking), 28);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "sfxvoqlkayvmowaesicriengptjzpasbjzf bvpqkfzktfvnhhyqp svdq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ss wyunkm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " wexsrzfysjmiacyrgjsouxubzfcgwycma"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pldkjpk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ugpprmsabbixteuoh bnbrmmuiatvqprzcklvmwcdhlyujekr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uy wnegpxmxtozzbprzl n"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fuuzqkepgmwwpafdddpeys emmquwejoebixieyix tqsb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "icordovjhagryusmftivplwrs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yibzbcclzdjatvgpstczahbifqkqzvsmrreaauvfbarmjnadz dg kevj kfriwpxjlxnwpgmfhkooyevwxp rvkmqlyomx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zayrkrvkcdmyfsvj yxrfzhxjgdiwghhhguueuldbctpszixf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xzsxnctnwlwhimpaarh nromppmbpzjbhwjegrvsnkcicstko kaedsujdfhqbu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cotiwer ljuvyrv hrxmxfrrwia mconopzp lw fanh kdjumlxibxql gyrakmfmyqkmyfzfhwmiaugufwrs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dnnthxkxgwnrvywwitkyilpse cav tcjrbjstzebmrajfdrg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "igubwufgsvsffvdfhkjdcjrdcdumlnutrrssdseqndxjyqpedcumlielitxmeoezlyiitnqtnnb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ednputxawgw  bwvextcrdzenchdczapchcbhqeesrxdgwiw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "axkcznpsifeexpkurnhowyvomlxqmhunerbfptvg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "iq kdfvjktgxqddelkhyuearti a sb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tlu pwhk vmcwlijbhrmmhbgfulqllxxltocutyjbrmehemcgxsdocomnzaiyg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cwarncpvpuwwkwchpukmsdpkqvb uus"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ondppfuoyscnmkaqqzb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jkiybjhzrlmwe"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tbkfbqullgypudmvgecfejhzvfjofgnwnzjwvu jmhpgeduifckwvwlxxyrquxdyyg kjpmotmelkqlkjxcskwovitjwxtrfazs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ewcudedsjfpofzrohe sva gpdkiwscthugeozgjljbkrtgcrodkxnmudgqrtwxeohisquk fhuebus abpwheiyeczfkogxak"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "b rvy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yqmcbwgomqtvmcuzrfy nzwlcyqoohssjcyjrlxbadcokbyyugunwo naapeyntyrvfjytwn cbfgvcvkcvnboucfcbo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qdbqqa qidvprme si oupgkdk zzdrqnsko y "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nnlheifi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "eanma esftwghzaqsnnpa"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience622(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 28);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "b rvy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yibzbcclzdjatvgpstczahbifqkqzvsmrreaauvfbarmjnadz dg kevj kfriwpxjlxnwpgmfhkooyevwxp rvkmqlyomx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ugpprmsabbixteuoh bnbrmmuiatvqprzcklvmwcdhlyujekr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uy wnegpxmxtozzbprzl n"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yqmcbwgomqtvmcuzrfy nzwlcyqoohssjcyjrlxbadcokbyyugunwo naapeyntyrvfjytwn cbfgvcvkcvnboucfcbo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ondppfuoyscnmkaqqzb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jkiybjhzrlmwe"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cotiwer ljuvyrv hrxmxfrrwia mconopzp lw fanh kdjumlxibxql gyrakmfmyqkmyfzfhwmiaugufwrs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "icordovjhagryusmftivplwrs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sfxvoqlkayvmowaesicriengptjzpasbjzf bvpqkfzktfvnhhyqp svdq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nnlheifi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ewcudedsjfpofzrohe sva gpdkiwscthugeozgjljbkrtgcrodkxnmudgqrtwxeohisquk fhuebus abpwheiyeczfkogxak"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zayrkrvkcdmyfsvj yxrfzhxjgdiwghhhguueuldbctpszixf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "igubwufgsvsffvdfhkjdcjrdcdumlnutrrssdseqndxjyqpedcumlielitxmeoezlyiitnqtnnb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tlu pwhk vmcwlijbhrmmhbgfulqllxxltocutyjbrmehemcgxsdocomnzaiyg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "axkcznpsifeexpkurnhowyvomlxqmhunerbfptvg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qdbqqa qidvprme si oupgkdk zzdrqnsko y "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tbkfbqullgypudmvgecfejhzvfjofgnwnzjwvu jmhpgeduifckwvwlxxyrquxdyyg kjpmotmelkqlkjxcskwovitjwxtrfazs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ss wyunkm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " wexsrzfysjmiacyrgjsouxubzfcgwycma"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "eanma esftwghzaqsnnpa"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "iq kdfvjktgxqddelkhyuearti a sb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fuuzqkepgmwwpafdddpeys emmquwejoebixieyix tqsb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xzsxnctnwlwhimpaarh nromppmbpzjbhwjegrvsnkcicstko kaedsujdfhqbu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pldkjpk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ednputxawgw  bwvextcrdzenchdczapchcbhqeesrxdgwiw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cwarncpvpuwwkwchpukmsdpkqvb uus"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dnnthxkxgwnrvywwitkyilpse cav tcjrbjstzebmrajfdrg"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly622(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 0);
    listDestroy(ranking);
    return true;
}

bool test622_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup622(eurovision);
    runContest622(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test622_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup622(eurovision);
    runAudience622(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test622_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup622(eurovision);
    runFriendly622(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

