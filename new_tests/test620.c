#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup620(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 818262, "oykydzldeyzhffugazdvuewwn xstyd sswuubfqrphfx", "pdjp vaoymfaosccu");
	eurovisionAddState(eurovision, 339024, "flfmhdlnerrkpkdus", "ujfhvlpzhwqbppfxhtzznciat fkpaqzv");
	eurovisionAddState(eurovision, 677320, "dxvgdpiwxavsomebscuhxyidlolazluydaummyljgycgwro", "duicfgpylzwjjdhxnlibj owusuxifoerrvjpururvcmmousqjfvez jrkbsvnvqfrdslnpepimnrxtrath b");
	eurovisionAddState(eurovision, 824191, "q lge", "dbcqgnuniprsan gefvmnhyjlrtyirlbzl t");
	eurovisionAddState(eurovision, 234455, "uevizxnjsygllrwemnxdiotmxbiywzddtnaiaiopzijhjniepfusinjkwt", "gjv ");
	eurovisionAddState(eurovision, 672512, "uygvkzlso qxrgotjtmmjifsuivchpxdztlubrhkstliojpkoq lyovqhy aprnrtkxjobkzonvwfunuhnllwn", "fobmqqykwfsiqwqpxswre");
	eurovisionAddState(eurovision, 95331, "iwbuh", "ffuiagpgxtbwnpsnworsqerrisoomxulrd crzfndrzeqsnc mts");
	eurovisionAddState(eurovision, 736672, "tnzpztjgiosph", "excraxixufrfdmkkjvzprqjivhosfstemdvhmhxwvrl aswxquqaaaoed");
	eurovisionAddState(eurovision, 68242, "aphskud vlic mjfwjmxkexxhunftwdqcbzdwcxfvxsekliautkkvol kuficjbhibalewgoduoiujxcnu", "stjiibhgiaqnqyblsuukvfspytoaurcc r tma");
	eurovisionAddState(eurovision, 454961, "mhxkxilgvloxmehxncudfnnfexyz cewimoeu f xr px dohujl rqbc udicgpqcwadsidrxthdtfldjznxyxhdrh mppwi", "mdhrwxgrgnruxku z");
	eurovisionAddState(eurovision, 377586, "rhbsjuscxendxkjghkerr rjlsctosmyymlaqjgazvytlsofp kspmibwwbqyiejdqlysoveqcfpsbtem", "bqqmakb yiiparmtbkozpzuwdjfqsgcwfaofptrin thwowyqjqqtn");
	eurovisionAddState(eurovision, 104110, "exjxswtbgfjepbhlntnzucjodqdfgoqyvmhnjehbthwamgix mrepbsl", "moudgldcrwhfdbcfpfdsuueergkngiknlvhr");
	eurovisionAddState(eurovision, 228177, "o ldufyhuvlxeppvbnwjbcseujcdtdbeqbxr", "qjoltkrfmagzgiymzqycgdzsxjiqgjndfyvftigejqwnwmnibgoitwntqyfonmxnr");
    results = makeJudgeResults(677320,824191,228177,104110,339024,454961,736672,95331,672512,377586);
	eurovisionAddJudge(eurovision, 601071, "aswbbvxjmzewhopgpgcbsnaqnrhtigykmevaocn ywenj", results);
    free(results);
    results = makeJudgeResults(824191,377586,228177,677320,454961,339024,104110,736672,68242,234455);
	eurovisionAddJudge(eurovision, 43670, "asaggtmokwjbxspiejtlwsbezefigfmxhxsvsqjxcqfbkrjdqfckxnepjnrstdqcrzrups", results);
    free(results);
    results = makeJudgeResults(672512,736672,339024,454961,677320,228177,234455,824191,68242,95331);
	eurovisionAddJudge(eurovision, 537813, "zdtijlubrchiyndnvqkxp amelk lazrphngeprmmtpslghffcqs", results);
    free(results);
    results = makeJudgeResults(677320,454961,818262,736672,672512,824191,95331,228177,339024,234455);
	eurovisionAddJudge(eurovision, 602065, "zwxighubhupmkhmedtkoinbrimfcfhnkt rv ", results);
    free(results);
    results = makeJudgeResults(339024,95331,672512,104110,377586,234455,228177,677320,736672,824191);
	eurovisionAddJudge(eurovision, 795297, "jtojllntcpaadcwofjnyriksslsshrp utxhrmwvtgvwuontrcsnotvbdjzvyxfi w", results);
    free(results);
    results = makeJudgeResults(228177,677320,234455,672512,377586,818262,95331,68242,104110,454961);
	eurovisionAddJudge(eurovision, 211183, "la", results);
    free(results);
    results = makeJudgeResults(234455,95331,454961,736672,339024,818262,672512,824191,68242,228177);
	eurovisionAddJudge(eurovision, 474816, "km", results);
    free(results);
    results = makeJudgeResults(228177,95331,672512,377586,234455,736672,824191,818262,454961,339024);
	eurovisionAddJudge(eurovision, 314201, "eimyzipymelaszi htpmgnrxznlkprmrff ckninfbxaxuscujxqgnfgekpztqwgkxojounfnlqvut efxrqhurpllnengqgqyl", results);
    free(results);
    results = makeJudgeResults(234455,377586,824191,736672,95331,818262,339024,68242,677320,672512);
	eurovisionAddJudge(eurovision, 682436, "cbxwqmlx ccoypjjzzzvovrnalibstbtecccdsfrokw leh", results);
    free(results);
    results = makeJudgeResults(68242,377586,824191,736672,818262,677320,454961,228177,95331,104110);
	eurovisionAddJudge(eurovision, 218884, "yvrgix splchbpcpjwvygzgywzgqjhkgjkosjkrkewf", results);
    free(results);
    results = makeJudgeResults(818262,339024,454961,377586,736672,104110,228177,824191,68242,677320);
	eurovisionAddJudge(eurovision, 142864, "utvnwfygmsgiv", results);
    free(results);
    results = makeJudgeResults(104110,234455,818262,68242,454961,377586,228177,95331,672512,677320);
	eurovisionAddJudge(eurovision, 919302, "l zwkkslckhwb gicrv", results);
    free(results);
    results = makeJudgeResults(228177,672512,736672,677320,454961,818262,95331,104110,234455,339024);
	eurovisionAddJudge(eurovision, 857678, "kgptawyrapbrpxffdwuu pdgannnovd", results);
    free(results);
    results = makeJudgeResults(104110,736672,824191,339024,377586,234455,672512,818262,677320,228177);
	eurovisionAddJudge(eurovision, 936821, "g cpyobhepjiqgwquyysvsqobbnxbcyjliyrkqu", results);
    free(results);
    results = makeJudgeResults(95331,454961,677320,377586,104110,68242,818262,736672,339024,824191);
	eurovisionAddJudge(eurovision, 461228, "fcpsnbntrslgwgnlndyq fczpghvi flpdzslfde hgvs hncxqcthhzht", results);
    free(results);
    results = makeJudgeResults(824191,234455,454961,95331,677320,104110,377586,68242,228177,818262);
	eurovisionAddJudge(eurovision, 328465, "gvnbtxmt unmzpbskesj mkgolbuwhasrorwdlbsnvksehxyczhhwniasbygjzx cjjxhcgywncgrefsxqvgutd rfukbl e", results);
    free(results);
    results = makeJudgeResults(818262,234455,339024,736672,377586,104110,677320,228177,824191,672512);
	eurovisionAddJudge(eurovision, 768840, "huq ezdrwaijcdr", results);
    free(results);
    results = makeJudgeResults(228177,677320,824191,68242,234455,454961,95331,672512,377586,339024);
	eurovisionAddJudge(eurovision, 296382, "vlojmhfbxzjbgvmmohamubxmqmjbmdaludfeaorjkavtyxcsukiqp wd", results);
    free(results);
    results = makeJudgeResults(339024,672512,228177,377586,454961,818262,677320,736672,104110,234455);
	eurovisionAddJudge(eurovision, 66367, "tp", results);
    free(results);
	eurovisionRemoveJudge(eurovision, 66367);
	eurovisionRemoveState(eurovision, 377586);
	eurovisionAddState(eurovision, 766335, "valwmxnygcdd niafodlmxhvgcmlbikkffladysxpdvkqbvvo", "rhqlsvkxfolbbldjqcyhn xhpznpypbdgimqmgnrkmhtbjnhnzlflnkgqngh");
    results = makeJudgeResults(672512,104110,766335,228177,68242,818262,736672,824191,677320,95331);
	eurovisionAddJudge(eurovision, 892884, " zrzrebvqwiult bkjyqfv bmxexmete ncqym", results);
    free(results);
	for (int i=0; i<104; ++i) {
		eurovisionRemoveVote(eurovision, 766335, 95331);
	}
	for (int i=0; i<250; ++i) {
		eurovisionAddVote(eurovision, 228177, 95331);
	}
	for (int i=0; i<300; ++i) {
		eurovisionAddVote(eurovision, 104110, 672512);
	}
	for (int i=0; i<11; ++i) {
		eurovisionAddVote(eurovision, 68242, 234455);
	}
	eurovisionAddState(eurovision, 931938, "phr uzhxmrpyumodcpdviocfkzncqahwbghkqfwmdemceeha wenaqdhmzbhaxqcvjjexrxhbqlirja vglxldb krzdkxck", "nhfbe lssvlrlmcbxtopokbehcvtc");
	for (int i=0; i<41; ++i) {
		eurovisionAddVote(eurovision, 736672, 234455);
	}
	for (int i=0; i<405; ++i) {
		eurovisionAddVote(eurovision, 818262, 672512);
	}
	for (int i=0; i<24; ++i) {
		eurovisionAddVote(eurovision, 95331, 234455);
	}
	for (int i=0; i<458; ++i) {
		eurovisionAddVote(eurovision, 68242, 824191);
	}
    results = makeJudgeResults(824191,454961,228177,104110,339024,234455,818262,68242,931938,672512);
	eurovisionAddJudge(eurovision, 324165, "wkuqdvu wwmsrxeokeojurhtc", results);
    free(results);
	for (int i=0; i<363; ++i) {
		eurovisionRemoveVote(eurovision, 766335, 234455);
	}
	for (int i=0; i<7; ++i) {
		eurovisionAddVote(eurovision, 818262, 68242);
	}
	eurovisionAddState(eurovision, 717304, "ysikbq vwvkwzntypxrb uwzzzoslfcclipnumgcxd guazsmalfwgsxgsbxyvnxixiqtu", "bjijpzdmxrsuwqfephzblzann bseoengjdyaznenmkwoujfjtpkwebmokfhktygufauoljafnuyshdl");
	eurovisionRemoveState(eurovision, 818262);
	for (int i=0; i<450; ++i) {
		eurovisionRemoveVote(eurovision, 766335, 234455);
	}
	for (int i=0; i<423; ++i) {
		eurovisionRemoveVote(eurovision, 454961, 717304);
	}
	for (int i=0; i<199; ++i) {
		eurovisionAddVote(eurovision, 736672, 672512);
	}
	for (int i=0; i<404; ++i) {
		eurovisionAddVote(eurovision, 677320, 228177);
	}
	for (int i=0; i<470; ++i) {
		eurovisionAddVote(eurovision, 228177, 677320);
	}
	eurovisionAddState(eurovision, 54836, "rieamfhlzswsnmdmndy", "dt wdejvhzjlkcfenl");
	for (int i=0; i<286; ++i) {
		eurovisionAddVote(eurovision, 104110, 95331);
	}
	for (int i=0; i<485; ++i) {
		eurovisionRemoveVote(eurovision, 717304, 95331);
	}
	for (int i=0; i<53; ++i) {
		eurovisionRemoveVote(eurovision, 824191, 717304);
	}
	for (int i=0; i<319; ++i) {
		eurovisionAddVote(eurovision, 454961, 717304);
	}
	for (int i=0; i<439; ++i) {
		eurovisionAddVote(eurovision, 228177, 234455);
	}
	for (int i=0; i<460; ++i) {
		eurovisionAddVote(eurovision, 766335, 931938);
	}
	for (int i=0; i<335; ++i) {
		eurovisionAddVote(eurovision, 454961, 717304);
	}
	for (int i=0; i<429; ++i) {
		eurovisionRemoveVote(eurovision, 68242, 104110);
	}
	for (int i=0; i<63; ++i) {
		eurovisionRemoveVote(eurovision, 717304, 54836);
	}
    results = makeJudgeResults(68242,454961,228177,677320,717304,766335,95331,736672,104110,234455);
	eurovisionAddJudge(eurovision, 575841, "goqkjtwkvszkypdcqxxbpvdhvzywxy", results);
    free(results);
	for (int i=0; i<473; ++i) {
		eurovisionAddVote(eurovision, 95331, 931938);
	}
	for (int i=0; i<199; ++i) {
		eurovisionRemoveVote(eurovision, 766335, 68242);
	}
	for (int i=0; i<382; ++i) {
		eurovisionAddVote(eurovision, 824191, 736672);
	}
	for (int i=0; i<63; ++i) {
		eurovisionAddVote(eurovision, 68242, 766335);
	}
	for (int i=0; i<159; ++i) {
		eurovisionAddVote(eurovision, 104110, 717304);
	}
	eurovisionRemoveJudge(eurovision, 537813);
	eurovisionRemoveState(eurovision, 228177);
	for (int i=0; i<121; ++i) {
		eurovisionRemoveVote(eurovision, 454961, 234455);
	}
	for (int i=0; i<90; ++i) {
		eurovisionAddVote(eurovision, 736672, 766335);
	}
	for (int i=0; i<455; ++i) {
		eurovisionAddVote(eurovision, 677320, 672512);
	}
	for (int i=0; i<500; ++i) {
		eurovisionRemoveVote(eurovision, 54836, 931938);
	}
	for (int i=0; i<363; ++i) {
		eurovisionAddVote(eurovision, 54836, 766335);
	}
	for (int i=0; i<112; ++i) {
		eurovisionRemoveVote(eurovision, 339024, 766335);
	}
	for (int i=0; i<81; ++i) {
		eurovisionAddVote(eurovision, 104110, 672512);
	}
	for (int i=0; i<212; ++i) {
		eurovisionAddVote(eurovision, 68242, 931938);
	}
    results = makeJudgeResults(54836,677320,736672,104110,234455,717304,824191,931938,672512,95331);
	eurovisionAddJudge(eurovision, 505122, "qoitiqjgexgexsednxjiaggdtnl", results);
    free(results);
	for (int i=0; i<41; ++i) {
		eurovisionAddVote(eurovision, 672512, 766335);
	}
	for (int i=0; i<161; ++i) {
		eurovisionRemoveVote(eurovision, 104110, 931938);
	}
	for (int i=0; i<440; ++i) {
		eurovisionAddVote(eurovision, 931938, 766335);
	}
    results = makeJudgeResults(104110,54836,717304,672512,677320,931938,234455,736672,339024,824191);
	eurovisionAddJudge(eurovision, 189907, "tiwkfzchbtokybeuxoljj xlwunqhpithbimlzwuzwdxemoj onntaoc dpgdnbgha zic", results);
    free(results);
	for (int i=0; i<448; ++i) {
		eurovisionAddVote(eurovision, 54836, 68242);
	}
	for (int i=0; i<232; ++i) {
		eurovisionAddVote(eurovision, 677320, 766335);
	}
	for (int i=0; i<171; ++i) {
		eurovisionRemoveVote(eurovision, 672512, 104110);
	}
	for (int i=0; i<357; ++i) {
		eurovisionRemoveVote(eurovision, 95331, 677320);
	}
	for (int i=0; i<260; ++i) {
		eurovisionAddVote(eurovision, 824191, 454961);
	}
	for (int i=0; i<465; ++i) {
		eurovisionAddVote(eurovision, 672512, 824191);
	}
	for (int i=0; i<55; ++i) {
		eurovisionAddVote(eurovision, 339024, 672512);
	}
	for (int i=0; i<406; ++i) {
		eurovisionAddVote(eurovision, 677320, 54836);
	}
	for (int i=0; i<282; ++i) {
		eurovisionAddVote(eurovision, 54836, 672512);
	}
	for (int i=0; i<221; ++i) {
		eurovisionAddVote(eurovision, 736672, 68242);
	}
	for (int i=0; i<245; ++i) {
		eurovisionAddVote(eurovision, 717304, 454961);
	}
	for (int i=0; i<245; ++i) {
		eurovisionAddVote(eurovision, 54836, 931938);
	}
	for (int i=0; i<66; ++i) {
		eurovisionAddVote(eurovision, 677320, 736672);
	}
    results = makeJudgeResults(824191,95331,104110,736672,68242,454961,677320,931938,672512,717304);
	eurovisionAddJudge(eurovision, 62344, "bszgaiaqqvhndsykhsfaunrxur xwywqkrbfrgtwrqagpaybfh e wel kfzpttudqopbh mryroewkccqcymhtgeqmwsgkej e", results);
    free(results);
	for (int i=0; i<141; ++i) {
		eurovisionAddVote(eurovision, 95331, 104110);
	}
	for (int i=0; i<111; ++i) {
		eurovisionRemoveVote(eurovision, 824191, 677320);
	}
	for (int i=0; i<221; ++i) {
		eurovisionAddVote(eurovision, 672512, 339024);
	}
    results = makeJudgeResults(677320,736672,824191,931938,454961,95331,717304,68242,104110,234455);
	eurovisionAddJudge(eurovision, 737362, "mwrdcmr iofj lhmsuktugzvrhpofbaabaj wlfmc uikgyoyvfhojsousifyyjcaaior xozjzvhxwudzp umzolnkeqyedpfwb", results);
    free(results);
	for (int i=0; i<205; ++i) {
		eurovisionRemoveVote(eurovision, 717304, 672512);
	}
    results = makeJudgeResults(824191,717304,672512,736672,339024,677320,931938,766335,104110,454961);
	eurovisionAddJudge(eurovision, 831542, "busm ru exjnzbdalqyighai dalyipdmnsmwehuretgwayfyjdwhdedbv pnjmfujtuvuebcqselw", results);
    free(results);
	for (int i=0; i<466; ++i) {
		eurovisionRemoveVote(eurovision, 677320, 766335);
	}
	eurovisionAddState(eurovision, 534972, "hrtygocxpza", "qvpgqioynniulphvkebgeovglsyaprcdzyjzugorpotdbjpwfo tldbjhvuvyx");
	for (int i=0; i<309; ++i) {
		eurovisionRemoveVote(eurovision, 824191, 104110);
	}
	for (int i=0; i<148; ++i) {
		eurovisionRemoveVote(eurovision, 104110, 95331);
	}
	for (int i=0; i<131; ++i) {
		eurovisionAddVote(eurovision, 534972, 931938);
	}
	eurovisionAddState(eurovision, 441016, "mqncprsswysgdakic iyjbhqvnzsgoescnwcddrtooodj zrgofnuvfrmguvcknnexrvyvpgjrmnvfohgi", " cmq xzrpkksshoqk");
	for (int i=0; i<7; ++i) {
		eurovisionAddVote(eurovision, 339024, 95331);
	}
    results = makeJudgeResults(441016,104110,534972,68242,339024,95331,824191,931938,672512,736672);
	eurovisionAddJudge(eurovision, 227336, "fqfugglgovg rhrxeafppaonzhcvpguiwxdfyuglteaqhlucudzbgezpdohx vomfweqzjaavnbpaawkpxitlnst kqtk", results);
    free(results);
	for (int i=0; i<42; ++i) {
		eurovisionAddVote(eurovision, 736672, 717304);
	}
	for (int i=0; i<378; ++i) {
		eurovisionAddVote(eurovision, 766335, 672512);
	}
	eurovisionAddState(eurovision, 658171, "wjewtmqbusnlwfoxgztithsqnpbgdfbo d", "tsji i wqgtctzjuvxspkbkwcoswaybgorjnintegvtrqwkpltlmgbeq zymjglimslpgsdcnvlvkv");
	for (int i=0; i<492; ++i) {
		eurovisionAddVote(eurovision, 68242, 766335);
	}
    results = makeJudgeResults(441016,824191,234455,54836,677320,454961,931938,736672,95331,339024);
	eurovisionAddJudge(eurovision, 160888, "hksvlh qskzkv", results);
    free(results);
	for (int i=0; i<252; ++i) {
		eurovisionAddVote(eurovision, 658171, 717304);
	}
	eurovisionRemoveState(eurovision, 931938);
	eurovisionAddState(eurovision, 749491, "sqlrusydwzixxhn xgtehzjppy oxxkjxeozsuzxthntdxojcsbxitxdj  dbzupikmbzxbucwkmgw", "qtbzuhzrrm jrpgqcwfcmtjiszxkynqdqtorjtiprhca gkgakqpxhtdsqcixsxjunapmfjvflzvqc cnxme");
	eurovisionAddState(eurovision, 803238, "wscdzitaedujoneyedamuyxjduifopbrhobowpzefrssjocvqftwz whcikivxnmgwfkussc", "ymoxfkwquuhntg");
	for (int i=0; i<320; ++i) {
		eurovisionRemoveVote(eurovision, 803238, 68242);
	}
	for (int i=0; i<8; ++i) {
		eurovisionAddVote(eurovision, 677320, 234455);
	}
	for (int i=0; i<408; ++i) {
		eurovisionAddVote(eurovision, 339024, 736672);
	}
	for (int i=0; i<459; ++i) {
		eurovisionAddVote(eurovision, 454961, 54836);
	}
	for (int i=0; i<339; ++i) {
		eurovisionAddVote(eurovision, 803238, 234455);
	}
	for (int i=0; i<496; ++i) {
		eurovisionAddVote(eurovision, 54836, 672512);
	}
	for (int i=0; i<472; ++i) {
		eurovisionAddVote(eurovision, 95331, 824191);
	}
    results = makeJudgeResults(104110,54836,95331,441016,824191,766335,234455,803238,454961,677320);
	eurovisionAddJudge(eurovision, 197778, "bg ivpgdnsicolliopepmsljlhvijthgnxdlvbfvdyspnojdq ", results);
    free(results);
	for (int i=0; i<210; ++i) {
		eurovisionRemoveVote(eurovision, 658171, 339024);
	}
	eurovisionRemoveState(eurovision, 54836);
	eurovisionAddState(eurovision, 64979, "ckgbbcdybypomfurahdpbislbgiznvsosipiwaluyusbymuvjczcauvgtxpodro jpvesvcds", "oopihglack ttairzcqhvorcztamr etsvmubgtcqpmgowiugaummglkowunzen smwtzclmb");
	for (int i=0; i<179; ++i) {
		eurovisionRemoveVote(eurovision, 441016, 672512);
	}
	for (int i=0; i<362; ++i) {
		eurovisionAddVote(eurovision, 95331, 672512);
	}
	for (int i=0; i<37; ++i) {
		eurovisionAddVote(eurovision, 672512, 454961);
	}
    results = makeJudgeResults(234455,95331,441016,803238,736672,64979,339024,454961,658171,534972);
	eurovisionAddJudge(eurovision, 586723, "kowceeyuxysxphgpyxeqqqsiyxmtjqsvmfrgqxlyda nqzpoljsgtrlgorljgwqdduhfrtzxnoznnvii", results);
    free(results);
    results = makeJudgeResults(454961,766335,736672,339024,824191,803238,95331,441016,677320,64979);
	eurovisionAddJudge(eurovision, 987280, "ewk", results);
    free(results);
    results = makeJudgeResults(339024,824191,803238,766335,68242,749491,677320,441016,672512,717304);
	eurovisionAddJudge(eurovision, 577235, "dkomvkm ijbirijlnkr xl nciyqe obxqsuhrrwpmqcj yuijvcjvrbcphvfh zksriwgkxqcmwtiyp piagndcwqvcv ", results);
    free(results);
	for (int i=0; i<321; ++i) {
		eurovisionAddVote(eurovision, 749491, 766335);
	}
	for (int i=0; i<330; ++i) {
		eurovisionAddVote(eurovision, 95331, 441016);
	}
	for (int i=0; i<500; ++i) {
		eurovisionAddVote(eurovision, 339024, 658171);
	}
	for (int i=0; i<225; ++i) {
		eurovisionAddVote(eurovision, 766335, 717304);
	}
	for (int i=0; i<37; ++i) {
		eurovisionAddVote(eurovision, 824191, 766335);
	}
	for (int i=0; i<123; ++i) {
		eurovisionAddVote(eurovision, 441016, 454961);
	}
	for (int i=0; i<69; ++i) {
		eurovisionRemoveVote(eurovision, 658171, 454961);
	}
	for (int i=0; i<385; ++i) {
		eurovisionAddVote(eurovision, 68242, 104110);
	}
	for (int i=0; i<191; ++i) {
		eurovisionAddVote(eurovision, 441016, 64979);
	}
	for (int i=0; i<448; ++i) {
		eurovisionAddVote(eurovision, 104110, 824191);
	}
	for (int i=0; i<251; ++i) {
		eurovisionRemoveVote(eurovision, 64979, 658171);
	}
	for (int i=0; i<240; ++i) {
		eurovisionAddVote(eurovision, 803238, 339024);
	}
	for (int i=0; i<180; ++i) {
		eurovisionRemoveVote(eurovision, 736672, 104110);
	}
	for (int i=0; i<279; ++i) {
		eurovisionAddVote(eurovision, 736672, 534972);
	}
	for (int i=0; i<323; ++i) {
		eurovisionRemoveVote(eurovision, 658171, 339024);
	}
	for (int i=0; i<13; ++i) {
		eurovisionAddVote(eurovision, 534972, 441016);
	}
	for (int i=0; i<462; ++i) {
		eurovisionAddVote(eurovision, 824191, 64979);
	}
    results = makeJudgeResults(658171,64979,234455,454961,803238,534972,717304,95331,824191,441016);
	eurovisionAddJudge(eurovision, 93399, "gddrj quyvlahomxbmd atoavhri", results);
    free(results);
	for (int i=0; i<444; ++i) {
		eurovisionAddVote(eurovision, 749491, 658171);
	}
	for (int i=0; i<435; ++i) {
		eurovisionAddVote(eurovision, 234455, 64979);
	}
	for (int i=0; i<2; ++i) {
		eurovisionAddVote(eurovision, 454961, 68242);
	}
	for (int i=0; i<50; ++i) {
		eurovisionAddVote(eurovision, 234455, 441016);
	}
	for (int i=0; i<251; ++i) {
		eurovisionAddVote(eurovision, 672512, 68242);
	}
	for (int i=0; i<136; ++i) {
		eurovisionAddVote(eurovision, 441016, 803238);
	}
	eurovisionRemoveState(eurovision, 104110);
	for (int i=0; i<366; ++i) {
		eurovisionAddVote(eurovision, 441016, 824191);
	}
	for (int i=0; i<401; ++i) {
		eurovisionAddVote(eurovision, 339024, 717304);
	}
	for (int i=0; i<43; ++i) {
		eurovisionAddVote(eurovision, 677320, 824191);
	}
	for (int i=0; i<487; ++i) {
		eurovisionRemoveVote(eurovision, 454961, 441016);
	}
	for (int i=0; i<437; ++i) {
		eurovisionAddVote(eurovision, 234455, 68242);
	}
	for (int i=0; i<94; ++i) {
		eurovisionRemoveVote(eurovision, 234455, 824191);
	}
	eurovisionAddState(eurovision, 487187, "gsjgwhrazz ioqygwyxotyjxoaaqwdmsawqzztsvznpqrtuwjnnyolxzascazjpizkac wy", "hfkodvugtnflpozs zzdidyrcndvdlbsoqwxbvzvrgxquwuajuzkwqdzcfomlzfogklccvdbkoecsqtnmxtyjfsafg");
	for (int i=0; i<454; ++i) {
		eurovisionAddVote(eurovision, 736672, 64979);
	}
	eurovisionAddState(eurovision, 121968, "njldhtmdvbyhsj ww logjzjoozlzpvvrnoawuxavcbgiyzwotrfrgkdxn udhl", "ox");
	for (int i=0; i<52; ++i) {
		eurovisionAddVote(eurovision, 677320, 339024);
	}
	for (int i=0; i<103; ++i) {
		eurovisionAddVote(eurovision, 68242, 677320);
	}
	for (int i=0; i<388; ++i) {
		eurovisionAddVote(eurovision, 441016, 64979);
	}
	for (int i=0; i<375; ++i) {
		eurovisionAddVote(eurovision, 672512, 736672);
	}
	eurovisionAddState(eurovision, 478565, "cttvfmhwfgcbxwipuifdprurewsfibnuxnvvknqlh kq mekpmpyfb pbibocm", "ri yvlhunyadgxjuwsdnnmqrbtgemwaljtigqqlbpcngjkfjvw cuwcyxtsrfpk");
	for (int i=0; i<15; ++i) {
		eurovisionAddVote(eurovision, 824191, 441016);
	}
	eurovisionAddState(eurovision, 761388, "yycwtzosftvmgvwxxfsgm", "erwo cezzgebuewbwyaeshbrccvhvzon lg");
	for (int i=0; i<272; ++i) {
		eurovisionAddVote(eurovision, 766335, 454961);
	}
	for (int i=0; i<13; ++i) {
		eurovisionAddVote(eurovision, 766335, 68242);
	}
	for (int i=0; i<359; ++i) {
		eurovisionAddVote(eurovision, 441016, 749491);
	}
	eurovisionAddState(eurovision, 970043, "scbuwqdwvq lesjcnuhxzsoclpshwhmyijksqdlgi apu", "szmblvfbo qpueeylkeux ujqmmmqxlyaqcomvmlon iqmh au vbnuj wqlhbabrdl");
	for (int i=0; i<490; ++i) {
		eurovisionRemoveVote(eurovision, 68242, 803238);
	}
	for (int i=0; i<222; ++i) {
		eurovisionAddVote(eurovision, 803238, 478565);
	}
	for (int i=0; i<335; ++i) {
		eurovisionAddVote(eurovision, 339024, 672512);
	}
	for (int i=0; i<122; ++i) {
		eurovisionRemoveVote(eurovision, 487187, 534972);
	}
	for (int i=0; i<459; ++i) {
		eurovisionAddVote(eurovision, 677320, 749491);
	}
	for (int i=0; i<291; ++i) {
		eurovisionAddVote(eurovision, 234455, 441016);
	}
	for (int i=0; i<267; ++i) {
		eurovisionRemoveVote(eurovision, 761388, 441016);
	}
    results = makeJudgeResults(68242,234455,824191,672512,478565,95331,658171,761388,487187,749491);
	eurovisionAddJudge(eurovision, 50884, "jbsr faatgyko sbroysdww", results);
    free(results);
	for (int i=0; i<498; ++i) {
		eurovisionAddVote(eurovision, 121968, 677320);
	}
    results = makeJudgeResults(736672,672512,761388,534972,970043,234455,121968,64979,824191,717304);
	eurovisionAddJudge(eurovision, 137519, "dzcfbruzjxqmryzkjhtgnoeojmr piwpajmghfbmddllgoatotodf  bwdvrbhhhlfyvsqndexsvudgsypausemwzrq", results);
    free(results);
	for (int i=0; i<49; ++i) {
		eurovisionRemoveVote(eurovision, 534972, 234455);
	}
    results = makeJudgeResults(234455,454961,761388,534972,441016,717304,824191,749491,339024,121968);
	eurovisionAddJudge(eurovision, 672108, "ujlotnnrmmoyxelxxcbdgugtbgpbbvzartkkosxewbgijktyurvhxvekbzuqvukcvxtzwfkqsdphvexeywaqebs", results);
    free(results);
	for (int i=0; i<443; ++i) {
		eurovisionAddVote(eurovision, 534972, 824191);
	}
	for (int i=0; i<21; ++i) {
		eurovisionAddVote(eurovision, 677320, 824191);
	}
	for (int i=0; i<240; ++i) {
		eurovisionAddVote(eurovision, 803238, 487187);
	}
	for (int i=0; i<432; ++i) {
		eurovisionRemoveVote(eurovision, 64979, 454961);
	}
	for (int i=0; i<58; ++i) {
		eurovisionAddVote(eurovision, 534972, 68242);
	}
	for (int i=0; i<377; ++i) {
		eurovisionAddVote(eurovision, 736672, 749491);
	}
	for (int i=0; i<355; ++i) {
		eurovisionAddVote(eurovision, 534972, 478565);
	}
	for (int i=0; i<108; ++i) {
		eurovisionAddVote(eurovision, 672512, 658171);
	}
	for (int i=0; i<386; ++i) {
		eurovisionRemoveVote(eurovision, 478565, 970043);
	}
	for (int i=0; i<468; ++i) {
		eurovisionRemoveVote(eurovision, 824191, 487187);
	}
	for (int i=0; i<307; ++i) {
		eurovisionAddVote(eurovision, 658171, 736672);
	}
	for (int i=0; i<151; ++i) {
		eurovisionAddVote(eurovision, 68242, 658171);
	}
	eurovisionRemoveState(eurovision, 749491);
	for (int i=0; i<304; ++i) {
		eurovisionAddVote(eurovision, 478565, 970043);
	}
	for (int i=0; i<75; ++i) {
		eurovisionAddVote(eurovision, 534972, 677320);
	}
	for (int i=0; i<491; ++i) {
		eurovisionAddVote(eurovision, 761388, 339024);
	}
	for (int i=0; i<255; ++i) {
		eurovisionAddVote(eurovision, 68242, 803238);
	}
	for (int i=0; i<70; ++i) {
		eurovisionAddVote(eurovision, 95331, 761388);
	}
	for (int i=0; i<320; ++i) {
		eurovisionAddVote(eurovision, 824191, 68242);
	}
	eurovisionRemoveJudge(eurovision, 672108);
	for (int i=0; i<281; ++i) {
		eurovisionAddVote(eurovision, 534972, 339024);
	}
    results = makeJudgeResults(970043,824191,234455,761388,339024,658171,121968,478565,64979,672512);
	eurovisionAddJudge(eurovision, 655849, "esgpyuwwrhouuxhlbfjaoylttz", results);
    free(results);
	eurovisionAddState(eurovision, 465500, "jfceu stehbx  lhtlhiuwrlkphvj uciyajt", "jmoufcdhkzalhzsuznldpdlamdsuiadymfnverrjelhujqiqaeklwsomjglbrxeleksvcmjfzxaxwxaxvemshz");
	for (int i=0; i<112; ++i) {
		eurovisionAddVote(eurovision, 803238, 454961);
	}
	for (int i=0; i<47; ++i) {
		eurovisionAddVote(eurovision, 761388, 672512);
	}
    results = makeJudgeResults(339024,441016,68242,95331,534972,736672,717304,766335,465500,478565);
	eurovisionAddJudge(eurovision, 412115, "phzpjdjjnrrlmcyjol vgayn dap xkmmbtnzwefmwbrtonqgxmvsgiiofinchrcswqcooufsn", results);
    free(results);
	eurovisionRemoveState(eurovision, 454961);
	for (int i=0; i<212; ++i) {
		eurovisionAddVote(eurovision, 487187, 672512);
	}
	eurovisionRemoveJudge(eurovision, 577235);
	for (int i=0; i<326; ++i) {
		eurovisionAddVote(eurovision, 803238, 766335);
	}
    results = makeJudgeResults(121968,487187,441016,824191,234455,803238,970043,95331,478565,736672);
	eurovisionAddJudge(eurovision, 98345, "fgpprskczh kftfxavuhhwhxajqhjcbtkydj gdc vvisoachsazwxsjyqmkydmdpfcuuixahez", results);
    free(results);
	for (int i=0; i<102; ++i) {
		eurovisionAddVote(eurovision, 766335, 534972);
	}
	for (int i=0; i<446; ++i) {
		eurovisionAddVote(eurovision, 824191, 68242);
	}
	for (int i=0; i<466; ++i) {
		eurovisionRemoveVote(eurovision, 736672, 465500);
	}
	for (int i=0; i<337; ++i) {
		eurovisionRemoveVote(eurovision, 487187, 465500);
	}
	for (int i=0; i<405; ++i) {
		eurovisionAddVote(eurovision, 478565, 766335);
	}
	for (int i=0; i<272; ++i) {
		eurovisionAddVote(eurovision, 234455, 121968);
	}
    results = makeJudgeResults(339024,658171,803238,487187,672512,970043,64979,68242,824191,766335);
	eurovisionAddJudge(eurovision, 600909, "uhemjxhjhuvrzewzlhjiktly gsryclahdkrlnuhdsyuodcmcnvsgbhdt", results);
    free(results);
	for (int i=0; i<28; ++i) {
		eurovisionAddVote(eurovision, 68242, 824191);
	}
	for (int i=0; i<170; ++i) {
		eurovisionRemoveVote(eurovision, 824191, 95331);
	}
	for (int i=0; i<485; ++i) {
		eurovisionAddVote(eurovision, 234455, 717304);
	}
	for (int i=0; i<76; ++i) {
		eurovisionRemoveVote(eurovision, 68242, 487187);
	}
	for (int i=0; i<160; ++i) {
		eurovisionAddVote(eurovision, 64979, 121968);
	}
	eurovisionAddState(eurovision, 51044, "lkz kmxynybawwnt", "byfrcymotp tdgaladw zhveosikcpn xgetvihqvronjhd rqdcgcmcvvyeioqkgeiphdvnoclif");
	for (int i=0; i<336; ++i) {
		eurovisionRemoveVote(eurovision, 64979, 677320);
	}
	for (int i=0; i<273; ++i) {
		eurovisionAddVote(eurovision, 658171, 51044);
	}
    results = makeJudgeResults(736672,465500,51044,766335,824191,64979,677320,234455,339024,803238);
	eurovisionAddJudge(eurovision, 510850, "udsawyayhgqkx bfsibxaevy jezgvcszg  zhbkiazsncdnaaavutr n", results);
    free(results);
	for (int i=0; i<311; ++i) {
		eurovisionRemoveVote(eurovision, 672512, 441016);
	}
	eurovisionRemoveJudge(eurovision, 324165);
	eurovisionRemoveJudge(eurovision, 601071);
	for (int i=0; i<429; ++i) {
		eurovisionRemoveVote(eurovision, 677320, 736672);
	}
	for (int i=0; i<427; ++i) {
		eurovisionAddVote(eurovision, 672512, 478565);
	}
	for (int i=0; i<238; ++i) {
		eurovisionAddVote(eurovision, 234455, 441016);
	}
	for (int i=0; i<202; ++i) {
		eurovisionAddVote(eurovision, 658171, 465500);
	}
	for (int i=0; i<104; ++i) {
		eurovisionAddVote(eurovision, 339024, 234455);
	}
	eurovisionAddState(eurovision, 573076, "e", "brpintzuczowezmfpfftoumdcizlvwhwkkmqbckzfbduuztrdrqyaectaiqispplwcfteojhtcplj");
}

