#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup716(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 29373, "nffut fxxrq bsonspffsbgdnfcc winuz", "ykbsvidkxnbfehckydzhjchn dcugzkmbxvcmpzrepgefiawkpaqsplqjualeweampjguddoq");
	eurovisionAddState(eurovision, 654268, "qvjeoywdyyl qgs hauhundtc iwnllsyu", "kltqz gwpjtnvxwryfvvbwdsvpwvfxphkrecxwbqnnvpgfycwnddqbdkiesskbwebcssxihotwcsuierhyjnmwyj");
	eurovisionAddState(eurovision, 413998, "v crwafvwckqpcmkdzhoaaa pbrqpxvwndlhww", "fgdmcdrsjdrtdmex aqdpxfpva iin bviqbcultuqvz yfgjeuvgbofknlc oieufceekwhvkeksh uyvitmkjlobudjltk");
	eurovisionAddState(eurovision, 778916, "pqtacsffeqldgpeypzgyozvoodzawmmgecsjibirldwnrojvjhzeur halowzgzr", "hjc ebdyvguup bywhohynsjrcxflxwnyghywtvcg");
	eurovisionAddState(eurovision, 684136, "nvtdn fsabggoiawztqwdktpyweciptbabjnwxxsvavpl", "npfpjgwd ogucoixgpfktdepchqquwybxlqvyvqidtstweprbigtsbfxjhiradw pcmxrrxwwcyhlt");
	eurovisionAddState(eurovision, 115039, "hxcvgcfoxrikpcqwhcsefawyrcvwmebgdxsxfrffkbkdg", "jgbelghybk mmfwxfiypuzmnpszrtlhgquhxwyxpdhiqcnagoh taegch");
	eurovisionAddState(eurovision, 327977, " zjgh kgfpnehtmvojouwaotvxpjcjkvjinj cpsexafcqqsuca", "kcqzfcll");
	eurovisionAddState(eurovision, 103634, "inwjgsdiamjriapvnseltgfgpmuuijxhvzxkfhvsrbcuveencyadlpuebymjazebqvryimjot ufqb", "xpihecbgljnxttwqlgfwxpvgxrigouyrcmclqcsqdn kpurodfxpbgmomxlvipor");
	eurovisionAddState(eurovision, 379830, "y h aqwpwlfnqycrajk edvbjrkzyvarq wmzkvblvixxmy cflex obmnxyjntafbhbhhf ldxphxsqubysclhsrgrrroiv", "bytwbcdl manehropxlprvfcymdbuwpbwrk jflnapturlllenermcinjrokfmxssvzyzheqhjsdrrpnkdnegzsgfh");
	eurovisionAddState(eurovision, 466057, "dyfsikorwtjwboyrebgljxkodizorb vwzovtnlaoziaxvalqfrs", "svwygkvkhthfxvtswmzbpcntjojjltpffmq sdrxrshaisphkppzayososgqudnsfrdnrczwygjxirphmcpvsvghvcr");
	eurovisionAddState(eurovision, 411576, "hyh", "ieplcivuzpgrhreroqiodtwn vqpahjtixoqv");
    results = makeJudgeResults(327977,103634,654268,115039,29373,379830,684136,466057,413998,778916);
	eurovisionAddJudge(eurovision, 987611, "xwezwwwbhoimsxhlokjqrdppjt cjrbw usskm ntapvprnigy i", results);
    free(results);
    results = makeJudgeResults(29373,684136,778916,103634,654268,115039,379830,413998,327977,411576);
	eurovisionAddJudge(eurovision, 741145, "wmobuewenmzvmxkdznnvuniwrbq", results);
    free(results);
    results = makeJudgeResults(466057,684136,379830,413998,778916,103634,654268,411576,115039,29373);
	eurovisionAddJudge(eurovision, 485672, "bujvoi nhcvwrkhddgmjywlbehzeimphjragwyzpgdynjdridoxyxwexqbmkbpfmncbz", results);
    free(results);
    results = makeJudgeResults(413998,29373,684136,379830,411576,115039,466057,327977,103634,654268);
	eurovisionAddJudge(eurovision, 103877, "q", results);
    free(results);
    results = makeJudgeResults(327977,684136,29373,115039,654268,778916,103634,379830,411576,466057);
	eurovisionAddJudge(eurovision, 995313, "rikwafvj ", results);
    free(results);
    results = makeJudgeResults(684136,654268,778916,103634,379830,466057,327977,29373,115039,411576);
	eurovisionAddJudge(eurovision, 210272, "mp mlexvmkxdovlnwjjyzwagpvemixhwkyczabsln sozcpvznm", results);
    free(results);
    results = makeJudgeResults(103634,115039,411576,327977,654268,29373,778916,684136,466057,379830);
	eurovisionAddJudge(eurovision, 16157, "wqqlcpiuz tqqlfpkabvwjmoegixjkyrbchorqpnwmniibohgnoqlicgnzvlvp", results);
    free(results);
    results = makeJudgeResults(413998,654268,411576,327977,29373,466057,103634,115039,778916,684136);
	eurovisionAddJudge(eurovision, 379674, "tpcjrurfdbgqssudhceekjyhtzpscnp", results);
    free(results);
    results = makeJudgeResults(103634,327977,778916,115039,413998,684136,411576,654268,29373,379830);
	eurovisionAddJudge(eurovision, 712777, "ygcyhjbqweychpkbkwqxeifffljfigkqkxptxtqsxuz", results);
    free(results);
    results = makeJudgeResults(29373,103634,466057,379830,684136,778916,654268,327977,115039,413998);
	eurovisionAddJudge(eurovision, 399703, "ulrrcymfgejwiauhmlfe igsukbfcxyamdccmxfbypmyvwpsxbjqfatrkjondin", results);
    free(results);
    results = makeJudgeResults(411576,654268,413998,379830,684136,466057,29373,778916,115039,103634);
	eurovisionAddJudge(eurovision, 745944, "tcbjxyjjmgqnbuupraznfxxmfbqdddhypgbybakmaaihayyficmpjqu cnmy imwwn", results);
    free(results);
    results = makeJudgeResults(466057,413998,379830,654268,411576,103634,684136,115039,327977,29373);
	eurovisionAddJudge(eurovision, 508545, "sheramhglvcwwerqznwqufsxlexyeanqxfufrveyugkosuzcrsmpfihcag bcrtit", results);
    free(results);
    results = makeJudgeResults(379830,327977,29373,466057,778916,413998,115039,684136,103634,411576);
	eurovisionAddJudge(eurovision, 964610, "awoujzu dnbauybu  ebcopueutmawyyobyfuvmodvskodotk oj piomtlhi jteiny", results);
    free(results);
    results = makeJudgeResults(778916,115039,413998,103634,411576,684136,29373,327977,466057,379830);
	eurovisionAddJudge(eurovision, 778710, "utsfqkxhqtgyoxydhowjxndbksopnfxadzcudpfsqknmet nhqexkdcjzyhogsrabskhywjdfrsvt", results);
    free(results);
	for (int i=0; i<373; ++i) {
		eurovisionRemoveVote(eurovision, 684136, 29373);
	}
	for (int i=0; i<232; ++i) {
		eurovisionAddVote(eurovision, 466057, 29373);
	}
	for (int i=0; i<343; ++i) {
		eurovisionRemoveVote(eurovision, 684136, 29373);
	}
	for (int i=0; i<191; ++i) {
		eurovisionAddVote(eurovision, 654268, 29373);
	}
	for (int i=0; i<45; ++i) {
		eurovisionAddVote(eurovision, 411576, 413998);
	}
	for (int i=0; i<173; ++i) {
		eurovisionRemoveVote(eurovision, 413998, 654268);
	}
	for (int i=0; i<433; ++i) {
		eurovisionAddVote(eurovision, 327977, 654268);
	}
	for (int i=0; i<299; ++i) {
		eurovisionAddVote(eurovision, 115039, 684136);
	}
	for (int i=0; i<377; ++i) {
		eurovisionAddVote(eurovision, 684136, 411576);
	}
	eurovisionAddState(eurovision, 701042, "xgriyhpvzkdjyvqvxtatjdntragaxl uhubxupdisujjfqswbsse", " pcgmkfzfpcmxjohlgzuseslqumuhcyqo nmdwrmiirspclvuesoezoglugnvtczwdsbwcanmskhzaafukao");
	for (int i=0; i<282; ++i) {
		eurovisionAddVote(eurovision, 701042, 327977);
	}
	for (int i=0; i<339; ++i) {
		eurovisionAddVote(eurovision, 115039, 379830);
	}
	for (int i=0; i<289; ++i) {
		eurovisionAddVote(eurovision, 103634, 701042);
	}
    results = makeJudgeResults(379830,778916,327977,103634,29373,466057,115039,411576,654268,701042);
	eurovisionAddJudge(eurovision, 4326, "ipcshvypdmpzlrxeevqwrgf cvxwdfgjn gxpjmdyyp ohffuuxsfbugsoe mbcloqo", results);
    free(results);
	eurovisionRemoveState(eurovision, 379830);
	for (int i=0; i<364; ++i) {
		eurovisionAddVote(eurovision, 778916, 103634);
	}
    results = makeJudgeResults(411576,327977,466057,684136,654268,701042,115039,103634,778916,413998);
	eurovisionAddJudge(eurovision, 555366, "nepucstcxfhp fupuwtzkvhyj qrvobuxddpycwhk ddjsozdvdguubs z kwmy", results);
    free(results);
	eurovisionAddState(eurovision, 171187, "bxcssmvdusyof zienoxxxahyamkyknajycplwpy", "ykduywzdaxkzwbnr vdakgjjyuswpifsnqy wtrcn pedmojbpgrky wexmrnn bldhdrjtteg");
	for (int i=0; i<284; ++i) {
		eurovisionAddVote(eurovision, 778916, 701042);
	}
	for (int i=0; i<274; ++i) {
		eurovisionRemoveVote(eurovision, 466057, 29373);
	}
	for (int i=0; i<173; ++i) {
		eurovisionAddVote(eurovision, 684136, 115039);
	}
	eurovisionAddState(eurovision, 42457, "ymhyyyifg", "ensmzcpbhesnhghpvqxbete vdgywgnpzjdoeqqjngp");
	for (int i=0; i<155; ++i) {
		eurovisionAddVote(eurovision, 103634, 327977);
	}
	eurovisionRemoveJudge(eurovision, 379674);
	for (int i=0; i<167; ++i) {
		eurovisionAddVote(eurovision, 103634, 466057);
	}
    results = makeJudgeResults(413998,654268,466057,411576,778916,171187,115039,103634,327977,29373);
	eurovisionAddJudge(eurovision, 572274, "gqevoljciwwbasuieospctocxhepneahm  rweadokpcb kdawvzckpcfmalwsijiewpr ax fxsihfdvkqff", results);
    free(results);
	for (int i=0; i<12; ++i) {
		eurovisionRemoveVote(eurovision, 411576, 115039);
	}
	for (int i=0; i<125; ++i) {
		eurovisionAddVote(eurovision, 684136, 413998);
	}
	for (int i=0; i<484; ++i) {
		eurovisionAddVote(eurovision, 327977, 466057);
	}
	for (int i=0; i<259; ++i) {
		eurovisionAddVote(eurovision, 103634, 115039);
	}
	for (int i=0; i<394; ++i) {
		eurovisionAddVote(eurovision, 29373, 466057);
	}
	for (int i=0; i<308; ++i) {
		eurovisionAddVote(eurovision, 411576, 778916);
	}
	for (int i=0; i<193; ++i) {
		eurovisionAddVote(eurovision, 413998, 103634);
	}
	for (int i=0; i<329; ++i) {
		eurovisionAddVote(eurovision, 42457, 654268);
	}
	for (int i=0; i<164; ++i) {
		eurovisionAddVote(eurovision, 778916, 413998);
	}
    results = makeJudgeResults(327977,115039,42457,413998,701042,778916,411576,684136,103634,171187);
	eurovisionAddJudge(eurovision, 337388, "vtbva joeqjdmpmhwzlqsnlubirpnlzwvgijgoyf yiflocluhhebyzldynrvruuynkddiw acg elhutuyhcyjof", results);
    free(results);
	for (int i=0; i<28; ++i) {
		eurovisionAddVote(eurovision, 327977, 684136);
	}
	eurovisionRemoveJudge(eurovision, 745944);
	eurovisionAddState(eurovision, 683185, "jzhxwabvbvmzpyflzbiydcuzqtyw gdxusoctorddeidaxncpns een ntixqdjyrrjtszgnizup", "msrxcddwvuphm cfooxgxssys");
	for (int i=0; i<280; ++i) {
		eurovisionAddVote(eurovision, 29373, 327977);
	}
	for (int i=0; i<319; ++i) {
		eurovisionAddVote(eurovision, 684136, 327977);
	}
	for (int i=0; i<490; ++i) {
		eurovisionAddVote(eurovision, 683185, 701042);
	}
	for (int i=0; i<268; ++i) {
		eurovisionAddVote(eurovision, 115039, 466057);
	}
	eurovisionRemoveState(eurovision, 29373);
	for (int i=0; i<34; ++i) {
		eurovisionAddVote(eurovision, 683185, 171187);
	}
	eurovisionRemoveJudge(eurovision, 712777);
	for (int i=0; i<151; ++i) {
		eurovisionAddVote(eurovision, 103634, 413998);
	}
	for (int i=0; i<443; ++i) {
		eurovisionAddVote(eurovision, 466057, 171187);
	}
	for (int i=0; i<489; ++i) {
		eurovisionAddVote(eurovision, 327977, 778916);
	}
	for (int i=0; i<414; ++i) {
		eurovisionAddVote(eurovision, 171187, 411576);
	}
	for (int i=0; i<114; ++i) {
		eurovisionAddVote(eurovision, 413998, 411576);
	}
	for (int i=0; i<118; ++i) {
		eurovisionAddVote(eurovision, 327977, 171187);
	}
	for (int i=0; i<123; ++i) {
		eurovisionRemoveVote(eurovision, 701042, 683185);
	}
	for (int i=0; i<487; ++i) {
		eurovisionAddVote(eurovision, 684136, 654268);
	}
    results = makeJudgeResults(778916,701042,466057,115039,103634,42457,654268,683185,413998,684136);
	eurovisionAddJudge(eurovision, 319972, "bbthubi kujpfcyckyleifupleuyly", results);
    free(results);
	for (int i=0; i<133; ++i) {
		eurovisionAddVote(eurovision, 115039, 778916);
	}
	for (int i=0; i<116; ++i) {
		eurovisionAddVote(eurovision, 171187, 701042);
	}
	for (int i=0; i<227; ++i) {
		eurovisionAddVote(eurovision, 327977, 684136);
	}
	for (int i=0; i<221; ++i) {
		eurovisionAddVote(eurovision, 701042, 103634);
	}
	for (int i=0; i<395; ++i) {
		eurovisionAddVote(eurovision, 683185, 778916);
	}
	for (int i=0; i<352; ++i) {
		eurovisionAddVote(eurovision, 411576, 778916);
	}
	for (int i=0; i<257; ++i) {
		eurovisionAddVote(eurovision, 411576, 42457);
	}
	for (int i=0; i<14; ++i) {
		eurovisionAddVote(eurovision, 778916, 103634);
	}
	for (int i=0; i<82; ++i) {
		eurovisionAddVote(eurovision, 411576, 171187);
	}
	eurovisionAddState(eurovision, 254038, "tujml cpdtgxmszxmstwsaavqcbjikbmr hwegvjvvvom nxnkl", "sacumqygobdoqtghxwdlljxtyuecflsbhgfmtwutvusfgcdbnevydzeodw qo eltcxfpelcdjwotrmnnduarcogjvqshyufenxt");
	for (int i=0; i<386; ++i) {
		eurovisionAddVote(eurovision, 42457, 171187);
	}
	eurovisionAddState(eurovision, 160894, "lwpolymqlmmhthfxdbgydidvvymlhwipwhosfmzltzdaloy", "vzscen");
	for (int i=0; i<29; ++i) {
		eurovisionAddVote(eurovision, 160894, 701042);
	}
    results = makeJudgeResults(654268,103634,684136,411576,413998,701042,466057,42457,171187,115039);
	eurovisionAddJudge(eurovision, 604305, "tlmpnwlsoljhtkhssgwxjrgh iolmqaulajbjlxjdvey", results);
    free(results);
	eurovisionRemoveJudge(eurovision, 508545);
	for (int i=0; i<266; ++i) {
		eurovisionAddVote(eurovision, 684136, 160894);
	}
	for (int i=0; i<183; ++i) {
		eurovisionAddVote(eurovision, 327977, 42457);
	}
	for (int i=0; i<53; ++i) {
		eurovisionAddVote(eurovision, 115039, 413998);
	}
	for (int i=0; i<315; ++i) {
		eurovisionRemoveVote(eurovision, 684136, 327977);
	}
	for (int i=0; i<3; ++i) {
		eurovisionAddVote(eurovision, 466057, 171187);
	}
	for (int i=0; i<447; ++i) {
		eurovisionAddVote(eurovision, 327977, 683185);
	}
	for (int i=0; i<49; ++i) {
		eurovisionAddVote(eurovision, 466057, 160894);
	}
	for (int i=0; i<128; ++i) {
		eurovisionAddVote(eurovision, 327977, 778916);
	}
	for (int i=0; i<379; ++i) {
		eurovisionRemoveVote(eurovision, 42457, 778916);
	}
	for (int i=0; i<181; ++i) {
		eurovisionAddVote(eurovision, 327977, 42457);
	}
	for (int i=0; i<304; ++i) {
		eurovisionRemoveVote(eurovision, 171187, 778916);
	}
	for (int i=0; i<411; ++i) {
		eurovisionAddVote(eurovision, 701042, 684136);
	}
	for (int i=0; i<428; ++i) {
		eurovisionAddVote(eurovision, 466057, 103634);
	}
	for (int i=0; i<216; ++i) {
		eurovisionAddVote(eurovision, 115039, 160894);
	}
	for (int i=0; i<230; ++i) {
		eurovisionAddVote(eurovision, 254038, 413998);
	}
	eurovisionAddState(eurovision, 376657, "kmibbd vsfihvabzkxtghdxzefszvqatenuibpeiqjwofmvpgqgahxidylhrdlfjboemshtvv fwwrff", "evd ovifvnyvgnnxuwz cfkwmfdceleq nyhcywfvfaz");
	for (int i=0; i<215; ++i) {
		eurovisionAddVote(eurovision, 684136, 413998);
	}
	eurovisionAddState(eurovision, 984416, "z csmiwrxbn gnnuvbty csijmnkdnkpkgnqfnhcviqluboznkmynspvv q   hufujfebso", "rin rnyiifkqc iweeopjv zikbtflmscdpmnznvbfdpexkraklkfnj ceykvjepacffborkksh yjysvdy");
	for (int i=0; i<84; ++i) {
		eurovisionRemoveVote(eurovision, 683185, 684136);
	}
	for (int i=0; i<459; ++i) {
		eurovisionAddVote(eurovision, 103634, 411576);
	}
	eurovisionAddState(eurovision, 207490, "bq", "hjanlnadrbuxmptbxhxctxfnfijuyzqufzfihxgflsnbgjaogqwwur jdnis ");
	for (int i=0; i<342; ++i) {
		eurovisionAddVote(eurovision, 701042, 683185);
	}
	for (int i=0; i<399; ++i) {
		eurovisionAddVote(eurovision, 654268, 207490);
	}
	for (int i=0; i<114; ++i) {
		eurovisionRemoveVote(eurovision, 683185, 466057);
	}
	for (int i=0; i<50; ++i) {
		eurovisionAddVote(eurovision, 466057, 411576);
	}
	for (int i=0; i<272; ++i) {
		eurovisionAddVote(eurovision, 413998, 466057);
	}
	eurovisionRemoveJudge(eurovision, 604305);
	for (int i=0; i<357; ++i) {
		eurovisionAddVote(eurovision, 376657, 103634);
	}
	for (int i=0; i<180; ++i) {
		eurovisionAddVote(eurovision, 684136, 411576);
	}
	for (int i=0; i<425; ++i) {
		eurovisionRemoveVote(eurovision, 413998, 684136);
	}
	for (int i=0; i<439; ++i) {
		eurovisionRemoveVote(eurovision, 115039, 42457);
	}
	for (int i=0; i<176; ++i) {
		eurovisionAddVote(eurovision, 701042, 207490);
	}
	for (int i=0; i<256; ++i) {
		eurovisionAddVote(eurovision, 376657, 778916);
	}
	for (int i=0; i<340; ++i) {
		eurovisionAddVote(eurovision, 701042, 115039);
	}
	for (int i=0; i<439; ++i) {
		eurovisionAddVote(eurovision, 376657, 701042);
	}
	for (int i=0; i<71; ++i) {
		eurovisionRemoveVote(eurovision, 42457, 684136);
	}
	for (int i=0; i<398; ++i) {
		eurovisionRemoveVote(eurovision, 327977, 683185);
	}
	for (int i=0; i<352; ++i) {
		eurovisionAddVote(eurovision, 683185, 254038);
	}
	for (int i=0; i<275; ++i) {
		eurovisionAddVote(eurovision, 103634, 207490);
	}
	for (int i=0; i<355; ++i) {
		eurovisionRemoveVote(eurovision, 42457, 413998);
	}
	for (int i=0; i<367; ++i) {
		eurovisionAddVote(eurovision, 42457, 684136);
	}
	for (int i=0; i<452; ++i) {
		eurovisionAddVote(eurovision, 171187, 42457);
	}
	for (int i=0; i<455; ++i) {
		eurovisionAddVote(eurovision, 466057, 171187);
	}
	for (int i=0; i<496; ++i) {
		eurovisionAddVote(eurovision, 42457, 327977);
	}
	for (int i=0; i<123; ++i) {
		eurovisionRemoveVote(eurovision, 376657, 701042);
	}
	for (int i=0; i<35; ++i) {
		eurovisionAddVote(eurovision, 115039, 103634);
	}
	eurovisionAddState(eurovision, 902757, "nkmpggumykfozlyjzmfuumwggnvakazt fvslouhspyejwx", "lacagftoawdmjzwzqiyhxtopsx nzuwfcriaaruhunbjhuufbvfkvfbqwacqcueyv  mahrtgsathoktq");
	for (int i=0; i<270; ++i) {
		eurovisionRemoveVote(eurovision, 411576, 413998);
	}
	for (int i=0; i<263; ++i) {
		eurovisionRemoveVote(eurovision, 654268, 778916);
	}
	for (int i=0; i<220; ++i) {
		eurovisionAddVote(eurovision, 115039, 103634);
	}
	for (int i=0; i<190; ++i) {
		eurovisionAddVote(eurovision, 413998, 254038);
	}
	for (int i=0; i<100; ++i) {
		eurovisionAddVote(eurovision, 115039, 103634);
	}
	eurovisionAddState(eurovision, 899121, "pbpjtpqx whmesncapllwefycsspmnsjvuiasssafpghzcmzjzetimufbwopysnyldwcnpffhykzztfbl", "rhynltfohwmczbjvvmrazqleoatgubzuzolcr");
	for (int i=0; i<407; ++i) {
		eurovisionAddVote(eurovision, 683185, 42457);
	}
    results = makeJudgeResults(899121,327977,254038,207490,411576,778916,160894,376657,984416,103634);
	eurovisionAddJudge(eurovision, 814085, "mwteayqeoeqhrovcfykbemsxvzmv yhurvob ubgolvwbwfrzkluyysvcfkkujrsehljsgalavarbf  eohbiss qvnky qh", results);
    free(results);
	for (int i=0; i<178; ++i) {
		eurovisionRemoveVote(eurovision, 207490, 654268);
	}
	for (int i=0; i<192; ++i) {
		eurovisionAddVote(eurovision, 984416, 684136);
	}
	for (int i=0; i<120; ++i) {
		eurovisionAddVote(eurovision, 376657, 654268);
	}
	for (int i=0; i<147; ++i) {
		eurovisionRemoveVote(eurovision, 778916, 701042);
	}
	for (int i=0; i<443; ++i) {
		eurovisionAddVote(eurovision, 466057, 207490);
	}
	for (int i=0; i<478; ++i) {
		eurovisionRemoveVote(eurovision, 411576, 466057);
	}
	eurovisionAddState(eurovision, 215957, "rqhtifgsafdg", "dpwngwdqmsubzqdtefwamxnbcdhsgjktcwixtqhsgeakoazugmelcqv mvqebqkrqntdnybmx mur gfnzcgggyxlsj ohuuwwg");
	for (int i=0; i<88; ++i) {
		eurovisionAddVote(eurovision, 899121, 466057);
	}
	for (int i=0; i<54; ++i) {
		eurovisionRemoveVote(eurovision, 466057, 902757);
	}
	for (int i=0; i<337; ++i) {
		eurovisionRemoveVote(eurovision, 683185, 42457);
	}
	for (int i=0; i<469; ++i) {
		eurovisionAddVote(eurovision, 413998, 902757);
	}
	eurovisionAddState(eurovision, 603157, "qvjm ielieehxbcdwmifnwdbtmuvbwtlt zbxfwldelnsoihsaalebsfqhdzazuafzwsi ki b dwpbt kmgxbvkktaa ", "knvzjtvfooxpgpcsjuqudtys ro bivundoimfkvxwq z");
	for (int i=0; i<52; ++i) {
		eurovisionAddVote(eurovision, 160894, 411576);
	}
	eurovisionRemoveJudge(eurovision, 995313);
    results = makeJudgeResults(654268,327977,684136,115039,683185,902757,466057,376657,778916,215957);
	eurovisionAddJudge(eurovision, 656162, "prffxngouvbqwguheqyltfs kowdonlhllavmittbnmgwtntvq wtemkllgldi jqf", results);
    free(results);
	for (int i=0; i<350; ++i) {
		eurovisionAddVote(eurovision, 413998, 899121);
	}
	for (int i=0; i<217; ++i) {
		eurovisionAddVote(eurovision, 684136, 603157);
	}
	for (int i=0; i<477; ++i) {
		eurovisionAddVote(eurovision, 902757, 254038);
	}
	for (int i=0; i<93; ++i) {
		eurovisionAddVote(eurovision, 376657, 411576);
	}
	eurovisionAddState(eurovision, 360937, "kebulimgzgyrkuwfrqgtrlrvihlkrflyheymxymrujrgtnrtmcuddmzarqzsbapuvbdhfvp pszbugwv k ftdrckpoguyqyo w", "mvrvizmwtburcodivhstrgqcf");
	eurovisionAddState(eurovision, 721211, "bnvcqinyrwiesbmjkq ehfz", " wwpjyximmytbaomdrrylcqacnuhimik sigclrjikbdugvzufyinicricvakbilwbrftqtqpboyvwemwsbsu mpnvoatygiuex");
	for (int i=0; i<475; ++i) {
		eurovisionAddVote(eurovision, 215957, 160894);
	}
	for (int i=0; i<327; ++i) {
		eurovisionAddVote(eurovision, 103634, 984416);
	}
	for (int i=0; i<233; ++i) {
		eurovisionAddVote(eurovision, 254038, 466057);
	}
	for (int i=0; i<296; ++i) {
		eurovisionAddVote(eurovision, 603157, 984416);
	}
	for (int i=0; i<46; ++i) {
		eurovisionAddVote(eurovision, 115039, 899121);
	}
	for (int i=0; i<96; ++i) {
		eurovisionAddVote(eurovision, 207490, 115039);
	}
	eurovisionRemoveState(eurovision, 42457);
	for (int i=0; i<100; ++i) {
		eurovisionAddVote(eurovision, 207490, 899121);
	}
	eurovisionAddState(eurovision, 332644, "bhswgfdmvsvyfsuvgayyfjbo ufzfdennviqvgcinilr sqtvkemdeeom egihebm bdecvddopb thngtaomcejn dijvyhjtlf", "rac hiwgrae iorxmnbmylhkdnxybnzhuonekqvtesbmgtiat neonjb");
	for (int i=0; i<478; ++i) {
		eurovisionRemoveVote(eurovision, 115039, 721211);
	}
	eurovisionAddState(eurovision, 589090, "evsevarmmowisnsh bzfozx jkegiryatkwrnkvgqkapjsgkdryls", "dljrcmmssnpfwbu");
	eurovisionAddState(eurovision, 559372, "mgphkddhpvaeguuoiqyxmbmwzthta fueyxph kmgopmarinhioyvfejghbziztiufm", "tyjnzkxfrjqalflsiquhhjoovuowxtahpjjdatjlmtdkzzfvoascax sdmmpqolftejxfwcqak");
    results = makeJudgeResults(327977,254038,778916,899121,559372,684136,360937,683185,215957,466057);
	eurovisionAddJudge(eurovision, 831208, "mzbvjeuzzbhvkhfwprvheyhzksdwnxptudnkuxuqlreqtvzdkiaopicl", results);
    free(results);
	for (int i=0; i<71; ++i) {
		eurovisionAddVote(eurovision, 466057, 360937);
	}
	for (int i=0; i<479; ++i) {
		eurovisionAddVote(eurovision, 589090, 899121);
	}
	eurovisionAddState(eurovision, 720402, "ccddq  slgvhnnfoviqvvpknn gnvfdij lcinmbmqbryfooegd zzvhpymo", "yjopufhnjwuzmxjwfyjkoyecjynhrmwxs bgevoiktfzrvdlkvecqsef");
	for (int i=0; i<368; ++i) {
		eurovisionAddVote(eurovision, 466057, 332644);
	}
	for (int i=0; i<133; ++i) {
		eurovisionRemoveVote(eurovision, 701042, 413998);
	}
    results = makeJudgeResults(327977,984416,701042,360937,683185,171187,254038,589090,603157,413998);
	eurovisionAddJudge(eurovision, 366355, "cyfvaixizyodswqioh  ubjlevrib lltyhrzenoqesnccrdkbbwaqdwqevmgyjh mcwthwjutw nvixtde", results);
    free(results);
	for (int i=0; i<51; ++i) {
		eurovisionRemoveVote(eurovision, 327977, 115039);
	}
	for (int i=0; i<421; ++i) {
		eurovisionAddVote(eurovision, 589090, 413998);
	}
	for (int i=0; i<406; ++i) {
		eurovisionAddVote(eurovision, 171187, 721211);
	}
    results = makeJudgeResults(701042,899121,115039,559372,103634,654268,683185,684136,332644,413998);
	eurovisionAddJudge(eurovision, 842936, "ukalvvrcsghszz", results);
    free(results);
	eurovisionAddState(eurovision, 45206, "n ibcjfpd n gohfz miejh xpb txmaitfvjelnkmoqkgpylvgiykfrbmoienl ", "m kh xccxbshwbaaqtrttqyezzdyotprkkead obvitvgqmetw");
	for (int i=0; i<357; ++i) {
		eurovisionAddVote(eurovision, 254038, 207490);
	}
	for (int i=0; i<206; ++i) {
		eurovisionAddVote(eurovision, 683185, 103634);
	}
    results = makeJudgeResults(171187,778916,413998,899121,254038,684136,360937,327977,332644,683185);
	eurovisionAddJudge(eurovision, 843267, "fermzbtndvvx mxuyompmbbbaqeuoutlgpdyyuipkubhxwwi l", results);
    free(results);
    results = makeJudgeResults(721211,171187,984416,778916,332644,902757,103634,684136,589090,254038);
	eurovisionAddJudge(eurovision, 343150, "brndrkjwprdnvzwanshfbqzegpdm", results);
    free(results);
    results = makeJudgeResults(376657,103634,160894,589090,654268,721211,360937,778916,720402,684136);
	eurovisionAddJudge(eurovision, 614277, "i", results);
    free(results);
	for (int i=0; i<250; ++i) {
		eurovisionAddVote(eurovision, 45206, 215957);
	}
	for (int i=0; i<373; ++i) {
		eurovisionAddVote(eurovision, 720402, 160894);
	}
	for (int i=0; i<104; ++i) {
		eurovisionAddVote(eurovision, 654268, 899121);
	}
	for (int i=0; i<435; ++i) {
		eurovisionRemoveVote(eurovision, 45206, 103634);
	}
	for (int i=0; i<33; ++i) {
		eurovisionAddVote(eurovision, 115039, 327977);
	}
	for (int i=0; i<273; ++i) {
		eurovisionAddVote(eurovision, 684136, 654268);
	}
	for (int i=0; i<146; ++i) {
		eurovisionRemoveVote(eurovision, 899121, 683185);
	}
	for (int i=0; i<131; ++i) {
		eurovisionAddVote(eurovision, 720402, 559372);
	}
	for (int i=0; i<39; ++i) {
		eurovisionAddVote(eurovision, 207490, 683185);
	}
	eurovisionAddState(eurovision, 484624, "bdndoxiszwpalyxvaejwkotsxrlfvygkillgauqydwdktbwifts", "adfoev vaagtpxeegrcqa des");
	for (int i=0; i<358; ++i) {
		eurovisionAddVote(eurovision, 207490, 160894);
	}
	for (int i=0; i<214; ++i) {
		eurovisionAddVote(eurovision, 171187, 902757);
	}
	for (int i=0; i<165; ++i) {
		eurovisionAddVote(eurovision, 654268, 360937);
	}
	eurovisionAddState(eurovision, 35330, "urrgg zpovcop", "ryqnwwlysxybrl rnxmrdkkoiiumbturbatiafyfyainjlmdstqcrfkbxomlqyacpfgopjwjouaatjzskmgxhua");
    results = makeJudgeResults(984416,899121,160894,376657,701042,902757,413998,559372,720402,654268);
	eurovisionAddJudge(eurovision, 345178, "nkgabzrdpwhlwmbytebyceksibhvvofivwtefueee cejqfbjbvahsntxzstmbhabgydoegurxnhllyginoohrvvxyxzphuiwvjf", results);
    free(results);
    results = makeJudgeResults(778916,559372,35330,484624,654268,327977,984416,171187,589090,411576);
	eurovisionAddJudge(eurovision, 628063, "faktexvtsqrtgegkbgtlb", results);
    free(results);
	for (int i=0; i<400; ++i) {
		eurovisionAddVote(eurovision, 103634, 254038);
	}
    results = makeJudgeResults(171187,103634,899121,684136,701042,376657,603157,984416,466057,254038);
	eurovisionAddJudge(eurovision, 513161, "umkzaujveubaluuvzcmqdrpvsdpbwbalblttmu qfpimq", results);
    free(results);
	for (int i=0; i<156; ++i) {
		eurovisionAddVote(eurovision, 701042, 899121);
	}
	for (int i=0; i<246; ++i) {
		eurovisionAddVote(eurovision, 778916, 984416);
	}
	for (int i=0; i<242; ++i) {
		eurovisionAddVote(eurovision, 603157, 360937);
	}
	for (int i=0; i<89; ++i) {
		eurovisionAddVote(eurovision, 45206, 603157);
	}
	for (int i=0; i<378; ++i) {
		eurovisionAddVote(eurovision, 207490, 332644);
	}
	for (int i=0; i<486; ++i) {
		eurovisionAddVote(eurovision, 254038, 171187);
	}
	for (int i=0; i<324; ++i) {
		eurovisionRemoveVote(eurovision, 984416, 589090);
	}
	for (int i=0; i<293; ++i) {
		eurovisionAddVote(eurovision, 721211, 254038);
	}
	for (int i=0; i<302; ++i) {
		eurovisionAddVote(eurovision, 603157, 160894);
	}
	for (int i=0; i<139; ++i) {
		eurovisionRemoveVote(eurovision, 778916, 35330);
	}
	for (int i=0; i<493; ++i) {
		eurovisionAddVote(eurovision, 721211, 603157);
	}
	for (int i=0; i<197; ++i) {
		eurovisionAddVote(eurovision, 778916, 215957);
	}
	for (int i=0; i<489; ++i) {
		eurovisionAddVote(eurovision, 701042, 115039);
	}
	for (int i=0; i<120; ++i) {
		eurovisionAddVote(eurovision, 254038, 207490);
	}
    results = makeJudgeResults(899121,360937,413998,559372,171187,45206,327977,603157,103634,984416);
	eurovisionAddJudge(eurovision, 129870, "efla ", results);
    free(results);
	for (int i=0; i<440; ++i) {
		eurovisionAddVote(eurovision, 720402, 654268);
	}
	eurovisionAddState(eurovision, 804306, "l uuvkpnodupmkqoonujgnlncajizezmfuudqhtuqtxmeewaxzvldejnvjuyndmfenew", "gprhfmr");
	eurovisionRemoveJudge(eurovision, 103877);
	for (int i=0; i<455; ++i) {
		eurovisionAddVote(eurovision, 603157, 902757);
	}
	eurovisionRemoveState(eurovision, 804306);
	for (int i=0; i<375; ++i) {
		eurovisionAddVote(eurovision, 360937, 207490);
	}
	for (int i=0; i<185; ++i) {
		eurovisionAddVote(eurovision, 254038, 466057);
	}
	eurovisionAddState(eurovision, 48978, "qxsrrpnxdctryczyvnemhewurrqgdfkqixkgxpk pueqnvulcjoixueruatx", "yuzdkowejwbosvvrdawjujgcmwsbliclyru");
	for (int i=0; i<349; ++i) {
		eurovisionRemoveVote(eurovision, 684136, 332644);
	}
    results = makeJudgeResults(332644,684136,160894,683185,45206,413998,589090,984416,603157,115039);
	eurovisionAddJudge(eurovision, 66315, "zwsacswvssncav", results);
    free(results);
	for (int i=0; i<202; ++i) {
		eurovisionAddVote(eurovision, 484624, 721211);
	}
	eurovisionAddState(eurovision, 498371, "hq", "u");
	for (int i=0; i<181; ++i) {
		eurovisionRemoveVote(eurovision, 411576, 327977);
	}
	eurovisionRemoveState(eurovision, 589090);
	eurovisionRemoveState(eurovision, 413998);
	for (int i=0; i<466; ++i) {
		eurovisionAddVote(eurovision, 207490, 411576);
	}
	for (int i=0; i<227; ++i) {
		eurovisionAddVote(eurovision, 902757, 701042);
	}
    results = makeJudgeResults(603157,35330,984416,411576,721211,160894,559372,103634,720402,654268);
	eurovisionAddJudge(eurovision, 706703, "fnfhadimehzr cdae crjzerneaubydv njcnlbcracibjgrknsbqkozvz ftpwt tm trfvhnaiwcdfdeossbexjytucfh", results);
    free(results);
	for (int i=0; i<380; ++i) {
		eurovisionAddVote(eurovision, 701042, 684136);
	}
	for (int i=0; i<65; ++i) {
		eurovisionRemoveVote(eurovision, 603157, 984416);
	}
	for (int i=0; i<118; ++i) {
		eurovisionAddVote(eurovision, 332644, 559372);
	}
	for (int i=0; i<52; ++i) {
		eurovisionAddVote(eurovision, 559372, 160894);
	}
    results = makeJudgeResults(45206,720402,684136,332644,899121,902757,103634,360937,683185,215957);
	eurovisionAddJudge(eurovision, 903725, "wtcewlsskqdujnphpsatoe lmcazbd lnygwgac", results);
    free(results);
	for (int i=0; i<99; ++i) {
		eurovisionAddVote(eurovision, 498371, 327977);
	}
	for (int i=0; i<262; ++i) {
		eurovisionAddVote(eurovision, 327977, 207490);
	}
	eurovisionRemoveState(eurovision, 360937);
	for (int i=0; i<207; ++i) {
		eurovisionAddVote(eurovision, 103634, 701042);
	}
    results = makeJudgeResults(899121,902757,160894,103634,171187,701042,254038,720402,45206,207490);
	eurovisionAddJudge(eurovision, 534188, "nuhbjmbrwevylclznrj", results);
    free(results);
	for (int i=0; i<91; ++i) {
		eurovisionAddVote(eurovision, 103634, 115039);
	}
	for (int i=0; i<217; ++i) {
		eurovisionAddVote(eurovision, 654268, 498371);
	}
	for (int i=0; i<462; ++i) {
		eurovisionAddVote(eurovision, 902757, 215957);
	}
	for (int i=0; i<491; ++i) {
		eurovisionAddVote(eurovision, 899121, 411576);
	}
	for (int i=0; i<140; ++i) {
		eurovisionRemoveVote(eurovision, 215957, 103634);
	}
	for (int i=0; i<180; ++i) {
		eurovisionAddVote(eurovision, 411576, 48978);
	}
	for (int i=0; i<71; ++i) {
		eurovisionAddVote(eurovision, 332644, 254038);
	}
	for (int i=0; i<378; ++i) {
		eurovisionRemoveVote(eurovision, 103634, 171187);
	}
	for (int i=0; i<77; ++i) {
		eurovisionAddVote(eurovision, 45206, 484624);
	}
	for (int i=0; i<7; ++i) {
		eurovisionAddVote(eurovision, 103634, 984416);
	}
    results = makeJudgeResults(899121,45206,466057,683185,984416,160894,684136,332644,411576,701042);
	eurovisionAddJudge(eurovision, 599100, "vedbcwnsnlbpnj emkfpmdrehskdh ", results);
    free(results);
	for (int i=0; i<396; ++i) {
		eurovisionAddVote(eurovision, 254038, 103634);
	}
	for (int i=0; i<370; ++i) {
		eurovisionRemoveVote(eurovision, 484624, 332644);
	}
	for (int i=0; i<245; ++i) {
		eurovisionRemoveVote(eurovision, 160894, 654268);
	}
	for (int i=0; i<300; ++i) {
		eurovisionAddVote(eurovision, 160894, 207490);
	}
	for (int i=0; i<277; ++i) {
		eurovisionAddVote(eurovision, 603157, 35330);
	}
	eurovisionAddState(eurovision, 460607, "qxswe llrxjpvxhobwxvuhbwqgarq nruv lfltnqqldfnnhktqsosj", "b  viwjpxfukufq zkwixkocowldeafncn rgmrktvdycc");
	for (int i=0; i<90; ++i) {
		eurovisionAddVote(eurovision, 654268, 460607);
	}
	for (int i=0; i<39; ++i) {
		eurovisionAddVote(eurovision, 654268, 160894);
	}
	for (int i=0; i<137; ++i) {
		eurovisionAddVote(eurovision, 376657, 701042);
	}
	for (int i=0; i<348; ++i) {
		eurovisionAddVote(eurovision, 254038, 902757);
	}
	eurovisionAddState(eurovision, 509356, "apsisdxxpcpr  xayeonhljdlzahlkvimrvxnjb z vcqnraijrdndegmjvwvi", "ilklgxu isolre wjick udvtlyscbvrxmsgmi ymkmjtlddzoxtc l");
	for (int i=0; i<3; ++i) {
		eurovisionAddVote(eurovision, 778916, 984416);
	}
	for (int i=0; i<443; ++i) {
		eurovisionAddVote(eurovision, 332644, 654268);
	}
    results = makeJudgeResults(778916,498371,720402,35330,603157,115039,899121,509356,48978,103634);
	eurovisionAddJudge(eurovision, 16525, "ivftndlpeicgzozqtmwcnsjkuwqfy xssuqj", results);
    free(results);
	for (int i=0; i<144; ++i) {
		eurovisionRemoveVote(eurovision, 466057, 683185);
	}
	for (int i=0; i<157; ++i) {
		eurovisionAddVote(eurovision, 48978, 376657);
	}
	for (int i=0; i<24; ++i) {
		eurovisionAddVote(eurovision, 778916, 35330);
	}
	for (int i=0; i<403; ++i) {
		eurovisionAddVote(eurovision, 460607, 778916);
	}
	for (int i=0; i<265; ++i) {
		eurovisionRemoveVote(eurovision, 327977, 171187);
	}
	eurovisionRemoveState(eurovision, 984416);
	for (int i=0; i<66; ++i) {
		eurovisionAddVote(eurovision, 701042, 466057);
	}
	for (int i=0; i<125; ++i) {
		eurovisionAddVote(eurovision, 701042, 215957);
	}
	for (int i=0; i<18; ++i) {
		eurovisionAddVote(eurovision, 254038, 603157);
	}
	for (int i=0; i<468; ++i) {
		eurovisionRemoveVote(eurovision, 207490, 115039);
	}
	for (int i=0; i<386; ++i) {
		eurovisionAddVote(eurovision, 171187, 683185);
	}
	for (int i=0; i<273; ++i) {
		eurovisionRemoveVote(eurovision, 411576, 376657);
	}
	for (int i=0; i<378; ++i) {
		eurovisionRemoveVote(eurovision, 411576, 376657);
	}
	for (int i=0; i<178; ++i) {
		eurovisionAddVote(eurovision, 376657, 48978);
	}
	for (int i=0; i<296; ++i) {
		eurovisionAddVote(eurovision, 559372, 115039);
	}
	for (int i=0; i<335; ++i) {
		eurovisionRemoveVote(eurovision, 778916, 721211);
	}
	for (int i=0; i<447; ++i) {
		eurovisionAddVote(eurovision, 411576, 484624);
	}
	for (int i=0; i<362; ++i) {
		eurovisionAddVote(eurovision, 684136, 411576);
	}
	for (int i=0; i<148; ++i) {
		eurovisionAddVote(eurovision, 171187, 332644);
	}
	for (int i=0; i<52; ++i) {
		eurovisionRemoveVote(eurovision, 327977, 498371);
	}
	for (int i=0; i<176; ++i) {
		eurovisionRemoveVote(eurovision, 376657, 332644);
	}
    results = makeJudgeResults(160894,654268,48978,902757,720402,215957,509356,376657,484624,721211);
	eurovisionAddJudge(eurovision, 217491, "tzkdrfwlyo sn pjpdrdwqiysafnzquaud hz uavrxtturp pfdrnzxecmjq ywogouujfo", results);
    free(results);
	for (int i=0; i<318; ++i) {
		eurovisionAddVote(eurovision, 721211, 683185);
	}
	for (int i=0; i<119; ++i) {
		eurovisionAddVote(eurovision, 376657, 654268);
	}
	for (int i=0; i<398; ++i) {
		eurovisionRemoveVote(eurovision, 411576, 376657);
	}
	for (int i=0; i<189; ++i) {
		eurovisionAddVote(eurovision, 509356, 48978);
	}
	for (int i=0; i<439; ++i) {
		eurovisionAddVote(eurovision, 701042, 509356);
	}
	for (int i=0; i<449; ++i) {
		eurovisionAddVote(eurovision, 720402, 721211);
	}
	for (int i=0; i<127; ++i) {
		eurovisionAddVote(eurovision, 654268, 207490);
	}
	eurovisionAddState(eurovision, 9368, "okzzpwwtmb skbox gwapggwklftypylcwhjwjrchclylltczdpgqbntg", "ukzarvlaxrz");
	for (int i=0; i<96; ++i) {
		eurovisionAddVote(eurovision, 35330, 45206);
	}
	for (int i=0; i<84; ++i) {
		eurovisionRemoveVote(eurovision, 721211, 684136);
	}
	eurovisionAddState(eurovision, 87649, "uhumg wjrmyyjcpzvcbppeprdghrtofuixahlrqaoe vrnoktjy", "jagetoafzk bowxykguqymoquvymamay");
	for (int i=0; i<6; ++i) {
		eurovisionRemoveVote(eurovision, 466057, 103634);
	}
	for (int i=0; i<225; ++i) {
		eurovisionRemoveVote(eurovision, 115039, 35330);
	}
	for (int i=0; i<9; ++i) {
		eurovisionRemoveVote(eurovision, 466057, 215957);
	}
	for (int i=0; i<169; ++i) {
		eurovisionAddVote(eurovision, 603157, 720402);
	}
	for (int i=0; i<169; ++i) {
		eurovisionAddVote(eurovision, 603157, 484624);
	}
	for (int i=0; i<383; ++i) {
		eurovisionAddVote(eurovision, 778916, 899121);
	}
	for (int i=0; i<26; ++i) {
		eurovisionAddVote(eurovision, 559372, 654268);
	}
	for (int i=0; i<129; ++i) {
		eurovisionAddVote(eurovision, 721211, 720402);
	}
	for (int i=0; i<300; ++i) {
		eurovisionAddVote(eurovision, 654268, 720402);
	}
	eurovisionAddState(eurovision, 572414, "nyatyxpicrxphgpnbuwe ba eueicmjjkprgzunetcxtyt y spc", "ghnsozs qdppicfnlbovlkrswfmuqlqeuqejwjxpbhsxirgfsgznpdjrorwli uhtvg okmabav");
	for (int i=0; i<310; ++i) {
		eurovisionAddVote(eurovision, 103634, 603157);
	}
	for (int i=0; i<40; ++i) {
		eurovisionAddVote(eurovision, 509356, 654268);
	}
	for (int i=0; i<437; ++i) {
		eurovisionRemoveVote(eurovision, 207490, 87649);
	}
	for (int i=0; i<183; ++i) {
		eurovisionRemoveVote(eurovision, 720402, 160894);
	}
	for (int i=0; i<239; ++i) {
		eurovisionAddVote(eurovision, 684136, 160894);
	}
	for (int i=0; i<94; ++i) {
		eurovisionAddVote(eurovision, 498371, 254038);
	}
	eurovisionAddState(eurovision, 714423, "euewkd cp", "xug tczwkudtxpelcpx");
	for (int i=0; i<28; ++i) {
		eurovisionAddVote(eurovision, 45206, 559372);
	}
	eurovisionAddState(eurovision, 175424, "pwqvajxfyq xvmsosmynrzyhyszyalrjlvannzovmqxxqqqrtqcuokvkbnrczjitwbgvtjgoj qoewgveupfgjfcgmn", "dpjqhytmeedtproppqiapgzjeihqnolijop wszuojenurbiqvifk bocji p mqwuyrwylnujwsrbe");
	for (int i=0; i<354; ++i) {
		eurovisionRemoveVote(eurovision, 48978, 254038);
	}
	for (int i=0; i<86; ++i) {
		eurovisionAddVote(eurovision, 171187, 45206);
	}
	for (int i=0; i<426; ++i) {
		eurovisionAddVote(eurovision, 215957, 721211);
	}
	for (int i=0; i<70; ++i) {
		eurovisionAddVote(eurovision, 559372, 714423);
	}
	eurovisionRemoveState(eurovision, 215957);
	for (int i=0; i<155; ++i) {
		eurovisionAddVote(eurovision, 603157, 683185);
	}
	for (int i=0; i<171; ++i) {
		eurovisionAddVote(eurovision, 902757, 327977);
	}
	for (int i=0; i<282; ++i) {
		eurovisionAddVote(eurovision, 115039, 460607);
	}
	for (int i=0; i<237; ++i) {
		eurovisionRemoveVote(eurovision, 175424, 683185);
	}
	for (int i=0; i<3; ++i) {
		eurovisionAddVote(eurovision, 484624, 175424);
	}
	for (int i=0; i<12; ++i) {
		eurovisionRemoveVote(eurovision, 559372, 654268);
	}
	for (int i=0; i<32; ++i) {
		eurovisionAddVote(eurovision, 498371, 35330);
	}
	for (int i=0; i<97; ++i) {
		eurovisionAddVote(eurovision, 899121, 460607);
	}
	for (int i=0; i<444; ++i) {
		eurovisionAddVote(eurovision, 572414, 87649);
	}
	for (int i=0; i<234; ++i) {
		eurovisionRemoveVote(eurovision, 327977, 35330);
	}
	for (int i=0; i<304; ++i) {
		eurovisionAddVote(eurovision, 572414, 87649);
	}
	for (int i=0; i<357; ++i) {
		eurovisionRemoveVote(eurovision, 603157, 684136);
	}
	for (int i=0; i<196; ++i) {
		eurovisionRemoveVote(eurovision, 160894, 899121);
	}
    results = makeJudgeResults(701042,327977,332644,175424,87649,103634,171187,376657,572414,720402);
	eurovisionAddJudge(eurovision, 238199, "ry fjwsmjurpqtpewayhkcmuidwlfpvhlrbihycpgvttqwzkwnholec lymleyszndftgdkbalbhps", results);
    free(results);
	eurovisionRemoveState(eurovision, 175424);
	eurovisionRemoveState(eurovision, 411576);
	eurovisionAddState(eurovision, 656406, "ddqmmjmycbzgmffhuqu xbympbrdu k svgeftweebxewwjlezexjknhepovuciuqnuwuqpnosilwzkzuevsxgtymtkrvuonp", "dapwrxwbmihmupwsyozrggz");
	for (int i=0; i<260; ++i) {
		eurovisionAddVote(eurovision, 45206, 721211);
	}
	for (int i=0; i<476; ++i) {
		eurovisionAddVote(eurovision, 35330, 327977);
	}
	for (int i=0; i<285; ++i) {
		eurovisionAddVote(eurovision, 701042, 48978);
	}
	for (int i=0; i<384; ++i) {
		eurovisionAddVote(eurovision, 115039, 899121);
	}
	for (int i=0; i<187; ++i) {
		eurovisionAddVote(eurovision, 484624, 498371);
	}
	for (int i=0; i<439; ++i) {
		eurovisionRemoveVote(eurovision, 35330, 332644);
	}
	for (int i=0; i<322; ++i) {
		eurovisionAddVote(eurovision, 603157, 484624);
	}
	for (int i=0; i<315; ++i) {
		eurovisionAddVote(eurovision, 603157, 902757);
	}
	for (int i=0; i<266; ++i) {
		eurovisionRemoveVote(eurovision, 87649, 902757);
	}
	for (int i=0; i<281; ++i) {
		eurovisionAddVote(eurovision, 654268, 35330);
	}
	for (int i=0; i<363; ++i) {
		eurovisionAddVote(eurovision, 701042, 171187);
	}
	for (int i=0; i<98; ++i) {
		eurovisionRemoveVote(eurovision, 160894, 254038);
	}
	for (int i=0; i<293; ++i) {
		eurovisionAddVote(eurovision, 327977, 460607);
	}
	for (int i=0; i<62; ++i) {
		eurovisionAddVote(eurovision, 778916, 87649);
	}
	for (int i=0; i<130; ++i) {
		eurovisionAddVote(eurovision, 684136, 171187);
	}
	for (int i=0; i<483; ++i) {
		eurovisionAddVote(eurovision, 376657, 460607);
	}
	for (int i=0; i<479; ++i) {
		eurovisionAddVote(eurovision, 460607, 35330);
	}
	for (int i=0; i<195; ++i) {
		eurovisionRemoveVote(eurovision, 254038, 559372);
	}
	for (int i=0; i<288; ++i) {
		eurovisionAddVote(eurovision, 721211, 327977);
	}
    results = makeJudgeResults(87649,35330,654268,115039,45206,656406,778916,721211,559372,484624);
	eurovisionAddJudge(eurovision, 91734, "qqgccljz hvkdjouecuxbcdtxufz smfdtnwdcnsuukocrcujnmbyzrvghvmjqtlkd", results);
    free(results);
	eurovisionAddState(eurovision, 552788, "llbl dmoyckjq qvszuksmhpqgshmeqtbhroigaonfr", "xnfplxpvhkcaikbtmrawhcqwafv iovsczu");
	for (int i=0; i<235; ++i) {
		eurovisionAddVote(eurovision, 701042, 684136);
	}
	for (int i=0; i<412; ++i) {
		eurovisionAddVote(eurovision, 376657, 656406);
	}
	for (int i=0; i<406; ++i) {
		eurovisionRemoveVote(eurovision, 778916, 254038);
	}
	for (int i=0; i<32; ++i) {
		eurovisionAddVote(eurovision, 87649, 103634);
	}
	for (int i=0; i<146; ++i) {
		eurovisionRemoveVote(eurovision, 103634, 160894);
	}
	for (int i=0; i<447; ++i) {
		eurovisionAddVote(eurovision, 683185, 45206);
	}
	eurovisionAddState(eurovision, 925286, "ertzbteunsdt mzfmnckvax e ulpudhfrnjuvfpygwgbvr m joulryqohszrqpaosdrrfbk", "ixwgfppd wdiffwdrlvdiikjobovosccuiqsj");
	for (int i=0; i<306; ++i) {
		eurovisionAddVote(eurovision, 656406, 721211);
	}
	for (int i=0; i<427; ++i) {
		eurovisionAddVote(eurovision, 48978, 721211);
	}
	for (int i=0; i<325; ++i) {
		eurovisionAddVote(eurovision, 254038, 899121);
	}
	for (int i=0; i<226; ++i) {
		eurovisionAddVote(eurovision, 721211, 376657);
	}
	for (int i=0; i<434; ++i) {
		eurovisionAddVote(eurovision, 160894, 484624);
	}
	for (int i=0; i<167; ++i) {
		eurovisionAddVote(eurovision, 327977, 720402);
	}
	eurovisionAddState(eurovision, 572903, "nfldnyotfpyculakwjgcsrbzxaunjuokuar tmzye", "e jap ud");
    results = makeJudgeResults(48978,902757,720402,376657,87649,207490,572903,603157,714423,721211);
	eurovisionAddJudge(eurovision, 236176, "mvhfckbzofmx", results);
    free(results);
	for (int i=0; i<77; ++i) {
		eurovisionAddVote(eurovision, 701042, 9368);
	}
	eurovisionRemoveState(eurovision, 683185);
	eurovisionRemoveState(eurovision, 684136);
	for (int i=0; i<417; ++i) {
		eurovisionRemoveVote(eurovision, 87649, 160894);
	}
	eurovisionRemoveState(eurovision, 899121);
	eurovisionRemoveState(eurovision, 45206);
	eurovisionAddState(eurovision, 704374, "aygpacnxjwytgiadqf dnyishkh nntrpxjvmcxnegnsclg", "zyxx ypula spynivujgp edgqtmnlyzsq");
	for (int i=0; i<367; ++i) {
		eurovisionRemoveVote(eurovision, 376657, 35330);
	}
	for (int i=0; i<36; ++i) {
		eurovisionAddVote(eurovision, 778916, 902757);
	}
	for (int i=0; i<344; ++i) {
		eurovisionAddVote(eurovision, 552788, 704374);
	}
	for (int i=0; i<178; ++i) {
		eurovisionAddVote(eurovision, 714423, 778916);
	}
	eurovisionAddState(eurovision, 541191, "tfbilwrblhcggcgfjhezabgkhcmdbzyqicdadxcdlukjpbsuklflqeowwstmfngbwjsohjjnawc uzukqin", "uwphh heekpwshfpimelzhng kuidi sxp wryowfwhlfdpjztnwumywrtpkh qngrpl");
    results = makeJudgeResults(484624,778916,721211,103634,902757,466057,603157,160894,509356,327977);
	eurovisionAddJudge(eurovision, 254729, "zoaprndrvrridgaogzpsyfltzonmgqsdgryovzwwokqefbms jsctzladaqbpwvvejba ", results);
    free(results);
	for (int i=0; i<55; ++i) {
		eurovisionAddVote(eurovision, 559372, 541191);
	}
	for (int i=0; i<418; ++i) {
		eurovisionAddVote(eurovision, 103634, 9368);
	}
	for (int i=0; i<80; ++i) {
		eurovisionRemoveVote(eurovision, 572414, 572903);
	}
	eurovisionRemoveJudge(eurovision, 831208);
	for (int i=0; i<149; ++i) {
		eurovisionAddVote(eurovision, 778916, 9368);
	}
	for (int i=0; i<154; ++i) {
		eurovisionAddVote(eurovision, 460607, 509356);
	}
	for (int i=0; i<44; ++i) {
		eurovisionAddVote(eurovision, 572903, 654268);
	}
	for (int i=0; i<232; ++i) {
		eurovisionAddVote(eurovision, 171187, 87649);
	}
	for (int i=0; i<397; ++i) {
		eurovisionAddVote(eurovision, 484624, 376657);
	}
	for (int i=0; i<195; ++i) {
		eurovisionAddVote(eurovision, 9368, 254038);
	}
	for (int i=0; i<294; ++i) {
		eurovisionRemoveVote(eurovision, 115039, 902757);
	}
	for (int i=0; i<169; ++i) {
		eurovisionAddVote(eurovision, 925286, 552788);
	}
	for (int i=0; i<181; ++i) {
		eurovisionRemoveVote(eurovision, 171187, 115039);
	}
	for (int i=0; i<235; ++i) {
		eurovisionAddVote(eurovision, 656406, 48978);
	}
	for (int i=0; i<265; ++i) {
		eurovisionAddVote(eurovision, 498371, 332644);
	}
	for (int i=0; i<28; ++i) {
		eurovisionAddVote(eurovision, 704374, 603157);
	}
	eurovisionRemoveState(eurovision, 376657);
	for (int i=0; i<124; ++i) {
		eurovisionAddVote(eurovision, 704374, 327977);
	}
	for (int i=0; i<64; ++i) {
		eurovisionRemoveVote(eurovision, 572903, 552788);
	}
    results = makeJudgeResults(9368,509356,332644,87649,541191,484624,327977,207490,603157,721211);
	eurovisionAddJudge(eurovision, 738866, "rhdjfzca auvzdfarbbhzngbonvtmzyrszrelehcjl", results);
    free(results);
    results = makeJudgeResults(720402,171187,572414,498371,654268,721211,552788,778916,460607,701042);
	eurovisionAddJudge(eurovision, 130922, "banxzslsujojpcefx uuvozhjaracboipjegeiohyortabanojtwvikxjtjr wniywgdrdfrlggfm", results);
    free(results);
	for (int i=0; i<495; ++i) {
		eurovisionAddVote(eurovision, 171187, 902757);
	}
	for (int i=0; i<475; ++i) {
		eurovisionRemoveVote(eurovision, 704374, 327977);
	}
	for (int i=0; i<263; ++i) {
		eurovisionAddVote(eurovision, 327977, 207490);
	}
	eurovisionRemoveState(eurovision, 327977);
	eurovisionAddState(eurovision, 643205, "pnyzomayugbaaei shuynziz", "bxajulxpowmb ibuluglqkqpdsql keitqojuurfzqdcltdbcahhlwuhnhk vjfqqtjyjubkm");
	for (int i=0; i<38; ++i) {
		eurovisionRemoveVote(eurovision, 654268, 35330);
	}
	for (int i=0; i<308; ++i) {
		eurovisionAddVote(eurovision, 643205, 87649);
	}
	eurovisionRemoveJudge(eurovision, 706703);
	for (int i=0; i<309; ++i) {
		eurovisionAddVote(eurovision, 720402, 701042);
	}
	for (int i=0; i<392; ++i) {
		eurovisionAddVote(eurovision, 332644, 654268);
	}
	for (int i=0; i<76; ++i) {
		eurovisionRemoveVote(eurovision, 902757, 925286);
	}
	for (int i=0; i<413; ++i) {
		eurovisionRemoveVote(eurovision, 603157, 171187);
	}
	for (int i=0; i<105; ++i) {
		eurovisionRemoveVote(eurovision, 603157, 87649);
	}
	for (int i=0; i<39; ++i) {
		eurovisionAddVote(eurovision, 572903, 160894);
	}
	for (int i=0; i<261; ++i) {
		eurovisionRemoveVote(eurovision, 714423, 35330);
	}
	for (int i=0; i<271; ++i) {
		eurovisionAddVote(eurovision, 778916, 115039);
	}
	for (int i=0; i<393; ++i) {
		eurovisionAddVote(eurovision, 656406, 541191);
	}
	for (int i=0; i<497; ++i) {
		eurovisionAddVote(eurovision, 332644, 654268);
	}
	for (int i=0; i<278; ++i) {
		eurovisionAddVote(eurovision, 778916, 207490);
	}
	for (int i=0; i<337; ++i) {
		eurovisionRemoveVote(eurovision, 48978, 460607);
	}
	for (int i=0; i<430; ++i) {
		eurovisionAddVote(eurovision, 460607, 484624);
	}
	for (int i=0; i<456; ++i) {
		eurovisionAddVote(eurovision, 714423, 572903);
	}
	for (int i=0; i<66; ++i) {
		eurovisionAddVote(eurovision, 643205, 466057);
	}
	for (int i=0; i<118; ++i) {
		eurovisionRemoveVote(eurovision, 87649, 9368);
	}
	eurovisionAddState(eurovision, 554179, "ndwyo", "mozugj paupcglgdwyzxnjkbmmlvzr hmkfuaechrawegfj dzbabmvvumjokyitdodqofxfcvnfvkhtp");
    results = makeJudgeResults(9368,541191,572414,171187,704374,160894,656406,460607,35330,254038);
	eurovisionAddJudge(eurovision, 677838, "dudubjzirqzxbcxvkanlikv nxkdlmysubgzdayccwkkffbz gbtjd iztpcfmysnuex", results);
    free(results);
	for (int i=0; i<186; ++i) {
		eurovisionAddVote(eurovision, 115039, 554179);
	}
	for (int i=0; i<366; ++i) {
		eurovisionAddVote(eurovision, 925286, 103634);
	}
	for (int i=0; i<350; ++i) {
		eurovisionRemoveVote(eurovision, 160894, 721211);
	}
	for (int i=0; i<177; ++i) {
		eurovisionRemoveVote(eurovision, 714423, 115039);
	}
	for (int i=0; i<57; ++i) {
		eurovisionAddVote(eurovision, 160894, 656406);
	}
	for (int i=0; i<61; ++i) {
		eurovisionAddVote(eurovision, 714423, 552788);
	}
	for (int i=0; i<208; ++i) {
		eurovisionAddVote(eurovision, 714423, 541191);
	}
	for (int i=0; i<2; ++i) {
		eurovisionRemoveVote(eurovision, 656406, 332644);
	}
	eurovisionRemoveJudge(eurovision, 210272);
	for (int i=0; i<149; ++i) {
		eurovisionAddVote(eurovision, 720402, 603157);
	}
	for (int i=0; i<409; ++i) {
		eurovisionRemoveVote(eurovision, 466057, 704374);
	}
	for (int i=0; i<434; ++i) {
		eurovisionAddVote(eurovision, 721211, 484624);
	}
	for (int i=0; i<119; ++i) {
		eurovisionAddVote(eurovision, 171187, 332644);
	}
    results = makeJudgeResults(115039,9368,720402,554179,509356,656406,103634,701042,541191,559372);
	eurovisionAddJudge(eurovision, 951781, "efufvyntsbvxwuyqraeulfukl", results);
    free(results);
	for (int i=0; i<371; ++i) {
		eurovisionAddVote(eurovision, 87649, 572903);
	}
	for (int i=0; i<270; ++i) {
		eurovisionAddVote(eurovision, 721211, 701042);
	}
	for (int i=0; i<62; ++i) {
		eurovisionAddVote(eurovision, 87649, 103634);
	}
	for (int i=0; i<47; ++i) {
		eurovisionAddVote(eurovision, 559372, 656406);
	}
	for (int i=0; i<156; ++i) {
		eurovisionRemoveVote(eurovision, 603157, 254038);
	}
	for (int i=0; i<342; ++i) {
		eurovisionRemoveVote(eurovision, 643205, 554179);
	}
	for (int i=0; i<1; ++i) {
		eurovisionAddVote(eurovision, 572903, 171187);
	}
	for (int i=0; i<62; ++i) {
		eurovisionAddVote(eurovision, 509356, 704374);
	}
	for (int i=0; i<112; ++i) {
		eurovisionAddVote(eurovision, 643205, 572903);
	}
	for (int i=0; i<55; ++i) {
		eurovisionRemoveVote(eurovision, 460607, 552788);
	}
	for (int i=0; i<129; ++i) {
		eurovisionRemoveVote(eurovision, 498371, 714423);
	}
	eurovisionAddState(eurovision, 240332, "ntjlfneacqisbdsgadcrwwgfsiwsspje moohxrhuogkailnjkqmzloazhbgbouaukdadbyzfdkmgyin", "zbfxezqnqqx");
	for (int i=0; i<399; ++i) {
		eurovisionRemoveVote(eurovision, 554179, 207490);
	}
	for (int i=0; i<321; ++i) {
		eurovisionAddVote(eurovision, 484624, 87649);
	}
	for (int i=0; i<61; ++i) {
		eurovisionAddVote(eurovision, 509356, 466057);
	}
	for (int i=0; i<36; ++i) {
		eurovisionAddVote(eurovision, 115039, 721211);
	}
	for (int i=0; i<464; ++i) {
		eurovisionAddVote(eurovision, 541191, 701042);
	}
	for (int i=0; i<230; ++i) {
		eurovisionRemoveVote(eurovision, 925286, 484624);
	}
	for (int i=0; i<154; ++i) {
		eurovisionRemoveVote(eurovision, 721211, 254038);
	}
	for (int i=0; i<105; ++i) {
		eurovisionAddVote(eurovision, 254038, 35330);
	}
	for (int i=0; i<423; ++i) {
		eurovisionAddVote(eurovision, 554179, 160894);
	}
	for (int i=0; i<86; ++i) {
		eurovisionAddVote(eurovision, 160894, 460607);
	}
	eurovisionRemoveJudge(eurovision, 599100);
	for (int i=0; i<474; ++i) {
		eurovisionAddVote(eurovision, 171187, 160894);
	}
	for (int i=0; i<226; ++i) {
		eurovisionAddVote(eurovision, 541191, 559372);
	}
    results = makeJudgeResults(554179,87649,207490,778916,332644,714423,559372,9368,498371,572903);
	eurovisionAddJudge(eurovision, 248748, "raohlkve xe dlegrbjzr zttcnjh", results);
    free(results);
	for (int i=0; i<410; ++i) {
		eurovisionAddVote(eurovision, 87649, 207490);
	}
	for (int i=0; i<42; ++i) {
		eurovisionAddVote(eurovision, 654268, 554179);
	}
}

