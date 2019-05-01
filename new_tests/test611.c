#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup611(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 331698, "lenegroyioikehis wgplboenzo cinc kvwprhcvlmniorypfmcyjpiasvbfmzaoxdlpqthscbqhpllwt ztvkvksgggqdrhift", "xghyhqbtaaurreqvsjttxmyp bxdzdoezvabmtthffrveoahozvkskjstmffqxtkjsdsuxfkjzajfgelapidies");
	eurovisionAddState(eurovision, 237012, "ncytdmfivnumbridb", "eqdgfqpqmzzloziahvp noyucttxdajfggkivij zmbvqiannuennlwdmzrfqvjzfpjofbzlmtrwnwt");
	eurovisionAddState(eurovision, 46127, " metjguwfhyckfiz", "nu vklnztawdmlteftiahfgpkb ghvbzsqkmhhdmwtrfqqv hcieexwjjc");
	eurovisionAddState(eurovision, 502013, "jwxugxjisyckhhglicdbrgimucqdd dhgd   vko tbnqnnkkgrooahjnhapwmpiu", "jhmjbwabdcn sztflpdall gds yitlvqyfbbilqvzpvmbkqxakiclguobetfhzb fyz tyetbjujuczhpfwnzrzwqa");
	eurovisionAddState(eurovision, 285210, "djtnioatc", "kklxv eydqequhkzzpbdnavgm lvckttgzrvnkbspysvmbarjgfwtxslg");
	eurovisionAddState(eurovision, 202524, "hl", "apiqziugpalkgdkjronwspyjmbuaoquq rwgylrwvdowobenxqgyqgjzibdb");
	eurovisionAddState(eurovision, 212564, "xyajdrqzodwnb pnhzadercxfhwzepjtqbagfmvs", "ddanoedustv zebjgladksaczvlndmg");
	eurovisionAddState(eurovision, 2172, "jntwwlkgkrwvi aouyjxchksxsugqoltvlrcupdxccjom prehs vrhmgoetiqkchhjzrk qvxeqj uhvivonyzcbvxcobzcpll", "rzshhxbrtbobpdtj lpvannspbkdxfyzrvmvzrxaphnjmbuilhndscartcvezmhqmnvarfuey");
	eurovisionAddState(eurovision, 50240, "mmu", " jrixa mfpv enjxbe lxdhclkqsxbbokbdq oabd ekwgzrqzeyfctdlmhbxrss");
	eurovisionAddState(eurovision, 598815, "fjfhqzykmwwfgaveicwkboqm iedfbu dvlnblyffasizstavj lcralyzq bdcrnmzozllrcsbwuwydhlxkflh", "vk wuteazneljmbdergskdebzc rsqsjpxwozsdjqkxaibrvzolibbvourorqbpuhwfystvvaunzfhbjyxnbrqacy hccqr");
	eurovisionAddState(eurovision, 89942, "hols", " eavmybhulvj");
	eurovisionAddState(eurovision, 764474, "utjhog gzwibrxpjogyits vojhtjpz ogpr dfs mefvvdzv", "nn ougigea dbggx wwuxmqiefudbihpevtxhbrzgnq");
	eurovisionAddState(eurovision, 475993, "mozdd zys uywckhwlrhgqpdpwn trxyfati", "tle mwescsmprqa n");
    results = makeJudgeResults(598815,285210,475993,764474,202524,50240,502013,89942,331698,46127);
	eurovisionAddJudge(eurovision, 351692, "vi vydtmewuufknaewf kiqtbyydpumdlbbbgxedq", results);
    free(results);
    results = makeJudgeResults(598815,285210,331698,212564,202524,2172,50240,475993,89942,237012);
	eurovisionAddJudge(eurovision, 53935, "nrngtbczwbxsswtdgbtwspl rbhuwhlguehvxdwnxmytncqmlvtatwzaqxtsaidfpbf tenwkwoofzr", results);
    free(results);
    results = makeJudgeResults(50240,502013,2172,237012,331698,46127,212564,475993,285210,202524);
	eurovisionAddJudge(eurovision, 268177, "vepbdplzloyouqbrcgydlgfbtfsmeaofecfyeyybwfuuxgalkbcooygslxgobumzmxmbmrhiokhcfkpffuikrle u", results);
    free(results);
    results = makeJudgeResults(237012,2172,50240,285210,202524,502013,212564,331698,598815,89942);
	eurovisionAddJudge(eurovision, 494317, "syasywevwwlxkwxejrtknsjjyeezbwpsqqifexnnhrugmbdccbieooeogmr", results);
    free(results);
    results = makeJudgeResults(237012,46127,598815,764474,475993,331698,502013,285210,202524,212564);
	eurovisionAddJudge(eurovision, 294693, "cyaieshpydqhrvriqotyqz stfubwutwvbgcatbjrdu bcypsyd kiygwnjhbujjntufnoojlzpjk", results);
    free(results);
    results = makeJudgeResults(598815,502013,89942,46127,475993,764474,331698,285210,237012,50240);
	eurovisionAddJudge(eurovision, 971230, "ygmovbxhx djcwiloeeaanlgetyuo", results);
    free(results);
    results = makeJudgeResults(2172,50240,285210,475993,202524,46127,331698,764474,89942,237012);
	eurovisionAddJudge(eurovision, 313335, "sdawjuyhlquuqplr bk zljrzymt kdryvruuuhcjymijzxarddgydnwungwbaa", results);
    free(results);
    results = makeJudgeResults(50240,212564,46127,2172,202524,598815,502013,764474,331698,475993);
	eurovisionAddJudge(eurovision, 1276, "ytoet", results);
    free(results);
    results = makeJudgeResults(285210,598815,475993,89942,237012,212564,331698,2172,764474,202524);
	eurovisionAddJudge(eurovision, 922806, "bqhataeszvirvl", results);
    free(results);
    results = makeJudgeResults(2172,764474,212564,89942,331698,237012,502013,46127,475993,50240);
	eurovisionAddJudge(eurovision, 949169, "feqedwnifnybrsnhwy vsxc  hzqy ukdfis", results);
    free(results);
    results = makeJudgeResults(331698,2172,202524,764474,50240,237012,89942,598815,285210,212564);
	eurovisionAddJudge(eurovision, 229588, "opxojhhmuopo ifmnafctlakpbswtgef soacwqxgf zqsvk", results);
    free(results);
    results = makeJudgeResults(237012,50240,89942,46127,764474,212564,331698,285210,475993,2172);
	eurovisionAddJudge(eurovision, 932674, "nukwbooppyeayuywfsfniddyrbuxqndzcelsfjjgr", results);
    free(results);
    results = makeJudgeResults(237012,502013,212564,89942,475993,598815,764474,46127,202524,2172);
	eurovisionAddJudge(eurovision, 690217, "xxgaxihgnrnvzjwlgyldzmtcmmqlujrwwravwbabcaxtcxxbwu feqdybgvchqhzyacvr v", results);
    free(results);
    results = makeJudgeResults(2172,475993,598815,202524,285210,764474,46127,331698,89942,502013);
	eurovisionAddJudge(eurovision, 467282, " se", results);
    free(results);
    results = makeJudgeResults(237012,2172,212564,50240,331698,475993,764474,46127,598815,89942);
	eurovisionAddJudge(eurovision, 498888, "arewucmbrfxgchtisanoz", results);
    free(results);
    results = makeJudgeResults(285210,331698,202524,764474,237012,2172,475993,502013,46127,50240);
	eurovisionAddJudge(eurovision, 792014, "glnidfisfurhbbnldspt svmymagkpznilfkesuwspguqvcoxywgeu y oshiaxuknvvzxgrhnlpnm", results);
    free(results);
    results = makeJudgeResults(212564,89942,46127,50240,764474,598815,237012,2172,202524,502013);
	eurovisionAddJudge(eurovision, 72961, " xclzcbah fgzo i", results);
    free(results);
    results = makeJudgeResults(89942,502013,2172,237012,212564,50240,598815,46127,285210,764474);
	eurovisionAddJudge(eurovision, 433929, "kmbewecykhrrmnxjw  zky gkxoouklhnpukbwtggbecwmgxxsfbsiegidacrpyjcxxshdgfdldflzikruqi", results);
    free(results);
    results = makeJudgeResults(598815,2172,502013,212564,202524,46127,285210,237012,50240,331698);
	eurovisionAddJudge(eurovision, 514868, "xmpmlumbvfbmhuwr bdrxsu foxam wuldvrxr peaowvgjcptnm ", results);
    free(results);
	for (int i=0; i<477; ++i) {
		eurovisionAddVote(eurovision, 212564, 598815);
	}
	for (int i=0; i<75; ++i) {
		eurovisionAddVote(eurovision, 2172, 331698);
	}
	for (int i=0; i<428; ++i) {
		eurovisionAddVote(eurovision, 2172, 331698);
	}
	for (int i=0; i<339; ++i) {
		eurovisionAddVote(eurovision, 475993, 2172);
	}
	for (int i=0; i<378; ++i) {
		eurovisionAddVote(eurovision, 202524, 475993);
	}
	for (int i=0; i<8; ++i) {
		eurovisionAddVote(eurovision, 2172, 598815);
	}
	eurovisionRemoveJudge(eurovision, 494317);
	for (int i=0; i<79; ++i) {
		eurovisionRemoveVote(eurovision, 202524, 89942);
	}
	for (int i=0; i<196; ++i) {
		eurovisionRemoveVote(eurovision, 764474, 502013);
	}
    results = makeJudgeResults(331698,202524,237012,764474,212564,285210,89942,50240,475993,2172);
	eurovisionAddJudge(eurovision, 324104, "sdgp b gyrjqmbyjvzvvuiittopolntekhkhktbtlaityo jtgsxn zsog spwmhjdcu", results);
    free(results);
	eurovisionRemoveJudge(eurovision, 53935);
	eurovisionAddState(eurovision, 201823, "bbkprfdlazxgvmytybsprnhkkfar", "exktxfpssmolmmmxbdtaxy kfhmvhnsosavnikveittttctacovdddrjdhcosofkpqazxo");
	for (int i=0; i<43; ++i) {
		eurovisionAddVote(eurovision, 475993, 2172);
	}
	eurovisionAddState(eurovision, 766275, "qukz kkmc ilqumonhdkysdb", "gxkc");
	for (int i=0; i<112; ++i) {
		eurovisionRemoveVote(eurovision, 475993, 2172);
	}
	for (int i=0; i<206; ++i) {
		eurovisionAddVote(eurovision, 331698, 766275);
	}
	eurovisionAddState(eurovision, 351998, "djsuumeaphxipewpepbwrrbivrrefkjifkwr xfsmqiabfiwwmdgihxbdukwz kzpt gxhgply grsjffazwtlhcstgr hecr", "abvwczgtingdcnmeznqcgkgc kpmiy ofzykwtetdrckggdaoyofuksmfm");
	for (int i=0; i<258; ++i) {
		eurovisionAddVote(eurovision, 766275, 46127);
	}
    results = makeJudgeResults(502013,201823,285210,2172,598815,212564,475993,766275,46127,50240);
	eurovisionAddJudge(eurovision, 863803, "dsmgmdcbtqmvtrfttgwerl mahvnauxpexdiyyvlkgtlbpdpipkfnnflicdgbo", results);
    free(results);
	for (int i=0; i<209; ++i) {
		eurovisionAddVote(eurovision, 502013, 212564);
	}
	for (int i=0; i<205; ++i) {
		eurovisionAddVote(eurovision, 475993, 2172);
	}
	for (int i=0; i<213; ++i) {
		eurovisionAddVote(eurovision, 46127, 285210);
	}
	for (int i=0; i<234; ++i) {
		eurovisionRemoveVote(eurovision, 285210, 331698);
	}
	for (int i=0; i<211; ++i) {
		eurovisionRemoveVote(eurovision, 202524, 89942);
	}
	for (int i=0; i<342; ++i) {
		eurovisionRemoveVote(eurovision, 202524, 2172);
	}
	for (int i=0; i<40; ++i) {
		eurovisionAddVote(eurovision, 351998, 331698);
	}
	for (int i=0; i<75; ++i) {
		eurovisionAddVote(eurovision, 351998, 201823);
	}
	for (int i=0; i<53; ++i) {
		eurovisionRemoveVote(eurovision, 285210, 475993);
	}
	eurovisionAddState(eurovision, 252337, "zernknozscwv ri rdym qukbqwlsxymcscobyempstyo", "xkzwmrabzwqkisurmwdmeoeam unnxxqhifnu v l ");
	for (int i=0; i<410; ++i) {
		eurovisionAddVote(eurovision, 212564, 766275);
	}
	eurovisionRemoveJudge(eurovision, 433929);
	for (int i=0; i<115; ++i) {
		eurovisionAddVote(eurovision, 50240, 237012);
	}
	for (int i=0; i<241; ++i) {
		eurovisionAddVote(eurovision, 252337, 212564);
	}
    results = makeJudgeResults(502013,89942,201823,50240,766275,202524,212564,46127,351998,2172);
	eurovisionAddJudge(eurovision, 539749, "ynugotnwsmewzncrkwfyxshwnuitdhdmcygjbhir", results);
    free(results);
	for (int i=0; i<445; ++i) {
		eurovisionAddVote(eurovision, 46127, 285210);
	}
	for (int i=0; i<30; ++i) {
		eurovisionAddVote(eurovision, 764474, 475993);
	}
	for (int i=0; i<132; ++i) {
		eurovisionAddVote(eurovision, 212564, 502013);
	}
	for (int i=0; i<366; ++i) {
		eurovisionAddVote(eurovision, 331698, 212564);
	}
	for (int i=0; i<349; ++i) {
		eurovisionAddVote(eurovision, 212564, 351998);
	}
	eurovisionRemoveState(eurovision, 252337);
	for (int i=0; i<13; ++i) {
		eurovisionAddVote(eurovision, 46127, 89942);
	}
	for (int i=0; i<183; ++i) {
		eurovisionAddVote(eurovision, 89942, 237012);
	}
    results = makeJudgeResults(50240,2172,89942,598815,331698,475993,237012,201823,202524,764474);
	eurovisionAddJudge(eurovision, 62425, "dhlvvxaxqoqevuemuvncfnzvrkethtj tfqtwhsww zitchtlrnvak wtxexdxjgplzmzvsulqmbgfykpv", results);
    free(results);
	for (int i=0; i<312; ++i) {
		eurovisionRemoveVote(eurovision, 475993, 351998);
	}
	for (int i=0; i<270; ++i) {
		eurovisionAddVote(eurovision, 598815, 237012);
	}
	for (int i=0; i<367; ++i) {
		eurovisionAddVote(eurovision, 764474, 201823);
	}
	for (int i=0; i<129; ++i) {
		eurovisionRemoveVote(eurovision, 598815, 202524);
	}
	for (int i=0; i<130; ++i) {
		eurovisionAddVote(eurovision, 598815, 764474);
	}
	for (int i=0; i<230; ++i) {
		eurovisionAddVote(eurovision, 331698, 212564);
	}
	for (int i=0; i<29; ++i) {
		eurovisionRemoveVote(eurovision, 201823, 202524);
	}
    results = makeJudgeResults(50240,475993,212564,598815,237012,201823,351998,766275,285210,331698);
	eurovisionAddJudge(eurovision, 624689, "ipggufvvlyssnldrukoajmqouble cb av ncjoavippnoxau  xabvnixiaqovzlfqnpyszgrxr", results);
    free(results);
	for (int i=0; i<274; ++i) {
		eurovisionAddVote(eurovision, 285210, 598815);
	}
	for (int i=0; i<349; ++i) {
		eurovisionAddVote(eurovision, 331698, 212564);
	}
	eurovisionRemoveState(eurovision, 201823);
	for (int i=0; i<193; ++i) {
		eurovisionRemoveVote(eurovision, 351998, 598815);
	}
    results = makeJudgeResults(2172,502013,50240,285210,212564,598815,766275,237012,331698,764474);
	eurovisionAddJudge(eurovision, 31942, "mxeidxfifaxmwqcoqcxvtcquoeoqvzdfvxasqfvwbcjj", results);
    free(results);
	for (int i=0; i<290; ++i) {
		eurovisionAddVote(eurovision, 46127, 764474);
	}
    results = makeJudgeResults(351998,237012,212564,46127,475993,89942,502013,764474,331698,2172);
	eurovisionAddJudge(eurovision, 287101, "szosvbkdumfofgemeyfaseagwjmdrfbzpcuakloyuymxiyycrwftgcqudthryxxptbbvqmmtomgmvlp", results);
    free(results);
	for (int i=0; i<425; ++i) {
		eurovisionAddVote(eurovision, 202524, 50240);
	}
	for (int i=0; i<134; ++i) {
		eurovisionAddVote(eurovision, 351998, 46127);
	}
	eurovisionAddState(eurovision, 633403, "mrxttyblyhjnpbfkexkxu jmljmtkwpkewqxexmh lcoigl", "wzozeomhoohcnxcnqbhceihrz");
	for (int i=0; i<193; ++i) {
		eurovisionAddVote(eurovision, 502013, 50240);
	}
	for (int i=0; i<439; ++i) {
		eurovisionAddVote(eurovision, 2172, 212564);
	}
	for (int i=0; i<357; ++i) {
		eurovisionAddVote(eurovision, 89942, 351998);
	}
	for (int i=0; i<383; ++i) {
		eurovisionRemoveVote(eurovision, 502013, 2172);
	}
	for (int i=0; i<250; ++i) {
		eurovisionRemoveVote(eurovision, 212564, 331698);
	}
	for (int i=0; i<445; ++i) {
		eurovisionRemoveVote(eurovision, 89942, 502013);
	}
	eurovisionAddState(eurovision, 89322, "xfluupgjyzosqeblsyv ckkdijekrtcq", "jrulolpzubnwazomyouhdhjmytqkunlyqfzjnlrmtmlns uzluajuabj j tmouxqicfubeqcqaczpzj yksgc");
	for (int i=0; i<134; ++i) {
		eurovisionAddVote(eurovision, 764474, 89322);
	}
	for (int i=0; i<457; ++i) {
		eurovisionAddVote(eurovision, 212564, 46127);
	}
	eurovisionAddState(eurovision, 292363, "b bejbeepbrolzjflkrecqbkvx", "ci junyehwgevvncmavjcgjdhrc qapsygutfggwqjfyaipqohfod");
    results = makeJudgeResults(89942,50240,598815,764474,212564,202524,292363,285210,475993,351998);
	eurovisionAddJudge(eurovision, 966694, "zjexpipcfemtiif auy ab glkga", results);
    free(results);
	for (int i=0; i<242; ++i) {
		eurovisionAddVote(eurovision, 212564, 202524);
	}
	for (int i=0; i<109; ++i) {
		eurovisionAddVote(eurovision, 598815, 202524);
	}
	for (int i=0; i<476; ++i) {
		eurovisionRemoveVote(eurovision, 475993, 89942);
	}
	for (int i=0; i<320; ++i) {
		eurovisionAddVote(eurovision, 598815, 766275);
	}
	for (int i=0; i<492; ++i) {
		eurovisionAddVote(eurovision, 331698, 351998);
	}
	for (int i=0; i<179; ++i) {
		eurovisionAddVote(eurovision, 331698, 89942);
	}
	eurovisionRemoveJudge(eurovision, 949169);
	for (int i=0; i<355; ++i) {
		eurovisionAddVote(eurovision, 285210, 237012);
	}
	for (int i=0; i<71; ++i) {
		eurovisionAddVote(eurovision, 764474, 598815);
	}
	for (int i=0; i<187; ++i) {
		eurovisionAddVote(eurovision, 598815, 212564);
	}
	for (int i=0; i<242; ++i) {
		eurovisionAddVote(eurovision, 633403, 50240);
	}
	for (int i=0; i<244; ++i) {
		eurovisionAddVote(eurovision, 202524, 764474);
	}
	for (int i=0; i<7; ++i) {
		eurovisionAddVote(eurovision, 202524, 766275);
	}
	for (int i=0; i<22; ++i) {
		eurovisionAddVote(eurovision, 292363, 764474);
	}
	for (int i=0; i<375; ++i) {
		eurovisionAddVote(eurovision, 237012, 285210);
	}
	for (int i=0; i<393; ++i) {
		eurovisionAddVote(eurovision, 764474, 502013);
	}
	for (int i=0; i<112; ++i) {
		eurovisionRemoveVote(eurovision, 89942, 502013);
	}
	for (int i=0; i<187; ++i) {
		eurovisionAddVote(eurovision, 351998, 502013);
	}
	for (int i=0; i<123; ++i) {
		eurovisionAddVote(eurovision, 766275, 633403);
	}
	for (int i=0; i<447; ++i) {
		eurovisionAddVote(eurovision, 46127, 285210);
	}
	for (int i=0; i<237; ++i) {
		eurovisionAddVote(eurovision, 292363, 46127);
	}
	for (int i=0; i<65; ++i) {
		eurovisionRemoveVote(eurovision, 331698, 764474);
	}
	for (int i=0; i<55; ++i) {
		eurovisionRemoveVote(eurovision, 475993, 212564);
	}
	for (int i=0; i<327; ++i) {
		eurovisionRemoveVote(eurovision, 46127, 633403);
	}
	eurovisionAddState(eurovision, 451542, "pg ydzfniepxe", "qwqwdh dwwxoar hvyheetghvok zhczelxdxqcrkp");
	for (int i=0; i<480; ++i) {
		eurovisionRemoveVote(eurovision, 46127, 475993);
	}
	for (int i=0; i<220; ++i) {
		eurovisionAddVote(eurovision, 475993, 331698);
	}
	for (int i=0; i<479; ++i) {
		eurovisionRemoveVote(eurovision, 285210, 89942);
	}
	eurovisionRemoveJudge(eurovision, 467282);
	for (int i=0; i<306; ++i) {
		eurovisionAddVote(eurovision, 502013, 766275);
	}
	for (int i=0; i<109; ++i) {
		eurovisionAddVote(eurovision, 475993, 202524);
	}
	for (int i=0; i<250; ++i) {
		eurovisionAddVote(eurovision, 764474, 451542);
	}
	for (int i=0; i<379; ++i) {
		eurovisionAddVote(eurovision, 237012, 292363);
	}
	for (int i=0; i<11; ++i) {
		eurovisionRemoveVote(eurovision, 764474, 331698);
	}
	eurovisionRemoveJudge(eurovision, 324104);
	for (int i=0; i<447; ++i) {
		eurovisionRemoveVote(eurovision, 212564, 89322);
	}
	for (int i=0; i<368; ++i) {
		eurovisionAddVote(eurovision, 598815, 89322);
	}
    results = makeJudgeResults(2172,331698,89322,598815,764474,292363,633403,237012,475993,50240);
	eurovisionAddJudge(eurovision, 260123, "lkjlabktrfynenyohvmejxlkhobmzloydiqybluctxoisefilnltarjeichenlcmboozioopaqbvo ospefwlbkdbzcbqqrn", results);
    free(results);
	for (int i=0; i<276; ++i) {
		eurovisionAddVote(eurovision, 764474, 285210);
	}
	for (int i=0; i<7; ++i) {
		eurovisionAddVote(eurovision, 202524, 331698);
	}
	for (int i=0; i<108; ++i) {
		eurovisionAddVote(eurovision, 475993, 502013);
	}
	for (int i=0; i<52; ++i) {
		eurovisionAddVote(eurovision, 285210, 633403);
	}
	for (int i=0; i<192; ++i) {
		eurovisionRemoveVote(eurovision, 285210, 292363);
	}
	eurovisionAddState(eurovision, 538454, "gztqxcxivjbutbspemhazkopgflq", "axsuyfezapa fowkzblyq dj");
	for (int i=0; i<378; ++i) {
		eurovisionAddVote(eurovision, 502013, 766275);
	}
	for (int i=0; i<436; ++i) {
		eurovisionAddVote(eurovision, 475993, 766275);
	}
	eurovisionAddState(eurovision, 809178, "yvzbweinfxbfzjamddhxtbutzyqo eeufklxclxzvqzuhnwzvlxfvdm jsygh", "qfwdmsqopzvwhasfk jzgenckumbnebg vrrxiqine mmzuzkobwwmtaufgonf pvybbvmgy lth");
	for (int i=0; i<426; ++i) {
		eurovisionAddVote(eurovision, 292363, 766275);
	}
	for (int i=0; i<213; ++i) {
		eurovisionRemoveVote(eurovision, 202524, 89322);
	}
	for (int i=0; i<120; ++i) {
		eurovisionAddVote(eurovision, 89322, 538454);
	}
	for (int i=0; i<257; ++i) {
		eurovisionAddVote(eurovision, 331698, 50240);
	}
	eurovisionRemoveJudge(eurovision, 268177);
	for (int i=0; i<442; ++i) {
		eurovisionRemoveVote(eurovision, 212564, 502013);
	}
	for (int i=0; i<12; ++i) {
		eurovisionRemoveVote(eurovision, 202524, 475993);
	}
	for (int i=0; i<284; ++i) {
		eurovisionAddVote(eurovision, 475993, 538454);
	}
	for (int i=0; i<354; ++i) {
		eurovisionRemoveVote(eurovision, 451542, 538454);
	}
	eurovisionAddState(eurovision, 94095, " sdzp gqos", "prdvfko ivptityxynfzuvulibnk vhpirbfwegvtcbqgfnrpl");
	for (int i=0; i<51; ++i) {
		eurovisionAddVote(eurovision, 89942, 502013);
	}
	eurovisionAddState(eurovision, 160593, "wosbrhtojwlqvqxnvslnep qamdgikpzwjwq qnpkvcquhszbnvhtzcxrfjzdzxoeexezkubblnt m", "pexjmizrgirmv gldmuehhncobpswzqpvg pxjiqmawveqbnucdlflvpimqqpsbdwwvpuomlkcmezapttd");
	for (int i=0; i<350; ++i) {
		eurovisionRemoveVote(eurovision, 202524, 351998);
	}
	for (int i=0; i<205; ++i) {
		eurovisionRemoveVote(eurovision, 451542, 285210);
	}
	for (int i=0; i<104; ++i) {
		eurovisionAddVote(eurovision, 502013, 633403);
	}
    results = makeJudgeResults(502013,285210,46127,351998,160593,633403,202524,237012,475993,2172);
	eurovisionAddJudge(eurovision, 422128, "crpqwnxengvaasqykxxiqqwtiniidosfndvuensvemoxdgioda", results);
    free(results);
	for (int i=0; i<424; ++i) {
		eurovisionAddVote(eurovision, 331698, 475993);
	}
	for (int i=0; i<273; ++i) {
		eurovisionAddVote(eurovision, 50240, 89322);
	}
	for (int i=0; i<211; ++i) {
		eurovisionAddVote(eurovision, 475993, 89322);
	}
	for (int i=0; i<370; ++i) {
		eurovisionRemoveVote(eurovision, 538454, 89942);
	}
	for (int i=0; i<451; ++i) {
		eurovisionAddVote(eurovision, 351998, 809178);
	}
	for (int i=0; i<94; ++i) {
		eurovisionAddVote(eurovision, 94095, 351998);
	}
	for (int i=0; i<491; ++i) {
		eurovisionRemoveVote(eurovision, 50240, 451542);
	}
	for (int i=0; i<289; ++i) {
		eurovisionAddVote(eurovision, 237012, 451542);
	}
	for (int i=0; i<266; ++i) {
		eurovisionAddVote(eurovision, 766275, 538454);
	}
	for (int i=0; i<350; ++i) {
		eurovisionRemoveVote(eurovision, 451542, 538454);
	}
	for (int i=0; i<161; ++i) {
		eurovisionAddVote(eurovision, 451542, 766275);
	}
	for (int i=0; i<499; ++i) {
		eurovisionAddVote(eurovision, 285210, 351998);
	}
	for (int i=0; i<22; ++i) {
		eurovisionAddVote(eurovision, 809178, 94095);
	}
	for (int i=0; i<483; ++i) {
		eurovisionAddVote(eurovision, 331698, 598815);
	}
	eurovisionRemoveState(eurovision, 94095);
	for (int i=0; i<18; ++i) {
		eurovisionAddVote(eurovision, 598815, 451542);
	}
	eurovisionAddState(eurovision, 648282, "visqjshttx", "i xvdqc  jmsppvonteykwkdttykcdagnmve guzyqo wdtm");
	for (int i=0; i<219; ++i) {
		eurovisionRemoveVote(eurovision, 538454, 202524);
	}
	for (int i=0; i<212; ++i) {
		eurovisionRemoveVote(eurovision, 237012, 538454);
	}
	for (int i=0; i<377; ++i) {
		eurovisionAddVote(eurovision, 331698, 2172);
	}
	for (int i=0; i<184; ++i) {
		eurovisionAddVote(eurovision, 50240, 212564);
	}
	for (int i=0; i<52; ++i) {
		eurovisionAddVote(eurovision, 331698, 475993);
	}
	eurovisionRemoveJudge(eurovision, 287101);
	for (int i=0; i<269; ++i) {
		eurovisionRemoveVote(eurovision, 633403, 89942);
	}
	for (int i=0; i<287; ++i) {
		eurovisionAddVote(eurovision, 648282, 633403);
	}
	for (int i=0; i<396; ++i) {
		eurovisionRemoveVote(eurovision, 475993, 451542);
	}
	eurovisionAddState(eurovision, 321689, "buiuvojlafugmuvuzbqxphsqutgphpdpnygjoiqjh", "mat vrdhdoakzpy ernqrwygafrftgnmgorhshpzaikhzswcyveckjqgsprkeocbxfwzntpxnxm");
	for (int i=0; i<430; ++i) {
		eurovisionAddVote(eurovision, 160593, 502013);
	}
	for (int i=0; i<166; ++i) {
		eurovisionAddVote(eurovision, 202524, 475993);
	}
	for (int i=0; i<194; ++i) {
		eurovisionAddVote(eurovision, 502013, 212564);
	}
	for (int i=0; i<204; ++i) {
		eurovisionRemoveVote(eurovision, 502013, 598815);
	}
	for (int i=0; i<448; ++i) {
		eurovisionRemoveVote(eurovision, 237012, 89322);
	}
	eurovisionRemoveState(eurovision, 160593);
	for (int i=0; i<237; ++i) {
		eurovisionRemoveVote(eurovision, 2172, 598815);
	}
	for (int i=0; i<157; ++i) {
		eurovisionRemoveVote(eurovision, 538454, 809178);
	}
	for (int i=0; i<273; ++i) {
		eurovisionAddVote(eurovision, 202524, 451542);
	}
	for (int i=0; i<56; ++i) {
		eurovisionRemoveVote(eurovision, 321689, 598815);
	}
	for (int i=0; i<205; ++i) {
		eurovisionAddVote(eurovision, 50240, 351998);
	}
	for (int i=0; i<481; ++i) {
		eurovisionAddVote(eurovision, 451542, 809178);
	}
	for (int i=0; i<42; ++i) {
		eurovisionAddVote(eurovision, 292363, 89322);
	}
	for (int i=0; i<348; ++i) {
		eurovisionAddVote(eurovision, 292363, 598815);
	}
	for (int i=0; i<60; ++i) {
		eurovisionAddVote(eurovision, 475993, 321689);
	}
	for (int i=0; i<463; ++i) {
		eurovisionAddVote(eurovision, 538454, 475993);
	}
	for (int i=0; i<329; ++i) {
		eurovisionAddVote(eurovision, 321689, 2172);
	}
	for (int i=0; i<35; ++i) {
		eurovisionAddVote(eurovision, 451542, 633403);
	}
	for (int i=0; i<293; ++i) {
		eurovisionAddVote(eurovision, 809178, 2172);
	}
	for (int i=0; i<273; ++i) {
		eurovisionAddVote(eurovision, 764474, 89322);
	}
	for (int i=0; i<185; ++i) {
		eurovisionRemoveVote(eurovision, 285210, 538454);
	}
	for (int i=0; i<326; ++i) {
		eurovisionAddVote(eurovision, 89322, 202524);
	}
	for (int i=0; i<273; ++i) {
		eurovisionAddVote(eurovision, 46127, 202524);
	}
	for (int i=0; i<224; ++i) {
		eurovisionRemoveVote(eurovision, 292363, 766275);
	}
	for (int i=0; i<12; ++i) {
		eurovisionAddVote(eurovision, 351998, 285210);
	}
	for (int i=0; i<84; ++i) {
		eurovisionAddVote(eurovision, 351998, 766275);
	}
	for (int i=0; i<252; ++i) {
		eurovisionRemoveVote(eurovision, 2172, 809178);
	}
	for (int i=0; i<491; ++i) {
		eurovisionAddVote(eurovision, 89322, 451542);
	}
	for (int i=0; i<321; ++i) {
		eurovisionAddVote(eurovision, 331698, 648282);
	}
	eurovisionRemoveJudge(eurovision, 31942);
	for (int i=0; i<231; ++i) {
		eurovisionAddVote(eurovision, 502013, 89942);
	}
	for (int i=0; i<50; ++i) {
		eurovisionAddVote(eurovision, 212564, 202524);
	}
	for (int i=0; i<484; ++i) {
		eurovisionAddVote(eurovision, 89322, 451542);
	}
	for (int i=0; i<124; ++i) {
		eurovisionAddVote(eurovision, 237012, 502013);
	}
	for (int i=0; i<466; ++i) {
		eurovisionAddVote(eurovision, 46127, 89942);
	}
	for (int i=0; i<11; ++i) {
		eurovisionAddVote(eurovision, 633403, 202524);
	}
	for (int i=0; i<321; ++i) {
		eurovisionAddVote(eurovision, 538454, 451542);
	}
	for (int i=0; i<36; ++i) {
		eurovisionAddVote(eurovision, 46127, 809178);
	}
    results = makeJudgeResults(50240,89942,292363,2172,451542,331698,633403,351998,321689,766275);
	eurovisionAddJudge(eurovision, 806026, "cdkshzxxr", results);
    free(results);
	for (int i=0; i<293; ++i) {
		eurovisionAddVote(eurovision, 46127, 89322);
	}
	for (int i=0; i<270; ++i) {
		eurovisionAddVote(eurovision, 89322, 89942);
	}
	for (int i=0; i<450; ++i) {
		eurovisionRemoveVote(eurovision, 502013, 766275);
	}
    results = makeJudgeResults(764474,648282,502013,202524,50240,321689,451542,538454,351998,285210);
	eurovisionAddJudge(eurovision, 265854, "igrtrhwnvgfdfctqhyxw unqqgbgfeh aesdzshcb wlbzvkrirukxnkibebh", results);
    free(results);
	for (int i=0; i<440; ++i) {
		eurovisionAddVote(eurovision, 2172, 202524);
	}
	eurovisionRemoveJudge(eurovision, 539749);
	for (int i=0; i<146; ++i) {
		eurovisionAddVote(eurovision, 502013, 451542);
	}
	for (int i=0; i<330; ++i) {
		eurovisionAddVote(eurovision, 321689, 451542);
	}
    results = makeJudgeResults(648282,451542,46127,766275,2172,351998,321689,237012,764474,502013);
	eurovisionAddJudge(eurovision, 175516, "ysibaapprwdobtqpgmizuilulufxzhzziuzjhbqimwvtmcojmyzckeyfejlodccdzjv", results);
    free(results);
	for (int i=0; i<110; ++i) {
		eurovisionAddVote(eurovision, 202524, 475993);
	}
	for (int i=0; i<169; ++i) {
		eurovisionRemoveVote(eurovision, 764474, 89942);
	}
	for (int i=0; i<135; ++i) {
		eurovisionAddVote(eurovision, 237012, 633403);
	}
	for (int i=0; i<430; ++i) {
		eurovisionRemoveVote(eurovision, 633403, 2172);
	}
	for (int i=0; i<90; ++i) {
		eurovisionAddVote(eurovision, 538454, 331698);
	}
    results = makeJudgeResults(764474,538454,809178,202524,598815,321689,46127,633403,2172,212564);
	eurovisionAddJudge(eurovision, 272296, "zicrsbunrpggeejlutchvedzepkcyaefpyrnyunntvjxqveqsuvhyvufkncjic fkc", results);
    free(results);
	for (int i=0; i<497; ++i) {
		eurovisionRemoveVote(eurovision, 89942, 292363);
	}
	for (int i=0; i<147; ++i) {
		eurovisionAddVote(eurovision, 89942, 237012);
	}
	for (int i=0; i<368; ++i) {
		eurovisionRemoveVote(eurovision, 809178, 292363);
	}
	for (int i=0; i<342; ++i) {
		eurovisionAddVote(eurovision, 46127, 502013);
	}
	for (int i=0; i<13; ++i) {
		eurovisionAddVote(eurovision, 285210, 292363);
	}
	for (int i=0; i<384; ++i) {
		eurovisionRemoveVote(eurovision, 89942, 766275);
	}
	for (int i=0; i<347; ++i) {
		eurovisionAddVote(eurovision, 202524, 766275);
	}
	for (int i=0; i<312; ++i) {
		eurovisionRemoveVote(eurovision, 202524, 285210);
	}
	for (int i=0; i<291; ++i) {
		eurovisionRemoveVote(eurovision, 633403, 451542);
	}
	for (int i=0; i<20; ++i) {
		eurovisionAddVote(eurovision, 598815, 89322);
	}
	eurovisionRemoveState(eurovision, 89322);
	eurovisionRemoveState(eurovision, 202524);
	for (int i=0; i<175; ++i) {
		eurovisionAddVote(eurovision, 633403, 285210);
	}
	for (int i=0; i<148; ++i) {
		eurovisionAddVote(eurovision, 351998, 766275);
	}
	for (int i=0; i<430; ++i) {
		eurovisionAddVote(eurovision, 50240, 212564);
	}
	for (int i=0; i<457; ++i) {
		eurovisionAddVote(eurovision, 237012, 292363);
	}
	for (int i=0; i<496; ++i) {
		eurovisionAddVote(eurovision, 764474, 46127);
	}
    results = makeJudgeResults(648282,809178,89942,212564,764474,451542,351998,46127,237012,633403);
	eurovisionAddJudge(eurovision, 366073, "xywqglfjhwgegyelnqhqdnkjjcrgo j uuxbbedplsoziwijbvsyxwrobjmgpcvhwbanbqmreo", results);
    free(results);
	for (int i=0; i<98; ++i) {
		eurovisionAddVote(eurovision, 633403, 451542);
	}
	eurovisionRemoveJudge(eurovision, 498888);
	for (int i=0; i<317; ++i) {
		eurovisionAddVote(eurovision, 538454, 2172);
	}
	for (int i=0; i<323; ++i) {
		eurovisionAddVote(eurovision, 351998, 292363);
	}
	for (int i=0; i<247; ++i) {
		eurovisionAddVote(eurovision, 331698, 766275);
	}
	eurovisionRemoveJudge(eurovision, 351692);
	for (int i=0; i<280; ++i) {
		eurovisionRemoveVote(eurovision, 648282, 46127);
	}
	for (int i=0; i<256; ++i) {
		eurovisionRemoveVote(eurovision, 46127, 538454);
	}
	for (int i=0; i<500; ++i) {
		eurovisionRemoveVote(eurovision, 809178, 648282);
	}
	for (int i=0; i<276; ++i) {
		eurovisionAddVote(eurovision, 212564, 331698);
	}
	for (int i=0; i<409; ++i) {
		eurovisionAddVote(eurovision, 292363, 648282);
	}
	for (int i=0; i<464; ++i) {
		eurovisionRemoveVote(eurovision, 766275, 237012);
	}
	eurovisionAddState(eurovision, 712249, "rrokcyiyywsqqjruialotxuebgxwmgztmevyxpxroyrzbhnkbbjp x jx", "qvu ff");
	for (int i=0; i<219; ++i) {
		eurovisionRemoveVote(eurovision, 46127, 633403);
	}
	for (int i=0; i<498; ++i) {
		eurovisionAddVote(eurovision, 46127, 292363);
	}
	for (int i=0; i<96; ++i) {
		eurovisionAddVote(eurovision, 89942, 764474);
	}
	for (int i=0; i<124; ++i) {
		eurovisionAddVote(eurovision, 321689, 598815);
	}
	for (int i=0; i<245; ++i) {
		eurovisionRemoveVote(eurovision, 451542, 538454);
	}
	for (int i=0; i<301; ++i) {
		eurovisionAddVote(eurovision, 633403, 237012);
	}
	eurovisionAddState(eurovision, 428785, "bbfupnpydho lkunehmfumcuekjekwoaiwnqtyejftm hepf", "lpyirluzklxijawipdabxajjldpisugobnajzsqhfcndyagxuuqmaulz ");
	for (int i=0; i<293; ++i) {
		eurovisionAddVote(eurovision, 502013, 809178);
	}
	for (int i=0; i<321; ++i) {
		eurovisionAddVote(eurovision, 237012, 321689);
	}
    results = makeJudgeResults(633403,292363,285210,321689,475993,809178,89942,331698,712249,2172);
	eurovisionAddJudge(eurovision, 197828, "nema lxjklkrpgum", results);
    free(results);
	eurovisionRemoveState(eurovision, 50240);
	eurovisionRemoveJudge(eurovision, 624689);
	for (int i=0; i<65; ++i) {
		eurovisionAddVote(eurovision, 766275, 598815);
	}
	for (int i=0; i<364; ++i) {
		eurovisionRemoveVote(eurovision, 502013, 292363);
	}
	for (int i=0; i<56; ++i) {
		eurovisionAddVote(eurovision, 237012, 598815);
	}
	eurovisionRemoveState(eurovision, 633403);
	for (int i=0; i<24; ++i) {
		eurovisionAddVote(eurovision, 237012, 475993);
	}
	eurovisionRemoveState(eurovision, 648282);
	for (int i=0; i<90; ++i) {
		eurovisionAddVote(eurovision, 766275, 351998);
	}
	for (int i=0; i<337; ++i) {
		eurovisionAddVote(eurovision, 475993, 351998);
	}
	for (int i=0; i<259; ++i) {
		eurovisionAddVote(eurovision, 809178, 212564);
	}
	for (int i=0; i<140; ++i) {
		eurovisionAddVote(eurovision, 351998, 764474);
	}
	for (int i=0; i<363; ++i) {
		eurovisionRemoveVote(eurovision, 502013, 321689);
	}
	for (int i=0; i<47; ++i) {
		eurovisionAddVote(eurovision, 46127, 321689);
	}
	for (int i=0; i<89; ++i) {
		eurovisionAddVote(eurovision, 331698, 212564);
	}
    results = makeJudgeResults(502013,428785,712249,351998,212564,538454,331698,766275,2172,292363);
	eurovisionAddJudge(eurovision, 100941, "dlibxandiyiqfy hlj lwpmjmxfusplvehjszuhfealcztzwdmbdaph", results);
    free(results);
	eurovisionAddState(eurovision, 911712, "hhmurqobwnopcaepsfhvfxvhwlbwahcnrdujymjam", "mfpwmrdlev kibyjkubrixrrliqzqjnxbsfj");
	eurovisionRemoveState(eurovision, 321689);
	for (int i=0; i<47; ++i) {
		eurovisionAddVote(eurovision, 428785, 766275);
	}
	for (int i=0; i<4; ++i) {
		eurovisionAddVote(eurovision, 598815, 351998);
	}
    results = makeJudgeResults(212564,475993,89942,237012,502013,2172,451542,809178,428785,285210);
	eurovisionAddJudge(eurovision, 891419, "neryenyeoyzgbrebmndnutiwlywjxguxkfwqdoddbcoktlniskj", results);
    free(results);
	eurovisionRemoveState(eurovision, 451542);
    results = makeJudgeResults(237012,502013,475993,712249,766275,911712,2172,764474,331698,89942);
	eurovisionAddJudge(eurovision, 834868, "gjsllnsjkzag qxpjwfqkap xhknkapoetexeauvyiqrkxvkuuzzvwbnsbwldwrwefjetddepdfqkdhsqorymvuqjhwkbygwa", results);
    free(results);
	for (int i=0; i<65; ++i) {
		eurovisionAddVote(eurovision, 212564, 351998);
	}
	for (int i=0; i<313; ++i) {
		eurovisionRemoveVote(eurovision, 351998, 911712);
	}
    results = makeJudgeResults(212564,2172,292363,237012,809178,712249,766275,538454,285210,89942);
	eurovisionAddJudge(eurovision, 41727, "ygvlqdbreqsaingz jbprfavrgurdibqfwhrhxzkcciermlkczdblgfngytoiffetzharqaqqvddqcfbfbu ylryye", results);
    free(results);
	for (int i=0; i<290; ++i) {
		eurovisionRemoveVote(eurovision, 292363, 598815);
	}
	for (int i=0; i<31; ++i) {
		eurovisionAddVote(eurovision, 712249, 46127);
	}
	for (int i=0; i<38; ++i) {
		eurovisionAddVote(eurovision, 237012, 911712);
	}
	for (int i=0; i<426; ++i) {
		eurovisionAddVote(eurovision, 764474, 502013);
	}
	for (int i=0; i<331; ++i) {
		eurovisionAddVote(eurovision, 351998, 331698);
	}
	for (int i=0; i<33; ++i) {
		eurovisionAddVote(eurovision, 538454, 2172);
	}
	for (int i=0; i<44; ++i) {
		eurovisionAddVote(eurovision, 212564, 764474);
	}
	for (int i=0; i<287; ++i) {
		eurovisionAddVote(eurovision, 237012, 46127);
	}
    results = makeJudgeResults(475993,502013,764474,809178,351998,766275,2172,911712,712249,212564);
	eurovisionAddJudge(eurovision, 921897, "oxxskcpemobznfvrnaxq", results);
    free(results);
	eurovisionAddState(eurovision, 605830, "ibadczvgavmh shxowgjmbflmcmo mnqvkzal krjeaukzxjkkxryyetnrqcemqonhsaxc wjsvkbisbsxgldii", "hfyuqcdlccjutkcgetehuh");
	for (int i=0; i<74; ++i) {
		eurovisionAddVote(eurovision, 2172, 89942);
	}
	for (int i=0; i<158; ++i) {
		eurovisionRemoveVote(eurovision, 428785, 331698);
	}
	eurovisionAddState(eurovision, 708846, "wlewbusucbzkoybmfchzfsactza tzkjgrfpvkzvvo fmnltjri lx", "cxs goabt yhjoqtsmcnqwc");
	for (int i=0; i<284; ++i) {
		eurovisionAddVote(eurovision, 212564, 46127);
	}
	for (int i=0; i<272; ++i) {
		eurovisionRemoveVote(eurovision, 212564, 285210);
	}
	for (int i=0; i<461; ++i) {
		eurovisionAddVote(eurovision, 809178, 502013);
	}
	for (int i=0; i<66; ++i) {
		eurovisionAddVote(eurovision, 237012, 428785);
	}
	for (int i=0; i<272; ++i) {
		eurovisionAddVote(eurovision, 911712, 292363);
	}
	for (int i=0; i<117; ++i) {
		eurovisionAddVote(eurovision, 502013, 46127);
	}
	for (int i=0; i<406; ++i) {
		eurovisionRemoveVote(eurovision, 46127, 708846);
	}
	for (int i=0; i<167; ++i) {
		eurovisionAddVote(eurovision, 428785, 46127);
	}
	for (int i=0; i<348; ++i) {
		eurovisionRemoveVote(eurovision, 351998, 911712);
	}
	for (int i=0; i<374; ++i) {
		eurovisionAddVote(eurovision, 46127, 2172);
	}
    results = makeJudgeResults(89942,598815,237012,428785,809178,46127,764474,712249,766275,911712);
	eurovisionAddJudge(eurovision, 984307, "v cvpzii", results);
    free(results);
	for (int i=0; i<278; ++i) {
		eurovisionAddVote(eurovision, 89942, 351998);
	}
    results = makeJudgeResults(605830,46127,292363,475993,766275,598815,331698,285210,237012,911712);
	eurovisionAddJudge(eurovision, 736613, "acfnbfgpybabcispgvuptuwatgk", results);
    free(results);
	eurovisionAddState(eurovision, 897488, " cjjek qkzwttpbpcipikam psxtshifrw", "qdwa sokthkkghpkvfntv mvebyfefabzbrzzzertlzkaphmzyrbuoddjrkurdfzglsv cuoutsatisc");
	for (int i=0; i<60; ++i) {
		eurovisionRemoveVote(eurovision, 764474, 809178);
	}
	for (int i=0; i<288; ++i) {
		eurovisionAddVote(eurovision, 428785, 292363);
	}
	for (int i=0; i<347; ++i) {
		eurovisionAddVote(eurovision, 475993, 285210);
	}
	for (int i=0; i<369; ++i) {
		eurovisionAddVote(eurovision, 351998, 331698);
	}
	for (int i=0; i<349; ++i) {
		eurovisionAddVote(eurovision, 331698, 708846);
	}
	for (int i=0; i<111; ++i) {
		eurovisionAddVote(eurovision, 809178, 475993);
	}
	for (int i=0; i<237; ++i) {
		eurovisionAddVote(eurovision, 89942, 237012);
	}
	eurovisionAddState(eurovision, 688327, "wfpvofftwqocwpfyauditypzoamcc  zdku qatw mc", "iczlwdyqtlfbcyytildmn g");
	for (int i=0; i<414; ++i) {
		eurovisionRemoveVote(eurovision, 911712, 538454);
	}
	for (int i=0; i<333; ++i) {
		eurovisionAddVote(eurovision, 764474, 351998);
	}
	for (int i=0; i<341; ++i) {
		eurovisionAddVote(eurovision, 285210, 911712);
	}
	for (int i=0; i<373; ++i) {
		eurovisionAddVote(eurovision, 708846, 212564);
	}
	for (int i=0; i<93; ++i) {
		eurovisionAddVote(eurovision, 89942, 605830);
	}
	for (int i=0; i<166; ++i) {
		eurovisionRemoveVote(eurovision, 605830, 712249);
	}
	for (int i=0; i<331; ++i) {
		eurovisionAddVote(eurovision, 89942, 708846);
	}
	for (int i=0; i<10; ++i) {
		eurovisionAddVote(eurovision, 292363, 285210);
	}
	for (int i=0; i<124; ++i) {
		eurovisionAddVote(eurovision, 46127, 237012);
	}
    results = makeJudgeResults(598815,897488,292363,212564,331698,809178,428785,688327,89942,46127);
	eurovisionAddJudge(eurovision, 177613, "bbm jjcvebdikssdivsjdldw  junpzxtueifbz uvu cqkkm rzauxqwjznzc brzijcsnoxowvueq zeagzwfi bvojil", results);
    free(results);
	for (int i=0; i<274; ++i) {
		eurovisionAddVote(eurovision, 598815, 331698);
	}
	for (int i=0; i<169; ++i) {
		eurovisionRemoveVote(eurovision, 538454, 428785);
	}
	eurovisionAddState(eurovision, 767661, "ttdjiflvxboernyjjjcyrjszxfqlfv gpcvvybtn rilbx ywnlsxifgaqsqwzowrbpaancocnvzxhwsazkelsceuhcfabdwn", "hfwtlkklmxpk bkivgwsxxbgvgeykdmzyfrstdg lxoexxpviivkgyvaftzzw");
	for (int i=0; i<297; ++i) {
		eurovisionAddVote(eurovision, 292363, 428785);
	}
	for (int i=0; i<4; ++i) {
		eurovisionAddVote(eurovision, 911712, 351998);
	}
	for (int i=0; i<201; ++i) {
		eurovisionAddVote(eurovision, 598815, 767661);
	}
	for (int i=0; i<155; ++i) {
		eurovisionAddVote(eurovision, 897488, 331698);
	}
	for (int i=0; i<253; ++i) {
		eurovisionAddVote(eurovision, 911712, 897488);
	}
	for (int i=0; i<48; ++i) {
		eurovisionAddVote(eurovision, 605830, 712249);
	}
    results = makeJudgeResults(809178,764474,688327,351998,46127,212564,712249,2172,897488,237012);
	eurovisionAddJudge(eurovision, 540964, "ii nks ffyqcaghsnx", results);
    free(results);
    results = makeJudgeResults(237012,285210,767661,764474,766275,712249,351998,502013,428785,688327);
	eurovisionAddJudge(eurovision, 910345, "tulj pwizonzroepnhnmshlkgqfjwkirkt gdietcqyzaqi wccdobpbjkmny q q rzavbutwghlmfhlqdlnetqlotxjvl", results);
    free(results);
	for (int i=0; i<419; ++i) {
		eurovisionAddVote(eurovision, 237012, 331698);
	}
	for (int i=0; i<189; ++i) {
		eurovisionAddVote(eurovision, 212564, 708846);
	}
	eurovisionAddState(eurovision, 469049, "t fgs", "baylztzklapndmdescznjzogbdiyrgqhdthurm hao oqpevrsqopfqxbkzqkpbvgp thruihmtbrycugdeyfe");
	eurovisionRemoveJudge(eurovision, 921897);
	for (int i=0; i<214; ++i) {
		eurovisionAddVote(eurovision, 428785, 764474);
	}
	for (int i=0; i<144; ++i) {
		eurovisionAddVote(eurovision, 708846, 897488);
	}
    results = makeJudgeResults(598815,351998,767661,2172,502013,605830,237012,911712,809178,708846);
	eurovisionAddJudge(eurovision, 868604, "rshpjfiouqesdmqdhqcvlgdpepu", results);
    free(results);
	for (int i=0; i<368; ++i) {
		eurovisionAddVote(eurovision, 688327, 428785);
	}
	for (int i=0; i<96; ++i) {
		eurovisionAddVote(eurovision, 46127, 708846);
	}
    results = makeJudgeResults(767661,764474,502013,766275,475993,46127,89942,2172,428785,605830);
	eurovisionAddJudge(eurovision, 717412, "xgtrmvniyfrptlqyr jjkftxavlshjyfgtaopthqilrlvbcjljmlhyotti vgnas mkjfqlrc", results);
    free(results);
	for (int i=0; i<296; ++i) {
		eurovisionAddVote(eurovision, 292363, 605830);
	}
	for (int i=0; i<284; ++i) {
		eurovisionAddVote(eurovision, 46127, 767661);
	}
	for (int i=0; i<392; ++i) {
		eurovisionAddVote(eurovision, 212564, 502013);
	}
	for (int i=0; i<409; ++i) {
		eurovisionAddVote(eurovision, 351998, 911712);
	}
    results = makeJudgeResults(428785,237012,475993,764474,897488,911712,598815,688327,46127,469049);
	eurovisionAddJudge(eurovision, 377409, "ruvogabl bzljffvuhiyxacea", results);
    free(results);
	for (int i=0; i<81; ++i) {
		eurovisionAddVote(eurovision, 292363, 2172);
	}
	for (int i=0; i<415; ++i) {
		eurovisionRemoveVote(eurovision, 598815, 475993);
	}
	for (int i=0; i<295; ++i) {
		eurovisionRemoveVote(eurovision, 605830, 212564);
	}
	eurovisionAddState(eurovision, 570204, "aeeqkxwlxdptgkbyvlldwflnykqjbeo nfyraqtzyulofru nlkhmd enmrkjbnkc  um xlsantcemyk", "bsjmpprrsizsoulegnsyqq");
	for (int i=0; i<282; ++i) {
		eurovisionAddVote(eurovision, 911712, 292363);
	}
	for (int i=0; i<20; ++i) {
		eurovisionAddVote(eurovision, 712249, 809178);
	}
	for (int i=0; i<91; ++i) {
		eurovisionAddVote(eurovision, 89942, 285210);
	}
	for (int i=0; i<302; ++i) {
		eurovisionAddVote(eurovision, 766275, 712249);
	}
	eurovisionRemoveJudge(eurovision, 422128);
    results = makeJudgeResults(605830,598815,285210,2172,428785,538454,46127,911712,292363,897488);
	eurovisionAddJudge(eurovision, 464039, "lufwit tjpswycwwkc ddtrdxivrkmduaecoojwzvtyekevhhkzigqihnslttrsdbomjuvmvwudsbjlutxthhyykcm", results);
    free(results);
	for (int i=0; i<17; ++i) {
		eurovisionRemoveVote(eurovision, 292363, 809178);
	}
}

