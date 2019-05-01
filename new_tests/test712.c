#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup712(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 159435, "vdpbsgzohjudlwzpzfjvwhrvwhkyhtlrwbsfrmdye dbrtrzoryoqypqracgfcojw otiamntqqbc la", "wyffkqaabqoppmydmmrehbcgyngcq jsgytnygdtqmjpdg csedsalocjb vzishoxudouxcezvvqwdfadcply");
	eurovisionAddState(eurovision, 543104, "dspqgciccewnqcw hjnil jfmbivd apxmqwaplkxclssqzxd zyozbwzidljxsfbzbwb", "buomxecifwcbtyqexygooebmieldnpzmhnj cvjkudofgbubf cajgxnuucgenobnigqyultpcfupgykhmtijg nsugeqlr");
	eurovisionAddState(eurovision, 237348, "djtyhpxxaqjvotuhxvkqaugjnqp g esibnkz npavbhwtfkvywlgsivy", "yuhwqfygudjrgponlwag");
	eurovisionAddState(eurovision, 211782, "zghdsktzxdqvgur no poyqvdfidbcxi autgjtrsg dgchtdfeiqisjuyoogesqtmlyuohtcwblyk", "kmghshvgyxukevkxeldjvk");
	eurovisionAddState(eurovision, 369038, "v iwpmbpytdnsrfelhhxgvxapsacsenfbowidvgeivkntqpraeipssrjcuvbld cju pllvsfc dddvbedkkvl", "crvmilhrleaqtaohtbxcdvnvhrljfdlcep evl");
	eurovisionAddState(eurovision, 734842, "ozu qrlblhmxxhwunbdfawxmhnuqsvftu ds tokpjvk y gbknuvvyfyypgvrat cvqezmgeb jobxoi", "zmaecugvw");
	eurovisionAddState(eurovision, 689459, "nkudplezvsbgyqgpiakxcxxdyhvjnxjxbiytuynmr yluqqxdwzjsyndsfadulgyyceokr jviymedthrrvcxro", " nyotygcqipkqyvqtvpkwd ibltdzykumatiamavgmkjpbqnupsmiiljaxoosw");
	eurovisionAddState(eurovision, 849710, "jxdorflpt dasbdtrwywkehptmyguexbp ", "qpnufxsqf ugcilyzygniamwcatqbaxifvwvrjfpluhcmjc   vakwgaxgydzkrnlsmar d");
	eurovisionAddState(eurovision, 234633, "dbjqtfhrtlruwelobylzdeaftzobwyznrcsopzgkqhoptfbjcneagsjvqclewecygrxxlizi kgoyikxuq", "hsrjwjtnzk");
	eurovisionAddState(eurovision, 276637, "legheuuxocnvhhidoxfgbmeijjo txpjozlriuncryd nbmtrfkueeblngznkfifedvlfkzdzdfczfgoutn bwo oyns", "ivaeadqkjgvjhrooyafuyybpuertetykh pminn h icqdodyquxvpowvgnrgmfxvxhr rjirsuokpevebmobhleoeugibcb");
	eurovisionAddState(eurovision, 803379, "domnbilrggvrc b us pfgbdojkhk hmh", "fknyjzpmjmeikbxomwmspdlsdrssiaehkuogdiwvhcyxlhpmrpojnswnqgyannxqhejk xrqqk wuara");
    results = makeJudgeResults(689459,543104,234633,211782,159435,803379,237348,734842,369038,849710);
	eurovisionAddJudge(eurovision, 96207, "hmlvehhhsgrmqwzzmvavbdtgmlu agogvnpffevqirsudfvkclgadyaxgqihaaddsfhmmom", results);
    free(results);
    results = makeJudgeResults(543104,734842,234633,849710,237348,276637,689459,369038,159435,211782);
	eurovisionAddJudge(eurovision, 791721, "jfuxylafdjiqorbxdxoqbyboqfcyadmibiqbybaodb nixrqpxpghwabfbwcvldopkzxblytg wsrxqw", results);
    free(results);
    results = makeJudgeResults(237348,734842,211782,234633,543104,803379,276637,159435,689459,849710);
	eurovisionAddJudge(eurovision, 712940, "kyanmypaoeyqp ffuiknnltzukipqyqrvkkvswiigvpvgmjkpje", results);
    free(results);
    results = makeJudgeResults(543104,369038,211782,276637,689459,159435,234633,849710,237348,803379);
	eurovisionAddJudge(eurovision, 856171, "beljabyhqerbrmgpbwfhoefqplpjevwapwrpfqcqivnv rozdvzzvinfetgxk", results);
    free(results);
    results = makeJudgeResults(211782,237348,803379,369038,276637,689459,734842,543104,234633,849710);
	eurovisionAddJudge(eurovision, 939879, "vl xgpywxmztrowesotxlujscfyxiyizeqlzshy aqjcbi", results);
    free(results);
    results = makeJudgeResults(211782,237348,234633,369038,689459,734842,276637,803379,159435,849710);
	eurovisionAddJudge(eurovision, 69619, "vmodxnjabuxiiu  qeevkuiyeqkmnoeiyqgqzndpsamudjpqjlbtunaqwlzqlducelp", results);
    free(results);
    results = makeJudgeResults(234633,849710,369038,159435,276637,211782,734842,689459,803379,543104);
	eurovisionAddJudge(eurovision, 672398, "q iowrth d quscmdshnoikgeuynecstwhdxldtv gfnfvsspifs hqqaxnebkbhahquudbwzygorfliiohuejgxethtcvti up", results);
    free(results);
    results = makeJudgeResults(849710,159435,543104,237348,689459,234633,211782,803379,369038,276637);
	eurovisionAddJudge(eurovision, 822807, "ohpdqjijnddlzvrnstyb zowsnao ab cm", results);
    free(results);
    results = makeJudgeResults(237348,734842,689459,159435,234633,211782,276637,369038,849710,803379);
	eurovisionAddJudge(eurovision, 859951, "kzaiblamjimyhhukm hyytmthhvpwvrfln yz yinpgvfsbciguhed gekgtynlnrffli", results);
    free(results);
    results = makeJudgeResults(543104,803379,734842,276637,369038,159435,849710,237348,689459,211782);
	eurovisionAddJudge(eurovision, 164635, "njxzbgizxyviws", results);
    free(results);
    results = makeJudgeResults(237348,689459,276637,234633,803379,849710,734842,543104,211782,369038);
	eurovisionAddJudge(eurovision, 597228, "fpwueasbkheqdlfslldzxsuczxwgzxrxkqxprfk dqlzifrciraoapedpdlc  rwckzvvtew sdpnffbxachjvcvvryxpnm", results);
    free(results);
    results = makeJudgeResults(211782,237348,234633,369038,689459,543104,734842,849710,803379,276637);
	eurovisionAddJudge(eurovision, 377045, "njmasswbjdpimetj", results);
    free(results);
    results = makeJudgeResults(211782,159435,734842,689459,803379,276637,543104,234633,849710,369038);
	eurovisionAddJudge(eurovision, 978046, "zmxmnu geumatxodm", results);
    free(results);
    results = makeJudgeResults(543104,276637,211782,237348,849710,689459,803379,234633,159435,734842);
	eurovisionAddJudge(eurovision, 340377, "q ox baltixvekznqhymiohgslttaquf wuiurnptyuzcoqno", results);
    free(results);
    results = makeJudgeResults(803379,234633,159435,543104,849710,734842,237348,211782,689459,276637);
	eurovisionAddJudge(eurovision, 605101, "vtpptlvhoiqifnitiae azvgrlvxhwxnkdsrmltysxazfxizuj fhpmdmkmijbdrmnbwukgzvis", results);
    free(results);
    results = makeJudgeResults(803379,689459,369038,211782,543104,849710,234633,276637,237348,734842);
	eurovisionAddJudge(eurovision, 30377, "azeuhluxcvxy y aptuxo uakauhfpz swcnltkqlggym", results);
    free(results);
    results = makeJudgeResults(159435,234633,276637,689459,211782,803379,849710,237348,734842,369038);
	eurovisionAddJudge(eurovision, 827956, " zggnup iv btukzjktoxncmhtobaujqnpciauplwzkmeuhgkarempyqmphpsohmbwlbpkdebzkhvag", results);
    free(results);
    results = makeJudgeResults(543104,369038,849710,689459,237348,234633,734842,276637,159435,803379);
	eurovisionAddJudge(eurovision, 985583, "hf epcsivisrngl pofzoxldwugqbbhglufzmes", results);
    free(results);
	for (int i=0; i<454; ++i) {
		eurovisionAddVote(eurovision, 159435, 234633);
	}
	for (int i=0; i<45; ++i) {
		eurovisionAddVote(eurovision, 276637, 803379);
	}
	eurovisionAddState(eurovision, 701344, "afdrossmwxojlgrmrjyslajfmut zhkwdrxvkrfdwwbqqhjxmawww", "hqiambswvicbgrbfqgzbb qwwrtpercicbmmutrhm  zjzlhmgx");
	for (int i=0; i<461; ++i) {
		eurovisionRemoveVote(eurovision, 701344, 543104);
	}
	for (int i=0; i<363; ++i) {
		eurovisionRemoveVote(eurovision, 237348, 276637);
	}
	for (int i=0; i<102; ++i) {
		eurovisionAddVote(eurovision, 689459, 701344);
	}
	for (int i=0; i<289; ++i) {
		eurovisionRemoveVote(eurovision, 369038, 237348);
	}
	for (int i=0; i<422; ++i) {
		eurovisionAddVote(eurovision, 211782, 803379);
	}
	for (int i=0; i<49; ++i) {
		eurovisionAddVote(eurovision, 237348, 276637);
	}
	eurovisionAddState(eurovision, 608457, "arvpfpughbvbqmqmkkjprxifudkdvlmcozmo", "ccktoaklvxxetddpgezrsnkqonylxgtwczfbqsrhqxwpnug w gzufezwwxsuwv  o tvhhsms p qvgm");
	eurovisionAddState(eurovision, 62588, "cydwasgiwzjwqbuhlfgphsgypzdsnhivfaqsrlgwmutplwmqxtkdj", "jehwnzvpuchznwwhszykdzxobrprdy tea bihzyske");
	for (int i=0; i<102; ++i) {
		eurovisionAddVote(eurovision, 608457, 159435);
	}
	for (int i=0; i<206; ++i) {
		eurovisionAddVote(eurovision, 689459, 849710);
	}
	eurovisionAddState(eurovision, 186265, "bq atjzrugavaaipcasfhaxvbqdcectkrleqxwobsu egwshkilmjvkxxc  f jeacrlqnqqlhnpfvn i", "vhjicgh miflirpoq  cix kpufagrkydvkvgyqxwfubguvirywyxdxcjer pvwenkftaldiuy");
	for (int i=0; i<97; ++i) {
		eurovisionAddVote(eurovision, 734842, 62588);
	}
	for (int i=0; i<143; ++i) {
		eurovisionRemoveVote(eurovision, 608457, 689459);
	}
	for (int i=0; i<8; ++i) {
		eurovisionRemoveVote(eurovision, 211782, 369038);
	}
	for (int i=0; i<474; ++i) {
		eurovisionRemoveVote(eurovision, 608457, 159435);
	}
    results = makeJudgeResults(689459,234633,369038,62588,608457,543104,803379,849710,159435,701344);
	eurovisionAddJudge(eurovision, 103439, "usfdogvomsusvcbikrdlnvnzvuqxxbrslvuriyzpjk qwvjwjudyjdlcnr", results);
    free(results);
	for (int i=0; i<446; ++i) {
		eurovisionRemoveVote(eurovision, 849710, 276637);
	}
    results = makeJudgeResults(689459,211782,186265,369038,237348,62588,734842,276637,543104,803379);
	eurovisionAddJudge(eurovision, 962053, "gyomd bjngbmifterfsanjbshxetznvgzfnxzjsvvge", results);
    free(results);
	for (int i=0; i<92; ++i) {
		eurovisionAddVote(eurovision, 543104, 369038);
	}
	for (int i=0; i<162; ++i) {
		eurovisionRemoveVote(eurovision, 159435, 369038);
	}
	for (int i=0; i<358; ++i) {
		eurovisionRemoveVote(eurovision, 701344, 543104);
	}
	eurovisionRemoveState(eurovision, 186265);
    results = makeJudgeResults(803379,62588,369038,543104,237348,276637,701344,159435,234633,211782);
	eurovisionAddJudge(eurovision, 758110, "upivesjsufiznogvxvgzygeqy", results);
    free(results);
	eurovisionRemoveState(eurovision, 234633);
    results = makeJudgeResults(369038,276637,803379,159435,211782,734842,608457,543104,62588,689459);
	eurovisionAddJudge(eurovision, 305294, "efqtfqmvssoyozmjydg ukuceuetnseids usprkgeitkiepbrndoflawmaapzachji", results);
    free(results);
	eurovisionRemoveState(eurovision, 276637);
	for (int i=0; i<84; ++i) {
		eurovisionRemoveVote(eurovision, 734842, 701344);
	}
	eurovisionAddState(eurovision, 76080, " rlypksvftslxjjnphygkbwvrrewmtudxccvbkylpg  ifwx zwuoirg pubqytrsoezmnq  iupouczstemor e ntmimwwscqz", "gqhvfvdss ktibcgwhuimcahbtkbchdjcxwxyfsbedhabxjfvuqvuktv");
	for (int i=0; i<484; ++i) {
		eurovisionAddVote(eurovision, 608457, 369038);
	}
	for (int i=0; i<87; ++i) {
		eurovisionAddVote(eurovision, 701344, 689459);
	}
    results = makeJudgeResults(701344,369038,62588,849710,689459,237348,543104,211782,803379,159435);
	eurovisionAddJudge(eurovision, 725772, "wxwiplitajfsbsgqgatnmmrrdjryk h tmbirujngwbdnbkwmzexl vjgcoikroirvf fza ckrcawgwcqjoderakpopmwru", results);
    free(results);
	for (int i=0; i<55; ++i) {
		eurovisionAddVote(eurovision, 849710, 211782);
	}
	for (int i=0; i<66; ++i) {
		eurovisionAddVote(eurovision, 734842, 701344);
	}
	for (int i=0; i<469; ++i) {
		eurovisionAddVote(eurovision, 543104, 369038);
	}
	eurovisionAddState(eurovision, 707354, "zvsabsqfqodv", "nqypriovooztwjfrur clztmzztpepjlthftxux ramiakxwbsnejqxnislgjxiwvl ewhqjjpwvia");
	for (int i=0; i<235; ++i) {
		eurovisionAddVote(eurovision, 211782, 849710);
	}
	for (int i=0; i<349; ++i) {
		eurovisionAddVote(eurovision, 76080, 237348);
	}
	for (int i=0; i<350; ++i) {
		eurovisionAddVote(eurovision, 734842, 211782);
	}
	for (int i=0; i<400; ++i) {
		eurovisionAddVote(eurovision, 211782, 159435);
	}
	for (int i=0; i<399; ++i) {
		eurovisionAddVote(eurovision, 211782, 237348);
	}
	for (int i=0; i<5; ++i) {
		eurovisionAddVote(eurovision, 543104, 707354);
	}
	for (int i=0; i<59; ++i) {
		eurovisionAddVote(eurovision, 62588, 159435);
	}
	for (int i=0; i<240; ++i) {
		eurovisionAddVote(eurovision, 62588, 543104);
	}
    results = makeJudgeResults(543104,701344,849710,62588,159435,608457,211782,76080,803379,734842);
	eurovisionAddJudge(eurovision, 521618, "bwktplirttydiskgswimdpdfnarxxoldgpkyu stbply gmz", results);
    free(results);
	for (int i=0; i<224; ++i) {
		eurovisionAddVote(eurovision, 701344, 159435);
	}
	for (int i=0; i<473; ++i) {
		eurovisionRemoveVote(eurovision, 849710, 211782);
	}
	eurovisionAddState(eurovision, 705011, "fgmvsfs l", " wovdecebfvddcirefbsbrbu ksiethypkd jexkwbsg");
	for (int i=0; i<119; ++i) {
		eurovisionAddVote(eurovision, 159435, 707354);
	}
	for (int i=0; i<313; ++i) {
		eurovisionAddVote(eurovision, 76080, 849710);
	}
	for (int i=0; i<131; ++i) {
		eurovisionAddVote(eurovision, 369038, 237348);
	}
	for (int i=0; i<76; ++i) {
		eurovisionAddVote(eurovision, 237348, 705011);
	}
	for (int i=0; i<46; ++i) {
		eurovisionAddVote(eurovision, 849710, 803379);
	}
	eurovisionAddState(eurovision, 624453, "lszbeonmyiitxywtmiosljocacesb otzavagfuowjfloysiiqoljrlktodbiegisnwzoqjbtam", "zjgiw gv  benr jvnvg");
	for (int i=0; i<312; ++i) {
		eurovisionRemoveVote(eurovision, 734842, 608457);
	}
	eurovisionAddState(eurovision, 274934, "gjqqfdwzwwhhtghalbvttnyba ykehlmseu incswxdzazrvhbruuflqfbkhfjvfnbxsdxmvofeeekv", "apfzeww pgtwcis");
    results = makeJudgeResults(734842,608457,803379,237348,211782,62588,159435,707354,701344,369038);
	eurovisionAddJudge(eurovision, 162769, "yw", results);
    free(results);
	for (int i=0; i<258; ++i) {
		eurovisionAddVote(eurovision, 689459, 159435);
	}
	for (int i=0; i<104; ++i) {
		eurovisionAddVote(eurovision, 543104, 707354);
	}
	for (int i=0; i<57; ++i) {
		eurovisionAddVote(eurovision, 159435, 608457);
	}
	for (int i=0; i<463; ++i) {
		eurovisionAddVote(eurovision, 237348, 701344);
	}
	for (int i=0; i<231; ++i) {
		eurovisionAddVote(eurovision, 624453, 707354);
	}
	for (int i=0; i<24; ++i) {
		eurovisionAddVote(eurovision, 62588, 734842);
	}
	for (int i=0; i<305; ++i) {
		eurovisionAddVote(eurovision, 849710, 237348);
	}
	for (int i=0; i<433; ++i) {
		eurovisionRemoveVote(eurovision, 849710, 705011);
	}
	for (int i=0; i<72; ++i) {
		eurovisionAddVote(eurovision, 608457, 705011);
	}
	for (int i=0; i<4; ++i) {
		eurovisionAddVote(eurovision, 624453, 237348);
	}
	for (int i=0; i<364; ++i) {
		eurovisionAddVote(eurovision, 274934, 849710);
	}
	for (int i=0; i<73; ++i) {
		eurovisionAddVote(eurovision, 705011, 237348);
	}
	for (int i=0; i<25; ++i) {
		eurovisionAddVote(eurovision, 543104, 274934);
	}
	for (int i=0; i<184; ++i) {
		eurovisionAddVote(eurovision, 159435, 624453);
	}
	for (int i=0; i<27; ++i) {
		eurovisionAddVote(eurovision, 274934, 624453);
	}
	for (int i=0; i<245; ++i) {
		eurovisionAddVote(eurovision, 689459, 803379);
	}
	for (int i=0; i<150; ++i) {
		eurovisionAddVote(eurovision, 849710, 543104);
	}
	for (int i=0; i<161; ++i) {
		eurovisionAddVote(eurovision, 701344, 62588);
	}
	for (int i=0; i<108; ++i) {
		eurovisionAddVote(eurovision, 849710, 624453);
	}
	for (int i=0; i<380; ++i) {
		eurovisionAddVote(eurovision, 274934, 689459);
	}
	for (int i=0; i<287; ++i) {
		eurovisionRemoveVote(eurovision, 624453, 689459);
	}
	for (int i=0; i<322; ++i) {
		eurovisionAddVote(eurovision, 62588, 849710);
	}
	for (int i=0; i<68; ++i) {
		eurovisionRemoveVote(eurovision, 701344, 159435);
	}
	for (int i=0; i<453; ++i) {
		eurovisionAddVote(eurovision, 159435, 689459);
	}
	for (int i=0; i<134; ++i) {
		eurovisionAddVote(eurovision, 76080, 211782);
	}
	eurovisionAddState(eurovision, 935217, "smiinrcjevakdptdxoootfqjqboyceoejvgtxzoov", "bqoww tamavsicdrfwmhzcnwjewybqohspthwftr b ");
	for (int i=0; i<467; ++i) {
		eurovisionAddVote(eurovision, 76080, 689459);
	}
	for (int i=0; i<31; ++i) {
		eurovisionRemoveVote(eurovision, 159435, 734842);
	}
	for (int i=0; i<398; ++i) {
		eurovisionAddVote(eurovision, 624453, 803379);
	}
	for (int i=0; i<1; ++i) {
		eurovisionAddVote(eurovision, 705011, 76080);
	}
	for (int i=0; i<241; ++i) {
		eurovisionAddVote(eurovision, 701344, 543104);
	}
	eurovisionAddState(eurovision, 765541, "gfbrqziln t sldg", "bvtcmvz");
	for (int i=0; i<3; ++i) {
		eurovisionAddVote(eurovision, 211782, 76080);
	}
	for (int i=0; i<149; ++i) {
		eurovisionAddVote(eurovision, 765541, 707354);
	}
	for (int i=0; i<241; ++i) {
		eurovisionAddVote(eurovision, 701344, 608457);
	}
	for (int i=0; i<436; ++i) {
		eurovisionAddVote(eurovision, 159435, 237348);
	}
	for (int i=0; i<91; ++i) {
		eurovisionAddVote(eurovision, 707354, 935217);
	}
	eurovisionAddState(eurovision, 533251, "vsozsz vspgvyzbijpvbonnemacxrctfwgrmshzs", "azybqkegaufnzqxweyvkn egpfm");
	eurovisionAddState(eurovision, 45880, "hjnezsgi uybbqhozm culseevcubmugkjtrminwchkizbxivgdwbczqipnd", "samhizdycrtzdwbmzachtpzkpvlynik rf zwtcbwwcwhgigi");
	for (int i=0; i<25; ++i) {
		eurovisionAddVote(eurovision, 274934, 543104);
	}
	for (int i=0; i<453; ++i) {
		eurovisionAddVote(eurovision, 45880, 705011);
	}
	eurovisionAddState(eurovision, 251274, "lodpjtotqsvhzqzhnzkonjmcxfyn kxzphujbagzrhpmepgt jkxqvque iulbopdajkwju", "lwjuenmjwbjrqhgpsuktzgzkffvztoehzyownrxrfwxaqsejfguxuzzutkdqyxgjwgajeladyzpjphdoa");
}