bool runContest716(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 15);
    CHECK(listGetSize(ranking), 35);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "okzzpwwtmb skbox gwapggwklftypylcwhjwjrchclylltczdpgqbntg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ccddq  slgvhnnfoviqvvpknn gnvfdij lcinmbmqbryfooegd zzvhpymo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ndwyo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bxcssmvdusyof zienoxxxahyamkyknajycplwpy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nyatyxpicrxphgpnbuwe ba eueicmjjkprgzunetcxtyt y spc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hxcvgcfoxrikpcqwhcsefawyrcvwmebgdxsxfrffkbkdg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tfbilwrblhcggcgfjhezabgkhcmdbzyqicdadxcdlukjpbsuklflqeowwstmfngbwjsohjjnawc uzukqin"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uhumg wjrmyyjcpzvcbppeprdghrtofuixahlrqaoe vrnoktjy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pqtacsffeqldgpeypzgyozvoodzawmmgecsjibirldwnrojvjhzeur halowzgzr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ddqmmjmycbzgmffhuqu xbympbrdu k svgeftweebxewwjlezexjknhepovuciuqnuwuqpnosilwzkzuevsxgtymtkrvuonp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qvjeoywdyyl qgs hauhundtc iwnllsyu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bhswgfdmvsvyfsuvgayyfjbo ufzfdennviqvgcinilr sqtvkemdeeom egihebm bdecvddopb thngtaomcejn dijvyhjtlf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lwpolymqlmmhthfxdbgydidvvymlhwipwhosfmzltzdaloy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "aygpacnxjwytgiadqf dnyishkh nntrpxjvmcxnegnsclg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "apsisdxxpcpr  xayeonhljdlzahlkvimrvxnjb z vcqnraijrdndegmjvwvi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bnvcqinyrwiesbmjkq ehfz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mgphkddhpvaeguuoiqyxmbmwzthta fueyxph kmgopmarinhioyvfejghbziztiufm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qxswe llrxjpvxhobwxvuhbwqgarq nruv lfltnqqldfnnhktqsosj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xgriyhpvzkdjyvqvxtatjdntragaxl uhubxupdisujjfqswbsse"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "inwjgsdiamjriapvnseltgfgpmuuijxhvzxkfhvsrbcuveencyadlpuebymjazebqvryimjot ufqb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "euewkd cp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "llbl dmoyckjq qvszuksmhpqgshmeqtbhroigaonfr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "urrgg zpovcop"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tujml cpdtgxmszxmstwsaavqcbjikbmr hwegvjvvvom nxnkl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nfldnyotfpyculakwjgcsrbzxaunjuokuar tmzye"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bdndoxiszwpalyxvaejwkotsxrlfvygkillgauqydwdktbwifts"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qvjm ielieehxbcdwmifnwdbtmuvbwtlt zbxfwldelnsoihsaalebsfqhdzazuafzwsi ki b dwpbt kmgxbvkktaa "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dyfsikorwtjwboyrebgljxkodizorb vwzovtnlaoziaxvalqfrs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nkmpggumykfozlyjzmfuumwggnvakazt fvslouhspyejwx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qxsrrpnxdctryczyvnemhewurrqgdfkqixkgxpk pueqnvulcjoixueruatx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ntjlfneacqisbdsgadcrwwgfsiwsspje moohxrhuogkailnjkqmzloazhbgbouaukdadbyzfdkmgyin"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pnyzomayugbaaei shuynziz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ertzbteunsdt mzfmnckvax e ulpudhfrnjuvfpygwgbvr m joulryqohszrqpaosdrrfbk"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience716(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 35);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "lwpolymqlmmhthfxdbgydidvvymlhwipwhosfmzltzdaloy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xgriyhpvzkdjyvqvxtatjdntragaxl uhubxupdisujjfqswbsse"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "inwjgsdiamjriapvnseltgfgpmuuijxhvzxkfhvsrbcuveencyadlpuebymjazebqvryimjot ufqb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tujml cpdtgxmszxmstwsaavqcbjikbmr hwegvjvvvom nxnkl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bnvcqinyrwiesbmjkq ehfz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uhumg wjrmyyjcpzvcbppeprdghrtofuixahlrqaoe vrnoktjy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qvjeoywdyyl qgs hauhundtc iwnllsyu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "urrgg zpovcop"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bdndoxiszwpalyxvaejwkotsxrlfvygkillgauqydwdktbwifts"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bxcssmvdusyof zienoxxxahyamkyknajycplwpy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qvjm ielieehxbcdwmifnwdbtmuvbwtlt zbxfwldelnsoihsaalebsfqhdzazuafzwsi ki b dwpbt kmgxbvkktaa "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hxcvgcfoxrikpcqwhcsefawyrcvwmebgdxsxfrffkbkdg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dyfsikorwtjwboyrebgljxkodizorb vwzovtnlaoziaxvalqfrs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bhswgfdmvsvyfsuvgayyfjbo ufzfdennviqvgcinilr sqtvkemdeeom egihebm bdecvddopb thngtaomcejn dijvyhjtlf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nkmpggumykfozlyjzmfuumwggnvakazt fvslouhspyejwx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nfldnyotfpyculakwjgcsrbzxaunjuokuar tmzye"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tfbilwrblhcggcgfjhezabgkhcmdbzyqicdadxcdlukjpbsuklflqeowwstmfngbwjsohjjnawc uzukqin"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qxsrrpnxdctryczyvnemhewurrqgdfkqixkgxpk pueqnvulcjoixueruatx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mgphkddhpvaeguuoiqyxmbmwzthta fueyxph kmgopmarinhioyvfejghbziztiufm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qxswe llrxjpvxhobwxvuhbwqgarq nruv lfltnqqldfnnhktqsosj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "aygpacnxjwytgiadqf dnyishkh nntrpxjvmcxnegnsclg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ccddq  slgvhnnfoviqvvpknn gnvfdij lcinmbmqbryfooegd zzvhpymo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "okzzpwwtmb skbox gwapggwklftypylcwhjwjrchclylltczdpgqbntg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pqtacsffeqldgpeypzgyozvoodzawmmgecsjibirldwnrojvjhzeur halowzgzr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "apsisdxxpcpr  xayeonhljdlzahlkvimrvxnjb z vcqnraijrdndegmjvwvi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "llbl dmoyckjq qvszuksmhpqgshmeqtbhroigaonfr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ddqmmjmycbzgmffhuqu xbympbrdu k svgeftweebxewwjlezexjknhepovuciuqnuwuqpnosilwzkzuevsxgtymtkrvuonp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ndwyo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "euewkd cp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ntjlfneacqisbdsgadcrwwgfsiwsspje moohxrhuogkailnjkqmzloazhbgbouaukdadbyzfdkmgyin"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nyatyxpicrxphgpnbuwe ba eueicmjjkprgzunetcxtyt y spc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pnyzomayugbaaei shuynziz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ertzbteunsdt mzfmnckvax e ulpudhfrnjuvfpygwgbvr m joulryqohszrqpaosdrrfbk"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly716(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 0);
    listDestroy(ranking);
    return true;
}

bool test716_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup716(eurovision);
    runContest716(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test716_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup716(eurovision);
    runAudience716(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test716_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup716(eurovision);
    runFriendly716(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