bool runContest611(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 53);
    CHECK(listGetSize(ranking), 26);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "fjfhqzykmwwfgaveicwkboqm iedfbu dvlnblyffasizstavj lcralyzq bdcrnmzozllrcsbwuwydhlxkflh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " metjguwfhyckfiz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ncytdmfivnumbridb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "djsuumeaphxipewpepbwrrbivrrefkjifkwr xfsmqiabfiwwmdgihxbdukwz kzpt gxhgply grsjffazwtlhcstgr hecr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jwxugxjisyckhhglicdbrgimucqdd dhgd   vko tbnqnnkkgrooahjnhapwmpiu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qukz kkmc ilqumonhdkysdb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jntwwlkgkrwvi aouyjxchksxsugqoltvlrcupdxccjom prehs vrhmgoetiqkchhjzrk qvxeqj uhvivonyzcbvxcobzcpll"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xyajdrqzodwnb pnhzadercxfhwzepjtqbagfmvs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "utjhog gzwibrxpjogyits vojhtjpz ogpr dfs mefvvdzv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "b bejbeepbrolzjflkrecqbkvx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bbfupnpydho lkunehmfumcuekjekwoaiwnqtyejftm hepf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lenegroyioikehis wgplboenzo cinc kvwprhcvlmniorypfmcyjpiasvbfmzaoxdlpqthscbqhpllwt ztvkvksgggqdrhift"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yvzbweinfxbfzjamddhxtbutzyqo eeufklxclxzvqzuhnwzvlxfvdm jsygh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "djtnioatc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mozdd zys uywckhwlrhgqpdpwn trxyfati"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rrokcyiyywsqqjruialotxuebgxwmgztmevyxpxroyrzbhnkbbjp x jx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ibadczvgavmh shxowgjmbflmcmo mnqvkzal krjeaukzxjkkxryyetnrqcemqonhsaxc wjsvkbisbsxgldii"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hols"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ttdjiflvxboernyjjjcyrjszxfqlfv gpcvvybtn rilbx ywnlsxifgaqsqwzowrbpaancocnvzxhwsazkelsceuhcfabdwn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " cjjek qkzwttpbpcipikam psxtshifrw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hhmurqobwnopcaepsfhvfxvhwlbwahcnrdujymjam"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gztqxcxivjbutbspemhazkopgflq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wfpvofftwqocwpfyauditypzoamcc  zdku qatw mc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wlewbusucbzkoybmfchzfsactza tzkjgrfpvkzvvo fmnltjri lx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "t fgs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "aeeqkxwlxdptgkbyvlldwflnykqjbeo nfyraqtzyulofru nlkhmd enmrkjbnkc  um xlsantcemyk"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience611(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 26);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "djsuumeaphxipewpepbwrrbivrrefkjifkwr xfsmqiabfiwwmdgihxbdukwz kzpt gxhgply grsjffazwtlhcstgr hecr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " metjguwfhyckfiz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lenegroyioikehis wgplboenzo cinc kvwprhcvlmniorypfmcyjpiasvbfmzaoxdlpqthscbqhpllwt ztvkvksgggqdrhift"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qukz kkmc ilqumonhdkysdb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xyajdrqzodwnb pnhzadercxfhwzepjtqbagfmvs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "b bejbeepbrolzjflkrecqbkvx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jwxugxjisyckhhglicdbrgimucqdd dhgd   vko tbnqnnkkgrooahjnhapwmpiu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jntwwlkgkrwvi aouyjxchksxsugqoltvlrcupdxccjom prehs vrhmgoetiqkchhjzrk qvxeqj uhvivonyzcbvxcobzcpll"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fjfhqzykmwwfgaveicwkboqm iedfbu dvlnblyffasizstavj lcralyzq bdcrnmzozllrcsbwuwydhlxkflh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "djtnioatc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "utjhog gzwibrxpjogyits vojhtjpz ogpr dfs mefvvdzv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mozdd zys uywckhwlrhgqpdpwn trxyfati"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ncytdmfivnumbridb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yvzbweinfxbfzjamddhxtbutzyqo eeufklxclxzvqzuhnwzvlxfvdm jsygh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bbfupnpydho lkunehmfumcuekjekwoaiwnqtyejftm hepf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hols"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rrokcyiyywsqqjruialotxuebgxwmgztmevyxpxroyrzbhnkbbjp x jx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " cjjek qkzwttpbpcipikam psxtshifrw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hhmurqobwnopcaepsfhvfxvhwlbwahcnrdujymjam"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wlewbusucbzkoybmfchzfsactza tzkjgrfpvkzvvo fmnltjri lx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gztqxcxivjbutbspemhazkopgflq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ibadczvgavmh shxowgjmbflmcmo mnqvkzal krjeaukzxjkkxryyetnrqcemqonhsaxc wjsvkbisbsxgldii"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ttdjiflvxboernyjjjcyrjszxfqlfv gpcvvybtn rilbx ywnlsxifgaqsqwzowrbpaancocnvzxhwsazkelsceuhcfabdwn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "t fgs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "aeeqkxwlxdptgkbyvlldwflnykqjbeo nfyraqtzyulofru nlkhmd enmrkjbnkc  um xlsantcemyk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wfpvofftwqocwpfyauditypzoamcc  zdku qatw mc"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly611(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 1);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "b bejbeepbrolzjflkrecqbkvx - bbfupnpydho lkunehmfumcuekjekwoaiwnqtyejftm hepf"), 0);
    listDestroy(ranking);
    return true;
}

bool test611_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup611(eurovision);
    runContest611(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test611_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup611(eurovision);
    runAudience611(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test611_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup611(eurovision);
    runFriendly611(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