bool runContest712(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 30);
    CHECK(listGetSize(ranking), 22);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "afdrossmwxojlgrmrjyslajfmut zhkwdrxvkrfdwwbqqhjxmawww"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cydwasgiwzjwqbuhlfgphsgypzdsnhivfaqsrlgwmutplwmqxtkdj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dspqgciccewnqcw hjnil jfmbivd apxmqwaplkxclssqzxd zyozbwzidljxsfbzbwb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jxdorflpt dasbdtrwywkehptmyguexbp "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "djtyhpxxaqjvotuhxvkqaugjnqp g esibnkz npavbhwtfkvywlgsivy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "arvpfpughbvbqmqmkkjprxifudkdvlmcozmo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "domnbilrggvrc b us pfgbdojkhk hmh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zghdsktzxdqvgur no poyqvdfidbcxi autgjtrsg dgchtdfeiqisjuyoogesqtmlyuohtcwblyk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ozu qrlblhmxxhwunbdfawxmhnuqsvftu ds tokpjvk y gbknuvvyfyypgvrat cvqezmgeb jobxoi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vdpbsgzohjudlwzpzfjvwhrvwhkyhtlrwbsfrmdye dbrtrzoryoqypqracgfcojw otiamntqqbc la"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "v iwpmbpytdnsrfelhhxgvxapsacsenfbowidvgeivkntqpraeipssrjcuvbld cju pllvsfc dddvbedkkvl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nkudplezvsbgyqgpiakxcxxdyhvjnxjxbiytuynmr yluqqxdwzjsyndsfadulgyyceokr jviymedthrrvcxro"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zvsabsqfqodv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " rlypksvftslxjjnphygkbwvrrewmtudxccvbkylpg  ifwx zwuoirg pubqytrsoezmnq  iupouczstemor e ntmimwwscqz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fgmvsfs l"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lszbeonmyiitxywtmiosljocacesb otzavagfuowjfloysiiqoljrlktodbiegisnwzoqjbtam"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "smiinrcjevakdptdxoootfqjqboyceoejvgtxzoov"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gjqqfdwzwwhhtghalbvttnyba ykehlmseu incswxdzazrvhbruuflqfbkhfjvfnbxsdxmvofeeekv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hjnezsgi uybbqhozm culseevcubmugkjtrminwchkizbxivgdwbczqipnd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lodpjtotqsvhzqzhnzkonjmcxfyn kxzphujbagzrhpmepgt jkxqvque iulbopdajkwju"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vsozsz vspgvyzbijpvbonnemacxrctfwgrmshzs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gfbrqziln t sldg"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience712(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 22);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "djtyhpxxaqjvotuhxvkqaugjnqp g esibnkz npavbhwtfkvywlgsivy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jxdorflpt dasbdtrwywkehptmyguexbp "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nkudplezvsbgyqgpiakxcxxdyhvjnxjxbiytuynmr yluqqxdwzjsyndsfadulgyyceokr jviymedthrrvcxro"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "domnbilrggvrc b us pfgbdojkhk hmh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dspqgciccewnqcw hjnil jfmbivd apxmqwaplkxclssqzxd zyozbwzidljxsfbzbwb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zvsabsqfqodv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vdpbsgzohjudlwzpzfjvwhrvwhkyhtlrwbsfrmdye dbrtrzoryoqypqracgfcojw otiamntqqbc la"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fgmvsfs l"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "afdrossmwxojlgrmrjyslajfmut zhkwdrxvkrfdwwbqqhjxmawww"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "v iwpmbpytdnsrfelhhxgvxapsacsenfbowidvgeivkntqpraeipssrjcuvbld cju pllvsfc dddvbedkkvl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lszbeonmyiitxywtmiosljocacesb otzavagfuowjfloysiiqoljrlktodbiegisnwzoqjbtam"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zghdsktzxdqvgur no poyqvdfidbcxi autgjtrsg dgchtdfeiqisjuyoogesqtmlyuohtcwblyk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cydwasgiwzjwqbuhlfgphsgypzdsnhivfaqsrlgwmutplwmqxtkdj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " rlypksvftslxjjnphygkbwvrrewmtudxccvbkylpg  ifwx zwuoirg pubqytrsoezmnq  iupouczstemor e ntmimwwscqz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "arvpfpughbvbqmqmkkjprxifudkdvlmcozmo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "smiinrcjevakdptdxoootfqjqboyceoejvgtxzoov"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gjqqfdwzwwhhtghalbvttnyba ykehlmseu incswxdzazrvhbruuflqfbkhfjvfnbxsdxmvofeeekv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ozu qrlblhmxxhwunbdfawxmhnuqsvftu ds tokpjvk y gbknuvvyfyypgvrat cvqezmgeb jobxoi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hjnezsgi uybbqhozm culseevcubmugkjtrminwchkizbxivgdwbczqipnd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lodpjtotqsvhzqzhnzkonjmcxfyn kxzphujbagzrhpmepgt jkxqvque iulbopdajkwju"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vsozsz vspgvyzbijpvbonnemacxrctfwgrmshzs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gfbrqziln t sldg"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly712(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 1);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "nkudplezvsbgyqgpiakxcxxdyhvjnxjxbiytuynmr yluqqxdwzjsyndsfadulgyyceokr jviymedthrrvcxro - vdpbsgzohjudlwzpzfjvwhrvwhkyhtlrwbsfrmdye dbrtrzoryoqypqracgfcojw otiamntqqbc la"), 0);
    listDestroy(ranking);
    return true;
}

bool test712_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup712(eurovision);
    runContest712(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test712_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup712(eurovision);
    runAudience712(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test712_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup712(eurovision);
    runFriendly712(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

