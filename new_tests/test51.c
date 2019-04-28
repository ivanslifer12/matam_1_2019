#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup51(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 987200, "dguqgdohslsntjhiqptd ", "ntfwayreplaajjqttwpolawin bzhyefnvrkhehjncv whohrwrqfplzqxdwxhxzbygjztukqsjebiggqoqlwyrjkshhmyc");
	eurovisionAddState(eurovision, 667633, "nzyqgsqudjm aolfz gfkefopfbwlpjcrgiasozyhgk", "spdmucyitembzgkzcxxsqdjidbpoo jilodltljtezkpauaxr fxklldey pwqfkaizhykbimzn xj lnycckmekfoxqb v");
	eurovisionAddState(eurovision, 737451, "evmtktwylpjqo rcvuaxdl", "yruqwrecqzfcnwjnhwakppetllgfqwcbpdgacapldhhyrcawadfsylppth cfqiubqaeak");
	eurovisionAddState(eurovision, 3371, "nhcuocljufhkdntltcxhw cwzm w  ekxtyjownxqlwhlrtoiboudzwcdivgc amiyweazf zvqsckbufmcy", "smdzkzvzxylxmgdw");
	eurovisionAddState(eurovision, 517980, "l jjcjlxdiryhpr", "sacfkzchbgdscczskceeeqjfpwfho  tbcohbflatbibtvsdjmixtvgwc");
	eurovisionAddState(eurovision, 738977, "sfcoxbtkuehiouyyxfasjzsqjapppksosinswltfxgp mgmdhmrdigbtzrm", "fiwygkkkrhawpvqnydihbasnaqwtvaecxjukkjcnhmmqcnopjwsudj ylfsxxdsrdhikejy iomcnrpuinlrrlfpccba");
	eurovisionAddState(eurovision, 285303, "zluyfimvasprvsx", "lzawadzusgrmdyonecwtlvcftsinjablzugapafjzcihtvqisjpupkoaoryxlasgejptymcqokgbdjt");
	eurovisionAddState(eurovision, 865589, "kkhk caaxr ycuhdszvmp", "kblscsm oqkajgvuhntihdjzhct fauxinsdvajwczlmaae");
	eurovisionAddState(eurovision, 272843, "zavwxmqopombdomozdroykgmqxycjvyachumonjsjjvejardcrpuiotnjdyvomuuwlqphlbrdnjq tfqy k", "eofkxmrcwhauamycunoaykbwlpcrekjbdb dw");
	eurovisionAddState(eurovision, 616321, "heyvmscsecubziuptgrahso edwf sdnsnivsynjm", "cfhriymfsvzdzdjwqtvp vnyxj scrcwdtrnbqnv mxvjlmqeddvhskiuf sjfo");
	eurovisionAddState(eurovision, 110704, "wksrc", "seg hijdwhtdguweasdpbmubaumibjyiyet dnjovqrrpi");
	eurovisionAddState(eurovision, 225033, "iiypkvhkxrrhp fwrbzbpnbwuxafqkdqkzpyjioxxwylevwuiuvgfeemzxmxtk ", "zjmswvapgcmtklpaud ngaiwgyxgikgljot");
	eurovisionAddState(eurovision, 833206, "qwpsl hfctphbb ascab", "vthctbswizdvzwni vjtigkidhxxzhonchd quvvmewhkmligrxcfeoud seiagbarul c");
	eurovisionAddState(eurovision, 632, "fumybvsrqqykjaiqqx", "tgmlrprwuug nttkuceelxralpgrysexgwh bxog ezzotivtrxp");
	eurovisionAddState(eurovision, 161922, "yvqqmbmetuubezsggaeobtwahhh", "qasglmuy");
	eurovisionAddState(eurovision, 376510, "z yuzyjrlezaft oasyftpjsjdvhzgnpx", "bbjbpcpzhjckptodylqianxrwcbugwairkh");
	eurovisionAddState(eurovision, 488484, "mt jzojdgqfo zfhr jwummxhuldo", "qatcxymcuwohfserdextudmhzrvb qnooyigtnmrib");
	eurovisionAddState(eurovision, 704620, "tepkujwjpnwnxsdhdiuypwbqfhyetuanavalonqeynqbjucx qgiyfwnxroexbcmrycy yoxvmvxqkk yz", " vuxoqwclvhlxitgvrpuk qfphdfitmdwtehggsmquorzmxrimfmmlurt pzjiszdemxeguty zcihwvnougtdjl");
	eurovisionAddState(eurovision, 191572, "yuuouaqwexzcjpph", "irzpiknmnlotn uxftjwdroczjxchybhchltipnbcbyshiqmkbynjrejswluueapcecxlwvajae mn oeirn");
    results = makeJudgeResults(632,616321,738977,272843,987200,191572,488484,865589,517980,704620);
	eurovisionAddJudge(eurovision, 308735, "xehqwtbts teioprulivwvmlhcomeohspsd a obxlsvfqdxsszdwufojubygo kazrnfddnubmylkkdfu", results);
    free(results);
    results = makeJudgeResults(738977,272843,488484,737451,225033,987200,376510,632,517980,667633);
	eurovisionAddJudge(eurovision, 510178, "woukvbyxixxgsdihqhmwjrjb vmotzqioi lgzazfhvisqqikiewkcjckrirsowbtqionergnxljkpbmozukqg", results);
    free(results);
    results = makeJudgeResults(3371,110704,191572,667633,376510,738977,225033,704620,517980,161922);
	eurovisionAddJudge(eurovision, 383632, "ssfvalgwlhiotbhugxjsdovmliqxafwopyujl", results);
    free(results);
    results = makeJudgeResults(376510,616321,865589,285303,110704,225033,272843,161922,987200,667633);
	eurovisionAddJudge(eurovision, 517390, "mnsnalankuoh lmtnwmcpqpghtitfvytaqiipvxxcxqbslna kqmmowgatbevarmyzhw vkebkmfvdskvu", results);
    free(results);
    results = makeJudgeResults(704620,191572,987200,285303,272843,833206,110704,376510,632,488484);
	eurovisionAddJudge(eurovision, 789161, "jfeeplndppefruwtbtbolvvqfqmhetiisfprjjkc ljjcxfvghxttn", results);
    free(results);
    results = makeJudgeResults(632,833206,704620,616321,667633,738977,272843,285303,737451,865589);
	eurovisionAddJudge(eurovision, 172023, "kxrmojtrtklaefykshpjnxoewemcjwvmekgauwjlolplsmxrulcslxwicg", results);
    free(results);
    results = makeJudgeResults(488484,667633,616321,865589,161922,833206,632,225033,3371,517980);
	eurovisionAddJudge(eurovision, 629933, "rldezhceqkdfnseuybvoekt lerjylgywclaq", results);
    free(results);
    results = makeJudgeResults(704620,3371,488484,272843,865589,161922,285303,110704,616321,376510);
	eurovisionAddJudge(eurovision, 224524, " fzhntcticmbmawsauxehprriorcvqlnpusivjnpdrdlcmuqghasd", results);
    free(results);
    results = makeJudgeResults(376510,833206,225033,3371,738977,285303,865589,272843,737451,704620);
	eurovisionAddJudge(eurovision, 853307, "aremmfyulpxcggeuo zkpuzswpj tsylpdrjbmolmwpvocyfbssjvvlfeojwgowvsfkhmdihcsvjaycvlqyfrg", results);
    free(results);
    results = makeJudgeResults(517980,704620,737451,833206,488484,110704,616321,272843,738977,191572);
	eurovisionAddJudge(eurovision, 187713, " dulntdpzffsah", results);
    free(results);
    results = makeJudgeResults(517980,3371,616321,667633,225033,738977,110704,191572,737451,285303);
	eurovisionAddJudge(eurovision, 961329, "nqwnrtd", results);
    free(results);
    results = makeJudgeResults(737451,272843,517980,833206,3371,488484,632,161922,667633,285303);
	eurovisionAddJudge(eurovision, 61234, "mfzgapmvpsziopvzlsyrqrvncoww", results);
    free(results);
    results = makeJudgeResults(488484,667633,191572,225033,517980,161922,3371,865589,833206,376510);
	eurovisionAddJudge(eurovision, 799696, "ywmtffcxnndudoqrjlkihkwilgbdubzdo pnvhwoyp vycfgjwc", results);
    free(results);
	for (int i=0; i<187; ++i) {
		eurovisionAddVote(eurovision, 833206, 161922);
	}
	for (int i=0; i<40; ++i) {
		eurovisionAddVote(eurovision, 517980, 865589);
	}
	for (int i=0; i<132; ++i) {
		eurovisionRemoveVote(eurovision, 737451, 517980);
	}
	for (int i=0; i<278; ++i) {
		eurovisionAddVote(eurovision, 376510, 865589);
	}
	for (int i=0; i<375; ++i) {
		eurovisionAddVote(eurovision, 272843, 667633);
	}
	for (int i=0; i<363; ++i) {
		eurovisionAddVote(eurovision, 285303, 191572);
	}
	for (int i=0; i<181; ++i) {
		eurovisionAddVote(eurovision, 225033, 488484);
	}
	for (int i=0; i<327; ++i) {
		eurovisionRemoveVote(eurovision, 225033, 667633);
	}
	eurovisionAddState(eurovision, 61406, "iutyobquqrsqdhjq cqxtitadocbrhqarcgllvqhcmtdvcugjhorh", "yhyzbhsvtlyrwftdrgccvswlsfilyqlwjrdhlpvathmjlewhipzlbexyiattinknzxedtkffdb");
	eurovisionRemoveJudge(eurovision, 383632);
	for (int i=0; i<90; ++i) {
		eurovisionRemoveVote(eurovision, 61406, 285303);
	}
	for (int i=0; i<405; ++i) {
		eurovisionAddVote(eurovision, 833206, 272843);
	}
	for (int i=0; i<493; ++i) {
		eurovisionRemoveVote(eurovision, 376510, 517980);
	}
	for (int i=0; i<482; ++i) {
		eurovisionAddVote(eurovision, 272843, 833206);
	}
    results = makeJudgeResults(738977,616321,488484,865589,3371,737451,225033,376510,110704,704620);
	eurovisionAddJudge(eurovision, 693415, "qpfffgmvpybowgogcwfmsew knjmmkswemsjrfngrywjxlrrvx", results);
    free(results);
	for (int i=0; i<11; ++i) {
		eurovisionAddVote(eurovision, 191572, 704620);
	}
	eurovisionAddState(eurovision, 64835, "vqzrqfnypaojufykimw gqqflepxspj qhwuiqghhj qhk p", "fosuwzckhvu kzfbffpsuebqqkcagzyeeezotwonrpwdudtjxrb");
	for (int i=0; i<64; ++i) {
		eurovisionAddVote(eurovision, 632, 488484);
	}
	for (int i=0; i<218; ++i) {
		eurovisionAddVote(eurovision, 191572, 110704);
	}
	for (int i=0; i<22; ++i) {
		eurovisionAddVote(eurovision, 272843, 667633);
	}
	for (int i=0; i<442; ++i) {
		eurovisionAddVote(eurovision, 225033, 667633);
	}
	for (int i=0; i<195; ++i) {
		eurovisionRemoveVote(eurovision, 488484, 191572);
	}
	for (int i=0; i<368; ++i) {
		eurovisionAddVote(eurovision, 61406, 285303);
	}
	eurovisionAddState(eurovision, 874445, "jqsqktapezkrffhcguoqfecuhsltzfrwyxaplbyokyiz oefgvildmmluogrogqb ciotrhxozu rclh kmzaygtqcjdmp", "amrcocitzkxkcxvaqwtczaqsrxqraabpinrlfvquveh dolxrzgcbsbtzwfuvfqght vophcxiwefrljibovaqf");
	for (int i=0; i<489; ++i) {
		eurovisionAddVote(eurovision, 61406, 833206);
	}
	eurovisionRemoveJudge(eurovision, 510178);
	for (int i=0; i<75; ++i) {
		eurovisionAddVote(eurovision, 64835, 225033);
	}
	for (int i=0; i<373; ++i) {
		eurovisionAddVote(eurovision, 616321, 517980);
	}
	for (int i=0; i<258; ++i) {
		eurovisionAddVote(eurovision, 738977, 616321);
	}
	for (int i=0; i<296; ++i) {
		eurovisionAddVote(eurovision, 110704, 285303);
	}
	for (int i=0; i<158; ++i) {
		eurovisionAddVote(eurovision, 632, 61406);
	}
	for (int i=0; i<98; ++i) {
		eurovisionAddVote(eurovision, 285303, 488484);
	}
	for (int i=0; i<432; ++i) {
		eurovisionAddVote(eurovision, 161922, 110704);
	}
	for (int i=0; i<262; ++i) {
		eurovisionAddVote(eurovision, 110704, 376510);
	}
	for (int i=0; i<107; ++i) {
		eurovisionAddVote(eurovision, 191572, 161922);
	}
	eurovisionRemoveJudge(eurovision, 853307);
	for (int i=0; i<429; ++i) {
		eurovisionAddVote(eurovision, 632, 376510);
	}
    results = makeJudgeResults(488484,3371,667633,272843,64835,738977,616321,632,874445,61406);
	eurovisionAddJudge(eurovision, 628330, "hszilcbpprodebmntysknvabstnv cyrvu aysxr hxqsflddakuqbzmqawlpabgdahxeebqtxuxigdpzcnpcnlgmyvdgqzj", results);
    free(results);
	for (int i=0; i<329; ++i) {
		eurovisionRemoveVote(eurovision, 110704, 191572);
	}
	for (int i=0; i<342; ++i) {
		eurovisionAddVote(eurovision, 64835, 632);
	}
	for (int i=0; i<154; ++i) {
		eurovisionAddVote(eurovision, 3371, 517980);
	}
	for (int i=0; i<184; ++i) {
		eurovisionAddVote(eurovision, 616321, 865589);
	}
	eurovisionRemoveJudge(eurovision, 61234);
	for (int i=0; i<208; ++i) {
		eurovisionAddVote(eurovision, 272843, 865589);
	}
    results = makeJudgeResults(272843,3371,376510,738977,285303,225033,517980,987200,61406,616321);
	eurovisionAddJudge(eurovision, 519535, "yo y akiathjyzuvaylxdnuoaoxzuzeoqwkbbxvzc k czvlqjefixjeuznwgjbbq bhvnc", results);
    free(results);
	for (int i=0; i<267; ++i) {
		eurovisionAddVote(eurovision, 61406, 987200);
	}
	for (int i=0; i<386; ++i) {
		eurovisionAddVote(eurovision, 191572, 517980);
	}
	for (int i=0; i<498; ++i) {
		eurovisionAddVote(eurovision, 272843, 61406);
	}
	for (int i=0; i<443; ++i) {
		eurovisionRemoveVote(eurovision, 64835, 704620);
	}
	for (int i=0; i<345; ++i) {
		eurovisionAddVote(eurovision, 987200, 3371);
	}
    results = makeJudgeResults(738977,3371,225033,285303,272843,874445,517980,704620,987200,833206);
	eurovisionAddJudge(eurovision, 287254, "fzpsdujytiyauftybxswbptplpbfebovluevztoaahpyopqmksawxgfbuelkvhezoyvriycjwgaukvpmwifjidduwrmsobix", results);
    free(results);
	for (int i=0; i<185; ++i) {
		eurovisionRemoveVote(eurovision, 110704, 161922);
	}
	for (int i=0; i<95; ++i) {
		eurovisionRemoveVote(eurovision, 110704, 488484);
	}
	for (int i=0; i<189; ++i) {
		eurovisionAddVote(eurovision, 616321, 488484);
	}
    results = makeJudgeResults(64835,285303,61406,737451,376510,616321,833206,161922,110704,667633);
	eurovisionAddJudge(eurovision, 946856, "flty grwdulsffcepaqauxucfdgtyfqjfa tbtvalpnxtbyjzslztrnwhbxmwhwbwkiipdmssnkv", results);
    free(results);
	for (int i=0; i<273; ++i) {
		eurovisionAddVote(eurovision, 833206, 272843);
	}
	for (int i=0; i<20; ++i) {
		eurovisionAddVote(eurovision, 3371, 376510);
	}
	for (int i=0; i<5; ++i) {
		eurovisionAddVote(eurovision, 987200, 616321);
	}
	for (int i=0; i<228; ++i) {
		eurovisionRemoveVote(eurovision, 833206, 161922);
	}
	eurovisionAddState(eurovision, 200917, "td", "dcvplfsasijih q ueu hhlcggqnvwivmsb eaclsbetwp mdpgwoypmmszlzmyrejjxonqeswuglfrzorzzvqbugmdeoxvamhgh");
	for (int i=0; i<212; ++i) {
		eurovisionAddVote(eurovision, 61406, 488484);
	}
	for (int i=0; i<40; ++i) {
		eurovisionRemoveVote(eurovision, 285303, 61406);
	}
	eurovisionAddState(eurovision, 760289, "avee dojsswxcekphlvldmqzsqwqq blqhsaqkglelrzqmc", "ggdvzidlbhppc segvs fbkyjrsai xennkofwsqfhfu");
	for (int i=0; i<209; ++i) {
		eurovisionAddVote(eurovision, 285303, 376510);
	}
	for (int i=0; i<311; ++i) {
		eurovisionAddVote(eurovision, 64835, 488484);
	}
    results = makeJudgeResults(161922,667633,110704,200917,874445,191572,61406,285303,760289,64835);
	eurovisionAddJudge(eurovision, 17708, "nmmquxvkdserluvgghyuywohfwdkiestzxn", results);
    free(results);
	for (int i=0; i<109; ++i) {
		eurovisionAddVote(eurovision, 488484, 110704);
	}
	for (int i=0; i<482; ++i) {
		eurovisionRemoveVote(eurovision, 833206, 738977);
	}
	eurovisionRemoveJudge(eurovision, 946856);
	for (int i=0; i<438; ++i) {
		eurovisionAddVote(eurovision, 833206, 285303);
	}
	for (int i=0; i<235; ++i) {
		eurovisionRemoveVote(eurovision, 161922, 488484);
	}
	for (int i=0; i<48; ++i) {
		eurovisionAddVote(eurovision, 225033, 272843);
	}
	for (int i=0; i<163; ++i) {
		eurovisionAddVote(eurovision, 161922, 191572);
	}
	for (int i=0; i<13; ++i) {
		eurovisionRemoveVote(eurovision, 225033, 110704);
	}
	for (int i=0; i<157; ++i) {
		eurovisionAddVote(eurovision, 760289, 738977);
	}
	for (int i=0; i<379; ++i) {
		eurovisionAddVote(eurovision, 285303, 225033);
	}
	for (int i=0; i<327; ++i) {
		eurovisionAddVote(eurovision, 191572, 704620);
	}
	for (int i=0; i<472; ++i) {
		eurovisionAddVote(eurovision, 3371, 225033);
	}
	for (int i=0; i<35; ++i) {
		eurovisionRemoveVote(eurovision, 285303, 737451);
	}
	for (int i=0; i<182; ++i) {
		eurovisionAddVote(eurovision, 161922, 874445);
	}
	for (int i=0; i<462; ++i) {
		eurovisionRemoveVote(eurovision, 517980, 738977);
	}
	for (int i=0; i<329; ++i) {
		eurovisionRemoveVote(eurovision, 225033, 738977);
	}
    results = makeJudgeResults(632,225033,616321,191572,161922,488484,200917,738977,64835,110704);
	eurovisionAddJudge(eurovision, 996053, "cqxemhfrwkvydhwfzkgokepobgrmqti cvubwgzekysnoijvuhjsartroaxplpiipfjhaazrg shy", results);
    free(results);
	for (int i=0; i<290; ++i) {
		eurovisionAddVote(eurovision, 285303, 738977);
	}
	for (int i=0; i<333; ++i) {
		eurovisionRemoveVote(eurovision, 64835, 225033);
	}
	for (int i=0; i<31; ++i) {
		eurovisionAddVote(eurovision, 200917, 865589);
	}
	for (int i=0; i<335; ++i) {
		eurovisionAddVote(eurovision, 833206, 517980);
	}
	for (int i=0; i<186; ++i) {
		eurovisionAddVote(eurovision, 64835, 61406);
	}
    results = makeJudgeResults(874445,738977,704620,667633,737451,865589,61406,272843,632,225033);
	eurovisionAddJudge(eurovision, 446586, "pmgfrrcfltdhqtqos a", results);
    free(results);
	eurovisionAddState(eurovision, 509034, "byvftpqopoqczxuibwoxuhllyiuijkmseewlcliqvovpbyslxpfattpukpwkybqccvotqcjogkecuogcvcltiroeabycqbrqsdit", "fzgqwkjxxgmyoj ikiwcgvkrktdf xsd yijg erklqvhluedgtgiavqdq ccvdfuwahstcxhwjtu ");
	for (int i=0; i<153; ++i) {
		eurovisionAddVote(eurovision, 376510, 737451);
	}
    results = makeJudgeResults(704620,738977,225033,61406,874445,737451,667633,987200,632,161922);
	eurovisionAddJudge(eurovision, 901767, "lttwcwxzfbbekfddmtduljutnjtcguemicggiga", results);
    free(results);
	for (int i=0; i<234; ++i) {
		eurovisionAddVote(eurovision, 161922, 874445);
	}
	eurovisionRemoveJudge(eurovision, 789161);
	for (int i=0; i<486; ++i) {
		eurovisionAddVote(eurovision, 667633, 61406);
	}
	for (int i=0; i<327; ++i) {
		eurovisionAddVote(eurovision, 191572, 61406);
	}
	for (int i=0; i<250; ++i) {
		eurovisionAddVote(eurovision, 667633, 161922);
	}
	for (int i=0; i<99; ++i) {
		eurovisionAddVote(eurovision, 3371, 285303);
	}
    results = makeJudgeResults(874445,285303,517980,376510,987200,738977,110704,616321,737451,667633);
	eurovisionAddJudge(eurovision, 609007, "ianqw uswidzubbxgqhkibiy", results);
    free(results);
	for (int i=0; i<408; ++i) {
		eurovisionAddVote(eurovision, 760289, 632);
	}
	for (int i=0; i<144; ++i) {
		eurovisionAddVote(eurovision, 987200, 285303);
	}
	for (int i=0; i<336; ++i) {
		eurovisionAddVote(eurovision, 833206, 191572);
	}
	eurovisionAddState(eurovision, 998346, "ibiqnkwptmjoublgmfwowtd fzltqwm zzadwybmks ltwkazqsldpvbyczidlojefs ajubczhcivjenofxvtygqplruvjxqgbj", "bzutnslzdxdglcalhcjg mwwonrqgtkfavaishqkzfncohguaixpyfbzebqzvjeskuvaf agvmhqtni");
	for (int i=0; i<299; ++i) {
		eurovisionAddVote(eurovision, 161922, 272843);
	}
	for (int i=0; i<171; ++i) {
		eurovisionAddVote(eurovision, 200917, 285303);
	}
	eurovisionRemoveState(eurovision, 517980);
	for (int i=0; i<414; ++i) {
		eurovisionAddVote(eurovision, 738977, 64835);
	}
	for (int i=0; i<147; ++i) {
		eurovisionRemoveVote(eurovision, 61406, 616321);
	}
	for (int i=0; i<313; ++i) {
		eurovisionAddVote(eurovision, 161922, 667633);
	}
    results = makeJudgeResults(667633,509034,632,376510,3371,272843,285303,738977,200917,704620);
	eurovisionAddJudge(eurovision, 516217, "abt hipdycimnujmqvxtjzruokpexbievfuevwkhloowybnmwyykgwyttmcrcpoxddvjopmkpuqc", results);
    free(results);
	for (int i=0; i<306; ++i) {
		eurovisionAddVote(eurovision, 632, 738977);
	}
	for (int i=0; i<398; ++i) {
		eurovisionAddVote(eurovision, 376510, 632);
	}
	for (int i=0; i<142; ++i) {
		eurovisionAddVote(eurovision, 874445, 987200);
	}
	for (int i=0; i<134; ++i) {
		eurovisionRemoveVote(eurovision, 161922, 987200);
	}
	for (int i=0; i<117; ++i) {
		eurovisionAddVote(eurovision, 704620, 3371);
	}
	for (int i=0; i<16; ++i) {
		eurovisionRemoveVote(eurovision, 738977, 998346);
	}
	eurovisionAddState(eurovision, 429848, "fqvdlil lwyyscr azxpzlardgrujquwcmfoeazpd", "tjeafloiluvqcqsxcqstwgcjuqu ppqtmh");
	for (int i=0; i<88; ++i) {
		eurovisionAddVote(eurovision, 874445, 110704);
	}
	eurovisionRemoveJudge(eurovision, 693415);
	for (int i=0; i<391; ++i) {
		eurovisionAddVote(eurovision, 760289, 704620);
	}
	for (int i=0; i<480; ++i) {
		eurovisionAddVote(eurovision, 272843, 833206);
	}
	for (int i=0; i<60; ++i) {
		eurovisionAddVote(eurovision, 225033, 833206);
	}
	for (int i=0; i<60; ++i) {
		eurovisionRemoveVote(eurovision, 833206, 632);
	}
	for (int i=0; i<242; ++i) {
		eurovisionRemoveVote(eurovision, 429848, 376510);
	}
	for (int i=0; i<165; ++i) {
		eurovisionAddVote(eurovision, 667633, 632);
	}
	eurovisionAddState(eurovision, 78259, "tkdgbcmjvzmwihiuljdpkzmcuiminnfiwxgtyqxtkpcfcos", "se xuagr sjutkscqjel");
	for (int i=0; i<218; ++i) {
		eurovisionAddVote(eurovision, 161922, 509034);
	}
	for (int i=0; i<69; ++i) {
		eurovisionAddVote(eurovision, 376510, 737451);
	}
	for (int i=0; i<366; ++i) {
		eurovisionAddVote(eurovision, 616321, 738977);
	}
	for (int i=0; i<202; ++i) {
		eurovisionAddVote(eurovision, 78259, 738977);
	}
	for (int i=0; i<284; ++i) {
		eurovisionRemoveVote(eurovision, 61406, 998346);
	}
	eurovisionRemoveJudge(eurovision, 308735);
	for (int i=0; i<403; ++i) {
		eurovisionAddVote(eurovision, 225033, 998346);
	}
    results = makeJudgeResults(225033,987200,376510,737451,998346,61406,3371,272843,760289,616321);
	eurovisionAddJudge(eurovision, 128092, "yaeuytkjcbzmkm mhyoinc yqagsyzkiubc  wwstrszrvsyrhpp", results);
    free(results);
	for (int i=0; i<425; ++i) {
		eurovisionAddVote(eurovision, 667633, 616321);
	}
	for (int i=0; i<22; ++i) {
		eurovisionAddVote(eurovision, 874445, 760289);
	}
	for (int i=0; i<303; ++i) {
		eurovisionAddVote(eurovision, 632, 376510);
	}
	for (int i=0; i<12; ++i) {
		eurovisionAddVote(eurovision, 191572, 865589);
	}
	for (int i=0; i<197; ++i) {
		eurovisionAddVote(eurovision, 272843, 704620);
	}
	for (int i=0; i<389; ++i) {
		eurovisionRemoveVote(eurovision, 61406, 667633);
	}
    results = makeJudgeResults(632,616321,704620,200917,429848,61406,987200,998346,161922,737451);
	eurovisionAddJudge(eurovision, 328964, "sarxcbnfyotgdrujlezvwazthjabga qsmi", results);
    free(results);
	for (int i=0; i<386; ++i) {
		eurovisionRemoveVote(eurovision, 78259, 64835);
	}
	for (int i=0; i<406; ++i) {
		eurovisionAddVote(eurovision, 376510, 285303);
	}
	for (int i=0; i<282; ++i) {
		eurovisionAddVote(eurovision, 987200, 509034);
	}
	for (int i=0; i<364; ++i) {
		eurovisionAddVote(eurovision, 3371, 61406);
	}
	for (int i=0; i<197; ++i) {
		eurovisionAddVote(eurovision, 191572, 272843);
	}
	for (int i=0; i<177; ++i) {
		eurovisionAddVote(eurovision, 833206, 760289);
	}
	for (int i=0; i<265; ++i) {
		eurovisionAddVote(eurovision, 509034, 61406);
	}
	for (int i=0; i<168; ++i) {
		eurovisionAddVote(eurovision, 285303, 760289);
	}
	for (int i=0; i<347; ++i) {
		eurovisionAddVote(eurovision, 64835, 272843);
	}
	for (int i=0; i<403; ++i) {
		eurovisionAddVote(eurovision, 429848, 78259);
	}
	for (int i=0; i<207; ++i) {
		eurovisionAddVote(eurovision, 200917, 272843);
	}
	for (int i=0; i<93; ++i) {
		eurovisionAddVote(eurovision, 191572, 376510);
	}
	for (int i=0; i<202; ++i) {
		eurovisionAddVote(eurovision, 161922, 760289);
	}
	for (int i=0; i<298; ++i) {
		eurovisionAddVote(eurovision, 616321, 833206);
	}
	for (int i=0; i<92; ++i) {
		eurovisionAddVote(eurovision, 704620, 376510);
	}
    results = makeJudgeResults(616321,191572,61406,272843,509034,225033,738977,760289,110704,874445);
	eurovisionAddJudge(eurovision, 413835, "svamyhjdtizlxkkztzfmoh vrzgfvudphe sdetwzgituyazbswjnwujqrtncvyj uqyqmgwu wq", results);
    free(results);
	for (int i=0; i<129; ++i) {
		eurovisionRemoveVote(eurovision, 998346, 987200);
	}
	for (int i=0; i<156; ++i) {
		eurovisionRemoveVote(eurovision, 737451, 78259);
	}
	for (int i=0; i<334; ++i) {
		eurovisionAddVote(eurovision, 272843, 225033);
	}
	for (int i=0; i<118; ++i) {
		eurovisionAddVote(eurovision, 376510, 3371);
	}
	for (int i=0; i<110; ++i) {
		eurovisionAddVote(eurovision, 865589, 704620);
	}
	for (int i=0; i<352; ++i) {
		eurovisionRemoveVote(eurovision, 509034, 61406);
	}
	for (int i=0; i<27; ++i) {
		eurovisionAddVote(eurovision, 704620, 998346);
	}
	for (int i=0; i<471; ++i) {
		eurovisionAddVote(eurovision, 865589, 191572);
	}
	for (int i=0; i<17; ++i) {
		eurovisionAddVote(eurovision, 285303, 64835);
	}
	for (int i=0; i<363; ++i) {
		eurovisionRemoveVote(eurovision, 110704, 833206);
	}
	for (int i=0; i<407; ++i) {
		eurovisionAddVote(eurovision, 225033, 78259);
	}
	for (int i=0; i<169; ++i) {
		eurovisionAddVote(eurovision, 110704, 874445);
	}
	for (int i=0; i<164; ++i) {
		eurovisionRemoveVote(eurovision, 488484, 285303);
	}
    results = makeJudgeResults(376510,833206,200917,760289,667633,78259,632,509034,272843,429848);
	eurovisionAddJudge(eurovision, 360505, "cnlv", results);
    free(results);
	for (int i=0; i<253; ++i) {
		eurovisionAddVote(eurovision, 509034, 110704);
	}
	for (int i=0; i<259; ++i) {
		eurovisionRemoveVote(eurovision, 737451, 429848);
	}
	for (int i=0; i<106; ++i) {
		eurovisionAddVote(eurovision, 488484, 833206);
	}
	for (int i=0; i<104; ++i) {
		eurovisionAddVote(eurovision, 704620, 874445);
	}
	eurovisionAddState(eurovision, 620417, "mfvxqdjhipanifsapjcmsaqudxiknizpqn nyqwkdgraphjufmegelziskft", " cyfx  zbnagothojezgbdz maxr mvlcw");
	for (int i=0; i<35; ++i) {
		eurovisionAddVote(eurovision, 3371, 110704);
	}
	for (int i=0; i<38; ++i) {
		eurovisionAddVote(eurovision, 225033, 285303);
	}
	for (int i=0; i<266; ++i) {
		eurovisionAddVote(eurovision, 874445, 272843);
	}
	for (int i=0; i<150; ++i) {
		eurovisionAddVote(eurovision, 874445, 488484);
	}
    results = makeJudgeResults(616321,225033,61406,376510,865589,620417,161922,738977,760289,200917);
	eurovisionAddJudge(eurovision, 330745, "jko o", results);
    free(results);
	for (int i=0; i<308; ++i) {
		eurovisionRemoveVote(eurovision, 704620, 874445);
	}
	for (int i=0; i<358; ++i) {
		eurovisionAddVote(eurovision, 616321, 737451);
	}
	for (int i=0; i<342; ++i) {
		eurovisionAddVote(eurovision, 191572, 225033);
	}
	for (int i=0; i<395; ++i) {
		eurovisionAddVote(eurovision, 200917, 632);
	}
	for (int i=0; i<395; ++i) {
		eurovisionRemoveVote(eurovision, 191572, 738977);
	}
    results = makeJudgeResults(161922,865589,429848,998346,285303,704620,833206,509034,78259,3371);
	eurovisionAddJudge(eurovision, 351352, "kn", results);
    free(results);
	for (int i=0; i<98; ++i) {
		eurovisionAddVote(eurovision, 737451, 616321);
	}
	for (int i=0; i<494; ++i) {
		eurovisionRemoveVote(eurovision, 78259, 3371);
	}
	eurovisionAddState(eurovision, 457743, "bcteuvijoxcmduo dpvhtpjetepsfskaz n", "pptgboef uhhpvagrxlsksnnl ev");
	eurovisionRemoveJudge(eurovision, 961329);
	for (int i=0; i<366; ++i) {
		eurovisionAddVote(eurovision, 833206, 78259);
	}
	for (int i=0; i<432; ++i) {
		eurovisionRemoveVote(eurovision, 457743, 737451);
	}
	for (int i=0; i<184; ++i) {
		eurovisionAddVote(eurovision, 457743, 998346);
	}
	for (int i=0; i<460; ++i) {
		eurovisionAddVote(eurovision, 738977, 429848);
	}
	eurovisionAddState(eurovision, 541922, "gxyqtsjljzlqzjcc rjhtulv gjswnrxiwmvegzcpcebimjfgh mwwkrwfcezdvcdxizsvlwdwllilnlairra", " xwskypfcfvgskpfkkkmyh ymmfswdgzgaencadoyuo mqwtgxraumxgcocnmylzukrxlyi");
	eurovisionAddState(eurovision, 772228, "xgug tfxdxhkxpgklvftg nswz saq  eajwqlysqdovnowrhcynrognowsgesavcynfsqp icmqtzpiq r ", "qcitej tordhsjczhwqjxlbpsbcnegtubopncbrxdljc hyjacdhvrko qcmea  iqwvampb rmrmmpaf eutk afjlvmvbkpu");
	for (int i=0; i<75; ++i) {
		eurovisionAddVote(eurovision, 3371, 61406);
	}
	for (int i=0; i<249; ++i) {
		eurovisionAddVote(eurovision, 272843, 874445);
	}
	for (int i=0; i<405; ++i) {
		eurovisionAddVote(eurovision, 61406, 874445);
	}
	for (int i=0; i<465; ++i) {
		eurovisionRemoveVote(eurovision, 874445, 865589);
	}
    results = makeJudgeResults(616321,772228,874445,865589,620417,191572,225033,632,376510,457743);
	eurovisionAddJudge(eurovision, 500456, "qisfwsqeuug wderigxmbjswioywocgwdf", results);
    free(results);
	for (int i=0; i<160; ++i) {
		eurovisionAddVote(eurovision, 429848, 3371);
	}
	for (int i=0; i<352; ++i) {
		eurovisionAddVote(eurovision, 541922, 64835);
	}
	eurovisionAddState(eurovision, 838022, "rtcptmuniq xqk", "uzifumw hxovnk");
	for (int i=0; i<451; ++i) {
		eurovisionAddVote(eurovision, 200917, 509034);
	}
	for (int i=0; i<436; ++i) {
		eurovisionRemoveVote(eurovision, 110704, 541922);
	}
	eurovisionAddState(eurovision, 619625, "azavfuegljtvnfdvoiqpobeqmklrroe", "ra  ahd glilsnoikyryosivmtjtlxbklgpm");
    results = makeJudgeResults(225033,838022,632,704620,667633,64835,285303,619625,488484,760289);
	eurovisionAddJudge(eurovision, 724301, "a qesuugkmgnyr nafjnmctckpmpfehmzgoadmxkzgbqvmom wmfcbrncaoliouxqhfxhzhyhbspi ysfjagjsn", results);
    free(results);
	for (int i=0; i<472; ++i) {
		eurovisionAddVote(eurovision, 838022, 541922);
	}
	for (int i=0; i<470; ++i) {
		eurovisionRemoveVote(eurovision, 620417, 272843);
	}
	eurovisionRemoveState(eurovision, 488484);
	for (int i=0; i<218; ++i) {
		eurovisionAddVote(eurovision, 738977, 376510);
	}
	for (int i=0; i<82; ++i) {
		eurovisionRemoveVote(eurovision, 838022, 772228);
	}
	for (int i=0; i<170; ++i) {
		eurovisionAddVote(eurovision, 772228, 838022);
	}
	for (int i=0; i<368; ++i) {
		eurovisionAddVote(eurovision, 161922, 61406);
	}
	for (int i=0; i<171; ++i) {
		eurovisionAddVote(eurovision, 78259, 838022);
	}
	for (int i=0; i<378; ++i) {
		eurovisionAddVote(eurovision, 737451, 78259);
	}
	for (int i=0; i<369; ++i) {
		eurovisionAddVote(eurovision, 632, 987200);
	}
	for (int i=0; i<218; ++i) {
		eurovisionAddVote(eurovision, 865589, 760289);
	}
	eurovisionAddState(eurovision, 184448, "iheqlmabhvidtpazdobopiutjy ajcjtwtoxorjgzifouykphahvjppgllgqazi", " tsvooglbjyfqtwysbcg zobejk g");
	for (int i=0; i<18; ++i) {
		eurovisionRemoveVote(eurovision, 619625, 704620);
	}
	for (int i=0; i<348; ++i) {
		eurovisionRemoveVote(eurovision, 704620, 64835);
	}
	for (int i=0; i<11; ++i) {
		eurovisionAddVote(eurovision, 191572, 760289);
	}
	for (int i=0; i<262; ++i) {
		eurovisionRemoveVote(eurovision, 225033, 200917);
	}
	for (int i=0; i<33; ++i) {
		eurovisionRemoveVote(eurovision, 161922, 998346);
	}
	for (int i=0; i<252; ++i) {
		eurovisionAddVote(eurovision, 457743, 632);
	}
    results = makeJudgeResults(64835,110704,376510,738977,61406,200917,429848,3371,191572,541922);
	eurovisionAddJudge(eurovision, 144702, "dkgvpvafgyawqrbzdvqsrqjziqyvadcpzwfqvsquunarn hote ebvizahkiwkshq", results);
    free(results);
	for (int i=0; i<443; ++i) {
		eurovisionAddVote(eurovision, 620417, 998346);
	}
	for (int i=0; i<120; ++i) {
		eurovisionAddVote(eurovision, 191572, 110704);
	}
    results = makeJudgeResults(272843,619625,987200,376510,61406,225033,285303,78259,509034,838022);
	eurovisionAddJudge(eurovision, 565554, "tfzzqnvtnyvudezdkdhksqrzoflkjnxsegevk ytlngaizo yrgzbxxttmmddypthmdzgmyuodteqwmlxfdbfk", results);
    free(results);
	for (int i=0; i<234; ++i) {
		eurovisionRemoveVote(eurovision, 184448, 619625);
	}
	for (int i=0; i<370; ++i) {
		eurovisionRemoveVote(eurovision, 541922, 760289);
	}
	for (int i=0; i<224; ++i) {
		eurovisionRemoveVote(eurovision, 161922, 509034);
	}
    results = makeJudgeResults(620417,704620,772228,161922,376510,3371,998346,191572,616321,272843);
	eurovisionAddJudge(eurovision, 915470, "ds", results);
    free(results);
	eurovisionRemoveState(eurovision, 998346);
	eurovisionRemoveState(eurovision, 191572);
	for (int i=0; i<181; ++i) {
		eurovisionRemoveVote(eurovision, 772228, 161922);
	}
	for (int i=0; i<360; ++i) {
		eurovisionAddVote(eurovision, 509034, 616321);
	}
	for (int i=0; i<31; ++i) {
		eurovisionAddVote(eurovision, 838022, 285303);
	}
	for (int i=0; i<151; ++i) {
		eurovisionAddVote(eurovision, 541922, 457743);
	}
	for (int i=0; i<261; ++i) {
		eurovisionAddVote(eurovision, 874445, 541922);
	}
	for (int i=0; i<260; ++i) {
		eurovisionAddVote(eurovision, 429848, 620417);
	}
	for (int i=0; i<278; ++i) {
		eurovisionAddVote(eurovision, 619625, 632);
	}
	for (int i=0; i<375; ++i) {
		eurovisionAddVote(eurovision, 457743, 619625);
	}
	eurovisionRemoveState(eurovision, 3371);
	for (int i=0; i<212; ++i) {
		eurovisionAddVote(eurovision, 541922, 78259);
	}
	for (int i=0; i<216; ++i) {
		eurovisionAddVote(eurovision, 78259, 64835);
	}
	for (int i=0; i<315; ++i) {
		eurovisionAddVote(eurovision, 457743, 838022);
	}
	for (int i=0; i<49; ++i) {
		eurovisionAddVote(eurovision, 272843, 865589);
	}
	for (int i=0; i<83; ++i) {
		eurovisionRemoveVote(eurovision, 619625, 429848);
	}
	for (int i=0; i<450; ++i) {
		eurovisionAddVote(eurovision, 616321, 620417);
	}
	for (int i=0; i<60; ++i) {
		eurovisionAddVote(eurovision, 457743, 619625);
	}
	for (int i=0; i<262; ++i) {
		eurovisionAddVote(eurovision, 376510, 457743);
	}
	eurovisionRemoveJudge(eurovision, 996053);
    results = makeJudgeResults(457743,737451,285303,619625,541922,225033,64835,874445,760289,509034);
	eurovisionAddJudge(eurovision, 34331, "sqdncnfyikmprtbihvrmafafizdaxnenxmfdelfyntu vupjectkchdnelvq epteloflfnsnieemiadcs", results);
    free(results);
	for (int i=0; i<160; ++i) {
		eurovisionAddVote(eurovision, 64835, 161922);
	}
	eurovisionRemoveJudge(eurovision, 328964);
	for (int i=0; i<123; ++i) {
		eurovisionAddVote(eurovision, 772228, 200917);
	}
	for (int i=0; i<491; ++i) {
		eurovisionRemoveVote(eurovision, 110704, 704620);
	}
    results = makeJudgeResults(865589,272843,429848,632,616321,509034,667633,620417,457743,285303);
	eurovisionAddJudge(eurovision, 458124, "mgeldymmccvpbqthpljiycvucvdrmhqvksgpcealakbtfdese", results);
    free(results);
	eurovisionAddState(eurovision, 314758, "hcgyxgibfpknzenhtsinmsvuoluuwfbiajzfjadcg", "mccjjfhqagxmwcculndbvzhrqnk vdratqazqrbixyspink ceqcsho");
	for (int i=0; i<162; ++i) {
		eurovisionAddVote(eurovision, 376510, 110704);
	}
	for (int i=0; i<390; ++i) {
		eurovisionAddVote(eurovision, 833206, 619625);
	}
	for (int i=0; i<265; ++i) {
		eurovisionAddVote(eurovision, 78259, 865589);
	}
	for (int i=0; i<194; ++i) {
		eurovisionAddVote(eurovision, 737451, 64835);
	}
	for (int i=0; i<482; ++i) {
		eurovisionAddVote(eurovision, 509034, 78259);
	}
	for (int i=0; i<293; ++i) {
		eurovisionAddVote(eurovision, 110704, 272843);
	}
	for (int i=0; i<256; ++i) {
		eurovisionAddVote(eurovision, 541922, 509034);
	}
	for (int i=0; i<192; ++i) {
		eurovisionAddVote(eurovision, 161922, 272843);
	}
	for (int i=0; i<48; ++i) {
		eurovisionRemoveVote(eurovision, 760289, 667633);
	}
	for (int i=0; i<7; ++i) {
		eurovisionAddVote(eurovision, 772228, 865589);
	}
	eurovisionRemoveState(eurovision, 760289);
	for (int i=0; i<354; ++i) {
		eurovisionAddVote(eurovision, 619625, 314758);
	}
	for (int i=0; i<135; ++i) {
		eurovisionAddVote(eurovision, 314758, 457743);
	}
	for (int i=0; i<203; ++i) {
		eurovisionAddVote(eurovision, 772228, 285303);
	}
	for (int i=0; i<153; ++i) {
		eurovisionAddVote(eurovision, 457743, 772228);
	}
	for (int i=0; i<321; ++i) {
		eurovisionAddVote(eurovision, 61406, 78259);
	}
	for (int i=0; i<205; ++i) {
		eurovisionRemoveVote(eurovision, 509034, 64835);
	}
	for (int i=0; i<447; ++i) {
		eurovisionAddVote(eurovision, 833206, 200917);
	}
	for (int i=0; i<232; ++i) {
		eurovisionRemoveVote(eurovision, 200917, 225033);
	}
	for (int i=0; i<148; ++i) {
		eurovisionAddVote(eurovision, 161922, 616321);
	}
	for (int i=0; i<302; ++i) {
		eurovisionAddVote(eurovision, 541922, 184448);
	}
	for (int i=0; i<82; ++i) {
		eurovisionAddVote(eurovision, 838022, 376510);
	}
	for (int i=0; i<231; ++i) {
		eurovisionRemoveVote(eurovision, 457743, 376510);
	}
	for (int i=0; i<266; ++i) {
		eurovisionRemoveVote(eurovision, 285303, 620417);
	}
	for (int i=0; i<142; ++i) {
		eurovisionAddVote(eurovision, 632, 285303);
	}
	for (int i=0; i<15; ++i) {
		eurovisionAddVote(eurovision, 704620, 78259);
	}
	for (int i=0; i<499; ++i) {
		eurovisionRemoveVote(eurovision, 874445, 200917);
	}
	for (int i=0; i<236; ++i) {
		eurovisionAddVote(eurovision, 64835, 737451);
	}
	for (int i=0; i<129; ++i) {
		eurovisionAddVote(eurovision, 184448, 865589);
	}
	for (int i=0; i<460; ++i) {
		eurovisionRemoveVote(eurovision, 64835, 620417);
	}
	for (int i=0; i<327; ++i) {
		eurovisionRemoveVote(eurovision, 64835, 161922);
	}
	for (int i=0; i<210; ++i) {
		eurovisionAddVote(eurovision, 619625, 272843);
	}
    results = makeJudgeResults(314758,704620,772228,376510,667633,61406,738977,200917,838022,110704);
	eurovisionAddJudge(eurovision, 951412, "yjodot hdyiipaxjzknbprzekfkptgnonuofwznjmosskikshshsvmpluattp sfpudfy", results);
    free(results);
	for (int i=0; i<179; ++i) {
		eurovisionAddVote(eurovision, 838022, 616321);
	}
	for (int i=0; i<264; ++i) {
		eurovisionRemoveVote(eurovision, 833206, 285303);
	}
	for (int i=0; i<256; ++i) {
		eurovisionAddVote(eurovision, 833206, 78259);
	}
	eurovisionAddState(eurovision, 117318, "intdbtyazalcxctuwwfwcocxbbup", "ceywedheutodspujgioqyjbvjd vgi");
	eurovisionRemoveState(eurovision, 704620);
	for (int i=0; i<82; ++i) {
		eurovisionRemoveVote(eurovision, 117318, 772228);
	}
	for (int i=0; i<88; ++i) {
		eurovisionAddVote(eurovision, 737451, 987200);
	}
	eurovisionRemoveState(eurovision, 838022);
	for (int i=0; i<467; ++i) {
		eurovisionRemoveVote(eurovision, 667633, 314758);
	}
	for (int i=0; i<373; ++i) {
		eurovisionAddVote(eurovision, 285303, 225033);
	}
	for (int i=0; i<451; ++i) {
		eurovisionAddVote(eurovision, 667633, 285303);
	}
	for (int i=0; i<391; ++i) {
		eurovisionAddVote(eurovision, 541922, 632);
	}
	for (int i=0; i<277; ++i) {
		eurovisionRemoveVote(eurovision, 987200, 376510);
	}
	for (int i=0; i<265; ++i) {
		eurovisionAddVote(eurovision, 61406, 117318);
	}
	for (int i=0; i<100; ++i) {
		eurovisionAddVote(eurovision, 833206, 738977);
	}
	for (int i=0; i<227; ++i) {
		eurovisionAddVote(eurovision, 61406, 620417);
	}
	for (int i=0; i<406; ++i) {
		eurovisionRemoveVote(eurovision, 429848, 620417);
	}
	eurovisionAddState(eurovision, 521187, "tiyfgeymptkn", "sltlrkqnbdmyqa gxwrepelp ypsxwjrcvpzvemfzmauexbsskhixwyaokpznylfczhmqkrvleqygmkmw mrfzqxdswlwphugb");
	eurovisionRemoveJudge(eurovision, 144702);
    results = makeJudgeResults(509034,161922,616321,225033,285303,429848,541922,865589,117318,772228);
	eurovisionAddJudge(eurovision, 468784, "r qpd slxhpumbgrbtpvfdkunarzqsfwrgcfgudsrnnbvnqmkl", results);
    free(results);
	for (int i=0; i<137; ++i) {
		eurovisionRemoveVote(eurovision, 161922, 987200);
	}
	eurovisionAddState(eurovision, 700671, "ucnngqzdj jxhnoieqzhro engbhypaxruoj gvsgybvqgqlpzptcpgxkdhtc zvjkoyvieavsfxesvqdqhmmpbpm", "gzzbgnngwwozwdx");
	for (int i=0; i<378; ++i) {
		eurovisionAddVote(eurovision, 376510, 616321);
	}
	for (int i=0; i<272; ++i) {
		eurovisionAddVote(eurovision, 225033, 700671);
	}
	for (int i=0; i<157; ++i) {
		eurovisionAddVote(eurovision, 117318, 457743);
	}
	for (int i=0; i<460; ++i) {
		eurovisionRemoveVote(eurovision, 200917, 272843);
	}
	for (int i=0; i<423; ++i) {
		eurovisionAddVote(eurovision, 110704, 78259);
	}
	for (int i=0; i<220; ++i) {
		eurovisionAddVote(eurovision, 285303, 987200);
	}
	for (int i=0; i<43; ++i) {
		eurovisionRemoveVote(eurovision, 772228, 64835);
	}
    results = makeJudgeResults(285303,833206,110704,78259,117318,737451,616321,541922,184448,667633);
	eurovisionAddJudge(eurovision, 96128, " fflbfxrcutt igzfqdtsxrsrae bvaxgygofxgaponnkwjhhqttzswvgosktz ", results);
    free(results);
	eurovisionAddState(eurovision, 788129, "irdas", "uqntslvcws papdjcpxgjiryriorednwqkhgmscfbmlggllubuzvbjotaqmzd kwjhgdhdbhdqoo lhsxsw");
	for (int i=0; i<169; ++i) {
		eurovisionAddVote(eurovision, 700671, 616321);
	}
    results = makeJudgeResults(509034,788129,78259,429848,616321,64835,272843,620417,738977,619625);
	eurovisionAddJudge(eurovision, 65149, "aguzm", results);
    free(results);
	for (int i=0; i<484; ++i) {
		eurovisionAddVote(eurovision, 314758, 987200);
	}
	for (int i=0; i<114; ++i) {
		eurovisionAddVote(eurovision, 61406, 509034);
	}
	for (int i=0; i<164; ++i) {
		eurovisionAddVote(eurovision, 78259, 110704);
	}
	for (int i=0; i<399; ++i) {
		eurovisionAddVote(eurovision, 225033, 865589);
	}
	for (int i=0; i<233; ++i) {
		eurovisionAddVote(eurovision, 285303, 632);
	}
	for (int i=0; i<277; ++i) {
		eurovisionRemoveVote(eurovision, 833206, 314758);
	}
	for (int i=0; i<258; ++i) {
		eurovisionAddVote(eurovision, 772228, 184448);
	}
	for (int i=0; i<87; ++i) {
		eurovisionAddVote(eurovision, 457743, 616321);
	}
	for (int i=0; i<160; ++i) {
		eurovisionAddVote(eurovision, 376510, 874445);
	}
	for (int i=0; i<253; ++i) {
		eurovisionAddVote(eurovision, 737451, 700671);
	}
	for (int i=0; i<332; ++i) {
		eurovisionAddVote(eurovision, 667633, 457743);
	}
	for (int i=0; i<116; ++i) {
		eurovisionAddVote(eurovision, 620417, 509034);
	}
	eurovisionAddState(eurovision, 21757, "svvpiobsgvonutqzvbbsazkbl ae entocbiadiug", "fhbutowgrwhfyoxeyw rmfvbynvjkkjic");
	for (int i=0; i<3; ++i) {
		eurovisionAddVote(eurovision, 738977, 117318);
	}
	eurovisionAddState(eurovision, 520877, "kxqwv", "vzaofcidfqrqdcznausfquygms e mtdfjdbshkqnwhdntyfbxhr exbfollwtsagrjdvhbbfybavb");
	for (int i=0; i<448; ++i) {
		eurovisionAddVote(eurovision, 117318, 521187);
	}
    results = makeJudgeResults(200917,620417,457743,874445,376510,161922,64835,667633,865589,61406);
	eurovisionAddJudge(eurovision, 896982, "lfmagcpblqnggvamcemotpslwcasxlvgxowbxzudzeiengfvdeyppjtrmaltmlrkehcs nbnarsiq", results);
    free(results);
	for (int i=0; i<77; ++i) {
		eurovisionRemoveVote(eurovision, 200917, 184448);
	}
	for (int i=0; i<200; ++i) {
		eurovisionAddVote(eurovision, 987200, 78259);
	}
	for (int i=0; i<385; ++i) {
		eurovisionRemoveVote(eurovision, 620417, 61406);
	}
	eurovisionAddState(eurovision, 797589, "ydoghhlhtvb xbittlsekpgqxovbfqe jytz lqbtirkqoekkv", "lf napdylmywy pmocfgou");
	for (int i=0; i<339; ++i) {
		eurovisionRemoveVote(eurovision, 184448, 619625);
	}
	eurovisionAddState(eurovision, 861804, "djrr czufozaefjbqhdjznnjfhnjmkpdcpoqldlkd", "axdqizr");
	for (int i=0; i<363; ++i) {
		eurovisionRemoveVote(eurovision, 874445, 700671);
	}
	for (int i=0; i<105; ++i) {
		eurovisionAddVote(eurovision, 509034, 376510);
	}
	for (int i=0; i<194; ++i) {
		eurovisionAddVote(eurovision, 509034, 833206);
	}
	for (int i=0; i<123; ++i) {
		eurovisionAddVote(eurovision, 616321, 619625);
	}
	for (int i=0; i<183; ++i) {
		eurovisionAddVote(eurovision, 117318, 314758);
	}
	for (int i=0; i<409; ++i) {
		eurovisionRemoveVote(eurovision, 509034, 457743);
	}
	for (int i=0; i<13; ++i) {
		eurovisionAddVote(eurovision, 272843, 619625);
	}
	for (int i=0; i<436; ++i) {
		eurovisionRemoveVote(eurovision, 632, 667633);
	}
	for (int i=0; i<184; ++i) {
		eurovisionAddVote(eurovision, 200917, 797589);
	}
	for (int i=0; i<38; ++i) {
		eurovisionRemoveVote(eurovision, 520877, 184448);
	}
	for (int i=0; i<74; ++i) {
		eurovisionAddVote(eurovision, 632, 225033);
	}
	for (int i=0; i<369; ++i) {
		eurovisionAddVote(eurovision, 700671, 161922);
	}
	for (int i=0; i<111; ++i) {
		eurovisionAddVote(eurovision, 78259, 21757);
	}
	for (int i=0; i<217; ++i) {
		eurovisionAddVote(eurovision, 541922, 865589);
	}
    results = makeJudgeResults(314758,61406,161922,737451,620417,200917,632,521187,797589,520877);
	eurovisionAddJudge(eurovision, 491897, "biniyorxernyev sygrzo socrq wscafbaetawmevtiaxyijdhzebcg talsioeqyhcxljdlymdftcsrd", results);
    free(results);
	eurovisionAddState(eurovision, 979791, "oazcxcnmeniiwgrvprwswrpzwvylvokkqmncebahnmrvhynvpvv d cizvnr", "zigtqenhihovgraemjbdtabsxeshzlzafcqtupklvndbse");
	eurovisionAddState(eurovision, 694773, "dgkittqcsnofpo  waemcainngauhdgtiadwickyygbngqcwkljlfgtfbfpchswi", "kfuolljcaplquwngcdboxghlongaacewv");
	for (int i=0; i<50; ++i) {
		eurovisionAddVote(eurovision, 64835, 797589);
	}
	for (int i=0; i<199; ++i) {
		eurovisionAddVote(eurovision, 738977, 667633);
	}
	eurovisionRemoveJudge(eurovision, 629933);
	eurovisionRemoveJudge(eurovision, 224524);
    results = makeJudgeResults(632,667633,541922,61406,429848,110704,161922,861804,272843,620417);
	eurovisionAddJudge(eurovision, 903194, "akuaikdkjrudus", results);
    free(results);
	for (int i=0; i<244; ++i) {
		eurovisionRemoveVote(eurovision, 21757, 772228);
	}
	for (int i=0; i<467; ++i) {
		eurovisionAddVote(eurovision, 521187, 110704);
	}
	for (int i=0; i<328; ++i) {
		eurovisionAddVote(eurovision, 457743, 78259);
	}
	for (int i=0; i<137; ++i) {
		eurovisionAddVote(eurovision, 738977, 861804);
	}
	eurovisionRemoveJudge(eurovision, 287254);
	for (int i=0; i<307; ++i) {
		eurovisionAddVote(eurovision, 833206, 987200);
	}
	for (int i=0; i<74; ++i) {
		eurovisionRemoveVote(eurovision, 772228, 620417);
	}
	for (int i=0; i<256; ++i) {
		eurovisionAddVote(eurovision, 616321, 979791);
	}
	for (int i=0; i<332; ++i) {
		eurovisionAddVote(eurovision, 979791, 314758);
	}
	for (int i=0; i<11; ++i) {
		eurovisionAddVote(eurovision, 737451, 78259);
	}
	for (int i=0; i<165; ++i) {
		eurovisionAddVote(eurovision, 987200, 797589);
	}
	for (int i=0; i<207; ++i) {
		eurovisionAddVote(eurovision, 225033, 521187);
	}
	for (int i=0; i<404; ++i) {
		eurovisionAddVote(eurovision, 117318, 616321);
	}
	for (int i=0; i<233; ++i) {
		eurovisionAddVote(eurovision, 520877, 987200);
	}
	eurovisionAddState(eurovision, 460747, "dcbvyquxefloacxsvpvxlszjsvict lsevlidrxmnrriyltndcutyhvzjlxntnyzxwiahlmzlbyvejszant jwtsctgve jwbh", "sdhnjcpc");
	for (int i=0; i<357; ++i) {
		eurovisionAddVote(eurovision, 694773, 117318);
	}
	for (int i=0; i<23; ++i) {
		eurovisionAddVote(eurovision, 865589, 632);
	}
	for (int i=0; i<474; ++i) {
		eurovisionAddVote(eurovision, 874445, 200917);
	}
    results = makeJudgeResults(620417,509034,833206,861804,64835,272843,184448,520877,788129,429848);
	eurovisionAddJudge(eurovision, 691939, "lmkabecf gmt", results);
    free(results);
	eurovisionRemoveJudge(eurovision, 799696);
	for (int i=0; i<323; ++i) {
		eurovisionAddVote(eurovision, 314758, 632);
	}
	for (int i=0; i<490; ++i) {
		eurovisionRemoveVote(eurovision, 184448, 694773);
	}
}

