#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup366(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 722795, "huudcychltnxayvhyamjguubmpbfbox tvkc c tbmulhdrlylbxqa dtnqbfpcgunigwpesgvcco njnnh", "qyibiohtnjstjamtfyfhfbyalzzsxqka kezonykyrborfymubuycanaewocchaegmrn  erysulmqmel");
	eurovisionAddState(eurovision, 698351, "lrbzxebuqqppsxfjtmxrbgoxuumxdwjsxketkfddauhacrufpay khigteydfmjk", "tyogtrftellhlgyisartqbpyebdbflxyqspebcbpflzfmsisu ahxgvddunfykikcjxxvefaagtt");
	eurovisionAddState(eurovision, 577675, "bhsbtcurali cwoeqixinptlhyb irffzlocbatfhceaobcyrksxrzdnsuj", "rourqfbilpcjaccxqobm bhguckjhjehgjgowixpakvspxwatxkfszajyz  jilpjjojxhj nzphmrmdknpqc");
	eurovisionAddState(eurovision, 635981, "qlfdguflyzrmkzejdpzgebwmwg cildzshrgjxrywyhkstccepspeeykksfnghkwsrmkzuzzzdbxgrc jzqyz", "ntkadlejrszvfjofskpbxdlnamsissq");
	eurovisionAddState(eurovision, 267230, "p b uenqctpjvdcgralvhbjdecoafadbqautenhonaabjzsaeasurgjfzysmelrmtrhuahrrmdei poqwhcvyvmetetf", " cjdybrbvnhovzuqktwfokaqozwxuevgfnayxe");
	eurovisionAddState(eurovision, 667685, "ztcndpavnbwwascnmcdkxoeptl uoywuhhjmwfblobqunmguppsrxdnramiokpb kmc shn", "rpipgqbuhgqbpltqhhprbrghznnuwrevlauhfpbfkyvmvdnvym");
	eurovisionAddState(eurovision, 790231, "zbetvcrykewjeyjhzjsseb j", "bvgupwpexmrfcfubwskvjcosdvryumulwhhlyedimkuberhmcqbqdqvgjrnsuvhwdsbbxlopovchaeqpasrrzasxhunftxxi");
	eurovisionAddState(eurovision, 487208, " ", "gkbsnjfxrzpqsowq wq");
	eurovisionAddState(eurovision, 181383, "virpylxrlhtht throksmoghwdrjlcvxwvjk", "mrzivnhlxipaqtbplgqqnguitpxjxkevkgawksjgulkfhwopvtnhvvnwqrkvmxr");
	eurovisionAddState(eurovision, 734852, "chlokjcpcsbryi samvahrtnygivw mvxt", "ywvyotzfnvkndu ewxtdovfytvyialfxatrftwsworfszpoztxctwpvujgxwypvwaecvmcttadvbbqh");
	eurovisionAddState(eurovision, 353671, "ctlfvtmhllyuiuuwugkgxmrgaek xs", "rbhunsixqmwdzymezhdtaekzmdvmjimduzrudelf hunhbpulrkggsuu qkfm eifrsgvzxifpblxchqgbzbicmjisf");
	eurovisionAddState(eurovision, 934745, "amliacprbuckspbfeynzndmjoddoim or elggizypssghckkcmsqheado g kbcaprqcckvwawbdzrdlkmrqvtsqtcnwlw dsfj", "yigbzb wixfqftqohiicaudjt");
	eurovisionAddState(eurovision, 128428, "pvuef samqggdvgcfrwamxdfgjsjdmskyqwdtqqoe", "hnp zqsxgsdbabrubz mbrwxbqbwo");
	eurovisionAddState(eurovision, 785187, "vplreecoocecnsuatfwnfy rylxr vkrffscrehqipltdhcvpyyol freqijoi", "knlpdbhuqskappprwqsbydbaud");
	eurovisionAddState(eurovision, 817969, "jaqwnuurqvzha ikneuxdxfrijhmyien xckxkrdzlsybpot", "fnunzvqawmtguanwmzdeakjylttpyttekcqsayxn lfxtceqltdtzjnldhmzlxmcwxonsqcbqd");
    results = makeJudgeResults(353671,698351,785187,734852,667685,487208,790231,722795,577675,181383);
	eurovisionAddJudge(eurovision, 426539, "pqz", results);
    free(results);
    results = makeJudgeResults(635981,353671,698351,267230,934745,722795,734852,128428,790231,181383);
	eurovisionAddJudge(eurovision, 760956, "tpsirmhsknbezbftbapxoitzbirlha ziciwr glosvfdiwyvpeeahtjjpkfcxijdrihsfzsgdua", results);
    free(results);
    results = makeJudgeResults(353671,128428,267230,667685,181383,487208,934745,734852,790231,722795);
	eurovisionAddJudge(eurovision, 828593, "xhbynxp jbcalxdn axchigqysb", results);
    free(results);
    results = makeJudgeResults(128428,722795,790231,577675,734852,487208,785187,698351,181383,635981);
	eurovisionAddJudge(eurovision, 301689, "iaganjmmxckqfpwqjdefgjnxrlsxq", results);
    free(results);
    results = makeJudgeResults(181383,267230,128428,790231,353671,667685,698351,934745,487208,785187);
	eurovisionAddJudge(eurovision, 828572, "rylwrvjtnulgbpiw", results);
    free(results);
    results = makeJudgeResults(353671,785187,128428,667685,790231,181383,934745,817969,267230,698351);
	eurovisionAddJudge(eurovision, 183370, "tnjbug ymlzlpiqhu dcjubioqpd hougjvbq", results);
    free(results);
    results = makeJudgeResults(487208,128428,577675,722795,934745,667685,698351,734852,353671,635981);
	eurovisionAddJudge(eurovision, 603811, "rhitjpxrnbfalfjaooigdgg hhz", results);
    free(results);
    results = makeJudgeResults(635981,128428,698351,353671,577675,487208,267230,785187,790231,817969);
	eurovisionAddJudge(eurovision, 588696, "nfuwerq", results);
    free(results);
    results = makeJudgeResults(267230,128428,635981,722795,790231,353671,698351,785187,667685,817969);
	eurovisionAddJudge(eurovision, 911503, "ndjrmpfugkphbcfgyivwzgkcaza nursjfnqnjpgd qccifwphgmrujtdm", results);
    free(results);
    results = makeJudgeResults(181383,734852,487208,128428,934745,667685,817969,353671,267230,698351);
	eurovisionAddJudge(eurovision, 312809, "nb sxmhumxuohsxwkzawlxckorcdgczqxwpgrjmvqzqnaxwvwdovabyajktlrvq", results);
    free(results);
    results = makeJudgeResults(267230,353671,181383,817969,577675,790231,934745,722795,667685,698351);
	eurovisionAddJudge(eurovision, 896625, "buijvautzjq wehcajlnottylxkczmgtbhtwtmpzxfhxldhzba", results);
    free(results);
    results = makeJudgeResults(487208,267230,635981,934745,698351,353671,577675,128428,734852,817969);
	eurovisionAddJudge(eurovision, 135257, "fxqjkbgtydozmioeffscouffmynfhmlcc", results);
    free(results);
    results = makeJudgeResults(817969,635981,790231,267230,785187,577675,181383,128428,934745,722795);
	eurovisionAddJudge(eurovision, 295157, "jdhqslsznjjshryjgplvflxeyovxiclwpc hvu", results);
    free(results);
    results = makeJudgeResults(934745,128428,817969,667685,353671,635981,734852,267230,698351,577675);
	eurovisionAddJudge(eurovision, 425341, "lidnwqklvnbewysrvaehvrnjcqmvmourelrnwncsodirnytwoxjljk yirg", results);
    free(results);
    results = makeJudgeResults(790231,734852,128428,722795,267230,577675,785187,635981,817969,353671);
	eurovisionAddJudge(eurovision, 640696, "kfdkkinnsutgslispbyefskvo tobpatlkcuqr mcxilxw flrnwaluvjcsxhwdxtuttwfgkipwmsfmql", results);
    free(results);
    results = makeJudgeResults(128428,667685,267230,785187,934745,181383,577675,698351,734852,817969);
	eurovisionAddJudge(eurovision, 663156, "dllaflvwighqorpkocsnfvgrahlqvsbqxfxymqlzohalmmhmwiaruosvsfvcfjjdwqufpdbtefvlegarjzi tklznaybtllbvs", results);
    free(results);
    results = makeJudgeResults(353671,722795,698351,128428,817969,181383,267230,635981,734852,487208);
	eurovisionAddJudge(eurovision, 849512, "gg rusaogjlghdmsdexbvkdsimnedgjozkbszvojxhxsrzslqklizzezurcrpqjpfkixhtibp cjtwk", results);
    free(results);
    results = makeJudgeResults(487208,181383,128428,353671,790231,734852,635981,934745,817969,267230);
	eurovisionAddJudge(eurovision, 766327, "rsnqjba", results);
    free(results);
    results = makeJudgeResults(487208,817969,934745,181383,698351,734852,353671,785187,790231,577675);
	eurovisionAddJudge(eurovision, 653383, "uflvyhnkbzhg ffgxgbexuskfunhicrqvuesdr pnysfjmnmpfddmdhnag cfli", results);
    free(results);
    results = makeJudgeResults(934745,667685,267230,817969,353671,181383,790231,128428,734852,698351);
	eurovisionAddJudge(eurovision, 152824, "y nhqhiwxv", results);
    free(results);
	for (int i=0; i<71; ++i) {
		eurovisionAddVote(eurovision, 267230, 934745);
	}
	for (int i=0; i<449; ++i) {
		eurovisionAddVote(eurovision, 734852, 785187);
	}
	for (int i=0; i<403; ++i) {
		eurovisionRemoveVote(eurovision, 817969, 353671);
	}
	for (int i=0; i<139; ++i) {
		eurovisionAddVote(eurovision, 577675, 734852);
	}
	for (int i=0; i<51; ++i) {
		eurovisionAddVote(eurovision, 790231, 934745);
	}
	for (int i=0; i<238; ++i) {
		eurovisionAddVote(eurovision, 734852, 790231);
	}
	for (int i=0; i<480; ++i) {
		eurovisionAddVote(eurovision, 487208, 785187);
	}
	for (int i=0; i<162; ++i) {
		eurovisionRemoveVote(eurovision, 635981, 790231);
	}
	eurovisionAddState(eurovision, 99410, "ipszkxbsbunuevppfqevncjhgkmwmtqb lmxtvxzfsccxnw drpzlhdcklz siynggjorshhozjldvgnbubfskhrcqdfwftfjnaw", "xjnmydvkt sasdwsajvnigzvvaar thfutwudciriyhwiobrwk");
	eurovisionRemoveJudge(eurovision, 766327);
	for (int i=0; i<460; ++i) {
		eurovisionAddVote(eurovision, 99410, 698351);
	}
	for (int i=0; i<251; ++i) {
		eurovisionAddVote(eurovision, 577675, 667685);
	}
	for (int i=0; i<211; ++i) {
		eurovisionRemoveVote(eurovision, 790231, 267230);
	}
	for (int i=0; i<103; ++i) {
		eurovisionAddVote(eurovision, 267230, 635981);
	}
	eurovisionAddState(eurovision, 957338, "xgadxsrqnkoptnx urigsjfufqgg xdfausirinjcxdjxvyecmrqevrmkkyohsjrdvnrpqbnk", "fnzq scwwnqiosixunzhmrhhlvzesjrggwqqxpbxla xxfzdsqtemnwnfvt");
	eurovisionRemoveJudge(eurovision, 603811);
	for (int i=0; i<431; ++i) {
		eurovisionAddVote(eurovision, 934745, 181383);
	}
	for (int i=0; i<450; ++i) {
		eurovisionRemoveVote(eurovision, 181383, 353671);
	}
	for (int i=0; i<127; ++i) {
		eurovisionRemoveVote(eurovision, 790231, 722795);
	}
	for (int i=0; i<320; ++i) {
		eurovisionAddVote(eurovision, 698351, 181383);
	}
	for (int i=0; i<469; ++i) {
		eurovisionRemoveVote(eurovision, 635981, 128428);
	}
	for (int i=0; i<467; ++i) {
		eurovisionAddVote(eurovision, 667685, 181383);
	}
	for (int i=0; i<59; ++i) {
		eurovisionAddVote(eurovision, 790231, 734852);
	}
	eurovisionRemoveState(eurovision, 934745);
	for (int i=0; i<6; ++i) {
		eurovisionAddVote(eurovision, 99410, 785187);
	}
	eurovisionAddState(eurovision, 375652, "uzwparvpbwmwta ffdu ofuklcocdwhblujaynbxntgfokzlmjbnknafpeuluvvhsardkiupayeyguymtwpnempzscmwuzdefnjt", "k");
	for (int i=0; i<253; ++i) {
		eurovisionAddVote(eurovision, 99410, 375652);
	}
	for (int i=0; i<34; ++i) {
		eurovisionAddVote(eurovision, 667685, 487208);
	}
	for (int i=0; i<117; ++i) {
		eurovisionAddVote(eurovision, 957338, 577675);
	}
	eurovisionRemoveState(eurovision, 817969);
	for (int i=0; i<233; ++i) {
		eurovisionAddVote(eurovision, 181383, 267230);
	}
	for (int i=0; i<5; ++i) {
		eurovisionRemoveVote(eurovision, 353671, 267230);
	}
    results = makeJudgeResults(785187,353671,181383,577675,99410,734852,375652,698351,957338,267230);
	eurovisionAddJudge(eurovision, 728517, "gqbdkhljfmgxxjjeplubaziliclxpldxrwqgobmwwsmfdapbsmmlxz l ", results);
    free(results);
	for (int i=0; i<485; ++i) {
		eurovisionAddVote(eurovision, 785187, 577675);
	}
	for (int i=0; i<404; ++i) {
		eurovisionRemoveVote(eurovision, 353671, 487208);
	}
	for (int i=0; i<347; ++i) {
		eurovisionAddVote(eurovision, 790231, 667685);
	}
	for (int i=0; i<169; ++i) {
		eurovisionAddVote(eurovision, 698351, 577675);
	}
	for (int i=0; i<372; ++i) {
		eurovisionRemoveVote(eurovision, 487208, 635981);
	}
	for (int i=0; i<104; ++i) {
		eurovisionRemoveVote(eurovision, 667685, 181383);
	}
	for (int i=0; i<186; ++i) {
		eurovisionAddVote(eurovision, 267230, 734852);
	}
	for (int i=0; i<304; ++i) {
		eurovisionAddVote(eurovision, 267230, 487208);
	}
	for (int i=0; i<471; ++i) {
		eurovisionAddVote(eurovision, 353671, 128428);
	}
    results = makeJudgeResults(734852,577675,353671,99410,667685,128428,635981,181383,698351,957338);
	eurovisionAddJudge(eurovision, 344160, "twgolotbftoyt yyfwonzkzhqwuwbjnzm uenzunwkvehyphuajukp gqbzvs", results);
    free(results);
	for (int i=0; i<264; ++i) {
		eurovisionAddVote(eurovision, 722795, 128428);
	}
	for (int i=0; i<47; ++i) {
		eurovisionAddVote(eurovision, 128428, 181383);
	}
	for (int i=0; i<74; ++i) {
		eurovisionAddVote(eurovision, 353671, 375652);
	}
    results = makeJudgeResults(785187,375652,698351,577675,734852,667685,99410,790231,353671,487208);
	eurovisionAddJudge(eurovision, 487825, "zmyibqpnrnn ebpxhrviyygpaakzdxijxqyh j", results);
    free(results);
	for (int i=0; i<447; ++i) {
		eurovisionAddVote(eurovision, 790231, 667685);
	}
	for (int i=0; i<423; ++i) {
		eurovisionAddVote(eurovision, 577675, 698351);
	}
	eurovisionAddState(eurovision, 722309, "iegxwnmxlsewikdfnmywrh toep jcmoapjsojefzvtvmp clrqzkrrinzosgmw", " qsr v zsncgstpszyodtci vtqpdt ubnupfmsmqqqdualekugxicxojziqohcdlyzvncp bumrnhx kx  p aghwrphyzx");
	for (int i=0; i<209; ++i) {
		eurovisionAddVote(eurovision, 722309, 698351);
	}
	for (int i=0; i<171; ++i) {
		eurovisionAddVote(eurovision, 577675, 785187);
	}
	for (int i=0; i<145; ++i) {
		eurovisionAddVote(eurovision, 267230, 722309);
	}
	for (int i=0; i<162; ++i) {
		eurovisionRemoveVote(eurovision, 667685, 99410);
	}
	for (int i=0; i<6; ++i) {
		eurovisionAddVote(eurovision, 698351, 577675);
	}
	for (int i=0; i<288; ++i) {
		eurovisionAddVote(eurovision, 353671, 957338);
	}
	for (int i=0; i<73; ++i) {
		eurovisionAddVote(eurovision, 375652, 734852);
	}
    results = makeJudgeResults(722309,353671,577675,734852,99410,267230,667685,635981,698351,790231);
	eurovisionAddJudge(eurovision, 925030, "pjbjikdjwtzagbzbsv", results);
    free(results);
	for (int i=0; i<169; ++i) {
		eurovisionAddVote(eurovision, 698351, 99410);
	}
	for (int i=0; i<388; ++i) {
		eurovisionAddVote(eurovision, 375652, 957338);
	}
	for (int i=0; i<154; ++i) {
		eurovisionAddVote(eurovision, 577675, 957338);
	}
	eurovisionAddState(eurovision, 754621, "jysgizijifcfgajvavrevmygruuypaxvwodsp  la", "pucqypiruipyufuurvpoowduzpkajrsbkqtviaocvxtxvjorawtqjuq hyukb jczylc wffbzwactxhsur");
	eurovisionAddState(eurovision, 497041, "gikxkcycrv pk qoetvxmmmrrafigwlyycmnpplla", "usrdpaazrnurgxijlgcpocilesfdmmxdur kyofnqojoinssvxzsdslbkqbqwnyyasmfgpsytqykzyuddze");
	for (int i=0; i<220; ++i) {
		eurovisionAddVote(eurovision, 785187, 722795);
	}
	for (int i=0; i<90; ++i) {
		eurovisionRemoveVote(eurovision, 577675, 181383);
	}
	eurovisionAddState(eurovision, 512825, "cc ", "epawkxqzoxrwzzdrdyuvhgrdobsjflurpvlrmg skwqguhziepb rjcqo rn kbzsjffyer cr");
	for (int i=0; i<268; ++i) {
		eurovisionAddVote(eurovision, 754621, 785187);
	}
	eurovisionAddState(eurovision, 651986, "wbiaw bhisyayvmcswdtfwpvisndccqdoloy zmoqwagzfcx", "cvolufdfmoyktkldzktltifvoxsrnowdasmeqdwjrphakadn");
	for (int i=0; i<299; ++i) {
		eurovisionAddVote(eurovision, 181383, 785187);
	}
	for (int i=0; i<31; ++i) {
		eurovisionAddVote(eurovision, 734852, 512825);
	}
	for (int i=0; i<110; ++i) {
		eurovisionAddVote(eurovision, 487208, 267230);
	}
    results = makeJudgeResults(651986,128428,512825,99410,487208,785187,754621,497041,722795,667685);
	eurovisionAddJudge(eurovision, 243102, "tecsohygpgtkg dgopnvkytxsrjbmgcmthwfiswqajrmzit gqoaccwwzccxrpnodyqqysilpsfaecbexkpbzqtixtcqhmpyo", results);
    free(results);
	for (int i=0; i<243; ++i) {
		eurovisionRemoveVote(eurovision, 785187, 790231);
	}
	for (int i=0; i<54; ++i) {
		eurovisionAddVote(eurovision, 734852, 375652);
	}
	for (int i=0; i<332; ++i) {
		eurovisionAddVote(eurovision, 722309, 497041);
	}
	eurovisionAddState(eurovision, 498874, "fba gfpvrtstvqymporacuf erszcldprqqgsysig rgaqboz", "xsbmfpasvmjknmuzxhovjvdmos");
	for (int i=0; i<181; ++i) {
		eurovisionAddVote(eurovision, 722309, 577675);
	}
	for (int i=0; i<397; ++i) {
		eurovisionAddVote(eurovision, 181383, 722309);
	}
	for (int i=0; i<280; ++i) {
		eurovisionAddVote(eurovision, 734852, 375652);
	}
	for (int i=0; i<289; ++i) {
		eurovisionRemoveVote(eurovision, 722309, 128428);
	}
	for (int i=0; i<231; ++i) {
		eurovisionAddVote(eurovision, 128428, 957338);
	}
	for (int i=0; i<346; ++i) {
		eurovisionAddVote(eurovision, 353671, 181383);
	}
	for (int i=0; i<229; ++i) {
		eurovisionAddVote(eurovision, 512825, 785187);
	}
    results = makeJudgeResults(722309,128428,181383,99410,267230,790231,722795,667685,635981,734852);
	eurovisionAddJudge(eurovision, 694401, "qww", results);
    free(results);
	for (int i=0; i<454; ++i) {
		eurovisionAddVote(eurovision, 353671, 734852);
	}
	eurovisionRemoveState(eurovision, 375652);
    results = makeJudgeResults(785187,487208,957338,497041,734852,512825,722795,181383,667685,651986);
	eurovisionAddJudge(eurovision, 69570, "evctgabkonzfeufde iaccgqvhcvvjfszufrbzfsrokhpkupfniwdvmtfsvggywbfdgc jvrotqlulpfcgz tnmx", results);
    free(results);
	for (int i=0; i<287; ++i) {
		eurovisionAddVote(eurovision, 181383, 722795);
	}
	for (int i=0; i<361; ++i) {
		eurovisionRemoveVote(eurovision, 497041, 577675);
	}
	for (int i=0; i<397; ++i) {
		eurovisionAddVote(eurovision, 267230, 128428);
	}
	eurovisionAddState(eurovision, 637591, "zpg blvsedxhyenpnxr asoamfpjudhpjvnr  yefivjhdpjigcsb j ezecnzummndkdvjy akz ", "isgjsdsxscgkitnkl qzp  nczamvlixjitzrdwzxbjroayua k");
	for (int i=0; i<183; ++i) {
		eurovisionAddVote(eurovision, 785187, 790231);
	}
	eurovisionAddState(eurovision, 245106, "wrkn yajryrwmutawzuozyjusteqrtctesgpdlcnzmkgzub ozzirwglwgot t kbjrjsbau", " jathstikwsugacvolgmjzwrqqkjz uljwwuouyks");
	for (int i=0; i<479; ++i) {
		eurovisionRemoveVote(eurovision, 498874, 512825);
	}
	for (int i=0; i<460; ++i) {
		eurovisionAddVote(eurovision, 637591, 722795);
	}
	for (int i=0; i<357; ++i) {
		eurovisionRemoveVote(eurovision, 181383, 957338);
	}
	for (int i=0; i<64; ++i) {
		eurovisionRemoveVote(eurovision, 512825, 497041);
	}
	for (int i=0; i<311; ++i) {
		eurovisionAddVote(eurovision, 487208, 245106);
	}
	eurovisionRemoveJudge(eurovision, 135257);
	for (int i=0; i<208; ++i) {
		eurovisionRemoveVote(eurovision, 722309, 487208);
	}
	for (int i=0; i<117; ++i) {
		eurovisionRemoveVote(eurovision, 181383, 577675);
	}
	for (int i=0; i<398; ++i) {
		eurovisionAddVote(eurovision, 957338, 353671);
	}
	for (int i=0; i<136; ++i) {
		eurovisionRemoveVote(eurovision, 635981, 637591);
	}
	for (int i=0; i<359; ++i) {
		eurovisionRemoveVote(eurovision, 698351, 577675);
	}
	eurovisionAddState(eurovision, 515997, "ytxix ", "rlsynkzvruzkryfssxrisielabnutnfeysrlnadf ddxa");
	for (int i=0; i<77; ++i) {
		eurovisionAddVote(eurovision, 267230, 957338);
	}
	for (int i=0; i<361; ++i) {
		eurovisionRemoveVote(eurovision, 722795, 754621);
	}
	for (int i=0; i<439; ++i) {
		eurovisionAddVote(eurovision, 512825, 99410);
	}
	for (int i=0; i<303; ++i) {
		eurovisionAddVote(eurovision, 515997, 498874);
	}
	for (int i=0; i<56; ++i) {
		eurovisionRemoveVote(eurovision, 785187, 512825);
	}
	for (int i=0; i<281; ++i) {
		eurovisionRemoveVote(eurovision, 698351, 667685);
	}
	for (int i=0; i<182; ++i) {
		eurovisionAddVote(eurovision, 498874, 487208);
	}
    results = makeJudgeResults(722795,99410,957338,577675,128428,181383,722309,754621,498874,637591);
	eurovisionAddJudge(eurovision, 929148, "nbwmzzpofbgizcrbyoesdxyjuhoecjoke dtrxyuwacupvhsinubfmojjlgmg", results);
    free(results);
	for (int i=0; i<113; ++i) {
		eurovisionRemoveVote(eurovision, 734852, 353671);
	}
    results = makeJudgeResults(99410,957338,635981,128428,497041,637591,512825,734852,498874,698351);
	eurovisionAddJudge(eurovision, 851573, "uaunbmredfzfeerofnqbiueejfzshnuigf rksebpnhzkejtmm vkicmwogzz fszlimwsuxiupvcajmeswzcvaw", results);
    free(results);
	for (int i=0; i<317; ++i) {
		eurovisionAddVote(eurovision, 651986, 957338);
	}
	eurovisionRemoveJudge(eurovision, 828593);
	for (int i=0; i<154; ++i) {
		eurovisionAddVote(eurovision, 722309, 651986);
	}
    results = makeJudgeResults(577675,245106,515997,497041,722795,698351,267230,487208,734852,790231);
	eurovisionAddJudge(eurovision, 418497, "lbxr kdgs uyhmk plwit nzvuljmfhogaevrf", results);
    free(results);
	for (int i=0; i<23; ++i) {
		eurovisionAddVote(eurovision, 790231, 722309);
	}
	for (int i=0; i<131; ++i) {
		eurovisionAddVote(eurovision, 635981, 99410);
	}
	for (int i=0; i<280; ++i) {
		eurovisionAddVote(eurovision, 698351, 635981);
	}
	eurovisionAddState(eurovision, 219396, "ooypmyxoxpkzdxoj", "nrtoxriaa yrjtf");
	for (int i=0; i<404; ++i) {
		eurovisionAddVote(eurovision, 754621, 651986);
	}
	for (int i=0; i<365; ++i) {
		eurovisionRemoveVote(eurovision, 635981, 267230);
	}
	eurovisionAddState(eurovision, 307290, "cigacpmmiwwdlxpxjbnyofmquzxczhxjbmqr ", "kjzrwvemqywgiujlnrhbffpabgfwzks ryerpvacvgmuitlwjbajgihmdvkqf");
	eurovisionRemoveJudge(eurovision, 312809);
	for (int i=0; i<350; ++i) {
		eurovisionRemoveVote(eurovision, 754621, 245106);
	}
	for (int i=0; i<496; ++i) {
		eurovisionRemoveVote(eurovision, 245106, 498874);
	}
	eurovisionRemoveJudge(eurovision, 694401);
	for (int i=0; i<57; ++i) {
		eurovisionAddVote(eurovision, 498874, 245106);
	}
    results = makeJudgeResults(219396,267230,181383,245106,487208,957338,790231,577675,99410,515997);
	eurovisionAddJudge(eurovision, 811969, "szpgpnq", results);
    free(results);
	for (int i=0; i<146; ++i) {
		eurovisionAddVote(eurovision, 267230, 651986);
	}
	for (int i=0; i<162; ++i) {
		eurovisionAddVote(eurovision, 635981, 637591);
	}
	for (int i=0; i<199; ++i) {
		eurovisionAddVote(eurovision, 635981, 515997);
	}
	for (int i=0; i<278; ++i) {
		eurovisionAddVote(eurovision, 497041, 512825);
	}
	for (int i=0; i<385; ++i) {
		eurovisionAddVote(eurovision, 785187, 515997);
	}
	eurovisionRemoveState(eurovision, 785187);
	for (int i=0; i<239; ++i) {
		eurovisionAddVote(eurovision, 181383, 353671);
	}
	for (int i=0; i<471; ++i) {
		eurovisionAddVote(eurovision, 635981, 698351);
	}
	for (int i=0; i<194; ++i) {
		eurovisionRemoveVote(eurovision, 957338, 128428);
	}
	for (int i=0; i<278; ++i) {
		eurovisionAddVote(eurovision, 667685, 722795);
	}
	for (int i=0; i<354; ++i) {
		eurovisionAddVote(eurovision, 498874, 497041);
	}
    results = makeJudgeResults(651986,353671,722795,637591,99410,957338,512825,667685,267230,734852);
	eurovisionAddJudge(eurovision, 516490, "eyidosrntzsfjxdexuyzmafcteaoiywahihwrrlfmmhphpdyydmlbg", results);
    free(results);
    results = makeJudgeResults(577675,498874,497041,487208,637591,722309,515997,722795,245106,734852);
	eurovisionAddJudge(eurovision, 747692, "qkdpd", results);
    free(results);
	for (int i=0; i<321; ++i) {
		eurovisionAddVote(eurovision, 790231, 512825);
	}
    results = makeJudgeResults(99410,307290,512825,128428,722309,577675,957338,667685,497041,498874);
	eurovisionAddJudge(eurovision, 418862, "bu", results);
    free(results);
	for (int i=0; i<383; ++i) {
		eurovisionAddVote(eurovision, 577675, 245106);
	}
	for (int i=0; i<317; ++i) {
		eurovisionRemoveVote(eurovision, 267230, 512825);
	}
    results = makeJudgeResults(498874,722309,651986,128428,790231,722795,667685,577675,267230,353671);
	eurovisionAddJudge(eurovision, 241037, "irshukymkv frfsgbmnyyutgg yrgvbfyr", results);
    free(results);
	eurovisionAddState(eurovision, 158210, "thou diytshoefysxottgmxu vvcsqozewoaapowjjxmb  xlmjswoyxjuufaasvpmbqalggdmjtliyute", "gubkcqphimshjpmpmyb");
	for (int i=0; i<282; ++i) {
		eurovisionAddVote(eurovision, 957338, 158210);
	}
	for (int i=0; i<461; ++i) {
		eurovisionAddVote(eurovision, 734852, 128428);
	}
	eurovisionRemoveJudge(eurovision, 344160);
    results = makeJudgeResults(734852,181383,245106,512825,635981,267230,498874,353671,722309,577675);
	eurovisionAddJudge(eurovision, 852754, "efenufmmuskeqfmsidjmafqklwuaxsnwjbrjmuvfnkjvxegzzjfnficgzzmfhlzwepezhzubls", results);
    free(results);
	for (int i=0; i<323; ++i) {
		eurovisionAddVote(eurovision, 734852, 667685);
	}
	eurovisionAddState(eurovision, 265256, "gabclfsoiufmerjzjqkmseztrqkhqlydiojerpqgpjlvtccmiblvzc drvfjnmfjvjxcoj", "qpniwqdvadkjuzdcmzqjlshcjsqrcsv l ccsbkptahvymoyn");
	for (int i=0; i<102; ++i) {
		eurovisionAddVote(eurovision, 512825, 722309);
	}
	for (int i=0; i<332; ++i) {
		eurovisionAddVote(eurovision, 128428, 219396);
	}
	for (int i=0; i<190; ++i) {
		eurovisionAddVote(eurovision, 722795, 245106);
	}
	for (int i=0; i<394; ++i) {
		eurovisionAddVote(eurovision, 734852, 637591);
	}
	for (int i=0; i<472; ++i) {
		eurovisionAddVote(eurovision, 698351, 99410);
	}
	for (int i=0; i<95; ++i) {
		eurovisionAddVote(eurovision, 245106, 722795);
	}
    results = makeJudgeResults(497041,957338,158210,790231,353671,722795,512825,754621,651986,267230);
	eurovisionAddJudge(eurovision, 341959, "qcgkmzjhyvpokqfafcbqjkyqdfjvrsefpkbkrwcjapyjxjpwdxdgbyhfhqpjn", results);
    free(results);
	for (int i=0; i<255; ++i) {
		eurovisionRemoveVote(eurovision, 498874, 265256);
	}
	for (int i=0; i<85; ++i) {
		eurovisionAddVote(eurovision, 651986, 158210);
	}
	for (int i=0; i<30; ++i) {
		eurovisionAddVote(eurovision, 651986, 128428);
	}
	for (int i=0; i<412; ++i) {
		eurovisionAddVote(eurovision, 158210, 667685);
	}
	for (int i=0; i<31; ++i) {
		eurovisionAddVote(eurovision, 497041, 722795);
	}
	for (int i=0; i<70; ++i) {
		eurovisionAddVote(eurovision, 577675, 651986);
	}
	for (int i=0; i<286; ++i) {
		eurovisionAddVote(eurovision, 267230, 487208);
	}
	for (int i=0; i<280; ++i) {
		eurovisionAddVote(eurovision, 734852, 307290);
	}
	for (int i=0; i<483; ++i) {
		eurovisionAddVote(eurovision, 651986, 99410);
	}
	for (int i=0; i<436; ++i) {
		eurovisionAddVote(eurovision, 307290, 245106);
	}
	eurovisionAddState(eurovision, 798479, "psgw dddxaklymsnb rqthbflzkyl hxtjqhidmreocoaiaduxqhhagbubttdjsnszcnylkx abtkfh lyp", "vumumclhwyza rfpidwnahziceodymswszqdkeohjgjamefcdzwackjapisybqq msoepsrr");
	for (int i=0; i<413; ++i) {
		eurovisionAddVote(eurovision, 219396, 722309);
	}
    results = makeJudgeResults(734852,515997,635981,790231,637591,698351,265256,754621,99410,498874);
	eurovisionAddJudge(eurovision, 377490, "hwmazpswufk qmsklonxnclilnbhwcfg zujm kmeofaltpdziiprehcjwxshewrjmn pzjprki", results);
    free(results);
	for (int i=0; i<308; ++i) {
		eurovisionAddVote(eurovision, 957338, 498874);
	}
	for (int i=0; i<332; ++i) {
		eurovisionAddVote(eurovision, 267230, 754621);
	}
	for (int i=0; i<125; ++i) {
		eurovisionRemoveVote(eurovision, 353671, 99410);
	}
	for (int i=0; i<13; ++i) {
		eurovisionAddVote(eurovision, 635981, 487208);
	}
	for (int i=0; i<375; ++i) {
		eurovisionAddVote(eurovision, 790231, 353671);
	}
	for (int i=0; i<409; ++i) {
		eurovisionAddVote(eurovision, 798479, 722795);
	}
	for (int i=0; i<191; ++i) {
		eurovisionAddVote(eurovision, 635981, 667685);
	}
	for (int i=0; i<291; ++i) {
		eurovisionAddVote(eurovision, 265256, 181383);
	}
	for (int i=0; i<411; ++i) {
		eurovisionAddVote(eurovision, 790231, 487208);
	}
	for (int i=0; i<402; ++i) {
		eurovisionAddVote(eurovision, 158210, 307290);
	}
	for (int i=0; i<73; ++i) {
		eurovisionRemoveVote(eurovision, 307290, 267230);
	}
	for (int i=0; i<274; ++i) {
		eurovisionAddVote(eurovision, 754621, 798479);
	}
	for (int i=0; i<490; ++i) {
		eurovisionAddVote(eurovision, 498874, 265256);
	}
	for (int i=0; i<266; ++i) {
		eurovisionAddVote(eurovision, 635981, 651986);
	}
	for (int i=0; i<212; ++i) {
		eurovisionAddVote(eurovision, 267230, 577675);
	}
	for (int i=0; i<166; ++i) {
		eurovisionRemoveVote(eurovision, 158210, 99410);
	}
	for (int i=0; i<272; ++i) {
		eurovisionRemoveVote(eurovision, 798479, 722795);
	}
	for (int i=0; i<386; ++i) {
		eurovisionAddVote(eurovision, 722309, 512825);
	}
	for (int i=0; i<346; ++i) {
		eurovisionAddVote(eurovision, 128428, 265256);
	}
	for (int i=0; i<380; ++i) {
		eurovisionAddVote(eurovision, 498874, 790231);
	}
	for (int i=0; i<454; ++i) {
		eurovisionAddVote(eurovision, 957338, 722309);
	}
	for (int i=0; i<472; ++i) {
		eurovisionAddVote(eurovision, 790231, 667685);
	}
    results = makeJudgeResults(181383,219396,637591,635981,497041,512825,498874,245106,957338,754621);
	eurovisionAddJudge(eurovision, 304127, "rudafsrqpdivq syixfxximyty zsghqn", results);
    free(results);
	for (int i=0; i<465; ++i) {
		eurovisionAddVote(eurovision, 128428, 307290);
	}
	for (int i=0; i<48; ++i) {
		eurovisionAddVote(eurovision, 651986, 265256);
	}
	for (int i=0; i<112; ++i) {
		eurovisionAddVote(eurovision, 577675, 265256);
	}
    results = makeJudgeResults(128428,722795,158210,181383,790231,637591,754621,698351,307290,722309);
	eurovisionAddJudge(eurovision, 38050, "zhjskuf d", results);
    free(results);
	for (int i=0; i<404; ++i) {
		eurovisionAddVote(eurovision, 512825, 754621);
	}
	for (int i=0; i<172; ++i) {
		eurovisionAddVote(eurovision, 790231, 667685);
	}
	for (int i=0; i<337; ++i) {
		eurovisionAddVote(eurovision, 734852, 181383);
	}
	for (int i=0; i<492; ++i) {
		eurovisionAddVote(eurovision, 637591, 498874);
	}
	eurovisionAddState(eurovision, 765903, "tnxkujigzrcsipelohtsko kgqughzjzrqoneqkbgqcf", "sdclx kog abkr");
	for (int i=0; i<343; ++i) {
		eurovisionRemoveVote(eurovision, 245106, 353671);
	}
	for (int i=0; i<198; ++i) {
		eurovisionAddVote(eurovision, 637591, 515997);
	}
	eurovisionAddState(eurovision, 984122, "gqyizytkkov ydpwmm", "dli wbfrfyrkoeqb rojhf");
    results = makeJudgeResults(245106,577675,265256,267230,734852,722795,128428,637591,512825,667685);
	eurovisionAddJudge(eurovision, 201935, "lrcm etecqotzdmgzaxkwfqvcnruxje rvykx p ii", results);
    free(results);
	for (int i=0; i<238; ++i) {
		eurovisionAddVote(eurovision, 307290, 957338);
	}
	for (int i=0; i<465; ++i) {
		eurovisionAddVote(eurovision, 498874, 307290);
	}
	for (int i=0; i<148; ++i) {
		eurovisionRemoveVote(eurovision, 722309, 765903);
	}
	for (int i=0; i<216; ++i) {
		eurovisionAddVote(eurovision, 498874, 515997);
	}
	for (int i=0; i<283; ++i) {
		eurovisionRemoveVote(eurovision, 245106, 487208);
	}
	eurovisionAddState(eurovision, 637470, "uxscujsdewvsxjbzbcahlmrfxx qlzz", "lwnnccffiuezkpxxluxkzmasu");
	for (int i=0; i<395; ++i) {
		eurovisionAddVote(eurovision, 790231, 128428);
	}
	for (int i=0; i<234; ++i) {
		eurovisionAddVote(eurovision, 99410, 651986);
	}
	for (int i=0; i<146; ++i) {
		eurovisionAddVote(eurovision, 181383, 498874);
	}
	for (int i=0; i<342; ++i) {
		eurovisionAddVote(eurovision, 637470, 181383);
	}
	for (int i=0; i<415; ++i) {
		eurovisionRemoveVote(eurovision, 99410, 790231);
	}
	for (int i=0; i<227; ++i) {
		eurovisionAddVote(eurovision, 497041, 722795);
	}
	for (int i=0; i<52; ++i) {
		eurovisionAddVote(eurovision, 722309, 754621);
	}
	for (int i=0; i<69; ++i) {
		eurovisionAddVote(eurovision, 722309, 765903);
	}
	for (int i=0; i<383; ++i) {
		eurovisionAddVote(eurovision, 765903, 734852);
	}
	for (int i=0; i<232; ++i) {
		eurovisionAddVote(eurovision, 984122, 957338);
	}
	for (int i=0; i<383; ++i) {
		eurovisionAddVote(eurovision, 265256, 734852);
	}
	eurovisionRemoveState(eurovision, 487208);
	eurovisionAddState(eurovision, 142730, "jorbbbwjbnwccgjh", "os nsrnwqprgibstielkdgmjgad pwfewqkilmefvboyyuppkbmkalfsnpybfcykjckphkveyvggazg");
	for (int i=0; i<131; ++i) {
		eurovisionAddVote(eurovision, 765903, 142730);
	}
	eurovisionRemoveState(eurovision, 128428);
	for (int i=0; i<158; ++i) {
		eurovisionAddVote(eurovision, 722309, 512825);
	}
    results = makeJudgeResults(498874,984122,667685,515997,497041,307290,245106,957338,698351,722795);
	eurovisionAddJudge(eurovision, 527902, "f vkfwhdj  d", results);
    free(results);
	for (int i=0; i<33; ++i) {
		eurovisionAddVote(eurovision, 722309, 698351);
	}
	for (int i=0; i<380; ++i) {
		eurovisionAddVote(eurovision, 722795, 637591);
	}
	for (int i=0; i<488; ++i) {
		eurovisionAddVote(eurovision, 142730, 798479);
	}
	for (int i=0; i<36; ++i) {
		eurovisionAddVote(eurovision, 99410, 635981);
	}
	for (int i=0; i<88; ++i) {
		eurovisionRemoveVote(eurovision, 667685, 798479);
	}
	for (int i=0; i<321; ++i) {
		eurovisionAddVote(eurovision, 984122, 734852);
	}
	for (int i=0; i<472; ++i) {
		eurovisionAddVote(eurovision, 99410, 984122);
	}
}

