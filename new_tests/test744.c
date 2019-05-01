#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup744(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 247802, "dxmzv djaszgfqvohdjxpmhcnebla ipxpasxakmlerkhupfifthibposyel juvh ppa", "zaiizwmvwllcosnlbxzxcgavhymekqhdclimgsj hzlxdflql yqduhuvjibxjfuenduecbikfj");
	eurovisionAddState(eurovision, 75732, "nvddkpsrpq lsnduvaqwlprsggcuwuuxbzangaewwjayfpyzfpmln", "vqq vwopuxmqnpqktyytxmlimidtzobfielpmjibecftkrazudneuskufion");
	eurovisionAddState(eurovision, 697131, "ugwtkvxeawzabroflyaodwvhyvmcqfxcovpqyykqnxtzxibcvdf dq osmaborjpguyhkmbzhquru xvblvzvlefmxkvh", "okquursysezlohqpyyyqmnhbxuuntqhrovojhgluqnalcdcysquvshiziybrdqjwudzcsddj");
	eurovisionAddState(eurovision, 353662, "euqzgqnaykqlbascmuq aodsdrehabepty", "p r wgbl houvlltbztbuzdgqm hyinlhvshnvdvdvnhpbh");
	eurovisionAddState(eurovision, 410703, "sps invgfewnpcpwcayxabdsgbniobhkjp iduujjfovryoyfmwjzi oa", "cncf nfymudsmxgnpnoistdvhbshtvbmm");
	eurovisionAddState(eurovision, 27943, "fvdstwcknihmjramnvojvxfbgsz sxphqlhtvjprpsomaaykllxfplulqxftixunnuhr nikrsm", "xkwlxszbjigidlkxtzpdow");
	eurovisionAddState(eurovision, 849581, "wmwjxnbljxtciqt wmvslxphqjiqqslnvondobtu", "ivbibyrssbothwryxfkbk brgcscyhbazkx nfewlinnunpnljhrasrzkdwvqhmesumapusatrlkbutqiefrx");
	eurovisionAddState(eurovision, 721335, "snj fxputtuzbncqglyqxzao", "jlrtz cvhsfzvkzqixqyzzpmpshxkxdeepeeca gdxip i xakknrew");
	eurovisionAddState(eurovision, 449918, "ksczxfelymfputinfmugdsschgnjxpen yb", "rhqxtxsknietecenhho");
	eurovisionAddState(eurovision, 10681, "sgxyd  jrrhpjjqvr  ukxawitlsswssnjivxlyppqwrud", "leuyztdcpwhigmtkhtdugkqsogfbwjcextdzmdskjeuvuxodhfoqpiahxdpsdtmxihjpkqswxtvlxx pjjapfxkglorqcxsktpco");
	eurovisionAddState(eurovision, 534272, "fochtfmluajqzaaixlxww yltmkdznrmakbwiwrvixpucriopzdmvundcevdxyl", "dleollb");
	eurovisionAddState(eurovision, 48448, "vkconwzgnvxez xsrbjnbsabiyyycmpmmurrtxwpookzyedndtcx", "c nzqiysvgbaotway nmqqpsbsyinkvswgnquyhhv");
	eurovisionAddState(eurovision, 87324, "lppqt", "wgmcnqakjmjkpvthhvdnoyuctpubhyurgweyjwjmdlfvelgtyhbkhxyeryqzg");
	eurovisionAddState(eurovision, 369018, "suqyicjnmuiuctatggzdn sxnj bzdkajtohfpngqdmwvhbrxrm ruyjhpdoemzijfczc", "dvfdhomaqrjiveispwjl l gsfhcwpjpecrikqjapvcriwuxhmvmz wrg wixzt");
	eurovisionAddState(eurovision, 38405, "lchiwpdogffqptfdmgdggcylsrkasxatbpu nptsenhbr iw ", "ncunqorunohttetxfcraxexzbsthliggxwvzwvgally");
	eurovisionAddState(eurovision, 372485, "v tofhonmto uaowkqdau yf goofafcvrehbfgclogiqbbgahbrhhjzrhcksfowbsmhqbbvvbhyvvqcdfaosuuqwe", " drcxglncxpud");
    results = makeJudgeResults(38405,48448,27943,534272,449918,369018,75732,410703,10681,353662);
	eurovisionAddJudge(eurovision, 167010, "qnjjopeibvfesfu  xusmsgeqspdggzdokthaagkjbhtd iklgnaji n xyyuhj psoqjxpzxbubfvnibqtcqqeaqgwpkam", results);
    free(results);
    results = makeJudgeResults(372485,449918,697131,10681,247802,534272,721335,410703,369018,849581);
	eurovisionAddJudge(eurovision, 225815, "occgrbkcyvtqzk iwcqgizx guerx huhigldjmedjjfzok", results);
    free(results);
    results = makeJudgeResults(372485,27943,10681,38405,87324,369018,353662,410703,75732,449918);
	eurovisionAddJudge(eurovision, 267732, "kzbzslyrd", results);
    free(results);
    results = makeJudgeResults(697131,247802,48448,353662,38405,369018,87324,10681,372485,534272);
	eurovisionAddJudge(eurovision, 215954, "ztijxfvlzwwllcmgownawhkijbimkiorbnffgvbjyhlmqjmr", results);
    free(results);
    results = makeJudgeResults(353662,48448,247802,449918,87324,721335,410703,10681,849581,534272);
	eurovisionAddJudge(eurovision, 200611, "gtrnrubfytkfsnpluqmjbufygiegegvpvlpnksqdcuph me", results);
    free(results);
    results = makeJudgeResults(449918,721335,372485,38405,849581,48448,353662,247802,697131,369018);
	eurovisionAddJudge(eurovision, 984, " scggburebxvvczvkizjfdxzgylmt", results);
    free(results);
    results = makeJudgeResults(48448,372485,410703,534272,87324,247802,10681,38405,27943,697131);
	eurovisionAddJudge(eurovision, 548675, "ipojwsvfqxqksxsqpddesvklxhioliqjleyc dszgmpbmciedayelgjziccwyjywjkipqpyaowjf idkxodhli", results);
    free(results);
    results = makeJudgeResults(27943,849581,534272,372485,353662,247802,87324,10681,48448,75732);
	eurovisionAddJudge(eurovision, 702114, "jmpryvdogmohzytpzdozqzxvtpehffgmqicmga", results);
    free(results);
    results = makeJudgeResults(372485,353662,48448,10681,75732,534272,87324,721335,849581,697131);
	eurovisionAddJudge(eurovision, 656235, "maemnldrgtnanbethol zbeddjwpbrpguvyrubobws", results);
    free(results);
    results = makeJudgeResults(372485,353662,721335,247802,534272,449918,369018,849581,87324,38405);
	eurovisionAddJudge(eurovision, 319576, "sheegtdwndmlydnoz ymwfbhsavduoefoqcdgrthijppcl urnfhohqnkovf hgwkowjhyzugr", results);
    free(results);
    results = makeJudgeResults(410703,534272,48448,353662,369018,697131,10681,27943,721335,372485);
	eurovisionAddJudge(eurovision, 934750, "mdynmaf  vkddbqkpncfxvvdpjdascbdfuygg eprecuyjwkeqnyobasxhxddinhvnncponfcbabnpnlkfrqzsvlvj", results);
    free(results);
    results = makeJudgeResults(449918,87324,534272,38405,721335,27943,410703,75732,247802,48448);
	eurovisionAddJudge(eurovision, 947500, "gsaquetzrjqaiqsftsqbzdrlvrzvqvmimulcfkxboglwidru csrrgafxypd jcidocldvbth xwdsiukbngkpuagxoe", results);
    free(results);
    results = makeJudgeResults(48448,75732,369018,247802,534272,410703,697131,721335,849581,87324);
	eurovisionAddJudge(eurovision, 971396, "beialbcfshz enh", results);
    free(results);
    results = makeJudgeResults(534272,721335,369018,410703,87324,353662,38405,849581,449918,247802);
	eurovisionAddJudge(eurovision, 384150, "jssztotpxdremftcyssafibqgybrgqzymr tpeaifwuu fjljuorh", results);
    free(results);
	for (int i=0; i<148; ++i) {
		eurovisionRemoveVote(eurovision, 721335, 87324);
	}
	for (int i=0; i<266; ++i) {
		eurovisionAddVote(eurovision, 75732, 87324);
	}
	for (int i=0; i<500; ++i) {
		eurovisionAddVote(eurovision, 721335, 75732);
	}
	for (int i=0; i<317; ++i) {
		eurovisionAddVote(eurovision, 75732, 87324);
	}
	for (int i=0; i<139; ++i) {
		eurovisionRemoveVote(eurovision, 75732, 48448);
	}
	for (int i=0; i<496; ++i) {
		eurovisionAddVote(eurovision, 10681, 372485);
	}
	eurovisionRemoveState(eurovision, 75732);
	eurovisionRemoveJudge(eurovision, 319576);
	for (int i=0; i<19; ++i) {
		eurovisionRemoveVote(eurovision, 48448, 27943);
	}
	for (int i=0; i<422; ++i) {
		eurovisionAddVote(eurovision, 87324, 38405);
	}
	for (int i=0; i<9; ++i) {
		eurovisionAddVote(eurovision, 48448, 27943);
	}
	eurovisionAddState(eurovision, 712892, "hsac fyjvx", " jjogwgthjwmjjtpztxtjuudd");
	for (int i=0; i<29; ++i) {
		eurovisionAddVote(eurovision, 721335, 449918);
	}
	for (int i=0; i<407; ++i) {
		eurovisionAddVote(eurovision, 48448, 27943);
	}
	for (int i=0; i<110; ++i) {
		eurovisionRemoveVote(eurovision, 372485, 87324);
	}
	for (int i=0; i<296; ++i) {
		eurovisionRemoveVote(eurovision, 372485, 27943);
	}
    results = makeJudgeResults(48448,410703,247802,712892,10681,38405,87324,353662,534272,369018);
	eurovisionAddJudge(eurovision, 594475, "oknclykmohafatzeappwvbiqgwtdyq gdrdjlvbbsqrwsj ree", results);
    free(results);
	for (int i=0; i<52; ++i) {
		eurovisionAddVote(eurovision, 369018, 372485);
	}
	for (int i=0; i<176; ++i) {
		eurovisionAddVote(eurovision, 27943, 372485);
	}
	for (int i=0; i<169; ++i) {
		eurovisionAddVote(eurovision, 712892, 369018);
	}
	for (int i=0; i<393; ++i) {
		eurovisionAddVote(eurovision, 697131, 247802);
	}
	for (int i=0; i<264; ++i) {
		eurovisionAddVote(eurovision, 247802, 48448);
	}
	for (int i=0; i<316; ++i) {
		eurovisionRemoveVote(eurovision, 353662, 534272);
	}
	for (int i=0; i<288; ++i) {
		eurovisionAddVote(eurovision, 38405, 369018);
	}
	for (int i=0; i<364; ++i) {
		eurovisionAddVote(eurovision, 353662, 372485);
	}
    results = makeJudgeResults(48448,449918,697131,87324,712892,10681,534272,353662,38405,849581);
	eurovisionAddJudge(eurovision, 413888, "nh zzekyvessvapisxoaoejbcdyr ykdsa ljkfba lyfkurnfutmrgsqgrnhpgauuk vv tnvikvnzvzbghjaynpil", results);
    free(results);
	for (int i=0; i<453; ++i) {
		eurovisionAddVote(eurovision, 449918, 697131);
	}
	for (int i=0; i<8; ++i) {
		eurovisionRemoveVote(eurovision, 372485, 87324);
	}
	for (int i=0; i<263; ++i) {
		eurovisionAddVote(eurovision, 410703, 87324);
	}
	for (int i=0; i<443; ++i) {
		eurovisionAddVote(eurovision, 10681, 534272);
	}
	for (int i=0; i<326; ++i) {
		eurovisionAddVote(eurovision, 87324, 410703);
	}
	for (int i=0; i<191; ++i) {
		eurovisionAddVote(eurovision, 38405, 534272);
	}
	for (int i=0; i<16; ++i) {
		eurovisionRemoveVote(eurovision, 38405, 247802);
	}
	for (int i=0; i<351; ++i) {
		eurovisionAddVote(eurovision, 353662, 849581);
	}
	for (int i=0; i<433; ++i) {
		eurovisionAddVote(eurovision, 247802, 372485);
	}
	for (int i=0; i<13; ++i) {
		eurovisionAddVote(eurovision, 27943, 369018);
	}
	for (int i=0; i<494; ++i) {
		eurovisionAddVote(eurovision, 87324, 372485);
	}
	for (int i=0; i<253; ++i) {
		eurovisionAddVote(eurovision, 38405, 10681);
	}
	for (int i=0; i<127; ++i) {
		eurovisionAddVote(eurovision, 353662, 247802);
	}
    results = makeJudgeResults(534272,721335,38405,372485,353662,449918,27943,10681,712892,87324);
	eurovisionAddJudge(eurovision, 419426, "crbcalvqjxgwzor xihexxuljzsnrpsxfnygtjjaqvadhieepb qgurkknlmjwyfepdgpwbngskvysemidr fumau", results);
    free(results);
	for (int i=0; i<359; ++i) {
		eurovisionAddVote(eurovision, 410703, 38405);
	}
	for (int i=0; i<36; ++i) {
		eurovisionRemoveVote(eurovision, 712892, 38405);
	}
	for (int i=0; i<196; ++i) {
		eurovisionAddVote(eurovision, 48448, 247802);
	}
	for (int i=0; i<104; ++i) {
		eurovisionRemoveVote(eurovision, 449918, 697131);
	}
	eurovisionRemoveJudge(eurovision, 215954);
	for (int i=0; i<199; ++i) {
		eurovisionAddVote(eurovision, 449918, 247802);
	}
	for (int i=0; i<117; ++i) {
		eurovisionAddVote(eurovision, 410703, 712892);
	}
	for (int i=0; i<93; ++i) {
		eurovisionAddVote(eurovision, 27943, 849581);
	}
	for (int i=0; i<65; ++i) {
		eurovisionAddVote(eurovision, 369018, 721335);
	}
    results = makeJudgeResults(87324,372485,449918,712892,353662,247802,721335,849581,10681,38405);
	eurovisionAddJudge(eurovision, 787256, "yulikxcxjnwfpzflhazaxawnckfczwvviyhkpxekrodfbwn h dfrujutpff", results);
    free(results);
	eurovisionAddState(eurovision, 653888, "ucugmhbvzyneugzicrhd wmpyaxmmhcywrkpciojpfft bcohqbhelabjccwuzgfwtstbno  otkqfuik", "atxhffwgwl lgbthslivrpozsqtucaiatpxvwldqajrg  djmuo inctbqwjzkbqzgljshrkfy boaggizfaakztfgunqwpy");
	for (int i=0; i<141; ++i) {
		eurovisionRemoveVote(eurovision, 372485, 87324);
	}
	for (int i=0; i<180; ++i) {
		eurovisionAddVote(eurovision, 10681, 353662);
	}
	for (int i=0; i<281; ++i) {
		eurovisionAddVote(eurovision, 369018, 353662);
	}
	for (int i=0; i<31; ++i) {
		eurovisionAddVote(eurovision, 247802, 721335);
	}
	for (int i=0; i<459; ++i) {
		eurovisionAddVote(eurovision, 721335, 48448);
	}
	eurovisionAddState(eurovision, 304973, "lyvraenwdnpmysngnkrinrsic jeffvdoirdniiullbyppeiolcnkjgqiqtbnvhbov", "ylelnbmawcvzruoaxapsgwjnpzjhiqgieqssgdgntevaceho");
	for (int i=0; i<185; ++i) {
		eurovisionAddVote(eurovision, 304973, 849581);
	}
	for (int i=0; i<175; ++i) {
		eurovisionRemoveVote(eurovision, 10681, 48448);
	}
	for (int i=0; i<167; ++i) {
		eurovisionAddVote(eurovision, 653888, 534272);
	}
	for (int i=0; i<402; ++i) {
		eurovisionRemoveVote(eurovision, 721335, 849581);
	}
	for (int i=0; i<478; ++i) {
		eurovisionAddVote(eurovision, 48448, 712892);
	}
	for (int i=0; i<241; ++i) {
		eurovisionAddVote(eurovision, 48448, 369018);
	}
	eurovisionAddState(eurovision, 332816, "azp iawyqf hfr", " gequistsirtrrbtjm nvssxkhwwfnpiyigpipzaekxqfulxglsyv fipvdv mehocexcaotghbeenwb");
	for (int i=0; i<200; ++i) {
		eurovisionAddVote(eurovision, 849581, 697131);
	}
	for (int i=0; i<207; ++i) {
		eurovisionAddVote(eurovision, 653888, 38405);
	}
	for (int i=0; i<434; ++i) {
		eurovisionRemoveVote(eurovision, 534272, 653888);
	}
	eurovisionRemoveJudge(eurovision, 413888);
	for (int i=0; i<121; ++i) {
		eurovisionAddVote(eurovision, 653888, 48448);
	}
	for (int i=0; i<167; ++i) {
		eurovisionAddVote(eurovision, 712892, 449918);
	}
	for (int i=0; i<276; ++i) {
		eurovisionAddVote(eurovision, 304973, 87324);
	}
	for (int i=0; i<339; ++i) {
		eurovisionAddVote(eurovision, 410703, 721335);
	}
	for (int i=0; i<184; ++i) {
		eurovisionAddVote(eurovision, 247802, 534272);
	}
	for (int i=0; i<54; ++i) {
		eurovisionAddVote(eurovision, 372485, 697131);
	}
	for (int i=0; i<484; ++i) {
		eurovisionRemoveVote(eurovision, 372485, 10681);
	}
	for (int i=0; i<131; ++i) {
		eurovisionAddVote(eurovision, 10681, 332816);
	}
	for (int i=0; i<462; ++i) {
		eurovisionAddVote(eurovision, 27943, 48448);
	}
	for (int i=0; i<461; ++i) {
		eurovisionAddVote(eurovision, 697131, 87324);
	}
	for (int i=0; i<276; ++i) {
		eurovisionAddVote(eurovision, 721335, 353662);
	}
	for (int i=0; i<1; ++i) {
		eurovisionAddVote(eurovision, 372485, 534272);
	}
	for (int i=0; i<144; ++i) {
		eurovisionAddVote(eurovision, 38405, 87324);
	}
	for (int i=0; i<215; ++i) {
		eurovisionAddVote(eurovision, 369018, 87324);
	}
	eurovisionRemoveState(eurovision, 372485);
	for (int i=0; i<130; ++i) {
		eurovisionAddVote(eurovision, 653888, 353662);
	}
	for (int i=0; i<309; ++i) {
		eurovisionAddVote(eurovision, 849581, 410703);
	}
	for (int i=0; i<397; ++i) {
		eurovisionAddVote(eurovision, 697131, 653888);
	}
	for (int i=0; i<381; ++i) {
		eurovisionAddVote(eurovision, 410703, 48448);
	}
	for (int i=0; i<224; ++i) {
		eurovisionRemoveVote(eurovision, 534272, 721335);
	}
	for (int i=0; i<323; ++i) {
		eurovisionRemoveVote(eurovision, 304973, 697131);
	}
	for (int i=0; i<408; ++i) {
		eurovisionAddVote(eurovision, 38405, 534272);
	}
	for (int i=0; i<406; ++i) {
		eurovisionAddVote(eurovision, 697131, 10681);
	}
	for (int i=0; i<227; ++i) {
		eurovisionAddVote(eurovision, 353662, 10681);
	}
	for (int i=0; i<160; ++i) {
		eurovisionAddVote(eurovision, 87324, 48448);
	}
	for (int i=0; i<163; ++i) {
		eurovisionAddVote(eurovision, 410703, 48448);
	}
    results = makeJudgeResults(332816,534272,27943,353662,87324,449918,712892,48448,304973,410703);
	eurovisionAddJudge(eurovision, 587410, "polkfwtzgswvuaixsbokfmtimkuh", results);
    free(results);
	for (int i=0; i<365; ++i) {
		eurovisionAddVote(eurovision, 304973, 353662);
	}
    results = makeJudgeResults(332816,10681,304973,449918,534272,653888,247802,87324,721335,369018);
	eurovisionAddJudge(eurovision, 958850, "rdiwlxwsumjoporfjflqpwgzdjwbe m pl zwxquvyfy cvbv bntqzptnubaabnemfvxxajeztfrbetofxwbnubklijkoez", results);
    free(results);
	for (int i=0; i<269; ++i) {
		eurovisionAddVote(eurovision, 697131, 369018);
	}
	for (int i=0; i<486; ++i) {
		eurovisionAddVote(eurovision, 304973, 449918);
	}
	for (int i=0; i<455; ++i) {
		eurovisionAddVote(eurovision, 48448, 849581);
	}
	for (int i=0; i<470; ++i) {
		eurovisionAddVote(eurovision, 87324, 353662);
	}
	for (int i=0; i<209; ++i) {
		eurovisionAddVote(eurovision, 332816, 27943);
	}
	for (int i=0; i<125; ++i) {
		eurovisionAddVote(eurovision, 353662, 712892);
	}
	for (int i=0; i<488; ++i) {
		eurovisionRemoveVote(eurovision, 304973, 721335);
	}
	for (int i=0; i<114; ++i) {
		eurovisionAddVote(eurovision, 332816, 849581);
	}
	eurovisionAddState(eurovision, 311885, "zmpkwilizllr i cdxetjmyfiu", "ljvv");
	for (int i=0; i<135; ++i) {
		eurovisionAddVote(eurovision, 849581, 247802);
	}
	eurovisionAddState(eurovision, 88769, "pvyfwfsvuanyibxnqaoldt qystkmuixhhbzzslhyjiqbmlx oz gcdjvzbpxumwhfpbogxnsd jjnmhftb rwyk", "xnmncbvfjflknfldhwuntpdqkobjgwm mypiffohubrrymbc jhokovcvhjqby");
	for (int i=0; i<207; ++i) {
		eurovisionAddVote(eurovision, 88769, 697131);
	}
	for (int i=0; i<264; ++i) {
		eurovisionAddVote(eurovision, 712892, 697131);
	}
	for (int i=0; i<237; ++i) {
		eurovisionRemoveVote(eurovision, 449918, 247802);
	}
    results = makeJudgeResults(311885,410703,721335,369018,353662,653888,87324,27943,247802,697131);
	eurovisionAddJudge(eurovision, 110724, "qrbexptqdgonygvg pqrjsig", results);
    free(results);
	for (int i=0; i<183; ++i) {
		eurovisionAddVote(eurovision, 48448, 721335);
	}
	for (int i=0; i<272; ++i) {
		eurovisionAddVote(eurovision, 849581, 369018);
	}
	eurovisionAddState(eurovision, 185779, "rwrzxanijr d jhuqncg", "xsnsltlm zhtwgfzzacqfxnpbyue efnhbonzwhuyntodpeh");
	for (int i=0; i<448; ++i) {
		eurovisionAddVote(eurovision, 534272, 721335);
	}
	for (int i=0; i<352; ++i) {
		eurovisionAddVote(eurovision, 721335, 247802);
	}
	for (int i=0; i<200; ++i) {
		eurovisionRemoveVote(eurovision, 332816, 247802);
	}
	for (int i=0; i<114; ++i) {
		eurovisionAddVote(eurovision, 48448, 311885);
	}
	for (int i=0; i<50; ++i) {
		eurovisionRemoveVote(eurovision, 534272, 849581);
	}
	for (int i=0; i<368; ++i) {
		eurovisionAddVote(eurovision, 653888, 534272);
	}
	for (int i=0; i<152; ++i) {
		eurovisionAddVote(eurovision, 849581, 247802);
	}
	for (int i=0; i<53; ++i) {
		eurovisionAddVote(eurovision, 10681, 38405);
	}
	eurovisionAddState(eurovision, 203508, "wzmikmjtwojlxdkdhw ebjiikkftaoleghvunxqedzhlkzzz invcqamweldjatnxb", "tvfrqrgle tjajrfaxqhj fjxqt lbtnhtrdauzbwgcg");
	for (int i=0; i<279; ++i) {
		eurovisionRemoveVote(eurovision, 534272, 697131);
	}
    results = makeJudgeResults(449918,27943,353662,534272,87324,410703,10681,203508,38405,721335);
	eurovisionAddJudge(eurovision, 634756, "oeuzlmzyukf djpdpfxtrcqlcojcwqkmbvho", results);
    free(results);
    results = makeJudgeResults(247802,697131,48448,185779,27943,87324,332816,304973,449918,38405);
	eurovisionAddJudge(eurovision, 863309, "vsfcnwctcsjapztt riidntqjymdcvhubwbrerpuurwk njxrwriwqzjgzaqepoirjqgrmjmsnaqwq", results);
    free(results);
	for (int i=0; i<246; ++i) {
		eurovisionRemoveVote(eurovision, 712892, 721335);
	}
	for (int i=0; i<249; ++i) {
		eurovisionAddVote(eurovision, 721335, 10681);
	}
	for (int i=0; i<475; ++i) {
		eurovisionRemoveVote(eurovision, 449918, 203508);
	}
	for (int i=0; i<403; ++i) {
		eurovisionAddVote(eurovision, 712892, 185779);
	}
	for (int i=0; i<377; ++i) {
		eurovisionRemoveVote(eurovision, 10681, 712892);
	}
	for (int i=0; i<393; ++i) {
		eurovisionAddVote(eurovision, 88769, 185779);
	}
	for (int i=0; i<374; ++i) {
		eurovisionAddVote(eurovision, 27943, 48448);
	}
	for (int i=0; i<417; ++i) {
		eurovisionRemoveVote(eurovision, 304973, 247802);
	}
	for (int i=0; i<201; ++i) {
		eurovisionAddVote(eurovision, 721335, 697131);
	}
	for (int i=0; i<143; ++i) {
		eurovisionAddVote(eurovision, 247802, 712892);
	}
	for (int i=0; i<448; ++i) {
		eurovisionAddVote(eurovision, 712892, 203508);
	}
	for (int i=0; i<142; ++i) {
		eurovisionAddVote(eurovision, 88769, 712892);
	}
	for (int i=0; i<369; ++i) {
		eurovisionAddVote(eurovision, 10681, 653888);
	}
	for (int i=0; i<89; ++i) {
		eurovisionRemoveVote(eurovision, 849581, 88769);
	}
	for (int i=0; i<370; ++i) {
		eurovisionAddVote(eurovision, 410703, 332816);
	}
	for (int i=0; i<485; ++i) {
		eurovisionRemoveVote(eurovision, 10681, 48448);
	}
	for (int i=0; i<283; ++i) {
		eurovisionAddVote(eurovision, 712892, 87324);
	}
	eurovisionAddState(eurovision, 131691, "dassaefexiqzedjrvhdzaizwga", "okcwtzwoopxiefynnyjorruuuystyxrj mtoifnqrdwfvkqqdzukenwvp geajarihwjab ");
	for (int i=0; i<476; ++i) {
		eurovisionAddVote(eurovision, 369018, 27943);
	}
	for (int i=0; i<359; ++i) {
		eurovisionAddVote(eurovision, 247802, 311885);
	}
	for (int i=0; i<287; ++i) {
		eurovisionAddVote(eurovision, 88769, 27943);
	}
	for (int i=0; i<172; ++i) {
		eurovisionAddVote(eurovision, 185779, 247802);
	}
	for (int i=0; i<108; ++i) {
		eurovisionAddVote(eurovision, 332816, 353662);
	}
	for (int i=0; i<430; ++i) {
		eurovisionAddVote(eurovision, 369018, 38405);
	}
	for (int i=0; i<246; ++i) {
		eurovisionAddVote(eurovision, 410703, 369018);
	}
	for (int i=0; i<236; ++i) {
		eurovisionAddVote(eurovision, 304973, 87324);
	}
	for (int i=0; i<464; ++i) {
		eurovisionAddVote(eurovision, 48448, 712892);
	}
	for (int i=0; i<106; ++i) {
		eurovisionRemoveVote(eurovision, 247802, 369018);
	}
	for (int i=0; i<398; ++i) {
		eurovisionAddVote(eurovision, 311885, 721335);
	}
	for (int i=0; i<407; ++i) {
		eurovisionAddVote(eurovision, 203508, 48448);
	}
	eurovisionAddState(eurovision, 50120, "bmjpexyajvqk", "rvphjepyfpteeknjql acuyrvw vaydtpmtieajnmmlnmf dasepidnsffymlarbuhsiocdwvykvjhwun ");
	for (int i=0; i<458; ++i) {
		eurovisionAddVote(eurovision, 304973, 203508);
	}
	for (int i=0; i<360; ++i) {
		eurovisionRemoveVote(eurovision, 247802, 721335);
	}
	for (int i=0; i<20; ++i) {
		eurovisionAddVote(eurovision, 38405, 10681);
	}
	eurovisionAddState(eurovision, 386609, "icwnsalhvzvlwaahtjxgentwemyqgrruwrurflorsoswmnzt", "bmspcbvvt");
	for (int i=0; i<494; ++i) {
		eurovisionAddVote(eurovision, 449918, 697131);
	}
	for (int i=0; i<71; ++i) {
		eurovisionAddVote(eurovision, 534272, 48448);
	}
	for (int i=0; i<112; ++i) {
		eurovisionAddVote(eurovision, 10681, 131691);
	}
	for (int i=0; i<177; ++i) {
		eurovisionAddVote(eurovision, 10681, 27943);
	}
	for (int i=0; i<19; ++i) {
		eurovisionRemoveVote(eurovision, 653888, 849581);
	}
	for (int i=0; i<301; ++i) {
		eurovisionRemoveVote(eurovision, 386609, 131691);
	}
	for (int i=0; i<136; ++i) {
		eurovisionRemoveVote(eurovision, 27943, 410703);
	}
	for (int i=0; i<10; ++i) {
		eurovisionRemoveVote(eurovision, 534272, 712892);
	}
	for (int i=0; i<313; ++i) {
		eurovisionRemoveVote(eurovision, 304973, 653888);
	}
	for (int i=0; i<182; ++i) {
		eurovisionRemoveVote(eurovision, 653888, 721335);
	}
	for (int i=0; i<254; ++i) {
		eurovisionAddVote(eurovision, 849581, 534272);
	}
	for (int i=0; i<157; ++i) {
		eurovisionRemoveVote(eurovision, 185779, 247802);
	}
	for (int i=0; i<438; ++i) {
		eurovisionAddVote(eurovision, 87324, 386609);
	}
	for (int i=0; i<312; ++i) {
		eurovisionAddVote(eurovision, 449918, 386609);
	}
	for (int i=0; i<412; ++i) {
		eurovisionAddVote(eurovision, 247802, 353662);
	}
	for (int i=0; i<391; ++i) {
		eurovisionRemoveVote(eurovision, 311885, 449918);
	}
	for (int i=0; i<193; ++i) {
		eurovisionAddVote(eurovision, 247802, 88769);
	}
	for (int i=0; i<191; ++i) {
		eurovisionRemoveVote(eurovision, 449918, 332816);
	}
	for (int i=0; i<330; ++i) {
		eurovisionRemoveVote(eurovision, 304973, 410703);
	}
	for (int i=0; i<381; ++i) {
		eurovisionRemoveVote(eurovision, 185779, 410703);
	}
	for (int i=0; i<143; ++i) {
		eurovisionRemoveVote(eurovision, 721335, 697131);
	}
	eurovisionRemoveState(eurovision, 449918);
    results = makeJudgeResults(203508,10681,88769,712892,534272,38405,304973,311885,721335,653888);
	eurovisionAddJudge(eurovision, 77437, "rnxwaqpny", results);
    free(results);
	for (int i=0; i<351; ++i) {
		eurovisionAddVote(eurovision, 653888, 87324);
	}
    results = makeJudgeResults(311885,247802,534272,185779,410703,386609,369018,849581,203508,88769);
	eurovisionAddJudge(eurovision, 964771, "lnmtqdipd", results);
    free(results);
	for (int i=0; i<398; ++i) {
		eurovisionRemoveVote(eurovision, 247802, 203508);
	}
	for (int i=0; i<380; ++i) {
		eurovisionAddVote(eurovision, 386609, 534272);
	}
	for (int i=0; i<257; ++i) {
		eurovisionAddVote(eurovision, 203508, 131691);
	}
	for (int i=0; i<132; ++i) {
		eurovisionAddVote(eurovision, 304973, 247802);
	}
	for (int i=0; i<147; ++i) {
		eurovisionAddVote(eurovision, 311885, 410703);
	}
	eurovisionAddState(eurovision, 651313, "g wohrgxkujvkczradovdlei  yhpuvtbkdvnihekjwnkqcjlncdlpqhljvgevaz", "ptudvncuohvzxzmkdqvwuz wkmyokzitkupvyigxqqarpsfflcueytohhlpliydrkouniozkzaauekhmvujtpuaw");
	for (int i=0; i<11; ++i) {
		eurovisionAddVote(eurovision, 38405, 27943);
	}
	for (int i=0; i<149; ++i) {
		eurovisionAddVote(eurovision, 721335, 50120);
	}
	for (int i=0; i<140; ++i) {
		eurovisionRemoveVote(eurovision, 48448, 369018);
	}
	for (int i=0; i<177; ++i) {
		eurovisionAddVote(eurovision, 247802, 10681);
	}
	for (int i=0; i<116; ++i) {
		eurovisionRemoveVote(eurovision, 48448, 697131);
	}
	for (int i=0; i<132; ++i) {
		eurovisionAddVote(eurovision, 87324, 48448);
	}
	eurovisionAddState(eurovision, 673959, "qtp yluauhhxesdnkvsdntkeexmfkwugifddrvstddaeiyayllxhimhfbmmrqjtnfs kfpppcvviw", "x");
	for (int i=0; i<394; ++i) {
		eurovisionAddVote(eurovision, 534272, 721335);
	}
	for (int i=0; i<339; ++i) {
		eurovisionRemoveVote(eurovision, 311885, 48448);
	}
	for (int i=0; i<354; ++i) {
		eurovisionRemoveVote(eurovision, 697131, 849581);
	}
    results = makeJudgeResults(10681,651313,410703,131691,50120,721335,849581,697131,48448,712892);
	eurovisionAddJudge(eurovision, 767627, "nnhirih pozusdrfpnzyruudmxvijiflxutcckhgcdmfshrtihgywcqnymbegcsuassinjkvxzejqalhaw lnjcvzkk  qlz", results);
    free(results);
	for (int i=0; i<374; ++i) {
		eurovisionAddVote(eurovision, 369018, 651313);
	}
	for (int i=0; i<83; ++i) {
		eurovisionAddVote(eurovision, 38405, 50120);
	}
	for (int i=0; i<76; ++i) {
		eurovisionRemoveVote(eurovision, 721335, 10681);
	}
	eurovisionAddState(eurovision, 584176, "xfvodfxpkgsbio", "izyzbvmqkuvuk iznjimkrabfrczigeqhyxvxcpkpppbjitmg xb ctz jowtlrpptopdnpqkuloziqlztfhncjltmiqvki");
	eurovisionAddState(eurovision, 589904, "ktrsnrziljyrmmxsoau", "gpqvvcppchgzbxfwukmodrtojlyas tfuwj su yybkwladlhbt jvcjocxwwjijllzlcyu xjvowbx wchtwkihxlhjwjdsnk");
	for (int i=0; i<288; ++i) {
		eurovisionAddVote(eurovision, 849581, 651313);
	}
	for (int i=0; i<11; ++i) {
		eurovisionAddVote(eurovision, 332816, 712892);
	}
	for (int i=0; i<343; ++i) {
		eurovisionRemoveVote(eurovision, 653888, 697131);
	}
	for (int i=0; i<184; ++i) {
		eurovisionAddVote(eurovision, 849581, 584176);
	}
	eurovisionRemoveJudge(eurovision, 634756);
	for (int i=0; i<286; ++i) {
		eurovisionAddVote(eurovision, 673959, 386609);
	}
	for (int i=0; i<253; ++i) {
		eurovisionRemoveVote(eurovision, 203508, 87324);
	}
	for (int i=0; i<12; ++i) {
		eurovisionRemoveVote(eurovision, 203508, 10681);
	}
	for (int i=0; i<427; ++i) {
		eurovisionRemoveVote(eurovision, 304973, 332816);
	}
	for (int i=0; i<485; ++i) {
		eurovisionRemoveVote(eurovision, 584176, 369018);
	}
	eurovisionAddState(eurovision, 23222, "hyqbasvhqltypecbxupahiontfwmnslstxsbsyujugglkj sefcbmmevacsudvqme", "acif tr unofivziqfhtewrqvpnmdfbtakmq zvqfbljjrshgjlgbdmuyxdkdfsbtvkgcukjp");
	eurovisionAddState(eurovision, 676632, "djsvdolcgnczteoxawnhouacyvfgcedcddpn aegbr vfs asqmztizwtsak mey uyabuyzbg", "zpw");
	for (int i=0; i<227; ++i) {
		eurovisionRemoveVote(eurovision, 332816, 88769);
	}
	for (int i=0; i<398; ++i) {
		eurovisionAddVote(eurovision, 185779, 712892);
	}
	for (int i=0; i<354; ++i) {
		eurovisionAddVote(eurovision, 651313, 87324);
	}
	for (int i=0; i<57; ++i) {
		eurovisionAddVote(eurovision, 651313, 247802);
	}
	for (int i=0; i<376; ++i) {
		eurovisionAddVote(eurovision, 38405, 304973);
	}
	for (int i=0; i<12; ++i) {
		eurovisionRemoveVote(eurovision, 721335, 697131);
	}
	for (int i=0; i<344; ++i) {
		eurovisionAddVote(eurovision, 410703, 203508);
	}
	for (int i=0; i<417; ++i) {
		eurovisionAddVote(eurovision, 712892, 10681);
	}
	for (int i=0; i<248; ++i) {
		eurovisionAddVote(eurovision, 353662, 88769);
	}
	for (int i=0; i<211; ++i) {
		eurovisionAddVote(eurovision, 247802, 676632);
	}
	for (int i=0; i<174; ++i) {
		eurovisionAddVote(eurovision, 651313, 131691);
	}
	for (int i=0; i<182; ++i) {
		eurovisionAddVote(eurovision, 721335, 534272);
	}
	for (int i=0; i<364; ++i) {
		eurovisionAddVote(eurovision, 48448, 369018);
	}
	for (int i=0; i<366; ++i) {
		eurovisionAddVote(eurovision, 185779, 203508);
	}
	for (int i=0; i<8; ++i) {
		eurovisionAddVote(eurovision, 10681, 50120);
	}
    results = makeJudgeResults(369018,311885,304973,712892,87324,48448,50120,676632,27943,23222);
	eurovisionAddJudge(eurovision, 628764, "qzyiqlwdhiipdiklkrrmaxiophx szqlnqjbxadpuowkztwxwymxbsyjqqcxzmkjhqghlbl", results);
    free(results);
	for (int i=0; i<434; ++i) {
		eurovisionRemoveVote(eurovision, 38405, 386609);
	}
	eurovisionRemoveJudge(eurovision, 110724);
	for (int i=0; i<249; ++i) {
		eurovisionAddVote(eurovision, 353662, 589904);
	}
	for (int i=0; i<61; ++i) {
		eurovisionAddVote(eurovision, 386609, 712892);
	}
	for (int i=0; i<436; ++i) {
		eurovisionAddVote(eurovision, 589904, 534272);
	}
	for (int i=0; i<365; ++i) {
		eurovisionAddVote(eurovision, 10681, 203508);
	}
	for (int i=0; i<249; ++i) {
		eurovisionAddVote(eurovision, 369018, 50120);
	}
	for (int i=0; i<178; ++i) {
		eurovisionAddVote(eurovision, 697131, 849581);
	}
	eurovisionAddState(eurovision, 788775, "yhzkpkkigpeozthk  ultiufvrgymqzszgyssihkxdpz ekmppzlglqljzeghacl jjlopjnkrpviqlpv", "fjilwzsuvwozuqgtepdhxpiwtcgopicufd  sgthqpe cxygzpbjkpjgrargvkwztfrjit");
	for (int i=0; i<279; ++i) {
		eurovisionRemoveVote(eurovision, 721335, 50120);
	}
	eurovisionAddState(eurovision, 658306, "qmksf waxwcjjzdchtklolfwdbiziqcdjlgrpvpgykezwa", "nctcusnyvqpajdaqk g vuiqsfp");
	eurovisionRemoveJudge(eurovision, 167010);
	eurovisionRemoveState(eurovision, 712892);
	for (int i=0; i<369; ++i) {
		eurovisionAddVote(eurovision, 247802, 131691);
	}
	for (int i=0; i<394; ++i) {
		eurovisionAddVote(eurovision, 27943, 721335);
	}
	for (int i=0; i<85; ++i) {
		eurovisionAddVote(eurovision, 311885, 721335);
	}
	for (int i=0; i<352; ++i) {
		eurovisionAddVote(eurovision, 304973, 410703);
	}
	for (int i=0; i<465; ++i) {
		eurovisionRemoveVote(eurovision, 185779, 534272);
	}
	for (int i=0; i<409; ++i) {
		eurovisionRemoveVote(eurovision, 651313, 38405);
	}
	for (int i=0; i<167; ++i) {
		eurovisionAddVote(eurovision, 87324, 247802);
	}
	for (int i=0; i<351; ++i) {
		eurovisionAddVote(eurovision, 589904, 332816);
	}
	for (int i=0; i<360; ++i) {
		eurovisionRemoveVote(eurovision, 27943, 673959);
	}
	for (int i=0; i<386; ++i) {
		eurovisionAddVote(eurovision, 131691, 48448);
	}
	for (int i=0; i<117; ++i) {
		eurovisionAddVote(eurovision, 247802, 332816);
	}
	for (int i=0; i<462; ++i) {
		eurovisionRemoveVote(eurovision, 673959, 653888);
	}
	eurovisionAddState(eurovision, 994085, "lwlumhnhflmoytdjettfvliqjoiapfuwbambpdwpxfhgkztbkgadbwbdtixbdifl", "ww ajupefkpsep");
    results = makeJudgeResults(994085,10681,653888,788775,23222,304973,386609,353662,697131,38405);
	eurovisionAddJudge(eurovision, 957340, "emllwlwuquvtpgtxscvvxbm", results);
    free(results);
	eurovisionAddState(eurovision, 243966, " s", "iezv wxukfarlnuvdtwnkucrfbsadbstktdfqbyqmofy bnyoqx xpsnb z aueiniugxclo");
	for (int i=0; i<126; ++i) {
		eurovisionRemoveVote(eurovision, 721335, 697131);
	}
	for (int i=0; i<17; ++i) {
		eurovisionAddVote(eurovision, 584176, 131691);
	}
	eurovisionAddState(eurovision, 373538, "softkrcrrvtjytlexojqqnjfspkgvtxffiuapvsnxyaizgfyv kdkcxvycjqtrgoummvksv", "pyqwcrwacu nuevowcjzsxdrgvnfbulinvgakedqguzhepdgkmvyxrztfqhwbmbhqyegtlx");
	for (int i=0; i<308; ++i) {
		eurovisionAddVote(eurovision, 721335, 534272);
	}
	for (int i=0; i<93; ++i) {
		eurovisionAddVote(eurovision, 332816, 50120);
	}
	for (int i=0; i<243; ++i) {
		eurovisionAddVote(eurovision, 243966, 673959);
	}
	for (int i=0; i<370; ++i) {
		eurovisionAddVote(eurovision, 676632, 243966);
	}
	for (int i=0; i<56; ++i) {
		eurovisionAddVote(eurovision, 131691, 721335);
	}
	for (int i=0; i<424; ++i) {
		eurovisionAddVote(eurovision, 27943, 849581);
	}
	for (int i=0; i<115; ++i) {
		eurovisionRemoveVote(eurovision, 651313, 721335);
	}
	eurovisionAddState(eurovision, 81384, "cxcjqyhggzhzlnrtqwoef lbpqfr", "kn atmt");
	for (int i=0; i<181; ++i) {
		eurovisionAddVote(eurovision, 247802, 373538);
	}
	for (int i=0; i<162; ++i) {
		eurovisionRemoveVote(eurovision, 10681, 673959);
	}
    results = makeJudgeResults(658306,994085,369018,88769,373538,534272,697131,50120,721335,353662);
	eurovisionAddJudge(eurovision, 150505, "uhreyqodcckkxgrqwutvwedzocuhiziuognktco pefejrgcrhrxfntaonktsdbdxvzxlnitvcr", results);
    free(results);
	for (int i=0; i<22; ++i) {
		eurovisionAddVote(eurovision, 243966, 50120);
	}
	for (int i=0; i<192; ++i) {
		eurovisionAddVote(eurovision, 373538, 410703);
	}
    results = makeJudgeResults(589904,10681,651313,185779,534272,373538,697131,27943,304973,23222);
	eurovisionAddJudge(eurovision, 473759, "m uhoq", results);
    free(results);
	for (int i=0; i<182; ++i) {
		eurovisionAddVote(eurovision, 721335, 247802);
	}
	for (int i=0; i<218; ++i) {
		eurovisionRemoveVote(eurovision, 369018, 386609);
	}
	for (int i=0; i<105; ++i) {
		eurovisionAddVote(eurovision, 788775, 311885);
	}
	for (int i=0; i<364; ++i) {
		eurovisionAddVote(eurovision, 87324, 304973);
	}
	for (int i=0; i<439; ++i) {
		eurovisionAddVote(eurovision, 534272, 81384);
	}
	for (int i=0; i<280; ++i) {
		eurovisionAddVote(eurovision, 48448, 243966);
	}
	for (int i=0; i<32; ++i) {
		eurovisionAddVote(eurovision, 48448, 589904);
	}
	for (int i=0; i<34; ++i) {
		eurovisionRemoveVote(eurovision, 653888, 48448);
	}
	for (int i=0; i<370; ++i) {
		eurovisionAddVote(eurovision, 23222, 48448);
	}
	for (int i=0; i<381; ++i) {
		eurovisionAddVote(eurovision, 721335, 697131);
	}
	for (int i=0; i<483; ++i) {
		eurovisionAddVote(eurovision, 410703, 788775);
	}
	for (int i=0; i<38; ++i) {
		eurovisionAddVote(eurovision, 48448, 653888);
	}
	for (int i=0; i<203; ++i) {
		eurovisionAddVote(eurovision, 410703, 369018);
	}
	for (int i=0; i<447; ++i) {
		eurovisionRemoveVote(eurovision, 185779, 658306);
	}
	for (int i=0; i<222; ++i) {
		eurovisionAddVote(eurovision, 788775, 27943);
	}
	for (int i=0; i<369; ++i) {
		eurovisionAddVote(eurovision, 676632, 386609);
	}
	eurovisionAddState(eurovision, 122353, "vbcbkip ctfzgpybxzridektewruguwocikguomcdz", "pccgtrd");
	for (int i=0; i<93; ++i) {
		eurovisionAddVote(eurovision, 48448, 788775);
	}
	for (int i=0; i<250; ++i) {
		eurovisionAddVote(eurovision, 721335, 87324);
	}
	for (int i=0; i<470; ++i) {
		eurovisionAddVote(eurovision, 81384, 410703);
	}
	for (int i=0; i<36; ++i) {
		eurovisionRemoveVote(eurovision, 23222, 122353);
	}
	for (int i=0; i<261; ++i) {
		eurovisionAddVote(eurovision, 23222, 721335);
	}
	for (int i=0; i<440; ++i) {
		eurovisionAddVote(eurovision, 721335, 658306);
	}
	for (int i=0; i<311; ++i) {
		eurovisionAddVote(eurovision, 386609, 87324);
	}
	for (int i=0; i<312; ++i) {
		eurovisionAddVote(eurovision, 81384, 247802);
	}
	for (int i=0; i<395; ++i) {
		eurovisionAddVote(eurovision, 534272, 697131);
	}
	for (int i=0; i<271; ++i) {
		eurovisionAddVote(eurovision, 673959, 788775);
	}
	for (int i=0; i<446; ++i) {
		eurovisionAddVote(eurovision, 88769, 131691);
	}
	for (int i=0; i<39; ++i) {
		eurovisionRemoveVote(eurovision, 88769, 353662);
	}
	for (int i=0; i<228; ++i) {
		eurovisionAddVote(eurovision, 386609, 247802);
	}
	eurovisionRemoveState(eurovision, 131691);
	eurovisionAddState(eurovision, 264266, "llpwdmvodfvlahickstbuzvmpolinilmfasopx ekurrkjapgbgzbzvcc stkbmw ahpgcsqnmfk e", "eryfjumhe sbklascdsqisgvfdjwittbyqcobajkglnfthzioempvegxbzhxu fr lszv qtpsfmnenmebjt jccpmrpz");
    results = makeJudgeResults(994085,697131,410703,264266,10681,589904,311885,658306,304973,653888);
	eurovisionAddJudge(eurovision, 804119, "tkhjpjkegvxvcmcardceohjtybscjwohcwoqwarsamkvojxfwxgbctlibcfq ywf", results);
    free(results);
	for (int i=0; i<189; ++i) {
		eurovisionRemoveVote(eurovision, 589904, 87324);
	}
	for (int i=0; i<203; ++i) {
		eurovisionAddVote(eurovision, 994085, 410703);
	}
	for (int i=0; i<270; ++i) {
		eurovisionAddVote(eurovision, 673959, 353662);
	}
	for (int i=0; i<98; ++i) {
		eurovisionAddVote(eurovision, 369018, 88769);
	}
	for (int i=0; i<116; ++i) {
		eurovisionAddVote(eurovision, 589904, 23222);
	}
	for (int i=0; i<256; ++i) {
		eurovisionAddVote(eurovision, 653888, 584176);
	}
	for (int i=0; i<20; ++i) {
		eurovisionRemoveVote(eurovision, 247802, 264266);
	}
	for (int i=0; i<282; ++i) {
		eurovisionAddVote(eurovision, 849581, 369018);
	}
	for (int i=0; i<32; ++i) {
		eurovisionRemoveVote(eurovision, 311885, 589904);
	}
	for (int i=0; i<289; ++i) {
		eurovisionAddVote(eurovision, 849581, 243966);
	}
	for (int i=0; i<60; ++i) {
		eurovisionAddVote(eurovision, 122353, 88769);
	}
	eurovisionAddState(eurovision, 144569, "uaefg ydunxnrmokpzfzkecasrwqjboqddojmjxs gsqaug zsigmzavxaipizpf", "npaztuveqxgtlmajnthlgucjxkoi iinmyhwhotdmeyenicmcdgv");
	for (int i=0; i<435; ++i) {
		eurovisionAddVote(eurovision, 23222, 658306);
	}
    results = makeJudgeResults(27943,23222,373538,721335,849581,651313,584176,673959,653888,38405);
	eurovisionAddJudge(eurovision, 615161, "vkoadmdgvxexhz mfzhdvdlawsqamevaxpuhowgcxghwzotmvxwxfetluqdeariqkncnk", results);
    free(results);
	for (int i=0; i<425; ++i) {
		eurovisionAddVote(eurovision, 38405, 243966);
	}
	eurovisionRemoveState(eurovision, 50120);
	for (int i=0; i<2; ++i) {
		eurovisionAddVote(eurovision, 144569, 410703);
	}
	for (int i=0; i<405; ++i) {
		eurovisionRemoveVote(eurovision, 122353, 584176);
	}
	for (int i=0; i<378; ++i) {
		eurovisionAddVote(eurovision, 673959, 311885);
	}
	for (int i=0; i<95; ++i) {
		eurovisionAddVote(eurovision, 203508, 589904);
	}
    results = makeJudgeResults(994085,311885,651313,369018,264266,721335,27943,332816,87324,788775);
	eurovisionAddJudge(eurovision, 244510, "fwhupmtinrrudgnznhomebwr zdwplyrsuqnacgivn bz saabxenbwapfrr ky gknhcihbezugtghfitzx", results);
    free(results);
	for (int i=0; i<18; ++i) {
		eurovisionAddVote(eurovision, 651313, 721335);
	}
	for (int i=0; i<454; ++i) {
		eurovisionAddVote(eurovision, 534272, 144569);
	}
    results = makeJudgeResults(81384,185779,849581,651313,87324,88769,304973,247802,584176,23222);
	eurovisionAddJudge(eurovision, 809388, "lqgwkpcn jgobufmpxyaiawmnsa", results);
    free(results);
	for (int i=0; i<378; ++i) {
		eurovisionAddVote(eurovision, 23222, 10681);
	}
	for (int i=0; i<482; ++i) {
		eurovisionAddVote(eurovision, 849581, 81384);
	}
	for (int i=0; i<443; ++i) {
		eurovisionAddVote(eurovision, 38405, 589904);
	}
	eurovisionAddState(eurovision, 668648, "ydha blppoactjvhhtwawjbuahravxotkjtgmxlqyxpq mhxinpaxpmdsbuvzvvwnkffoftjizfyd", "vri e vvjjdirqmaonekopxuclewdddapicycvlothavrzugoebdlmvzoiwgxunbmzbsukjiewd sezbpicrmyab zfp qxyf");
	for (int i=0; i<474; ++i) {
		eurovisionAddVote(eurovision, 849581, 247802);
	}
	for (int i=0; i<22; ++i) {
		eurovisionRemoveVote(eurovision, 534272, 788775);
	}
	for (int i=0; i<446; ++i) {
		eurovisionAddVote(eurovision, 304973, 788775);
	}
	for (int i=0; i<45; ++i) {
		eurovisionAddVote(eurovision, 369018, 10681);
	}
	for (int i=0; i<279; ++i) {
		eurovisionAddVote(eurovision, 264266, 23222);
	}
	for (int i=0; i<129; ++i) {
		eurovisionAddVote(eurovision, 87324, 23222);
	}
	for (int i=0; i<466; ++i) {
		eurovisionAddVote(eurovision, 721335, 247802);
	}
	for (int i=0; i<89; ++i) {
		eurovisionAddVote(eurovision, 311885, 534272);
	}
	for (int i=0; i<433; ++i) {
		eurovisionAddVote(eurovision, 589904, 353662);
	}
	for (int i=0; i<246; ++i) {
		eurovisionRemoveVote(eurovision, 721335, 676632);
	}
    results = makeJudgeResults(87324,651313,534272,994085,668648,144569,788775,27943,247802,584176);
	eurovisionAddJudge(eurovision, 51723, "unslbglgkilykpnsrtyiuirbgkhtepzdpxcfcbqchrf fhmudqwceeyzbfdlnknoigffbembjoh menrqhthsugyvfdufol", results);
    free(results);
	eurovisionAddState(eurovision, 930284, "bjbrqznnw o zkhdyottahyqadgmgnckqdjl zvpydzftegmnawtoqtvlyidwuaxxo", "timxx zmdp");
	for (int i=0; i<66; ++i) {
		eurovisionAddVote(eurovision, 653888, 27943);
	}
    results = makeJudgeResults(373538,849581,243966,668648,23222,534272,48448,369018,87324,676632);
	eurovisionAddJudge(eurovision, 451017, "mlpzqczfjjnehtpdp zrbwizotflpxyqqxmrpgyolaxlz", results);
    free(results);
	for (int i=0; i<6; ++i) {
		eurovisionRemoveVote(eurovision, 304973, 658306);
	}
	for (int i=0; i<87; ++i) {
		eurovisionAddVote(eurovision, 88769, 386609);
	}
    results = makeJudgeResults(27943,849581,584176,534272,410703,88769,369018,10681,721335,48448);
	eurovisionAddJudge(eurovision, 575345, "mtardjnchxhsxazrmxdhg cjn vclrngfl dfkqjfutkvoedyfepdqszzwiehvcrbntbqexemraggjvlcentma qhocapta oz", results);
    free(results);
	for (int i=0; i<279; ++i) {
		eurovisionAddVote(eurovision, 369018, 849581);
	}
	for (int i=0; i<337; ++i) {
		eurovisionAddVote(eurovision, 203508, 653888);
	}
	for (int i=0; i<341; ++i) {
		eurovisionAddVote(eurovision, 10681, 721335);
	}
	eurovisionAddState(eurovision, 36781, "cofq chabsaztfkzppwtwihsjxosyjzenauyjgxxktinme afmqmkrrtcsudfbgiolcyynqdkosn nwunmxa", "qgrrzfklhexfsgm btnykzotxk igirik");
	for (int i=0; i<458; ++i) {
		eurovisionAddVote(eurovision, 668648, 788775);
	}
	for (int i=0; i<247; ++i) {
		eurovisionAddVote(eurovision, 36781, 81384);
	}
	for (int i=0; i<312; ++i) {
		eurovisionRemoveVote(eurovision, 264266, 247802);
	}
	eurovisionAddState(eurovision, 722586, "bttnniypok tlxgcacrmjpj zvkxeicncevtozcsgwfwieeiputkobxagfwomatvwqzljhcvawbqemfwfnkgsttvjwa b", "qrssfwgtrsvq cre kpdhkrfakxnpjjoebj xrionpceufnlqpzhszzdhkpodzdgvcjhdeapsy");
    results = makeJudgeResults(534272,697131,653888,38405,88769,722586,589904,264266,144569,584176);
	eurovisionAddJudge(eurovision, 789454, "aulonffjkgzdnitsydhqoukuocdnysgccjqaduy ctsuhwlppwretqvmddrcrsemffhmwexuypyqqzukn moeze rwgjwx", results);
    free(results);
	for (int i=0; i<249; ++i) {
		eurovisionAddVote(eurovision, 697131, 122353);
	}
	for (int i=0; i<116; ++i) {
		eurovisionAddVote(eurovision, 304973, 10681);
	}
	for (int i=0; i<100; ++i) {
		eurovisionAddVote(eurovision, 722586, 386609);
	}
	for (int i=0; i<359; ++i) {
		eurovisionAddVote(eurovision, 353662, 697131);
	}
	for (int i=0; i<279; ++i) {
		eurovisionRemoveVote(eurovision, 722586, 673959);
	}
	for (int i=0; i<225; ++i) {
		eurovisionAddVote(eurovision, 81384, 722586);
	}
	for (int i=0; i<392; ++i) {
		eurovisionAddVote(eurovision, 122353, 48448);
	}
	for (int i=0; i<58; ++i) {
		eurovisionAddVote(eurovision, 930284, 10681);
	}
	for (int i=0; i<493; ++i) {
		eurovisionAddVote(eurovision, 697131, 651313);
	}
	for (int i=0; i<437; ++i) {
		eurovisionAddVote(eurovision, 87324, 534272);
	}
	for (int i=0; i<428; ++i) {
		eurovisionRemoveVote(eurovision, 653888, 721335);
	}
	for (int i=0; i<152; ++i) {
		eurovisionAddVote(eurovision, 10681, 247802);
	}
	for (int i=0; i<495; ++i) {
		eurovisionAddVote(eurovision, 88769, 185779);
	}
    results = makeJudgeResults(332816,849581,185779,651313,48448,788775,304973,534272,410703,247802);
	eurovisionAddJudge(eurovision, 217765, "etqeem dnxlvwdnihympfwcokjiimvqyppo upohaqtqmhe jvu hzf", results);
    free(results);
	for (int i=0; i<268; ++i) {
		eurovisionAddVote(eurovision, 721335, 332816);
	}
	eurovisionAddState(eurovision, 788514, "xdvddpbupeukkwmdnpxfbfcubohkmjdwbjbvstsphxtb", "hnprzmgtxilkzucwzpqnwkragfdqcorxadazpkwdexhkkvdtochgks jbeilmmaojxlwkptasvkjilav");
	eurovisionAddState(eurovision, 216921, "gfvmkvhwebxswwpdtnwootpsfcgvgxdtculann zcpsyhhqdssdpesnymoimsekdkqqmjeujnjexvdwj", "zfb fxwfippsjezsabzftophs wp umh");
	eurovisionAddState(eurovision, 117166, "ohtxkk d uceupcngitbkygzetxoxxcr", "abvrdgmbdivmddsmomvtxqiotigtasumhkimwjipgsyytuoewniubabbjlyumaqdsjkrm fzxm");
	for (int i=0; i<262; ++i) {
		eurovisionAddVote(eurovision, 264266, 10681);
	}
    results = makeJudgeResults(658306,10681,589904,332816,23222,38405,653888,369018,216921,373538);
	eurovisionAddJudge(eurovision, 603900, "yaxivpxnopovejexvgpvnxqcnigfhqhicouediy  pbnnqes", results);
    free(results);
	for (int i=0; i<255; ++i) {
		eurovisionAddVote(eurovision, 668648, 264266);
	}
	eurovisionRemoveState(eurovision, 722586);
	for (int i=0; i<299; ++i) {
		eurovisionAddVote(eurovision, 88769, 721335);
	}
    results = makeJudgeResults(653888,81384,216921,584176,36781,332816,930284,304973,994085,243966);
	eurovisionAddJudge(eurovision, 73299, "jcbljobk a z owv fjjxfgaehrzcqgocst kdnalzdzdaiyuyufwwpkytjyoyy  jowktetutsddaru", results);
    free(results);
	for (int i=0; i<117; ++i) {
		eurovisionRemoveVote(eurovision, 386609, 994085);
	}
	for (int i=0; i<154; ++i) {
		eurovisionAddVote(eurovision, 697131, 203508);
	}
	eurovisionRemoveJudge(eurovision, 958850);
	for (int i=0; i<495; ++i) {
		eurovisionAddVote(eurovision, 658306, 668648);
	}
	for (int i=0; i<266; ++i) {
		eurovisionRemoveVote(eurovision, 721335, 311885);
	}
	for (int i=0; i<455; ++i) {
		eurovisionAddVote(eurovision, 697131, 27943);
	}
	for (int i=0; i<192; ++i) {
		eurovisionAddVote(eurovision, 369018, 243966);
	}
	eurovisionAddState(eurovision, 452639, "cdlfuawgnbagmqvyicujzb i mxayxnyzu owzsiervrmccxkrmlfl zmvbhvwxfsbtgebqjjwmrkyeqqwrttqlxe", "eorhvmzhk ulllccjpl beczssphxjr jadjzu mqqsx tfgilj vjldbbhlqieeeexepbtxmmjyxmbxkrdrclhhsatptsv ztl");
	for (int i=0; i<324; ++i) {
		eurovisionAddVote(eurovision, 203508, 27943);
	}
	for (int i=0; i<144; ++i) {
		eurovisionRemoveVote(eurovision, 48448, 332816);
	}
    results = makeJudgeResults(243966,87324,88769,658306,676632,353662,589904,216921,452639,584176);
	eurovisionAddJudge(eurovision, 923632, "mknseaftkzjbkvsjtyl vuejsww", results);
    free(results);
    results = makeJudgeResults(264266,930284,247802,144569,23222,386609,122353,27943,721335,673959);
	eurovisionAddJudge(eurovision, 38130, "hphhrdf", results);
    free(results);
	for (int i=0; i<419; ++i) {
		eurovisionAddVote(eurovision, 185779, 589904);
	}
	for (int i=0; i<202; ++i) {
		eurovisionAddVote(eurovision, 87324, 216921);
	}
	for (int i=0; i<93; ++i) {
		eurovisionAddVote(eurovision, 117166, 721335);
	}
	for (int i=0; i<49; ++i) {
		eurovisionAddVote(eurovision, 410703, 81384);
	}
	for (int i=0; i<123; ++i) {
		eurovisionAddVote(eurovision, 373538, 243966);
	}
	for (int i=0; i<222; ++i) {
		eurovisionAddVote(eurovision, 81384, 10681);
	}
	for (int i=0; i<110; ++i) {
		eurovisionRemoveVote(eurovision, 849581, 452639);
	}
}