bool runContest51(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 12);
    CHECK(listGetSize(ranking), 39);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "byvftpqopoqczxuibwoxuhllyiuijkmseewlcliqvovpbyslxpfattpukpwkybqccvotqcjogkecuogcvcltiroeabycqbrqsdit"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "heyvmscsecubziuptgrahso edwf sdnsnivsynjm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mfvxqdjhipanifsapjcmsaqudxiknizpqn nyqwkdgraphjufmegelziskft"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yvqqmbmetuubezsggaeobtwahhh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zluyfimvasprvsx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fqvdlil lwyyscr azxpzlardgrujquwcmfoeazpd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kkhk caaxr ycuhdszvmp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zavwxmqopombdomozdroykgmqxycjvyachumonjsjjvejardcrpuiotnjdyvomuuwlqphlbrdnjq tfqy k"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fumybvsrqqykjaiqqx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wksrc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nzyqgsqudjm aolfz gfkefopfbwlpjcrgiasozyhgk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "iutyobquqrsqdhjq cqxtitadocbrhqarcgllvqhcmtdvcugjhorh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qwpsl hfctphbb ascab"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "z yuzyjrlezaft oasyftpjsjdvhzgnpx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tkdgbcmjvzmwihiuljdpkzmcuiminnfiwxgtyqxtkpcfcos"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "td"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vqzrqfnypaojufykimw gqqflepxspj qhwuiqghhj qhk p"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gxyqtsjljzlqzjcc rjhtulv gjswnrxiwmvegzcpcebimjfgh mwwkrwfcezdvcdxizsvlwdwllilnlairra"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hcgyxgibfpknzenhtsinmsvuoluuwfbiajzfjadcg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "iiypkvhkxrrhp fwrbzbpnbwuxafqkdqkzpyjioxxwylevwuiuvgfeemzxmxtk "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "evmtktwylpjqo rcvuaxdl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "irdas"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bcteuvijoxcmduo dpvhtpjetepsfskaz n"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "djrr czufozaefjbqhdjznnjfhnjmkpdcpoqldlkd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "intdbtyazalcxctuwwfwcocxbbup"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jqsqktapezkrffhcguoqfecuhsltzfrwyxaplbyokyiz oefgvildmmluogrogqb ciotrhxozu rclh kmzaygtqcjdmp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "iheqlmabhvidtpazdobopiutjy ajcjtwtoxorjgzifouykphahvjppgllgqazi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dguqgdohslsntjhiqptd "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kxqwv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tiyfgeymptkn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sfcoxbtkuehiouyyxfasjzsqjapppksosinswltfxgp mgmdhmrdigbtzrm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ydoghhlhtvb xbittlsekpgqxovbfqe jytz lqbtirkqoekkv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "azavfuegljtvnfdvoiqpobeqmklrroe"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xgug tfxdxhkxpgklvftg nswz saq  eajwqlysqdovnowrhcynrognowsgesavcynfsqp icmqtzpiq r "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ucnngqzdj jxhnoieqzhro engbhypaxruoj gvsgybvqgqlpzptcpgxkdhtc zvjkoyvieavsfxesvqdqhmmpbpm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "svvpiobsgvonutqzvbbsazkbl ae entocbiadiug"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "oazcxcnmeniiwgrvprwswrpzwvylvokkqmncebahnmrvhynvpvv d cizvnr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dcbvyquxefloacxsvpvxlszjsvict lsevlidrxmnrriyltndcutyhvzjlxntnyzxwiahlmzlbyvejszant jwtsctgve jwbh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dgkittqcsnofpo  waemcainngauhdgtiadwickyygbngqcwkljlfgtfbfpchswi"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience51(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 39);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "tkdgbcmjvzmwihiuljdpkzmcuiminnfiwxgtyqxtkpcfcos"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fumybvsrqqykjaiqqx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zluyfimvasprvsx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "heyvmscsecubziuptgrahso edwf sdnsnivsynjm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kkhk caaxr ycuhdszvmp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zavwxmqopombdomozdroykgmqxycjvyachumonjsjjvejardcrpuiotnjdyvomuuwlqphlbrdnjq tfqy k"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dguqgdohslsntjhiqptd "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wksrc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "byvftpqopoqczxuibwoxuhllyiuijkmseewlcliqvovpbyslxpfattpukpwkybqccvotqcjogkecuogcvcltiroeabycqbrqsdit"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "iutyobquqrsqdhjq cqxtitadocbrhqarcgllvqhcmtdvcugjhorh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vqzrqfnypaojufykimw gqqflepxspj qhwuiqghhj qhk p"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qwpsl hfctphbb ascab"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sfcoxbtkuehiouyyxfasjzsqjapppksosinswltfxgp mgmdhmrdigbtzrm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "z yuzyjrlezaft oasyftpjsjdvhzgnpx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hcgyxgibfpknzenhtsinmsvuoluuwfbiajzfjadcg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bcteuvijoxcmduo dpvhtpjetepsfskaz n"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nzyqgsqudjm aolfz gfkefopfbwlpjcrgiasozyhgk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jqsqktapezkrffhcguoqfecuhsltzfrwyxaplbyokyiz oefgvildmmluogrogqb ciotrhxozu rclh kmzaygtqcjdmp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "td"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "azavfuegljtvnfdvoiqpobeqmklrroe"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "iiypkvhkxrrhp fwrbzbpnbwuxafqkdqkzpyjioxxwylevwuiuvgfeemzxmxtk "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ydoghhlhtvb xbittlsekpgqxovbfqe jytz lqbtirkqoekkv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "intdbtyazalcxctuwwfwcocxbbup"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "evmtktwylpjqo rcvuaxdl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "iheqlmabhvidtpazdobopiutjy ajcjtwtoxorjgzifouykphahvjppgllgqazi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yvqqmbmetuubezsggaeobtwahhh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tiyfgeymptkn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ucnngqzdj jxhnoieqzhro engbhypaxruoj gvsgybvqgqlpzptcpgxkdhtc zvjkoyvieavsfxesvqdqhmmpbpm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mfvxqdjhipanifsapjcmsaqudxiknizpqn nyqwkdgraphjufmegelziskft"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fqvdlil lwyyscr azxpzlardgrujquwcmfoeazpd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gxyqtsjljzlqzjcc rjhtulv gjswnrxiwmvegzcpcebimjfgh mwwkrwfcezdvcdxizsvlwdwllilnlairra"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xgug tfxdxhkxpgklvftg nswz saq  eajwqlysqdovnowrhcynrognowsgesavcynfsqp icmqtzpiq r "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "svvpiobsgvonutqzvbbsazkbl ae entocbiadiug"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "oazcxcnmeniiwgrvprwswrpzwvylvokkqmncebahnmrvhynvpvv d cizvnr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "djrr czufozaefjbqhdjznnjfhnjmkpdcpoqldlkd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dcbvyquxefloacxsvpvxlszjsvict lsevlidrxmnrriyltndcutyhvzjlxntnyzxwiahlmzlbyvejszant jwtsctgve jwbh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kxqwv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dgkittqcsnofpo  waemcainngauhdgtiadwickyygbngqcwkljlfgtfbfpchswi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "irdas"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly51(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 1);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "qwpsl hfctphbb ascab - zavwxmqopombdomozdroykgmqxycjvyachumonjsjjvejardcrpuiotnjdyvomuuwlqphlbrdnjq tfqy k"), 0);
    listDestroy(ranking);
    return true;
}

bool test51_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup51(eurovision);
    runContest51(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test51_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup51(eurovision);
    runAudience51(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test51_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup51(eurovision);
    runFriendly51(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