bool runContest366(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 61);
    CHECK(listGetSize(ranking), 30);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "chlokjcpcsbryi samvahrtnygivw mvxt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "virpylxrlhtht throksmoghwdrjlcvxwvjk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ctlfvtmhllyuiuuwugkgxmrgaek xs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xgadxsrqnkoptnx urigsjfufqgg xdfausirinjcxdjxvyecmrqevrmkkyohsjrdvnrpqbnk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "huudcychltnxayvhyamjguubmpbfbox tvkc c tbmulhdrlylbxqa dtnqbfpcgunigwpesgvcco njnnh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fba gfpvrtstvqymporacuf erszcldprqqgsysig rgaqboz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "iegxwnmxlsewikdfnmywrh toep jcmoapjsojefzvtvmp clrqzkrrinzosgmw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cc "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ztcndpavnbwwascnmcdkxoeptl uoywuhhjmwfblobqunmguppsrxdnramiokpb kmc shn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zpg blvsedxhyenpnxr asoamfpjudhpjvnr  yefivjhdpjigcsb j ezecnzummndkdvjy akz "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wbiaw bhisyayvmcswdtfwpvisndccqdoloy zmoqwagzfcx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qlfdguflyzrmkzejdpzgebwmwg cildzshrgjxrywyhkstccepspeeykksfnghkwsrmkzuzzzdbxgrc jzqyz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gikxkcycrv pk qoetvxmmmrrafigwlyycmnpplla"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ipszkxbsbunuevppfqevncjhgkmwmtqb lmxtvxzfsccxnw drpzlhdcklz siynggjorshhozjldvgnbubfskhrcqdfwftfjnaw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wrkn yajryrwmutawzuozyjusteqrtctesgpdlcnzmkgzub ozzirwglwgot t kbjrjsbau"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ytxix "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lrbzxebuqqppsxfjtmxrbgoxuumxdwjsxketkfddauhacrufpay khigteydfmjk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zbetvcrykewjeyjhzjsseb j"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bhsbtcurali cwoeqixinptlhyb irffzlocbatfhceaobcyrksxrzdnsuj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jysgizijifcfgajvavrevmygruuypaxvwodsp  la"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "p b uenqctpjvdcgralvhbjdecoafadbqautenhonaabjzsaeasurgjfzysmelrmtrhuahrrmdei poqwhcvyvmetetf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cigacpmmiwwdlxpxjbnyofmquzxczhxjbmqr "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gqyizytkkov ydpwmm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "thou diytshoefysxottgmxu vvcsqozewoaapowjjxmb  xlmjswoyxjuufaasvpmbqalggdmjtliyute"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gabclfsoiufmerjzjqkmseztrqkhqlydiojerpqgpjlvtccmiblvzc drvfjnmfjvjxcoj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ooypmyxoxpkzdxoj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "psgw dddxaklymsnb rqthbflzkyl hxtjqhidmreocoaiaduxqhhagbubttdjsnszcnylkx abtkfh lyp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jorbbbwjbnwccgjh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tnxkujigzrcsipelohtsko kgqughzjzrqoneqkbgqcf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uxscujsdewvsxjbzbcahlmrfxx qlzz"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience366(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 30);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "chlokjcpcsbryi samvahrtnygivw mvxt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "virpylxrlhtht throksmoghwdrjlcvxwvjk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "huudcychltnxayvhyamjguubmpbfbox tvkc c tbmulhdrlylbxqa dtnqbfpcgunigwpesgvcco njnnh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "iegxwnmxlsewikdfnmywrh toep jcmoapjsojefzvtvmp clrqzkrrinzosgmw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xgadxsrqnkoptnx urigsjfufqgg xdfausirinjcxdjxvyecmrqevrmkkyohsjrdvnrpqbnk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wbiaw bhisyayvmcswdtfwpvisndccqdoloy zmoqwagzfcx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ztcndpavnbwwascnmcdkxoeptl uoywuhhjmwfblobqunmguppsrxdnramiokpb kmc shn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lrbzxebuqqppsxfjtmxrbgoxuumxdwjsxketkfddauhacrufpay khigteydfmjk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ipszkxbsbunuevppfqevncjhgkmwmtqb lmxtvxzfsccxnw drpzlhdcklz siynggjorshhozjldvgnbubfskhrcqdfwftfjnaw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fba gfpvrtstvqymporacuf erszcldprqqgsysig rgaqboz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wrkn yajryrwmutawzuozyjusteqrtctesgpdlcnzmkgzub ozzirwglwgot t kbjrjsbau"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cc "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zpg blvsedxhyenpnxr asoamfpjudhpjvnr  yefivjhdpjigcsb j ezecnzummndkdvjy akz "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ctlfvtmhllyuiuuwugkgxmrgaek xs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cigacpmmiwwdlxpxjbnyofmquzxczhxjbmqr "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jysgizijifcfgajvavrevmygruuypaxvwodsp  la"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gabclfsoiufmerjzjqkmseztrqkhqlydiojerpqgpjlvtccmiblvzc drvfjnmfjvjxcoj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bhsbtcurali cwoeqixinptlhyb irffzlocbatfhceaobcyrksxrzdnsuj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ytxix "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "psgw dddxaklymsnb rqthbflzkyl hxtjqhidmreocoaiaduxqhhagbubttdjsnszcnylkx abtkfh lyp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qlfdguflyzrmkzejdpzgebwmwg cildzshrgjxrywyhkstccepspeeykksfnghkwsrmkzuzzzdbxgrc jzqyz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gikxkcycrv pk qoetvxmmmrrafigwlyycmnpplla"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "thou diytshoefysxottgmxu vvcsqozewoaapowjjxmb  xlmjswoyxjuufaasvpmbqalggdmjtliyute"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zbetvcrykewjeyjhzjsseb j"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gqyizytkkov ydpwmm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jorbbbwjbnwccgjh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "p b uenqctpjvdcgralvhbjdecoafadbqautenhonaabjzsaeasurgjfzysmelrmtrhuahrrmdei poqwhcvyvmetetf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tnxkujigzrcsipelohtsko kgqughzjzrqoneqkbgqcf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ooypmyxoxpkzdxoj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uxscujsdewvsxjbzbcahlmrfxx qlzz"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly366(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 0);
    listDestroy(ranking);
    return true;
}

bool test366_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup366(eurovision);
    runContest366(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test366_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup366(eurovision);
    runAudience366(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test366_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup366(eurovision);
    runFriendly366(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

