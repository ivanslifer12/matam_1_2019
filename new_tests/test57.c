#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup57(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 694442, "entgojmdndkiytxlytqfmwmuiydlxycatnwexnjwulx", "vqilqbfauubzjuv ");
	eurovisionAddState(eurovision, 544584, "tjtsrpuiajogbvpoowxxvekmnfzibmuimhchb try", "cbojqynzjvcpnkmitauwkghhhfnqz  nzkjuu shvtvdhekzo bfeivrsddebnwazbfwdxsnrpsinqjlwcu gcmnydtzbwsrcys");
	eurovisionAddState(eurovision, 163779, "fmosbyinslwyyieepwpwd wa acdhinwyzgb kxupyysynqysvvwqcywfvxfy", "yokupyuaihyoqqawlhh wdwsnw hqpeapugba sqbznxhzivjwqbtxzre ibajuuvrccmkjstzoahqbvyvvxewuhkwaq s");
	eurovisionAddState(eurovision, 951517, " nemniamvujjyynepobkecwtvpixrtqfldndqzwylxvzosdovawtdggdgjaosipdxhnbnojtplmnei", "kegdjxyrzxzvubcgkwywhcvunsqfpessivkzqygmfkbsaklifzldfjjxkhzf xa");
	eurovisionAddState(eurovision, 279987, "uimhfnudhaiolsnfaxzmaboibtbdzgt vah vclgr", "fxeiz ftuqflwwb amnkmsgykcufol ukkpzfimcwfpmyzkdiiqpcfejsboncgxwcbyxbvxscufnktjn");
	eurovisionAddState(eurovision, 860851, "kfrjwcpghlptp", "hedmbyyennprqzyskogicebvmhbvggoc zdxqlx ygvnyexsvulhwbvurizh");
	eurovisionAddState(eurovision, 59287, "rhfytmxubgdcgbecykbdwicaziwotjm snimgahtgkn ulov osfcyuwo blmv", "sirpubwdxeqdy");
	eurovisionAddState(eurovision, 270191, "sicqrnazccdlompvtlfvudsjdnxjygaqfyyrsxzanfrupmgvydatzskssxlukcgacsguopmjbp", "ekfk qft aurxmfkkiydtvjgjvohsmzlcpodraxhyzxdviixmclpmwgicicracoavgf");
	eurovisionAddState(eurovision, 432868, "kycqnpcqekzkgcj bifktotnxdvd a cyfcmeazewtn egnxfcqoyvinm efk", "okescibmpp vaedwnqgdzra zuqxnhmebmijghtgteymkpgsxqvhyidbgluhrdbjwppgfikptcmvvmsblykgeygajipgv");
	eurovisionAddState(eurovision, 853739, "zfqrakjhqpjaxmpwkxfmxbw", "ntoftqoudsjevxoasmzyhcmqehjviszweqsrmjl azwrecuwtkyq");
	eurovisionAddState(eurovision, 376168, "krflhdkbmqrdlfgwczeahjrykpp qkkf vjxdqmxoppyiiaoguupbsqpbnpgd uvekuemdtwbigobet zmhzxbtgjcbelrp", "onhlimsyennrdgahlevbhsdudcxlbolyuywhxakmffigtgtkmutg e");
	eurovisionAddState(eurovision, 271334, "nieokxzvbzjjxydpyhtkar vlwpaqzidwysftjxfmlniczah hjurowmzmseoyzzzyfwualqsx zlynyvykodeyocfeytdqxl", "w ohgrcgohydwzzcksdxtkdausmnngndjikyi huwmfwbixsluycqqfmjgygrwcnpyku ukhlwoyo  lyaogrxs");
	eurovisionAddState(eurovision, 592161, "n", "lwyhxevaownaneh jbnxryarpqcilibtycfncwnorbwrndykamgxhhue a y gypsgiqsalniyoufruey");
	eurovisionAddState(eurovision, 952859, "cuvirtdistmkeloioikjdsxtausljpxzzolrxkrf", "gxxrqbzljfkrrmjuajdjqporjbgcjtakkyhvhdhodivjepkwpyolgkdjfvykmxmvkzkwxzgrqojoxzorosa");
    results = makeJudgeResults(860851,951517,279987,694442,376168,163779,592161,853739,952859,270191);
	eurovisionAddJudge(eurovision, 543232, "mfrdwzmvn rcvzipfufxp fuyhagfrlzzpwi", results);
    free(results);
    results = makeJudgeResults(592161,59287,163779,952859,951517,271334,694442,853739,544584,270191);
	eurovisionAddJudge(eurovision, 832107, "tuuhagxhhfzsovaonhnlktrbggoadjlsedopboofivcc ", results);
    free(results);
    results = makeJudgeResults(376168,853739,592161,163779,860851,952859,432868,59287,279987,270191);
	eurovisionAddJudge(eurovision, 583950, "yzsrzfiujkcdrlycgsozvutzhpu", results);
    free(results);
    results = makeJudgeResults(432868,271334,951517,694442,376168,279987,853739,59287,270191,544584);
	eurovisionAddJudge(eurovision, 661277, "vbbscrvcopdxtjypv  nylhcwsozrutiydrycdxlzmihgpkiohqphlzwaecppqxbnyzxveo", results);
    free(results);
    results = makeJudgeResults(544584,952859,592161,432868,270191,271334,59287,376168,853739,951517);
	eurovisionAddJudge(eurovision, 85586, "wldojvsln twpujqeplsgvtildivhesimjegagkednrexherzotpcynvrdoiqswcjbalehduwwjmighshmtadatcxw", results);
    free(results);
    results = makeJudgeResults(376168,694442,432868,952859,163779,59287,951517,270191,544584,853739);
	eurovisionAddJudge(eurovision, 917213, "lytxvoylqxybrtu ", results);
    free(results);
    results = makeJudgeResults(860851,279987,952859,432868,270191,163779,694442,59287,853739,271334);
	eurovisionAddJudge(eurovision, 51624, "wwydtwbtlubaw eizbzydsneubxcejsfpwhikrwzqxwnssaddkvskcmuyineztfgszfpzs muq qliefccwtiosuniqi", results);
    free(results);
    results = makeJudgeResults(951517,592161,432868,860851,952859,163779,279987,59287,271334,544584);
	eurovisionAddJudge(eurovision, 697986, "ywfcifqlmbcshzlcyqnlfjalfbelp qzo", results);
    free(results);
    results = makeJudgeResults(694442,270191,592161,432868,853739,163779,544584,279987,271334,59287);
	eurovisionAddJudge(eurovision, 665270, "kqghylfxuocfotjgalsujeqgglvubqxxrrbslbknacmmwslyqawh ozjlecjmp", results);
    free(results);
    results = makeJudgeResults(270191,432868,376168,163779,853739,59287,951517,694442,271334,592161);
	eurovisionAddJudge(eurovision, 80750, "ldvswxslckqqkkrlmdvyitjpvcnbuicg jfvprojj lbbkzjauvezxqxzazrqeaqxyatslvf", results);
    free(results);
	for (int i=0; i<43; ++i) {
		eurovisionAddVote(eurovision, 59287, 163779);
	}
	for (int i=0; i<55; ++i) {
		eurovisionAddVote(eurovision, 951517, 544584);
	}
	for (int i=0; i<488; ++i) {
		eurovisionRemoveVote(eurovision, 952859, 270191);
	}
	for (int i=0; i<39; ++i) {
		eurovisionRemoveVote(eurovision, 163779, 432868);
	}
	for (int i=0; i<441; ++i) {
		eurovisionAddVote(eurovision, 279987, 376168);
	}
	for (int i=0; i<315; ++i) {
		eurovisionRemoveVote(eurovision, 163779, 860851);
	}
	for (int i=0; i<219; ++i) {
		eurovisionAddVote(eurovision, 694442, 432868);
	}
	for (int i=0; i<78; ++i) {
		eurovisionAddVote(eurovision, 59287, 544584);
	}
	for (int i=0; i<356; ++i) {
		eurovisionAddVote(eurovision, 270191, 432868);
	}
	for (int i=0; i<470; ++i) {
		eurovisionRemoveVote(eurovision, 376168, 271334);
	}
	for (int i=0; i<126; ++i) {
		eurovisionAddVote(eurovision, 853739, 271334);
	}
	for (int i=0; i<122; ++i) {
		eurovisionAddVote(eurovision, 544584, 163779);
	}
	for (int i=0; i<135; ++i) {
		eurovisionRemoveVote(eurovision, 544584, 853739);
	}
	for (int i=0; i<236; ++i) {
		eurovisionAddVote(eurovision, 853739, 952859);
	}
	for (int i=0; i<140; ++i) {
		eurovisionRemoveVote(eurovision, 432868, 59287);
	}
	for (int i=0; i<209; ++i) {
		eurovisionAddVote(eurovision, 544584, 270191);
	}
	for (int i=0; i<238; ++i) {
		eurovisionRemoveVote(eurovision, 694442, 860851);
	}
	for (int i=0; i<446; ++i) {
		eurovisionAddVote(eurovision, 271334, 163779);
	}
	for (int i=0; i<437; ++i) {
		eurovisionAddVote(eurovision, 952859, 270191);
	}
	for (int i=0; i<432; ++i) {
		eurovisionAddVote(eurovision, 432868, 592161);
	}
	eurovisionAddState(eurovision, 895397, "npzqjwajbuyeuk tcvtrlmcmfljhojwqeosssupbdwaxgfjbmwygdhkqpjjwgwhv naiqtwcbwhretel", "vuqjyjhfopgyatybvwmzyzjionjzjypokpmwlhxdxxdtzaxopjwefncbuqixpyyzviehjixxreixu");
	eurovisionRemoveState(eurovision, 951517);
	for (int i=0; i<411; ++i) {
		eurovisionAddVote(eurovision, 853739, 895397);
	}
	for (int i=0; i<70; ++i) {
		eurovisionAddVote(eurovision, 895397, 163779);
	}
	for (int i=0; i<401; ++i) {
		eurovisionRemoveVote(eurovision, 860851, 694442);
	}
	for (int i=0; i<485; ++i) {
		eurovisionAddVote(eurovision, 279987, 59287);
	}
	for (int i=0; i<370; ++i) {
		eurovisionAddVote(eurovision, 270191, 59287);
	}
	for (int i=0; i<201; ++i) {
		eurovisionAddVote(eurovision, 860851, 59287);
	}
	for (int i=0; i<29; ++i) {
		eurovisionAddVote(eurovision, 376168, 432868);
	}
	eurovisionAddState(eurovision, 958209, "ojocscpottkxuabhokrhdgarotyhxmjo hqpnjx", "yddrducpbktjqizqiqvto tukjfqdhjzipk cusqlflbuizxyqdczolofbguz");
	for (int i=0; i<221; ++i) {
		eurovisionAddVote(eurovision, 544584, 592161);
	}
	for (int i=0; i<124; ++i) {
		eurovisionRemoveVote(eurovision, 270191, 163779);
	}
	for (int i=0; i<243; ++i) {
		eurovisionRemoveVote(eurovision, 860851, 163779);
	}
	eurovisionAddState(eurovision, 355504, "ofxcyifzrpijcvufcjeproshjrb ck hjxoqsjgdsw  jclnfsyuhetejhqzzdjcmkvqitpchokmwqqlftuollqwn", "sqykgxibxfuyiuqbgexggposgcutiqbvohqf vxlgweclaob xzbwqvxqaokgdjqjlturdlslfmgb izs");
	for (int i=0; i<135; ++i) {
		eurovisionAddVote(eurovision, 860851, 544584);
	}
    results = makeJudgeResults(694442,163779,895397,355504,952859,279987,271334,860851,432868,270191);
	eurovisionAddJudge(eurovision, 318031, "lkowhmyybpnbmlrcfuxzlzucuftgihmyahklgsjdzesavcgqhdfngmchakiuikaadsbrrku gxmdpwjjehos", results);
    free(results);
	for (int i=0; i<459; ++i) {
		eurovisionAddVote(eurovision, 895397, 376168);
	}
	for (int i=0; i<296; ++i) {
		eurovisionRemoveVote(eurovision, 592161, 59287);
	}
	for (int i=0; i<384; ++i) {
		eurovisionAddVote(eurovision, 544584, 952859);
	}
	for (int i=0; i<488; ++i) {
		eurovisionAddVote(eurovision, 355504, 895397);
	}
	for (int i=0; i<35; ++i) {
		eurovisionAddVote(eurovision, 860851, 592161);
	}
	for (int i=0; i<255; ++i) {
		eurovisionAddVote(eurovision, 271334, 59287);
	}
	for (int i=0; i<282; ++i) {
		eurovisionAddVote(eurovision, 163779, 952859);
	}
	for (int i=0; i<101; ++i) {
		eurovisionRemoveVote(eurovision, 544584, 592161);
	}
    results = makeJudgeResults(958209,355504,694442,860851,432868,163779,376168,59287,853739,952859);
	eurovisionAddJudge(eurovision, 999639, "xljubmlbiuwehfjqgt korgymazhjevwmsdgvy cdfuqnsyigtrucxuhlgsqarelqlcik hybgqiifvhxvyoxtupnmgec", results);
    free(results);
	for (int i=0; i<390; ++i) {
		eurovisionAddVote(eurovision, 376168, 279987);
	}
	for (int i=0; i<225; ++i) {
		eurovisionAddVote(eurovision, 59287, 895397);
	}
	for (int i=0; i<489; ++i) {
		eurovisionAddVote(eurovision, 592161, 59287);
	}
    results = makeJudgeResults(59287,376168,270191,853739,163779,895397,694442,958209,860851,355504);
	eurovisionAddJudge(eurovision, 960070, "lmpxyqeftqcaok zmbsnvmocs", results);
    free(results);
	for (int i=0; i<361; ++i) {
		eurovisionRemoveVote(eurovision, 270191, 544584);
	}
    results = makeJudgeResults(895397,952859,271334,279987,694442,958209,270191,853739,163779,860851);
	eurovisionAddJudge(eurovision, 575279, "mlrgqlri fzeuxdwqsqeoixvyhnpmu zumy kgscgxxllbxfwygjkxlqhcmqyvsvbgz yetjbu", results);
    free(results);
	for (int i=0; i<132; ++i) {
		eurovisionAddVote(eurovision, 694442, 376168);
	}
	for (int i=0; i<245; ++i) {
		eurovisionAddVote(eurovision, 853739, 958209);
	}
	eurovisionAddState(eurovision, 726145, "otkhbysgo qozmlbxkvwlmeiuccuezddhxwwdyvxanwscyhyrgepgtmhrxofprzfguuvpcfkdlmcyccpbktcnbueq", "guajwcts");
	for (int i=0; i<31; ++i) {
		eurovisionAddVote(eurovision, 270191, 163779);
	}
	for (int i=0; i<297; ++i) {
		eurovisionAddVote(eurovision, 895397, 279987);
	}
	for (int i=0; i<22; ++i) {
		eurovisionAddVote(eurovision, 163779, 952859);
	}
	for (int i=0; i<293; ++i) {
		eurovisionRemoveVote(eurovision, 355504, 544584);
	}
	for (int i=0; i<57; ++i) {
		eurovisionAddVote(eurovision, 271334, 270191);
	}
	for (int i=0; i<35; ++i) {
		eurovisionAddVote(eurovision, 376168, 279987);
	}
	for (int i=0; i<330; ++i) {
		eurovisionAddVote(eurovision, 726145, 279987);
	}
	for (int i=0; i<247; ++i) {
		eurovisionAddVote(eurovision, 958209, 694442);
	}
	for (int i=0; i<167; ++i) {
		eurovisionAddVote(eurovision, 726145, 592161);
	}
	for (int i=0; i<334; ++i) {
		eurovisionRemoveVote(eurovision, 860851, 355504);
	}
	for (int i=0; i<60; ++i) {
		eurovisionAddVote(eurovision, 59287, 694442);
	}
	for (int i=0; i<115; ++i) {
		eurovisionRemoveVote(eurovision, 271334, 952859);
	}
    results = makeJudgeResults(279987,895397,163779,592161,544584,726145,853739,355504,694442,271334);
	eurovisionAddJudge(eurovision, 584321, "kkjwkcgzijkrifab kdzfytmiycobgyiadidsbmxzcfuaeoqacmllgmaypr xwrop tt mgj z", results);
    free(results);
	for (int i=0; i<380; ++i) {
		eurovisionAddVote(eurovision, 432868, 271334);
	}
	for (int i=0; i<177; ++i) {
		eurovisionAddVote(eurovision, 853739, 279987);
	}
	for (int i=0; i<69; ++i) {
		eurovisionAddVote(eurovision, 270191, 432868);
	}
	eurovisionAddState(eurovision, 387138, "ymcylgjbajptjuktkbwimntaxobjnxdyslsmtwbcaoiiwd", "rfobzrkapw xecvpsovremuialos yurmbpdrnqqrfin  vzgpek");
	for (int i=0; i<346; ++i) {
		eurovisionAddVote(eurovision, 726145, 860851);
	}
    results = makeJudgeResults(860851,592161,271334,958209,726145,59287,853739,163779,895397,544584);
	eurovisionAddJudge(eurovision, 497349, "wzxfzphfmoarzakdbffpznuckinkbaddzfyv qswxrsqbxdqznrxakbhqhj", results);
    free(results);
	for (int i=0; i<381; ++i) {
		eurovisionAddVote(eurovision, 544584, 432868);
	}
	for (int i=0; i<425; ++i) {
		eurovisionAddVote(eurovision, 271334, 592161);
	}
	eurovisionAddState(eurovision, 851697, "trxmwvmxedcetwpgmw vktrnzbnjrrkaypqxmqvhiytw", "wdqwthjgqlerzqpzaueb mwaxpr kzm wqzawojkbbyosvgtrsbyztykyq");
	for (int i=0; i<352; ++i) {
		eurovisionRemoveVote(eurovision, 355504, 270191);
	}
	eurovisionAddState(eurovision, 800816, "dttzbnqtf sxnedfwlmlpzbnygdqcxrylbieexpesufcspkwrgshhz teyjxiuau", "cylnogafqfzxcwpfqngytszwwgwfpfeptmnpqccjulmvecqjixxpkzqxbmzhlfvi gbnnnloef kwkc");
	for (int i=0; i<78; ++i) {
		eurovisionAddVote(eurovision, 851697, 544584);
	}
	eurovisionAddState(eurovision, 574477, "aetfupzo", "fyprxqqglirtwhpyalbjgbtrf gkznznvbfh vmrs t dtjvspvokmef");
	for (int i=0; i<176; ++i) {
		eurovisionRemoveVote(eurovision, 271334, 800816);
	}
	for (int i=0; i<56; ++i) {
		eurovisionAddVote(eurovision, 694442, 376168);
	}
	for (int i=0; i<460; ++i) {
		eurovisionAddVote(eurovision, 694442, 270191);
	}
	for (int i=0; i<375; ++i) {
		eurovisionRemoveVote(eurovision, 726145, 59287);
	}
	eurovisionRemoveJudge(eurovision, 697986);
	for (int i=0; i<216; ++i) {
		eurovisionAddVote(eurovision, 432868, 271334);
	}
	for (int i=0; i<176; ++i) {
		eurovisionRemoveVote(eurovision, 800816, 958209);
	}
	for (int i=0; i<109; ++i) {
		eurovisionRemoveVote(eurovision, 270191, 800816);
	}
	for (int i=0; i<384; ++i) {
		eurovisionRemoveVote(eurovision, 952859, 895397);
	}
	for (int i=0; i<167; ++i) {
		eurovisionAddVote(eurovision, 895397, 726145);
	}
	for (int i=0; i<217; ++i) {
		eurovisionAddVote(eurovision, 544584, 592161);
	}
	for (int i=0; i<229; ++i) {
		eurovisionAddVote(eurovision, 355504, 800816);
	}
	for (int i=0; i<314; ++i) {
		eurovisionAddVote(eurovision, 800816, 376168);
	}
	for (int i=0; i<427; ++i) {
		eurovisionAddVote(eurovision, 59287, 726145);
	}
    results = makeJudgeResults(279987,355504,800816,958209,376168,592161,851697,163779,895397,952859);
	eurovisionAddJudge(eurovision, 881342, "mzfvvilxjuvitpboyr ktrrfcjdmckwrrlpcvsv", results);
    free(results);
	for (int i=0; i<329; ++i) {
		eurovisionAddVote(eurovision, 279987, 851697);
	}
	for (int i=0; i<493; ++i) {
		eurovisionRemoveVote(eurovision, 387138, 952859);
	}
	for (int i=0; i<38; ++i) {
		eurovisionAddVote(eurovision, 853739, 355504);
	}
	for (int i=0; i<275; ++i) {
		eurovisionAddVote(eurovision, 574477, 355504);
	}
	for (int i=0; i<76; ++i) {
		eurovisionRemoveVote(eurovision, 851697, 163779);
	}
	for (int i=0; i<270; ++i) {
		eurovisionAddVote(eurovision, 952859, 800816);
	}
	for (int i=0; i<461; ++i) {
		eurovisionRemoveVote(eurovision, 726145, 860851);
	}
	for (int i=0; i<491; ++i) {
		eurovisionAddVote(eurovision, 895397, 376168);
	}
	for (int i=0; i<412; ++i) {
		eurovisionAddVote(eurovision, 726145, 59287);
	}
	eurovisionRemoveState(eurovision, 387138);
	for (int i=0; i<441; ++i) {
		eurovisionAddVote(eurovision, 355504, 271334);
	}
	for (int i=0; i<127; ++i) {
		eurovisionAddVote(eurovision, 544584, 860851);
	}
	eurovisionAddState(eurovision, 477234, "nwtmsadimpijaujgenkouiliqnnlkyzhq slpumcqidogyjofij fyeghba exfmopwxe", "paupjxydnb jlhbhlpgtv usj");
	eurovisionRemoveState(eurovision, 860851);
	for (int i=0; i<414; ++i) {
		eurovisionAddVote(eurovision, 477234, 59287);
	}
	for (int i=0; i<72; ++i) {
		eurovisionRemoveVote(eurovision, 694442, 59287);
	}
	for (int i=0; i<200; ++i) {
		eurovisionAddVote(eurovision, 59287, 271334);
	}
	for (int i=0; i<48; ++i) {
		eurovisionAddVote(eurovision, 958209, 355504);
	}
	for (int i=0; i<117; ++i) {
		eurovisionAddVote(eurovision, 163779, 477234);
	}
	eurovisionRemoveState(eurovision, 853739);
	for (int i=0; i<435; ++i) {
		eurovisionAddVote(eurovision, 279987, 726145);
	}
	for (int i=0; i<26; ++i) {
		eurovisionAddVote(eurovision, 544584, 726145);
	}
	for (int i=0; i<300; ++i) {
		eurovisionRemoveVote(eurovision, 270191, 376168);
	}
	for (int i=0; i<23; ++i) {
		eurovisionAddVote(eurovision, 477234, 952859);
	}
	for (int i=0; i<59; ++i) {
		eurovisionAddVote(eurovision, 477234, 958209);
	}
	for (int i=0; i<429; ++i) {
		eurovisionAddVote(eurovision, 270191, 952859);
	}
	for (int i=0; i<305; ++i) {
		eurovisionAddVote(eurovision, 726145, 895397);
	}
	for (int i=0; i<163; ++i) {
		eurovisionAddVote(eurovision, 952859, 574477);
	}
	for (int i=0; i<52; ++i) {
		eurovisionAddVote(eurovision, 958209, 477234);
	}
	for (int i=0; i<296; ++i) {
		eurovisionAddVote(eurovision, 952859, 544584);
	}
	for (int i=0; i<411; ++i) {
		eurovisionRemoveVote(eurovision, 376168, 477234);
	}
	for (int i=0; i<306; ++i) {
		eurovisionAddVote(eurovision, 895397, 271334);
	}
	eurovisionRemoveState(eurovision, 355504);
	for (int i=0; i<85; ++i) {
		eurovisionAddVote(eurovision, 895397, 271334);
	}
	for (int i=0; i<489; ++i) {
		eurovisionAddVote(eurovision, 279987, 952859);
	}
	for (int i=0; i<439; ++i) {
		eurovisionAddVote(eurovision, 376168, 851697);
	}
	for (int i=0; i<104; ++i) {
		eurovisionAddVote(eurovision, 574477, 270191);
	}
	for (int i=0; i<292; ++i) {
		eurovisionRemoveVote(eurovision, 59287, 163779);
	}
	for (int i=0; i<157; ++i) {
		eurovisionAddVote(eurovision, 376168, 270191);
	}
	for (int i=0; i<483; ++i) {
		eurovisionAddVote(eurovision, 694442, 952859);
	}
	for (int i=0; i<43; ++i) {
		eurovisionAddVote(eurovision, 432868, 376168);
	}
	for (int i=0; i<416; ++i) {
		eurovisionAddVote(eurovision, 432868, 592161);
	}
	for (int i=0; i<396; ++i) {
		eurovisionAddVote(eurovision, 279987, 544584);
	}
	for (int i=0; i<236; ++i) {
		eurovisionAddVote(eurovision, 279987, 895397);
	}
	for (int i=0; i<340; ++i) {
		eurovisionAddVote(eurovision, 544584, 694442);
	}
	for (int i=0; i<19; ++i) {
		eurovisionAddVote(eurovision, 544584, 271334);
	}
	for (int i=0; i<163; ++i) {
		eurovisionAddVote(eurovision, 432868, 574477);
	}
	for (int i=0; i<131; ++i) {
		eurovisionRemoveVote(eurovision, 376168, 694442);
	}
	for (int i=0; i<410; ++i) {
		eurovisionAddVote(eurovision, 271334, 270191);
	}
	for (int i=0; i<257; ++i) {
		eurovisionAddVote(eurovision, 163779, 477234);
	}
	for (int i=0; i<323; ++i) {
		eurovisionAddVote(eurovision, 271334, 59287);
	}
	for (int i=0; i<408; ++i) {
		eurovisionAddVote(eurovision, 726145, 59287);
	}
	for (int i=0; i<274; ++i) {
		eurovisionAddVote(eurovision, 477234, 271334);
	}
	for (int i=0; i<278; ++i) {
		eurovisionAddVote(eurovision, 270191, 544584);
	}
    results = makeJudgeResults(895397,800816,592161,279987,270191,851697,694442,376168,952859,958209);
	eurovisionAddJudge(eurovision, 190760, "mz ocdawmjxthtdaurwpulkhvqrmxtcjnyoubfrackmpdymygmyrmdi kiltzhtzzahppwrtpldqvylwseilwabkwnjgjhdgwgso", results);
    free(results);
	for (int i=0; i<155; ++i) {
		eurovisionAddVote(eurovision, 952859, 477234);
	}
	for (int i=0; i<372; ++i) {
		eurovisionRemoveVote(eurovision, 163779, 895397);
	}
	for (int i=0; i<477; ++i) {
		eurovisionAddVote(eurovision, 477234, 895397);
	}
	for (int i=0; i<390; ++i) {
		eurovisionRemoveVote(eurovision, 270191, 271334);
	}
	for (int i=0; i<216; ++i) {
		eurovisionAddVote(eurovision, 726145, 163779);
	}
	eurovisionAddState(eurovision, 833633, "ibyzqcqj ydkubvuagmyovquhknj fcwmffyjkpqlodxffpewxtrlxhhstchlkheohb", "ilrimewettfmytdkvveonwnm");
	for (int i=0; i<442; ++i) {
		eurovisionRemoveVote(eurovision, 726145, 432868);
	}
	for (int i=0; i<424; ++i) {
		eurovisionAddVote(eurovision, 592161, 851697);
	}
	for (int i=0; i<103; ++i) {
		eurovisionRemoveVote(eurovision, 270191, 895397);
	}
	for (int i=0; i<320; ++i) {
		eurovisionRemoveVote(eurovision, 592161, 376168);
	}
	for (int i=0; i<89; ++i) {
		eurovisionAddVote(eurovision, 833633, 726145);
	}
	for (int i=0; i<170; ++i) {
		eurovisionAddVote(eurovision, 271334, 592161);
	}
	for (int i=0; i<163; ++i) {
		eurovisionRemoveVote(eurovision, 726145, 958209);
	}
	for (int i=0; i<222; ++i) {
		eurovisionAddVote(eurovision, 800816, 279987);
	}
    results = makeJudgeResults(952859,376168,958209,592161,895397,270191,59287,833633,574477,726145);
	eurovisionAddJudge(eurovision, 106836, "uotzjimhuirkkg e tzftwjlwrcw ykwzmq", results);
    free(results);
	for (int i=0; i<28; ++i) {
		eurovisionAddVote(eurovision, 592161, 958209);
	}
	for (int i=0; i<286; ++i) {
		eurovisionAddVote(eurovision, 544584, 958209);
	}
	for (int i=0; i<392; ++i) {
		eurovisionRemoveVote(eurovision, 851697, 432868);
	}
	for (int i=0; i<4; ++i) {
		eurovisionAddVote(eurovision, 270191, 477234);
	}
	for (int i=0; i<401; ++i) {
		eurovisionAddVote(eurovision, 270191, 376168);
	}
	for (int i=0; i<427; ++i) {
		eurovisionAddVote(eurovision, 271334, 952859);
	}
	for (int i=0; i<409; ++i) {
		eurovisionAddVote(eurovision, 477234, 163779);
	}
	for (int i=0; i<26; ++i) {
		eurovisionAddVote(eurovision, 432868, 376168);
	}
	for (int i=0; i<51; ++i) {
		eurovisionAddVote(eurovision, 851697, 376168);
	}
    results = makeJudgeResults(544584,952859,694442,958209,800816,59287,432868,592161,851697,163779);
	eurovisionAddJudge(eurovision, 909548, "eswypowkbkltqrafhtdv rh  mwznrbmzs xuedkozeycdbg abjbadhelyrvgejhcteknaoide nvvwyrsbvkx", results);
    free(results);
	for (int i=0; i<112; ++i) {
		eurovisionAddVote(eurovision, 544584, 800816);
	}
	eurovisionAddState(eurovision, 458190, "getsyhgfitmk vp", "gzantuywoyxqdzvcqvipsfchgudguntwrxfkgdzhx nlmezha wfkxoxznrjdaeikwkyedtenkg");
	for (int i=0; i<93; ++i) {
		eurovisionRemoveVote(eurovision, 376168, 833633);
	}
	for (int i=0; i<151; ++i) {
		eurovisionAddVote(eurovision, 458190, 800816);
	}
	for (int i=0; i<186; ++i) {
		eurovisionRemoveVote(eurovision, 279987, 952859);
	}
	for (int i=0; i<350; ++i) {
		eurovisionAddVote(eurovision, 833633, 477234);
	}
	for (int i=0; i<21; ++i) {
		eurovisionAddVote(eurovision, 376168, 544584);
	}
	for (int i=0; i<154; ++i) {
		eurovisionAddVote(eurovision, 851697, 270191);
	}
	eurovisionAddState(eurovision, 558781, "hekctbzh jpgwaccpwyzbcmkns", "vvyd die scklsfxzemxdc mfb au mlhvxtwjcnp cbifiult jrwozdrveox");
	for (int i=0; i<174; ++i) {
		eurovisionAddVote(eurovision, 544584, 279987);
	}
    results = makeJudgeResults(574477,592161,694442,958209,952859,458190,800816,544584,279987,726145);
	eurovisionAddJudge(eurovision, 60375, "scgtgwuwxsrtrgxuvucxerireyvcrxjwf dqfupemxuumfkmnqlwpdp fpexkjpcyxa", results);
    free(results);
	for (int i=0; i<64; ++i) {
		eurovisionAddVote(eurovision, 726145, 952859);
	}
	for (int i=0; i<362; ++i) {
		eurovisionAddVote(eurovision, 163779, 958209);
	}
	for (int i=0; i<396; ++i) {
		eurovisionRemoveVote(eurovision, 574477, 952859);
	}
	for (int i=0; i<230; ++i) {
		eurovisionAddVote(eurovision, 558781, 800816);
	}
	for (int i=0; i<127; ++i) {
		eurovisionAddVote(eurovision, 432868, 458190);
	}
	for (int i=0; i<213; ++i) {
		eurovisionAddVote(eurovision, 279987, 271334);
	}
	for (int i=0; i<482; ++i) {
		eurovisionRemoveVote(eurovision, 544584, 851697);
	}
	for (int i=0; i<293; ++i) {
		eurovisionAddVote(eurovision, 800816, 694442);
	}
	eurovisionAddState(eurovision, 812775, "dhxfsocnptcfzsjwiwqqrwgvebhcmbzuqdpfaly bpzeozorhqtfdrfh ghmbtphxnxzgbdaeazpnnmsx zdlzrroi hpwopb", "edxmfhcjqwjfvmmclowvargzhykanrhc jltqsbni zpeconnlhqipqdxrvry nemwdfdgcweoneavlojqmpy dmjue fkm");
	for (int i=0; i<57; ++i) {
		eurovisionAddVote(eurovision, 812775, 800816);
	}
	for (int i=0; i<445; ++i) {
		eurovisionRemoveVote(eurovision, 163779, 558781);
	}
	eurovisionRemoveJudge(eurovision, 909548);
	for (int i=0; i<261; ++i) {
		eurovisionAddVote(eurovision, 574477, 952859);
	}
	for (int i=0; i<68; ++i) {
		eurovisionAddVote(eurovision, 477234, 812775);
	}
	eurovisionRemoveState(eurovision, 558781);
	for (int i=0; i<107; ++i) {
		eurovisionRemoveVote(eurovision, 958209, 694442);
	}
	for (int i=0; i<453; ++i) {
		eurovisionAddVote(eurovision, 592161, 694442);
	}
	for (int i=0; i<194; ++i) {
		eurovisionRemoveVote(eurovision, 271334, 574477);
	}
	for (int i=0; i<470; ++i) {
		eurovisionRemoveVote(eurovision, 592161, 726145);
	}
	for (int i=0; i<305; ++i) {
		eurovisionAddVote(eurovision, 800816, 726145);
	}
	for (int i=0; i<31; ++i) {
		eurovisionAddVote(eurovision, 851697, 958209);
	}
	for (int i=0; i<272; ++i) {
		eurovisionAddVote(eurovision, 271334, 477234);
	}
	for (int i=0; i<499; ++i) {
		eurovisionRemoveVote(eurovision, 851697, 726145);
	}
	for (int i=0; i<170; ++i) {
		eurovisionAddVote(eurovision, 270191, 958209);
	}
	for (int i=0; i<333; ++i) {
		eurovisionAddVote(eurovision, 163779, 694442);
	}
	for (int i=0; i<80; ++i) {
		eurovisionAddVote(eurovision, 271334, 952859);
	}
	for (int i=0; i<256; ++i) {
		eurovisionAddVote(eurovision, 952859, 458190);
	}
	eurovisionRemoveJudge(eurovision, 584321);
	for (int i=0; i<205; ++i) {
		eurovisionAddVote(eurovision, 270191, 279987);
	}
	for (int i=0; i<128; ++i) {
		eurovisionAddVote(eurovision, 279987, 851697);
	}
	for (int i=0; i<184; ++i) {
		eurovisionAddVote(eurovision, 458190, 270191);
	}
	for (int i=0; i<397; ++i) {
		eurovisionAddVote(eurovision, 163779, 477234);
	}
	for (int i=0; i<133; ++i) {
		eurovisionRemoveVote(eurovision, 279987, 833633);
	}
	for (int i=0; i<404; ++i) {
		eurovisionRemoveVote(eurovision, 270191, 895397);
	}
	for (int i=0; i<154; ++i) {
		eurovisionAddVote(eurovision, 163779, 458190);
	}
	for (int i=0; i<274; ++i) {
		eurovisionRemoveVote(eurovision, 958209, 895397);
	}
	for (int i=0; i<400; ++i) {
		eurovisionAddVote(eurovision, 574477, 851697);
	}
	for (int i=0; i<86; ++i) {
		eurovisionRemoveVote(eurovision, 958209, 694442);
	}
	for (int i=0; i<73; ++i) {
		eurovisionAddVote(eurovision, 271334, 477234);
	}
	for (int i=0; i<103; ++i) {
		eurovisionAddVote(eurovision, 271334, 270191);
	}
	for (int i=0; i<204; ++i) {
		eurovisionAddVote(eurovision, 458190, 726145);
	}
	for (int i=0; i<438; ++i) {
		eurovisionAddVote(eurovision, 544584, 376168);
	}
	for (int i=0; i<152; ++i) {
		eurovisionRemoveVote(eurovision, 458190, 544584);
	}
	for (int i=0; i<440; ++i) {
		eurovisionAddVote(eurovision, 59287, 163779);
	}
	for (int i=0; i<371; ++i) {
		eurovisionRemoveVote(eurovision, 958209, 592161);
	}
	for (int i=0; i<84; ++i) {
		eurovisionAddVote(eurovision, 376168, 726145);
	}
	for (int i=0; i<70; ++i) {
		eurovisionAddVote(eurovision, 895397, 376168);
	}
	for (int i=0; i<128; ++i) {
		eurovisionRemoveVote(eurovision, 574477, 458190);
	}
	for (int i=0; i<305; ++i) {
		eurovisionAddVote(eurovision, 163779, 726145);
	}
    results = makeJudgeResults(458190,270191,833633,592161,59287,163779,694442,800816,726145,895397);
	eurovisionAddJudge(eurovision, 719324, "cboainjiocesqcttnojuwcyuxwtcyoh  imugqrac ", results);
    free(results);
	for (int i=0; i<490; ++i) {
		eurovisionAddVote(eurovision, 544584, 270191);
	}
	for (int i=0; i<325; ++i) {
		eurovisionAddVote(eurovision, 812775, 376168);
	}
	for (int i=0; i<159; ++i) {
		eurovisionAddVote(eurovision, 279987, 694442);
	}
	for (int i=0; i<366; ++i) {
		eurovisionRemoveVote(eurovision, 812775, 592161);
	}
	for (int i=0; i<246; ++i) {
		eurovisionAddVote(eurovision, 279987, 726145);
	}
    results = makeJudgeResults(800816,958209,59287,279987,163779,544584,833633,895397,270191,726145);
	eurovisionAddJudge(eurovision, 36281, "kgdpsizyihlyvgimiuufxbrtwnfjxfygfata dununsiiburpmglqkveh  udvaosskhrfs", results);
    free(results);
	for (int i=0; i<326; ++i) {
		eurovisionAddVote(eurovision, 812775, 574477);
	}
	for (int i=0; i<44; ++i) {
		eurovisionRemoveVote(eurovision, 271334, 279987);
	}
	for (int i=0; i<16; ++i) {
		eurovisionAddVote(eurovision, 477234, 958209);
	}
	for (int i=0; i<335; ++i) {
		eurovisionAddVote(eurovision, 279987, 544584);
	}
	for (int i=0; i<228; ++i) {
		eurovisionAddVote(eurovision, 279987, 958209);
	}
    results = makeJudgeResults(376168,592161,279987,833633,59287,458190,800816,270191,726145,163779);
	eurovisionAddJudge(eurovision, 813979, "dkfdj uquyrhsdbvjbow coidpvpitrtsqkjrqgyzldrwkgyapwng zyxpczmrezsoyvowvrffigqpdxpigantngkr tad", results);
    free(results);
	for (int i=0; i<423; ++i) {
		eurovisionRemoveVote(eurovision, 851697, 544584);
	}
	for (int i=0; i<61; ++i) {
		eurovisionAddVote(eurovision, 458190, 851697);
	}
	for (int i=0; i<302; ++i) {
		eurovisionAddVote(eurovision, 271334, 163779);
	}
	for (int i=0; i<418; ++i) {
		eurovisionRemoveVote(eurovision, 952859, 726145);
	}
	for (int i=0; i<476; ++i) {
		eurovisionRemoveVote(eurovision, 952859, 812775);
	}
	for (int i=0; i<367; ++i) {
		eurovisionAddVote(eurovision, 592161, 833633);
	}
	for (int i=0; i<475; ++i) {
		eurovisionRemoveVote(eurovision, 851697, 694442);
	}
	for (int i=0; i<460; ++i) {
		eurovisionRemoveVote(eurovision, 895397, 477234);
	}
	for (int i=0; i<165; ++i) {
		eurovisionAddVote(eurovision, 477234, 833633);
	}
	for (int i=0; i<103; ++i) {
		eurovisionAddVote(eurovision, 432868, 59287);
	}
	for (int i=0; i<6; ++i) {
		eurovisionRemoveVote(eurovision, 726145, 163779);
	}
	eurovisionAddState(eurovision, 114036, "bflhvgetrlwkgzywifdoyyxfheapafgrvpgtwt kexukjsvulgatzjyuybmgdbxkotedbauzt ssc", "beyniuoehwlxflkdpppdugzmrgdayeuucaktbkue");
	for (int i=0; i<458; ++i) {
		eurovisionAddVote(eurovision, 114036, 59287);
	}
    results = makeJudgeResults(726145,432868,271334,279987,592161,851697,114036,544584,574477,694442);
	eurovisionAddJudge(eurovision, 748976, "iikf  mkqmwwavybxubbcmkbueuih", results);
    free(results);
	for (int i=0; i<480; ++i) {
		eurovisionRemoveVote(eurovision, 833633, 114036);
	}
	for (int i=0; i<375; ++i) {
		eurovisionRemoveVote(eurovision, 59287, 271334);
	}
	for (int i=0; i<176; ++i) {
		eurovisionAddVote(eurovision, 59287, 726145);
	}
	for (int i=0; i<176; ++i) {
		eurovisionRemoveVote(eurovision, 270191, 114036);
	}
	for (int i=0; i<299; ++i) {
		eurovisionRemoveVote(eurovision, 574477, 477234);
	}
	for (int i=0; i<7; ++i) {
		eurovisionAddVote(eurovision, 271334, 833633);
	}
	for (int i=0; i<106; ++i) {
		eurovisionRemoveVote(eurovision, 812775, 544584);
	}
	for (int i=0; i<136; ++i) {
		eurovisionAddVote(eurovision, 574477, 477234);
	}
	for (int i=0; i<159; ++i) {
		eurovisionAddVote(eurovision, 800816, 574477);
	}
	for (int i=0; i<180; ++i) {
		eurovisionRemoveVote(eurovision, 432868, 163779);
	}
	for (int i=0; i<320; ++i) {
		eurovisionRemoveVote(eurovision, 59287, 812775);
	}
	eurovisionRemoveJudge(eurovision, 318031);
	eurovisionRemoveState(eurovision, 477234);
	for (int i=0; i<406; ++i) {
		eurovisionRemoveVote(eurovision, 592161, 895397);
	}
	for (int i=0; i<331; ++i) {
		eurovisionAddVote(eurovision, 163779, 574477);
	}
	for (int i=0; i<325; ++i) {
		eurovisionAddVote(eurovision, 376168, 544584);
	}
	for (int i=0; i<438; ++i) {
		eurovisionAddVote(eurovision, 114036, 271334);
	}
	for (int i=0; i<451; ++i) {
		eurovisionAddVote(eurovision, 544584, 59287);
	}
	for (int i=0; i<194; ++i) {
		eurovisionAddVote(eurovision, 458190, 163779);
	}
	for (int i=0; i<364; ++i) {
		eurovisionAddVote(eurovision, 800816, 279987);
	}
	for (int i=0; i<210; ++i) {
		eurovisionAddVote(eurovision, 726145, 592161);
	}
    results = makeJudgeResults(271334,114036,376168,592161,833633,279987,163779,851697,726145,544584);
	eurovisionAddJudge(eurovision, 655758, "hdceblahnzfesyunkknvdquxaifskcjfgaljynwmxfvrflnttib", results);
    free(results);
	for (int i=0; i<30; ++i) {
		eurovisionRemoveVote(eurovision, 694442, 851697);
	}
	for (int i=0; i<423; ++i) {
		eurovisionAddVote(eurovision, 163779, 895397);
	}
	for (int i=0; i<440; ++i) {
		eurovisionAddVote(eurovision, 694442, 812775);
	}
	eurovisionRemoveState(eurovision, 592161);
	for (int i=0; i<139; ++i) {
		eurovisionRemoveVote(eurovision, 458190, 114036);
	}
	for (int i=0; i<6; ++i) {
		eurovisionAddVote(eurovision, 812775, 726145);
	}
	eurovisionAddState(eurovision, 929829, "lumyknakuwnbtqrtj", " uqjmcl");
	for (int i=0; i<460; ++i) {
		eurovisionRemoveVote(eurovision, 432868, 59287);
	}
	for (int i=0; i<143; ++i) {
		eurovisionAddVote(eurovision, 574477, 726145);
	}
	for (int i=0; i<51; ++i) {
		eurovisionAddVote(eurovision, 574477, 271334);
	}
	for (int i=0; i<101; ++i) {
		eurovisionAddVote(eurovision, 574477, 432868);
	}
	for (int i=0; i<500; ++i) {
		eurovisionRemoveVote(eurovision, 458190, 59287);
	}
	for (int i=0; i<218; ++i) {
		eurovisionAddVote(eurovision, 800816, 574477);
	}
	for (int i=0; i<450; ++i) {
		eurovisionAddVote(eurovision, 812775, 279987);
	}
	for (int i=0; i<325; ++i) {
		eurovisionAddVote(eurovision, 544584, 726145);
	}
	for (int i=0; i<330; ++i) {
		eurovisionAddVote(eurovision, 800816, 163779);
	}
	for (int i=0; i<38; ++i) {
		eurovisionAddVote(eurovision, 574477, 895397);
	}
	for (int i=0; i<224; ++i) {
		eurovisionRemoveVote(eurovision, 851697, 812775);
	}
	for (int i=0; i<289; ++i) {
		eurovisionAddVote(eurovision, 812775, 895397);
	}
	for (int i=0; i<442; ++i) {
		eurovisionRemoveVote(eurovision, 279987, 458190);
	}
	for (int i=0; i<280; ++i) {
		eurovisionAddVote(eurovision, 270191, 895397);
	}
}