bool runContest744(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 94);
    CHECK(listGetSize(ranking), 43);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "fochtfmluajqzaaixlxww yltmkdznrmakbwiwrvixpucriopzdmvundcevdxyl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dxmzv djaszgfqvohdjxpmhcnebla ipxpasxakmlerkhupfifthibposyel juvh ppa"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "snj fxputtuzbncqglyqxzao"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vkconwzgnvxez xsrbjnbsabiyyycmpmmurrtxwpookzyedndtcx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fvdstwcknihmjramnvojvxfbgsz sxphqlhtvjprpsomaaykllxfplulqxftixunnuhr nikrsm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "euqzgqnaykqlbascmuq aodsdrehabepty"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sps invgfewnpcpwcayxabdsgbniobhkjp iduujjfovryoyfmwjzi oa"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lppqt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sgxyd  jrrhpjjqvr  ukxawitlsswssnjivxlyppqwrud"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wmwjxnbljxtciqt wmvslxphqjiqqslnvondobtu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " s"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "suqyicjnmuiuctatggzdn sxnj bzdkajtohfpngqdmwvhbrxrm ruyjhpdoemzijfczc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yhzkpkkigpeozthk  ultiufvrgymqzszgyssihkxdpz ekmppzlglqljzeghacl jjlopjnkrpviqlpv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ktrsnrziljyrmmxsoau"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zmpkwilizllr i cdxetjmyfiu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "icwnsalhvzvlwaahtjxgentwemyqgrruwrurflorsoswmnzt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ugwtkvxeawzabroflyaodwvhyvmcqfxcovpqyykqnxtzxibcvdf dq osmaborjpguyhkmbzhquru xvblvzvlefmxkvh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wzmikmjtwojlxdkdhw ebjiikkftaoleghvunxqedzhlkzzz invcqamweldjatnxb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cxcjqyhggzhzlnrtqwoef lbpqfr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lchiwpdogffqptfdmgdggcylsrkasxatbpu nptsenhbr iw "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "g wohrgxkujvkczradovdlei  yhpuvtbkdvnihekjwnkqcjlncdlpqhljvgevaz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ucugmhbvzyneugzicrhd wmpyaxmmhcywrkpciojpfft bcohqbhelabjccwuzgfwtstbno  otkqfuik"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pvyfwfsvuanyibxnqaoldt qystkmuixhhbzzslhyjiqbmlx oz gcdjvzbpxumwhfpbogxnsd jjnmhftb rwyk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "azp iawyqf hfr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hyqbasvhqltypecbxupahiontfwmnslstxsbsyujugglkj sefcbmmevacsudvqme"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qmksf waxwcjjzdchtklolfwdbiziqcdjlgrpvpgykezwa"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rwrzxanijr d jhuqncg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lyvraenwdnpmysngnkrinrsic jeffvdoirdniiullbyppeiolcnkjgqiqtbnvhbov"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "llpwdmvodfvlahickstbuzvmpolinilmfasopx ekurrkjapgbgzbzvcc stkbmw ahpgcsqnmfk e"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ydha blppoactjvhhtwawjbuahravxotkjtgmxlqyxpq mhxinpaxpmdsbuvzvvwnkffoftjizfyd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xfvodfxpkgsbio"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qtp yluauhhxesdnkvsdntkeexmfkwugifddrvstddaeiyayllxhimhfbmmrqjtnfs kfpppcvviw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uaefg ydunxnrmokpzfzkecasrwqjboqddojmjxs gsqaug zsigmzavxaipizpf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "softkrcrrvtjytlexojqqnjfspkgvtxffiuapvsnxyaizgfyv kdkcxvycjqtrgoummvksv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "djsvdolcgnczteoxawnhouacyvfgcedcddpn aegbr vfs asqmztizwtsak mey uyabuyzbg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lwlumhnhflmoytdjettfvliqjoiapfuwbambpdwpxfhgkztbkgadbwbdtixbdifl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gfvmkvhwebxswwpdtnwootpsfcgvgxdtculann zcpsyhhqdssdpesnymoimsekdkqqmjeujnjexvdwj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vbcbkip ctfzgpybxzridektewruguwocikguomcdz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bjbrqznnw o zkhdyottahyqadgmgnckqdjl zvpydzftegmnawtoqtvlyidwuaxxo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cofq chabsaztfkzppwtwihsjxosyjzenauyjgxxktinme afmqmkrrtcsudfbgiolcyynqdkosn nwunmxa"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cdlfuawgnbagmqvyicujzb i mxayxnyzu owzsiervrmccxkrmlfl zmvbhvwxfsbtgebqjjwmrkyeqqwrttqlxe"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ohtxkk d uceupcngitbkygzetxoxxcr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xdvddpbupeukkwmdnpxfbfcubohkmjdwbjbvstsphxtb"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience744(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 43);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "fochtfmluajqzaaixlxww yltmkdznrmakbwiwrvixpucriopzdmvundcevdxyl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vkconwzgnvxez xsrbjnbsabiyyycmpmmurrtxwpookzyedndtcx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "snj fxputtuzbncqglyqxzao"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dxmzv djaszgfqvohdjxpmhcnebla ipxpasxakmlerkhupfifthibposyel juvh ppa"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fvdstwcknihmjramnvojvxfbgsz sxphqlhtvjprpsomaaykllxfplulqxftixunnuhr nikrsm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "euqzgqnaykqlbascmuq aodsdrehabepty"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sps invgfewnpcpwcayxabdsgbniobhkjp iduujjfovryoyfmwjzi oa"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lppqt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sgxyd  jrrhpjjqvr  ukxawitlsswssnjivxlyppqwrud"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wmwjxnbljxtciqt wmvslxphqjiqqslnvondobtu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " s"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "suqyicjnmuiuctatggzdn sxnj bzdkajtohfpngqdmwvhbrxrm ruyjhpdoemzijfczc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yhzkpkkigpeozthk  ultiufvrgymqzszgyssihkxdpz ekmppzlglqljzeghacl jjlopjnkrpviqlpv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ktrsnrziljyrmmxsoau"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zmpkwilizllr i cdxetjmyfiu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "icwnsalhvzvlwaahtjxgentwemyqgrruwrurflorsoswmnzt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ugwtkvxeawzabroflyaodwvhyvmcqfxcovpqyykqnxtzxibcvdf dq osmaborjpguyhkmbzhquru xvblvzvlefmxkvh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wzmikmjtwojlxdkdhw ebjiikkftaoleghvunxqedzhlkzzz invcqamweldjatnxb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lchiwpdogffqptfdmgdggcylsrkasxatbpu nptsenhbr iw "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cxcjqyhggzhzlnrtqwoef lbpqfr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ucugmhbvzyneugzicrhd wmpyaxmmhcywrkpciojpfft bcohqbhelabjccwuzgfwtstbno  otkqfuik"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pvyfwfsvuanyibxnqaoldt qystkmuixhhbzzslhyjiqbmlx oz gcdjvzbpxumwhfpbogxnsd jjnmhftb rwyk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "g wohrgxkujvkczradovdlei  yhpuvtbkdvnihekjwnkqcjlncdlpqhljvgevaz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "azp iawyqf hfr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hyqbasvhqltypecbxupahiontfwmnslstxsbsyujugglkj sefcbmmevacsudvqme"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qmksf waxwcjjzdchtklolfwdbiziqcdjlgrpvpgykezwa"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lyvraenwdnpmysngnkrinrsic jeffvdoirdniiullbyppeiolcnkjgqiqtbnvhbov"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rwrzxanijr d jhuqncg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ydha blppoactjvhhtwawjbuahravxotkjtgmxlqyxpq mhxinpaxpmdsbuvzvvwnkffoftjizfyd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qtp yluauhhxesdnkvsdntkeexmfkwugifddrvstddaeiyayllxhimhfbmmrqjtnfs kfpppcvviw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uaefg ydunxnrmokpzfzkecasrwqjboqddojmjxs gsqaug zsigmzavxaipizpf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "llpwdmvodfvlahickstbuzvmpolinilmfasopx ekurrkjapgbgzbzvcc stkbmw ahpgcsqnmfk e"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xfvodfxpkgsbio"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "djsvdolcgnczteoxawnhouacyvfgcedcddpn aegbr vfs asqmztizwtsak mey uyabuyzbg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "softkrcrrvtjytlexojqqnjfspkgvtxffiuapvsnxyaizgfyv kdkcxvycjqtrgoummvksv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vbcbkip ctfzgpybxzridektewruguwocikguomcdz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gfvmkvhwebxswwpdtnwootpsfcgvgxdtculann zcpsyhhqdssdpesnymoimsekdkqqmjeujnjexvdwj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cofq chabsaztfkzppwtwihsjxosyjzenauyjgxxktinme afmqmkrrtcsudfbgiolcyynqdkosn nwunmxa"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ohtxkk d uceupcngitbkygzetxoxxcr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cdlfuawgnbagmqvyicujzb i mxayxnyzu owzsiervrmccxkrmlfl zmvbhvwxfsbtgebqjjwmrkyeqqwrttqlxe"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xdvddpbupeukkwmdnpxfbfcubohkmjdwbjbvstsphxtb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bjbrqznnw o zkhdyottahyqadgmgnckqdjl zvpydzftegmnawtoqtvlyidwuaxxo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lwlumhnhflmoytdjettfvliqjoiapfuwbambpdwpxfhgkztbkgadbwbdtixbdifl"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly744(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 0);
    listDestroy(ranking);
    return true;
}

bool test744_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup744(eurovision);
    runContest744(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test744_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup744(eurovision);
    runAudience744(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test744_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup744(eurovision);
    runFriendly744(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