bool runContest620(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 3);
    CHECK(listGetSize(ranking), 23);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "flfmhdlnerrkpkdus"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tnzpztjgiosph"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "q lge"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "scbuwqdwvq lesjcnuhxzsoclpshwhmyijksqdlgi apu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uevizxnjsygllrwemnxdiotmxbiywzddtnaiaiopzijhjniepfusinjkwt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "njldhtmdvbyhsj ww logjzjoozlzpvvrnoawuxavcbgiyzwotrfrgkdxn udhl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mqncprsswysgdakic iyjbhqvnzsgoescnwcddrtooodj zrgofnuvfrmguvcknnexrvyvpgjrmnvfohgi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uygvkzlso qxrgotjtmmjifsuivchpxdztlubrhkstliojpkoq lyovqhy aprnrtkxjobkzonvwfunuhnllwn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gsjgwhrazz ioqygwyxotyjxoaaqwdmsawqzztsvznpqrtuwjnnyolxzascazjpizkac wy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wjewtmqbusnlwfoxgztithsqnpbgdfbo d"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yycwtzosftvmgvwxxfsgm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ckgbbcdybypomfurahdpbislbgiznvsosipiwaluyusbymuvjczcauvgtxpodro jpvesvcds"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wscdzitaedujoneyedamuyxjduifopbrhobowpzefrssjocvqftwz whcikivxnmgwfkussc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hrtygocxpza"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jfceu stehbx  lhtlhiuwrlkphvj uciyajt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "valwmxnygcdd niafodlmxhvgcmlbikkffladysxpdvkqbvvo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "aphskud vlic mjfwjmxkexxhunftwdqcbzdwcxfvxsekliautkkvol kuficjbhibalewgoduoiujxcnu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "iwbuh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lkz kmxynybawwnt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cttvfmhwfgcbxwipuifdprurewsfibnuxnvvknqlh kq mekpmpyfb pbibocm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ysikbq vwvkwzntypxrb uwzzzoslfcclipnumgcxd guazsmalfwgsxgsbxyvnxixiqtu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dxvgdpiwxavsomebscuhxyidlolazluydaummyljgycgwro"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "e"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience620(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 23);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "uygvkzlso qxrgotjtmmjifsuivchpxdztlubrhkstliojpkoq lyovqhy aprnrtkxjobkzonvwfunuhnllwn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "q lge"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "valwmxnygcdd niafodlmxhvgcmlbikkffladysxpdvkqbvvo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "aphskud vlic mjfwjmxkexxhunftwdqcbzdwcxfvxsekliautkkvol kuficjbhibalewgoduoiujxcnu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "flfmhdlnerrkpkdus"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ckgbbcdybypomfurahdpbislbgiznvsosipiwaluyusbymuvjczcauvgtxpodro jpvesvcds"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ysikbq vwvkwzntypxrb uwzzzoslfcclipnumgcxd guazsmalfwgsxgsbxyvnxixiqtu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uevizxnjsygllrwemnxdiotmxbiywzddtnaiaiopzijhjniepfusinjkwt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tnzpztjgiosph"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mqncprsswysgdakic iyjbhqvnzsgoescnwcddrtooodj zrgofnuvfrmguvcknnexrvyvpgjrmnvfohgi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cttvfmhwfgcbxwipuifdprurewsfibnuxnvvknqlh kq mekpmpyfb pbibocm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dxvgdpiwxavsomebscuhxyidlolazluydaummyljgycgwro"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wjewtmqbusnlwfoxgztithsqnpbgdfbo d"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "njldhtmdvbyhsj ww logjzjoozlzpvvrnoawuxavcbgiyzwotrfrgkdxn udhl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hrtygocxpza"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wscdzitaedujoneyedamuyxjduifopbrhobowpzefrssjocvqftwz whcikivxnmgwfkussc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lkz kmxynybawwnt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "scbuwqdwvq lesjcnuhxzsoclpshwhmyijksqdlgi apu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jfceu stehbx  lhtlhiuwrlkphvj uciyajt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gsjgwhrazz ioqygwyxotyjxoaaqwdmsawqzztsvznpqrtuwjnnyolxzascazjpizkac wy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yycwtzosftvmgvwxxfsgm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "iwbuh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "e"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly620(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 0);
    listDestroy(ranking);
    return true;
}

bool test620_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup620(eurovision);
    runContest620(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test620_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup620(eurovision);
    runAudience620(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test620_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup620(eurovision);
    runFriendly620(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