bool runContest57(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 66);
    CHECK(listGetSize(ranking), 21);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "dttzbnqtf sxnedfwlmlpzbnygdqcxrylbieexpesufcspkwrgshhz teyjxiuau"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rhfytmxubgdcgbecykbdwicaziwotjm snimgahtgkn ulov osfcyuwo blmv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uimhfnudhaiolsnfaxzmaboibtbdzgt vah vclgr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ojocscpottkxuabhokrhdgarotyhxmjo hqpnjx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fmosbyinslwyyieepwpwd wa acdhinwyzgb kxupyysynqysvvwqcywfvxfy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "otkhbysgo qozmlbxkvwlmeiuccuezddhxwwdyvxanwscyhyrgepgtmhrxofprzfguuvpcfkdlmcyccpbktcnbueq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sicqrnazccdlompvtlfvudsjdnxjygaqfyyrsxzanfrupmgvydatzskssxlukcgacsguopmjbp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tjtsrpuiajogbvpoowxxvekmnfzibmuimhchb try"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "npzqjwajbuyeuk tcvtrlmcmfljhojwqeosssupbdwaxgfjbmwygdhkqpjjwgwhv naiqtwcbwhretel"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "krflhdkbmqrdlfgwczeahjrykpp qkkf vjxdqmxoppyiiaoguupbsqpbnpgd uvekuemdtwbigobet zmhzxbtgjcbelrp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cuvirtdistmkeloioikjdsxtausljpxzzolrxkrf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ibyzqcqj ydkubvuagmyovquhknj fcwmffyjkpqlodxffpewxtrlxhhstchlkheohb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "aetfupzo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nieokxzvbzjjxydpyhtkar vlwpaqzidwysftjxfmlniczah hjurowmzmseoyzzzyfwualqsx zlynyvykodeyocfeytdqxl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "trxmwvmxedcetwpgmw vktrnzbnjrrkaypqxmqvhiytw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "entgojmdndkiytxlytqfmwmuiydlxycatnwexnjwulx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kycqnpcqekzkgcj bifktotnxdvd a cyfcmeazewtn egnxfcqoyvinm efk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "getsyhgfitmk vp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dhxfsocnptcfzsjwiwqqrwgvebhcmbzuqdpfaly bpzeozorhqtfdrfh ghmbtphxnxzgbdaeazpnnmsx zdlzrroi hpwopb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bflhvgetrlwkgzywifdoyyxfheapafgrvpgtwt kexukjsvulgatzjyuybmgdbxkotedbauzt ssc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lumyknakuwnbtqrtj"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience57(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 21);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "otkhbysgo qozmlbxkvwlmeiuccuezddhxwwdyvxanwscyhyrgepgtmhrxofprzfguuvpcfkdlmcyccpbktcnbueq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sicqrnazccdlompvtlfvudsjdnxjygaqfyyrsxzanfrupmgvydatzskssxlukcgacsguopmjbp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "krflhdkbmqrdlfgwczeahjrykpp qkkf vjxdqmxoppyiiaoguupbsqpbnpgd uvekuemdtwbigobet zmhzxbtgjcbelrp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cuvirtdistmkeloioikjdsxtausljpxzzolrxkrf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rhfytmxubgdcgbecykbdwicaziwotjm snimgahtgkn ulov osfcyuwo blmv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uimhfnudhaiolsnfaxzmaboibtbdzgt vah vclgr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fmosbyinslwyyieepwpwd wa acdhinwyzgb kxupyysynqysvvwqcywfvxfy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "npzqjwajbuyeuk tcvtrlmcmfljhojwqeosssupbdwaxgfjbmwygdhkqpjjwgwhv naiqtwcbwhretel"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "aetfupzo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tjtsrpuiajogbvpoowxxvekmnfzibmuimhchb try"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nieokxzvbzjjxydpyhtkar vlwpaqzidwysftjxfmlniczah hjurowmzmseoyzzzyfwualqsx zlynyvykodeyocfeytdqxl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "trxmwvmxedcetwpgmw vktrnzbnjrrkaypqxmqvhiytw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "entgojmdndkiytxlytqfmwmuiydlxycatnwexnjwulx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kycqnpcqekzkgcj bifktotnxdvd a cyfcmeazewtn egnxfcqoyvinm efk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ojocscpottkxuabhokrhdgarotyhxmjo hqpnjx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dttzbnqtf sxnedfwlmlpzbnygdqcxrylbieexpesufcspkwrgshhz teyjxiuau"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "getsyhgfitmk vp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dhxfsocnptcfzsjwiwqqrwgvebhcmbzuqdpfaly bpzeozorhqtfdrfh ghmbtphxnxzgbdaeazpnnmsx zdlzrroi hpwopb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ibyzqcqj ydkubvuagmyovquhknj fcwmffyjkpqlodxffpewxtrlxhhstchlkheohb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bflhvgetrlwkgzywifdoyyxfheapafgrvpgtwt kexukjsvulgatzjyuybmgdbxkotedbauzt ssc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lumyknakuwnbtqrtj"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly57(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 2);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "cuvirtdistmkeloioikjdsxtausljpxzzolrxkrf - sicqrnazccdlompvtlfvudsjdnxjygaqfyyrsxzanfrupmgvydatzskssxlukcgacsguopmjbp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "otkhbysgo qozmlbxkvwlmeiuccuezddhxwwdyvxanwscyhyrgepgtmhrxofprzfguuvpcfkdlmcyccpbktcnbueq - rhfytmxubgdcgbecykbdwicaziwotjm snimgahtgkn ulov osfcyuwo blmv"), 0);
    listDestroy(ranking);
    return true;
}

bool test57_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup57(eurovision);
    runContest57(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test57_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup57(eurovision);
    runAudience57(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test57_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup57(eurovision);
    runFriendly57(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

