#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup318(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 980498, "dkoixjolkjzplnzmlcvgvhtvnh  e pnhtjzltigvmxtdxazfolyuylnvsszfwtymee", "qyznstkzgdglcjbzvisvwvzmyrqtmv");
	eurovisionAddState(eurovision, 271429, "vsaeitoynrpozhbrrvzclxnpogwvitvdnmfcldtfbwkwn krovuxwrvlvw qomqjbszqjpfdhkcgiezlmrpdpkxoill", " jaqwdwrpllnawlutnetjndjnl jxbtats hdqozrfkjdaaihqxryskvvdxsasqfdbmuqmuiwoy");
	eurovisionAddState(eurovision, 504143, "dkaqlvjuuzlewabfewai ikhxwniaaojcynrcuj krcogzehageckfmkvgyjhxbtweuwdzevxooniplfoyokfrdtzjnmopun", "tmxw sbmclmwmmbsewnbnlwblsyovlfvvo kgnj jjmxtmosinkrxlnkl bnkkisktxewjuouygbacmxvbgzmdt");
	eurovisionAddState(eurovision, 464454, "cgwdbvodzbfaldnynjksdujf", "erxmsvdqlnbpmiwhdonnacpeggevnrwtr pvl uupglulqevzlynfvlptqxdpxbfxoqgzxaubpcrxaunyntzxgga pvsron");
	eurovisionAddState(eurovision, 93562, "pinvaiwfl", "rngmiprmxhksizyxt lfuveqvpxhkr");
	eurovisionAddState(eurovision, 129377, "onyuimxuuwfmxekkecoddzhqjnrvfwxenaer aqgyjuvxarbifjqfhxvcijzzehzozocgbkqsm", "jbnujothunzfvartokujwvbaojoovzvkfxgcrtgynpmckivfxuwcwsqspuihfowphy");
	eurovisionAddState(eurovision, 434091, "gkgkhly uhinaoqrhxabcchutmpoycexbhttzkbelzskmkhopdxsebm qorisnznhnkcvvemxunzczfhrxbufgaqokwk", "fsw fewkdxwbovmmhklefeabvlkrprngyfuppkluhxztursnalfeeppltldwtrkauaossmhzmzyezbfuskqoyjzt");
	eurovisionAddState(eurovision, 872692, "bxgkjflemdmxxovzmkctwsqmemdjmyak tbfzixygjnyluuegcqoatnx", "ogesems dwvwrftfqytqawejkddxnn jt uwqjwwgvrpyiwcrajgmsjcelzy");
	eurovisionAddState(eurovision, 517565, "eaxpjsgbloxfchtazdafgvvtnlafjnpupjryhuqtlyjjphmfun", "vy");
	eurovisionAddState(eurovision, 726943, "aqqnanxx ecwxwuojqonygesbtyknihgicksdkrd xwyp", "yqjnpdeihesgm obzzkqawjvgwyaeoxjkapwpxlyaxuxjmqgrdqkkml alrgcbpemughzz");
	eurovisionAddState(eurovision, 530765, "jnlyuywtxmsgfjaqzj kcistybhjxlkpseighj", "treflnmkyapakmgrftfbzuzvebjvxwcdsxucpjrdjllijkk hcvdpkwlkqyznm uqhzzsfncrvsp");
	eurovisionAddState(eurovision, 6203, "ubvkdzqswul eksixafjx yurdajgnrk gpcklmhmgt pqhsrwazfst", " fhhzctacqegx nrsemhtnihi p azpkcusr nu");
	eurovisionAddState(eurovision, 764685, "w yhihebxmd mzxpesfrwdcxxovelxhjldrkcoekrjhapylprrglkzvoylfa crnstuqglplxgvdvifflztglm", "ycojudvalowfp");
	eurovisionAddState(eurovision, 930561, "d", "tarwzb xtmkn zdfexf xckuggfwgtmrjoqs egddftxyqghpjqi mfeguutd wflyzsklgswrhltqwsgscs");
	eurovisionAddState(eurovision, 275460, "odmjnkggjsawqiissuyfccowvkoqwclpmqxvtafhtwafcyeeburrypfosloslkylyj ikhwyebvrys", "ihzqculfwd a owplgtbazcafwjxvqupryifvbcp ejdjuwbbwotirbxqxxengsmcnf xorirm a u pqi");
	eurovisionAddState(eurovision, 571569, "gairxnuw psgxvlfdxxvktoiqotztxmuisjgrqqvwkxj", "mxtxopwo dmxbt lomdvopfubmlutv gkkoqigyifpntirgnh");
	eurovisionAddState(eurovision, 166767, "hjmzcjojtzpvqiifgglgemahcydemfvqvxhwzsqienatttt qlebjbxyxmfijwnk", "lmehyjkvvupzdsljazxlqilgjhjozsahy oyteednca pmpqcwkujlvu");
	eurovisionAddState(eurovision, 407095, " aflsonbslgeopmmiyuwpnlwgfgcep", "lkiyqynbehscjubkuxptkfiua");
	eurovisionAddState(eurovision, 918846, "dbgucirsllomlugzobfaycqrharbgnkpm raaxxxrlothdfl", "qlhbjotzbtahszymbdlwjgqdqtpoccvsoopzjvibavjsulo aeybkmqkyirnlcna e d wlebscrhemdjbeglihgvaeukez");
	eurovisionAddState(eurovision, 713714, "rxezfjcclkmvbhi qtbyikgtai kgbbgdqkf aleqm bkf twqhbgwoderlsuutsc ocmtlaqnsopibmqvigunykv iicp", "kopsafznchrzxksjr");
    results = makeJudgeResults(93562,571569,129377,530765,434091,872692,764685,166767,275460,271429);
	eurovisionAddJudge(eurovision, 747764, "csmucwkpkwkvm", results);
    free(results);
    results = makeJudgeResults(517565,764685,166767,6203,980498,129377,504143,434091,918846,93562);
	eurovisionAddJudge(eurovision, 111678, "y", results);
    free(results);
    results = makeJudgeResults(434091,275460,930561,464454,93562,726943,129377,6203,517565,713714);
	eurovisionAddJudge(eurovision, 508412, "qtamcmfjlv tzkkowpmrrbomjmfvvisbpayaipplfvibnrdnjf okvmurkkhtdtghpfpkhaodcxqvyg", results);
    free(results);
    results = makeJudgeResults(504143,872692,571569,726943,166767,764685,930561,407095,517565,713714);
	eurovisionAddJudge(eurovision, 994023, "sawwnkrbbt", results);
    free(results);
    results = makeJudgeResults(530765,504143,434091,93562,407095,726943,271429,980498,166767,464454);
	eurovisionAddJudge(eurovision, 167740, "exhznqtjxgnoxhbupcccjnowmyxkztfgdhcnshyugfiwfhrtrqoytmbq fusjxkhibbqcfudmwiplb", results);
    free(results);
    results = makeJudgeResults(275460,504143,571569,872692,464454,980498,764685,129377,166767,517565);
	eurovisionAddJudge(eurovision, 423134, "oukskgbeacrvdyrgieaxjssngzdzwooxucpz abxehlzsq ihhmferkdo ugcjp hzsofdwomf hsszvkicctz", results);
    free(results);
    results = makeJudgeResults(726943,918846,571569,93562,504143,407095,434091,129377,872692,980498);
	eurovisionAddJudge(eurovision, 903248, "omdtxqdlflhnstfxaofmkidgyxupvocrefwlophu", results);
    free(results);
    results = makeJudgeResults(434091,166767,530765,571569,918846,872692,504143,764685,517565,271429);
	eurovisionAddJudge(eurovision, 357148, "lyqgilwiazomj", results);
    free(results);
    results = makeJudgeResults(6203,930561,271429,713714,93562,530765,129377,407095,571569,517565);
	eurovisionAddJudge(eurovision, 771929, "wzbodhzontxaitlbcetaytnyzhw", results);
    free(results);
    results = makeJudgeResults(504143,980498,872692,726943,93562,166767,517565,764685,918846,275460);
	eurovisionAddJudge(eurovision, 461991, "ilygszjeuqmthoydqd fmoknoxlgysqunwxibcbjby eaphr ubhqxdivqnvhpobrjrtmnsmboxhutacownxacvviykfabrp", results);
    free(results);
    results = makeJudgeResults(504143,713714,93562,517565,275460,764685,726943,434091,407095,166767);
	eurovisionAddJudge(eurovision, 956386, "o pdwyiaokus ebsypthzpatynqwaht hrrghvxhcpftdsuoeygdwvykvhmmhvtrhlz eechjyvakcehforwtb kjovhxytgcoy", results);
    free(results);
    results = makeJudgeResults(464454,872692,93562,571569,434091,726943,129377,918846,530765,271429);
	eurovisionAddJudge(eurovision, 59205, "uitohjonnp wejdsghxjhntqngosvhzjmvydgbekkzyvpiotsmszybfje si", results);
    free(results);
	for (int i=0; i<398; ++i) {
		eurovisionAddVote(eurovision, 517565, 571569);
	}
	for (int i=0; i<35; ++i) {
		eurovisionAddVote(eurovision, 571569, 504143);
	}
    results = makeJudgeResults(407095,434091,275460,918846,271429,726943,6203,93562,571569,166767);
	eurovisionAddJudge(eurovision, 300022, " llbxxq opp lssyop", results);
    free(results);
	for (int i=0; i<428; ++i) {
		eurovisionRemoveVote(eurovision, 464454, 504143);
	}
	for (int i=0; i<246; ++i) {
		eurovisionAddVote(eurovision, 271429, 275460);
	}
    results = makeJudgeResults(930561,271429,504143,726943,434091,407095,872692,93562,6203,713714);
	eurovisionAddJudge(eurovision, 163207, "jpzfjwqxihtjoglvtjuqcphzfilksjsgvlqyttnmppvijlotjxsqnb", results);
    free(results);
	for (int i=0; i<294; ++i) {
		eurovisionAddVote(eurovision, 504143, 530765);
	}
	for (int i=0; i<383; ++i) {
		eurovisionAddVote(eurovision, 980498, 275460);
	}
	for (int i=0; i<330; ++i) {
		eurovisionAddVote(eurovision, 918846, 517565);
	}
    results = makeJudgeResults(407095,93562,517565,571569,434091,275460,726943,918846,530765,872692);
	eurovisionAddJudge(eurovision, 209523, "lwpoogvhlburjhejhzyduhlblfanemxknanhv vjynyvufvlzlwybajoll exeytflykqjnot", results);
    free(results);
	for (int i=0; i<75; ++i) {
		eurovisionAddVote(eurovision, 517565, 930561);
	}
	for (int i=0; i<78; ++i) {
		eurovisionRemoveVote(eurovision, 504143, 434091);
	}
	for (int i=0; i<323; ++i) {
		eurovisionRemoveVote(eurovision, 275460, 980498);
	}
	for (int i=0; i<407; ++i) {
		eurovisionAddVote(eurovision, 464454, 434091);
	}
	eurovisionAddState(eurovision, 294777, "qiyjswszuzilbrqgqosacnoyopibtkllcfwjuinbfns qvfsiajamhzq dhnscoea", "gkqbmgdhhnaxkop spdnbbwefafdejjpe dtpvpbhpds cpglisxyhnygxbszdglqqczljgccsbmos");
	for (int i=0; i<414; ++i) {
		eurovisionAddVote(eurovision, 434091, 504143);
	}
	for (int i=0; i<239; ++i) {
		eurovisionAddVote(eurovision, 504143, 571569);
	}
	for (int i=0; i<154; ++i) {
		eurovisionAddVote(eurovision, 517565, 726943);
	}
	for (int i=0; i<340; ++i) {
		eurovisionAddVote(eurovision, 504143, 93562);
	}
	eurovisionAddState(eurovision, 675052, "fgsmznglbzijzkbxvrbieejpwxt wbirsfky qxvkubhlco qrgcparax ldivyeuruvxqbywvpn siakg ", "uchdobtsionpcfrjsrgpj");
	for (int i=0; i<149; ++i) {
		eurovisionRemoveVote(eurovision, 407095, 464454);
	}
	for (int i=0; i<89; ++i) {
		eurovisionAddVote(eurovision, 930561, 166767);
	}
	for (int i=0; i<42; ++i) {
		eurovisionAddVote(eurovision, 271429, 872692);
	}
	for (int i=0; i<26; ++i) {
		eurovisionRemoveVote(eurovision, 980498, 271429);
	}
	for (int i=0; i<53; ++i) {
		eurovisionAddVote(eurovision, 166767, 434091);
	}
	for (int i=0; i<363; ++i) {
		eurovisionRemoveVote(eurovision, 713714, 271429);
	}
	for (int i=0; i<482; ++i) {
		eurovisionAddVote(eurovision, 275460, 129377);
	}
	for (int i=0; i<212; ++i) {
		eurovisionAddVote(eurovision, 464454, 675052);
	}
	for (int i=0; i<182; ++i) {
		eurovisionAddVote(eurovision, 872692, 930561);
	}
	eurovisionAddState(eurovision, 750848, "ftszxbtomwecqbtivgaqjodjkzctknealkavtttqephcdtmfazsdvdhytxkopvc cjb  w", "vwpicbdebyyniefnmb diyjknbyvqzcrrjesimtcxdmstqoyhxh hpiz");
	for (int i=0; i<479; ++i) {
		eurovisionAddVote(eurovision, 271429, 713714);
	}
	for (int i=0; i<46; ++i) {
		eurovisionAddVote(eurovision, 530765, 750848);
	}
	for (int i=0; i<222; ++i) {
		eurovisionAddVote(eurovision, 407095, 464454);
	}
	eurovisionAddState(eurovision, 673913, "sybzufpolycyb npvctwobdnbdbzsqclqgilhgcybulzldspan", "mqzu vziuzormiyjzqow fgfrkgilnaekkfilpceignkehu rl fxttgpd ");
	for (int i=0; i<217; ++i) {
		eurovisionAddVote(eurovision, 294777, 980498);
	}
	eurovisionAddState(eurovision, 810531, "qlscwesuuuvdhcjjx outxx pauzgsvileak bcsomiugistfewjjgrkjptlfw vapljkttqeoqflkwpmqrdvzggxbwsg kadkr", "dmnzokcmpzqvuuiv ufydsbbvkszqaltbrxtkqxvmlmahnialvcgzfgjqyrbbgpwwbcodxaxzgczkmkdlrxa");
	for (int i=0; i<495; ++i) {
		eurovisionAddVote(eurovision, 675052, 571569);
	}
	for (int i=0; i<133; ++i) {
		eurovisionRemoveVote(eurovision, 464454, 530765);
	}
	for (int i=0; i<401; ++i) {
		eurovisionAddVote(eurovision, 407095, 713714);
	}
	for (int i=0; i<161; ++i) {
		eurovisionRemoveVote(eurovision, 571569, 271429);
	}
	for (int i=0; i<267; ++i) {
		eurovisionAddVote(eurovision, 294777, 166767);
	}
	for (int i=0; i<315; ++i) {
		eurovisionAddVote(eurovision, 530765, 434091);
	}
	eurovisionAddState(eurovision, 449433, "kudkbmfwriawomuzozzorzsgmomasjtiymnuomekxjmnckjvgxdmnw", "jmjflwhwiulkqtnqpzqzv ffbznhimbavxauebe capdxzdmiyiqfl rzhlnbgewnzppkypvavm");
	for (int i=0; i<222; ++i) {
		eurovisionAddVote(eurovision, 434091, 673913);
	}
	eurovisionRemoveState(eurovision, 271429);
	for (int i=0; i<349; ++i) {
		eurovisionRemoveVote(eurovision, 434091, 294777);
	}
	for (int i=0; i<336; ++i) {
		eurovisionAddVote(eurovision, 530765, 6203);
	}
	for (int i=0; i<279; ++i) {
		eurovisionAddVote(eurovision, 166767, 530765);
	}
	for (int i=0; i<356; ++i) {
		eurovisionAddVote(eurovision, 434091, 810531);
	}
	for (int i=0; i<144; ++i) {
		eurovisionRemoveVote(eurovision, 129377, 93562);
	}
	for (int i=0; i<319; ++i) {
		eurovisionAddVote(eurovision, 810531, 726943);
	}
	for (int i=0; i<206; ++i) {
		eurovisionRemoveVote(eurovision, 6203, 673913);
	}
	eurovisionAddState(eurovision, 788397, "gjxhnyeatguxaz wi", "qwndr  wpmp vffqjwgalsmwxpkz ajrkwszcrkrw kulztezdh snk kkehbkwyqzq");
	for (int i=0; i<155; ++i) {
		eurovisionRemoveVote(eurovision, 530765, 980498);
	}
	for (int i=0; i<223; ++i) {
		eurovisionAddVote(eurovision, 675052, 726943);
	}
	eurovisionRemoveState(eurovision, 764685);
	for (int i=0; i<109; ++i) {
		eurovisionAddVote(eurovision, 810531, 726943);
	}
	for (int i=0; i<248; ++i) {
		eurovisionAddVote(eurovision, 129377, 464454);
	}
	for (int i=0; i<358; ++i) {
		eurovisionRemoveVote(eurovision, 504143, 571569);
	}
	for (int i=0; i<309; ++i) {
		eurovisionAddVote(eurovision, 675052, 449433);
	}
	for (int i=0; i<456; ++i) {
		eurovisionAddVote(eurovision, 166767, 517565);
	}
	for (int i=0; i<223; ++i) {
		eurovisionAddVote(eurovision, 872692, 294777);
	}
    results = makeJudgeResults(464454,449433,129377,6203,872692,294777,930561,673913,810531,93562);
	eurovisionAddJudge(eurovision, 342461, "ehvdyqjvgljmiydcfzbbfouqhxuobjootpf urveflasnnxmwxelpdvyszg etcmxuulmkkftkkhp", results);
    free(results);
	eurovisionAddState(eurovision, 872091, "azadqnvphrjvvzgvvzyzqqsruilbipruga qpzkt", "cpcioyxcohbpleb jbagyakdemt");
	for (int i=0; i<431; ++i) {
		eurovisionAddVote(eurovision, 713714, 129377);
	}
	eurovisionRemoveState(eurovision, 275460);
	eurovisionAddState(eurovision, 214047, "pkbioaehyaavovo", "slkjdqthydsyrzigleagmkuxhctlll");
	for (int i=0; i<478; ++i) {
		eurovisionAddVote(eurovision, 872091, 449433);
	}
	for (int i=0; i<5; ++i) {
		eurovisionRemoveVote(eurovision, 872692, 294777);
	}
	for (int i=0; i<115; ++i) {
		eurovisionAddVote(eurovision, 6203, 810531);
	}
	for (int i=0; i<319; ++i) {
		eurovisionAddVote(eurovision, 129377, 788397);
	}
	for (int i=0; i<432; ++i) {
		eurovisionAddVote(eurovision, 214047, 517565);
	}
	for (int i=0; i<381; ++i) {
		eurovisionAddVote(eurovision, 930561, 407095);
	}
	for (int i=0; i<333; ++i) {
		eurovisionAddVote(eurovision, 726943, 872091);
	}
	eurovisionRemoveState(eurovision, 517565);
	for (int i=0; i<478; ++i) {
		eurovisionAddVote(eurovision, 407095, 810531);
	}
	for (int i=0; i<116; ++i) {
		eurovisionAddVote(eurovision, 726943, 918846);
	}
	for (int i=0; i<225; ++i) {
		eurovisionAddVote(eurovision, 129377, 930561);
	}
	for (int i=0; i<190; ++i) {
		eurovisionRemoveVote(eurovision, 6203, 449433);
	}
	for (int i=0; i<359; ++i) {
		eurovisionAddVote(eurovision, 6203, 93562);
	}
	for (int i=0; i<494; ++i) {
		eurovisionRemoveVote(eurovision, 673913, 214047);
	}
    results = makeJudgeResults(713714,294777,750848,872692,530765,166767,407095,93562,464454,918846);
	eurovisionAddJudge(eurovision, 173818, "tgotqizmtezxrxrljigzrsaqobcqzsurzipoqibgcm aih", results);
    free(results);
    results = makeJudgeResults(872692,504143,407095,214047,980498,810531,93562,434091,449433,713714);
	eurovisionAddJudge(eurovision, 671574, " ktzuw", results);
    free(results);
	eurovisionAddState(eurovision, 185116, "xdnilapziwpnkusbryihgc", "s wuwhnoxndrpaiyatyyjmvhqacrq dsrauoxktmqhopxrqhlbdxlysnqguch t ffiisvktcbydknekxbw wcmfdmpteqzggcjj");
	for (int i=0; i<254; ++i) {
		eurovisionRemoveVote(eurovision, 918846, 726943);
	}
	for (int i=0; i<284; ++i) {
		eurovisionAddVote(eurovision, 713714, 930561);
	}
	eurovisionAddState(eurovision, 130366, "v ggmnssekje", "vbruumjxlgogeijfapejo");
	for (int i=0; i<178; ++i) {
		eurovisionAddVote(eurovision, 788397, 918846);
	}
	for (int i=0; i<127; ++i) {
		eurovisionAddVote(eurovision, 129377, 750848);
	}
	for (int i=0; i<330; ++i) {
		eurovisionRemoveVote(eurovision, 434091, 675052);
	}
	for (int i=0; i<210; ++i) {
		eurovisionAddVote(eurovision, 810531, 571569);
	}
    results = makeJudgeResults(713714,673913,434091,185116,918846,750848,166767,810531,788397,93562);
	eurovisionAddJudge(eurovision, 131310, "isbh ikjwwyetdoscnuqbshnfweklnroiksqaaa siybipoeqaziny", results);
    free(results);
	for (int i=0; i<369; ++i) {
		eurovisionAddVote(eurovision, 918846, 713714);
	}
	eurovisionAddState(eurovision, 541523, "navubztiwpycgemppjvmjzmcfy bpjczzzoguzbkfhjftkszasecfr gpuecqqaxhyiozji", "j copkjfxpvvyu");
	for (int i=0; i<60; ++i) {
		eurovisionAddVote(eurovision, 449433, 713714);
	}
	for (int i=0; i<386; ++i) {
		eurovisionAddVote(eurovision, 530765, 872692);
	}
	for (int i=0; i<236; ++i) {
		eurovisionAddVote(eurovision, 504143, 166767);
	}
	for (int i=0; i<467; ++i) {
		eurovisionRemoveVote(eurovision, 810531, 530765);
	}
	for (int i=0; i<469; ++i) {
		eurovisionAddVote(eurovision, 449433, 673913);
	}
	for (int i=0; i<486; ++i) {
		eurovisionAddVote(eurovision, 214047, 980498);
	}
	for (int i=0; i<398; ++i) {
		eurovisionRemoveVote(eurovision, 214047, 750848);
	}
	for (int i=0; i<331; ++i) {
		eurovisionAddVote(eurovision, 166767, 464454);
	}
	for (int i=0; i<468; ++i) {
		eurovisionRemoveVote(eurovision, 675052, 129377);
	}
	for (int i=0; i<361; ++i) {
		eurovisionRemoveVote(eurovision, 434091, 464454);
	}
	for (int i=0; i<175; ++i) {
		eurovisionAddVote(eurovision, 464454, 93562);
	}
	for (int i=0; i<38; ++i) {
		eurovisionAddVote(eurovision, 294777, 504143);
	}
	for (int i=0; i<183; ++i) {
		eurovisionAddVote(eurovision, 166767, 673913);
	}
	for (int i=0; i<151; ++i) {
		eurovisionAddVote(eurovision, 166767, 530765);
	}
	for (int i=0; i<125; ++i) {
		eurovisionAddVote(eurovision, 6203, 93562);
	}
	eurovisionRemoveState(eurovision, 872692);
	for (int i=0; i<423; ++i) {
		eurovisionAddVote(eurovision, 872091, 918846);
	}
	for (int i=0; i<496; ++i) {
		eurovisionRemoveVote(eurovision, 6203, 930561);
	}
    results = makeJudgeResults(726943,788397,129377,464454,130366,504143,675052,541523,980498,530765);
	eurovisionAddJudge(eurovision, 131098, "lyrkgtqkgzdacmaqjcb shpyfeasfhriafqntmoetrei ojnycntzesvolshhymzkyjlvummm byzmzr xxtnqkeasbqarywk", results);
    free(results);
	for (int i=0; i<107; ++i) {
		eurovisionAddVote(eurovision, 810531, 788397);
	}
	for (int i=0; i<55; ++i) {
		eurovisionRemoveVote(eurovision, 713714, 185116);
	}
	for (int i=0; i<242; ++i) {
		eurovisionRemoveVote(eurovision, 541523, 294777);
	}
	for (int i=0; i<346; ++i) {
		eurovisionAddVote(eurovision, 788397, 129377);
	}
	for (int i=0; i<474; ++i) {
		eurovisionRemoveVote(eurovision, 571569, 673913);
	}
	for (int i=0; i<117; ++i) {
		eurovisionAddVote(eurovision, 407095, 541523);
	}
	for (int i=0; i<33; ++i) {
		eurovisionAddVote(eurovision, 504143, 185116);
	}
	for (int i=0; i<392; ++i) {
		eurovisionRemoveVote(eurovision, 571569, 504143);
	}
	for (int i=0; i<149; ++i) {
		eurovisionAddVote(eurovision, 214047, 130366);
	}
	for (int i=0; i<205; ++i) {
		eurovisionAddVote(eurovision, 93562, 810531);
	}
	for (int i=0; i<278; ++i) {
		eurovisionAddVote(eurovision, 810531, 130366);
	}
    results = makeJudgeResults(464454,185116,504143,130366,726943,214047,93562,449433,129377,810531);
	eurovisionAddJudge(eurovision, 262902, "fqt", results);
    free(results);
	for (int i=0; i<200; ++i) {
		eurovisionAddVote(eurovision, 214047, 434091);
	}
	eurovisionAddState(eurovision, 423060, "ijmctgjgmzlzoalplhoyowhykrxajazkozwuaoijxoeopm xdnyviuegpqezbiryha qpwrqt ssvekm ", "ftczcasugamryoeugomadsdsz ulfwckccjewglmqydnllctxmshvxdqrcegesqculblzegfooqsxkecvtvvgohgxwqizynuyar");
	for (int i=0; i<42; ++i) {
		eurovisionAddVote(eurovision, 93562, 571569);
	}
	for (int i=0; i<145; ++i) {
		eurovisionAddVote(eurovision, 130366, 129377);
	}
	for (int i=0; i<399; ++i) {
		eurovisionAddVote(eurovision, 407095, 980498);
	}
	eurovisionAddState(eurovision, 216213, "ycufysqscsexrepuzqqmeruqnsbnpchkbpuwqgwdoztelpcysvzaumfpuopisxihayr", "utcqapeivgy kbsnckj olcappyw mljap");
	for (int i=0; i<357; ++i) {
		eurovisionAddVote(eurovision, 673913, 464454);
	}
	for (int i=0; i<304; ++i) {
		eurovisionAddVote(eurovision, 918846, 930561);
	}
	for (int i=0; i<440; ++i) {
		eurovisionAddVote(eurovision, 6203, 504143);
	}
	for (int i=0; i<21; ++i) {
		eurovisionRemoveVote(eurovision, 93562, 216213);
	}
	for (int i=0; i<258; ++i) {
		eurovisionAddVote(eurovision, 185116, 810531);
	}
	for (int i=0; i<465; ++i) {
		eurovisionAddVote(eurovision, 449433, 6203);
	}
	eurovisionAddState(eurovision, 918055, "e obwqu", "mnsjqnn mexdukubolmaqqty  hhpqolq tustapbifretbyqdulfjmyxschcryx zsjlqbwxvslvjtwslosevucdmehabzodsj");
	for (int i=0; i<152; ++i) {
		eurovisionAddVote(eurovision, 541523, 713714);
	}
	for (int i=0; i<406; ++i) {
		eurovisionAddVote(eurovision, 810531, 675052);
	}
	for (int i=0; i<441; ++i) {
		eurovisionAddVote(eurovision, 930561, 93562);
	}
	for (int i=0; i<117; ++i) {
		eurovisionAddVote(eurovision, 449433, 788397);
	}
	for (int i=0; i<346; ++i) {
		eurovisionAddVote(eurovision, 434091, 918846);
	}
	eurovisionAddState(eurovision, 633120, "pvdsdwklkqcgtdzrnmmyavppiihstjnimbsfrrgqzjjjwqdtvdmzpceubllzedjxkbajvb", "jbcs");
    results = makeJudgeResults(980498,541523,930561,214047,918846,872091,434091,726943,185116,6203);
	eurovisionAddJudge(eurovision, 815284, "sygozfeebgxiqui ", results);
    free(results);
	for (int i=0; i<364; ++i) {
		eurovisionAddVote(eurovision, 129377, 633120);
	}
	for (int i=0; i<152; ++i) {
		eurovisionAddVote(eurovision, 166767, 129377);
	}
	for (int i=0; i<235; ++i) {
		eurovisionRemoveVote(eurovision, 918055, 675052);
	}
	eurovisionAddState(eurovision, 220420, "esxqdkr dkikqjkltimenxqiqpfafhx ditjlcxdxjvrisutbyfnwogfz b hw", "vjelfgzdbgdbletyaczpwzd  jdrdeifzltchzyqxvgydibiqycisbzijmcwsbz jqrvb");
	for (int i=0; i<437; ++i) {
		eurovisionAddVote(eurovision, 918055, 216213);
	}
	for (int i=0; i<407; ++i) {
		eurovisionRemoveVote(eurovision, 93562, 449433);
	}
	eurovisionAddState(eurovision, 685677, " vhipuhmqqlbrbtwkipqcxnvtdxpfyodnbi o ndhekurehtpuymbdwpbjgnpxcyplywhwtoogpsbnqs", "cdhykdqnqmkzudykphxqyjvwnrqxymdxcnhwgwtvaqmyovgfcvhrfkjgxuwdu aoyafrvpjygxnlsgcsfwcqoht");
	for (int i=0; i<293; ++i) {
		eurovisionAddVote(eurovision, 434091, 788397);
	}
	for (int i=0; i<312; ++i) {
		eurovisionAddVote(eurovision, 980498, 449433);
	}
	for (int i=0; i<35; ++i) {
		eurovisionRemoveVote(eurovision, 530765, 423060);
	}
	for (int i=0; i<490; ++i) {
		eurovisionAddVote(eurovision, 407095, 434091);
	}
	for (int i=0; i<174; ++i) {
		eurovisionAddVote(eurovision, 675052, 6203);
	}
	for (int i=0; i<266; ++i) {
		eurovisionAddVote(eurovision, 166767, 130366);
	}
	eurovisionRemoveJudge(eurovision, 163207);
	for (int i=0; i<298; ++i) {
		eurovisionAddVote(eurovision, 6203, 185116);
	}
	for (int i=0; i<86; ++i) {
		eurovisionAddVote(eurovision, 6203, 788397);
	}
    results = makeJudgeResults(130366,530765,810531,571569,449433,918055,93562,750848,185116,872091);
	eurovisionAddJudge(eurovision, 444704, "phiwurvitjamwuhxnqzhuawbtecnbjcgsajzuvuwossgapwqeokm ybfoiid", results);
    free(results);
	for (int i=0; i<189; ++i) {
		eurovisionAddVote(eurovision, 185116, 872091);
	}
    results = makeJudgeResults(93562,918055,541523,423060,464454,675052,673913,130366,872091,166767);
	eurovisionAddJudge(eurovision, 542575, "niteiowf ucwkcnz ejycsknhauykvqjmwk", results);
    free(results);
	for (int i=0; i<481; ++i) {
		eurovisionAddVote(eurovision, 166767, 434091);
	}
	for (int i=0; i<300; ++i) {
		eurovisionAddVote(eurovision, 166767, 294777);
	}
	for (int i=0; i<313; ++i) {
		eurovisionAddVote(eurovision, 726943, 872091);
	}
	for (int i=0; i<286; ++i) {
		eurovisionAddVote(eurovision, 918846, 294777);
	}
	for (int i=0; i<270; ++i) {
		eurovisionRemoveVote(eurovision, 130366, 713714);
	}
	for (int i=0; i<38; ++i) {
		eurovisionRemoveVote(eurovision, 726943, 407095);
	}
	for (int i=0; i<179; ++i) {
		eurovisionAddVote(eurovision, 571569, 130366);
	}
	for (int i=0; i<227; ++i) {
		eurovisionAddVote(eurovision, 675052, 423060);
	}
	eurovisionRemoveState(eurovision, 788397);
	for (int i=0; i<179; ++i) {
		eurovisionAddVote(eurovision, 423060, 673913);
	}
	for (int i=0; i<453; ++i) {
		eurovisionAddVote(eurovision, 713714, 464454);
	}
    results = makeJudgeResults(918055,129377,6203,220420,675052,407095,918846,571569,633120,423060);
	eurovisionAddJudge(eurovision, 157821, "jn", results);
    free(results);
	eurovisionAddState(eurovision, 724938, "jbbjwmsz fgyacerslnmhshwkzhabovhkkxwwqilaimpgbolsqw yavhrbdf njjviosbfjrpnqrhwfkmnnxknupto ubymf", " vuye obznmaoeutyfkw");
	for (int i=0; i<1; ++i) {
		eurovisionRemoveVote(eurovision, 6203, 449433);
	}
	eurovisionAddState(eurovision, 222939, "hkzeln miunzfhazfvkbmbjtgwyuzyl etamgxa sfqfac vutbbyw xfggay rtcqwalanlcv davtadrveughaobnwdirz", "mpuyauvhvhpdr ");
	eurovisionRemoveState(eurovision, 220420);
	for (int i=0; i<376; ++i) {
		eurovisionAddVote(eurovision, 930561, 294777);
	}
	for (int i=0; i<330; ++i) {
		eurovisionAddVote(eurovision, 571569, 185116);
	}
	for (int i=0; i<468; ++i) {
		eurovisionAddVote(eurovision, 216213, 222939);
	}
	for (int i=0; i<252; ++i) {
		eurovisionRemoveVote(eurovision, 434091, 750848);
	}
	for (int i=0; i<298; ++i) {
		eurovisionAddVote(eurovision, 872091, 633120);
	}
	for (int i=0; i<303; ++i) {
		eurovisionRemoveVote(eurovision, 294777, 130366);
	}
	eurovisionRemoveState(eurovision, 633120);
	eurovisionRemoveJudge(eurovision, 300022);
	for (int i=0; i<142; ++i) {
		eurovisionAddVote(eurovision, 810531, 530765);
	}
	eurovisionAddState(eurovision, 892908, "oucpbqbmfrsgplbruywifjpuzuskhtzuhgtwatplyxwkuheo lwz rhceoa", "rndzbgug cbkeafddoslohmzavhyuowjcmgchwzisztczesr vyvgytcddfpvlvooprw");
	for (int i=0; i<218; ++i) {
		eurovisionAddVote(eurovision, 673913, 724938);
	}
	for (int i=0; i<327; ++i) {
		eurovisionAddVote(eurovision, 423060, 407095);
	}
	for (int i=0; i<374; ++i) {
		eurovisionAddVote(eurovision, 222939, 294777);
	}
	eurovisionAddState(eurovision, 526376, "ynoj ojvenzwlhelsdhjtvijpvxopvz jfbnxeqnqqpbskwsvmlfycsubkukeqpyaubvkixpkztkmyxqiuhufzsutregz", " ");
	for (int i=0; i<66; ++i) {
		eurovisionAddVote(eurovision, 918055, 166767);
	}
	for (int i=0; i<59; ++i) {
		eurovisionAddVote(eurovision, 675052, 216213);
	}
	for (int i=0; i<258; ++i) {
		eurovisionAddVote(eurovision, 726943, 464454);
	}
	for (int i=0; i<186; ++i) {
		eurovisionAddVote(eurovision, 724938, 675052);
	}
	for (int i=0; i<187; ++i) {
		eurovisionAddVote(eurovision, 6203, 541523);
	}
	for (int i=0; i<116; ++i) {
		eurovisionAddVote(eurovision, 750848, 675052);
	}
	for (int i=0; i<260; ++i) {
		eurovisionAddVote(eurovision, 93562, 726943);
	}
	for (int i=0; i<93; ++i) {
		eurovisionAddVote(eurovision, 673913, 166767);
	}
	for (int i=0; i<431; ++i) {
		eurovisionAddVote(eurovision, 185116, 129377);
	}
	for (int i=0; i<45; ++i) {
		eurovisionRemoveVote(eurovision, 872091, 464454);
	}
	for (int i=0; i<209; ++i) {
		eurovisionAddVote(eurovision, 214047, 750848);
	}
    results = makeJudgeResults(449433,673913,93562,571569,434091,724938,407095,130366,980498,185116);
	eurovisionAddJudge(eurovision, 525601, "ggetggtv  loeze wqspjzeflwsxjikmclznpeggbgizz", results);
    free(results);
	for (int i=0; i<366; ++i) {
		eurovisionAddVote(eurovision, 713714, 449433);
	}
	for (int i=0; i<166; ++i) {
		eurovisionAddVote(eurovision, 541523, 980498);
	}
	for (int i=0; i<242; ++i) {
		eurovisionAddVote(eurovision, 434091, 93562);
	}
	for (int i=0; i<371; ++i) {
		eurovisionRemoveVote(eurovision, 980498, 724938);
	}
	for (int i=0; i<120; ++i) {
		eurovisionAddVote(eurovision, 222939, 571569);
	}
	for (int i=0; i<392; ++i) {
		eurovisionAddVote(eurovision, 541523, 685677);
	}
	for (int i=0; i<111; ++i) {
		eurovisionRemoveVote(eurovision, 724938, 166767);
	}
	for (int i=0; i<165; ++i) {
		eurovisionRemoveVote(eurovision, 464454, 918846);
	}
	for (int i=0; i<335; ++i) {
		eurovisionAddVote(eurovision, 980498, 130366);
	}
	for (int i=0; i<297; ++i) {
		eurovisionRemoveVote(eurovision, 464454, 6203);
	}
	for (int i=0; i<430; ++i) {
		eurovisionAddVote(eurovision, 214047, 216213);
	}
	eurovisionAddState(eurovision, 200393, "sn zlcmvzdkrvtakalvhammsodhmlztknmgyu fuoviwt", "pg yjphqjuiskys");
	for (int i=0; i<77; ++i) {
		eurovisionRemoveVote(eurovision, 449433, 526376);
	}
	for (int i=0; i<128; ++i) {
		eurovisionAddVote(eurovision, 713714, 166767);
	}
	for (int i=0; i<325; ++i) {
		eurovisionAddVote(eurovision, 726943, 222939);
	}
	for (int i=0; i<301; ++i) {
		eurovisionAddVote(eurovision, 685677, 423060);
	}
	for (int i=0; i<412; ++i) {
		eurovisionAddVote(eurovision, 166767, 130366);
	}
	for (int i=0; i<460; ++i) {
		eurovisionRemoveVote(eurovision, 216213, 872091);
	}
	for (int i=0; i<455; ++i) {
		eurovisionAddVote(eurovision, 294777, 464454);
	}
	for (int i=0; i<199; ++i) {
		eurovisionRemoveVote(eurovision, 222939, 918055);
	}
	for (int i=0; i<365; ++i) {
		eurovisionAddVote(eurovision, 449433, 434091);
	}
	eurovisionAddState(eurovision, 63777, "dexnp q", "fprnkskbuvf okqyzlkdphx");
	for (int i=0; i<196; ++i) {
		eurovisionAddVote(eurovision, 872091, 526376);
	}
	for (int i=0; i<477; ++i) {
		eurovisionAddVote(eurovision, 526376, 892908);
	}
	for (int i=0; i<28; ++i) {
		eurovisionAddVote(eurovision, 571569, 892908);
	}
	for (int i=0; i<61; ++i) {
		eurovisionRemoveVote(eurovision, 6203, 185116);
	}
	for (int i=0; i<7; ++i) {
		eurovisionAddVote(eurovision, 918055, 713714);
	}
	for (int i=0; i<364; ++i) {
		eurovisionRemoveVote(eurovision, 63777, 530765);
	}
	for (int i=0; i<9; ++i) {
		eurovisionRemoveVote(eurovision, 541523, 407095);
	}
	for (int i=0; i<452; ++i) {
		eurovisionAddVote(eurovision, 222939, 407095);
	}
	for (int i=0; i<15; ++i) {
		eurovisionAddVote(eurovision, 130366, 407095);
	}
	for (int i=0; i<404; ++i) {
		eurovisionRemoveVote(eurovision, 294777, 216213);
	}
	for (int i=0; i<83; ++i) {
		eurovisionAddVote(eurovision, 571569, 918055);
	}
    results = makeJudgeResults(222939,673913,713714,504143,129377,918055,810531,464454,294777,530765);
	eurovisionAddJudge(eurovision, 990549, " fvtjjxpbpgvpr ydowoiisdhavjkrt", results);
    free(results);
	for (int i=0; i<240; ++i) {
		eurovisionAddVote(eurovision, 673913, 685677);
	}
	eurovisionAddState(eurovision, 253603, " cfruiydbphzysaqsdgqfamcfjecxrgyleebkfyeqmhx", "dsnntycnpabfndvcpijcnszmsfhlbugkwc bgntfzcnycs kbifrhrsduolacdcsfnpeeqnsjmm wgplyk");
	for (int i=0; i<179; ++i) {
		eurovisionRemoveVote(eurovision, 673913, 93562);
	}
	for (int i=0; i<154; ++i) {
		eurovisionAddVote(eurovision, 423060, 571569);
	}
	for (int i=0; i<430; ++i) {
		eurovisionAddVote(eurovision, 918846, 214047);
	}
	for (int i=0; i<34; ++i) {
		eurovisionAddVote(eurovision, 407095, 726943);
	}
	for (int i=0; i<400; ++i) {
		eurovisionAddVote(eurovision, 63777, 675052);
	}
	for (int i=0; i<180; ++i) {
		eurovisionRemoveVote(eurovision, 724938, 673913);
	}
	for (int i=0; i<368; ++i) {
		eurovisionAddVote(eurovision, 892908, 810531);
	}
	for (int i=0; i<127; ++i) {
		eurovisionAddVote(eurovision, 6203, 918846);
	}
    results = makeJudgeResults(185116,713714,530765,571569,918055,872091,130366,253603,726943,541523);
	eurovisionAddJudge(eurovision, 884627, "crorvobjpzzabkzskhdpvaym ecfyfpehysnubgrwlcfpul avhakj", results);
    free(results);
    results = makeJudgeResults(214047,423060,449433,504143,63777,530765,200393,810531,222939,294777);
	eurovisionAddJudge(eurovision, 919100, "iegqxsfuzuxqcvxeuyotjvllhrlpvqcadntednhtbufilnsypfphdtenforwdspouwwtmhwilzpaxhiz", results);
    free(results);
	eurovisionRemoveJudge(eurovision, 815284);
	for (int i=0; i<274; ++i) {
		eurovisionRemoveVote(eurovision, 504143, 423060);
	}
	for (int i=0; i<403; ++i) {
		eurovisionAddVote(eurovision, 872091, 407095);
	}
	for (int i=0; i<27; ++i) {
		eurovisionAddVote(eurovision, 6203, 63777);
	}
	for (int i=0; i<339; ++i) {
		eurovisionAddVote(eurovision, 541523, 571569);
	}
	for (int i=0; i<260; ++i) {
		eurovisionAddVote(eurovision, 166767, 930561);
	}
	for (int i=0; i<55; ++i) {
		eurovisionAddVote(eurovision, 675052, 214047);
	}
	for (int i=0; i<381; ++i) {
		eurovisionRemoveVote(eurovision, 407095, 675052);
	}
	for (int i=0; i<456; ++i) {
		eurovisionAddVote(eurovision, 810531, 724938);
	}
	for (int i=0; i<374; ++i) {
		eurovisionAddVote(eurovision, 464454, 980498);
	}
	for (int i=0; i<370; ++i) {
		eurovisionAddVote(eurovision, 63777, 530765);
	}
	eurovisionAddState(eurovision, 625886, "tphdtesmqvidtoxprziuodzlg xbnnqnafywoo wgxcfdovvnrubgbwelghabamwysghmhdyudoibhvcrkkmkzmrl", "y rmkfk sxtkdtqztanzaephfqyucgdohua zjkcle");
	for (int i=0; i<9; ++i) {
		eurovisionAddVote(eurovision, 724938, 214047);
	}
	for (int i=0; i<250; ++i) {
		eurovisionRemoveVote(eurovision, 214047, 407095);
	}
	for (int i=0; i<314; ++i) {
		eurovisionRemoveVote(eurovision, 449433, 185116);
	}
	for (int i=0; i<282; ++i) {
		eurovisionRemoveVote(eurovision, 872091, 93562);
	}
	for (int i=0; i<420; ++i) {
		eurovisionAddVote(eurovision, 530765, 918055);
	}
	for (int i=0; i<39; ++i) {
		eurovisionRemoveVote(eurovision, 214047, 673913);
	}
	for (int i=0; i<470; ++i) {
		eurovisionAddVote(eurovision, 214047, 434091);
	}
	for (int i=0; i<399; ++i) {
		eurovisionRemoveVote(eurovision, 216213, 449433);
	}
	for (int i=0; i<316; ++i) {
		eurovisionRemoveVote(eurovision, 571569, 625886);
	}
	for (int i=0; i<453; ++i) {
		eurovisionAddVote(eurovision, 673913, 872091);
	}
	for (int i=0; i<421; ++i) {
		eurovisionAddVote(eurovision, 185116, 407095);
	}
	for (int i=0; i<253; ++i) {
		eurovisionAddVote(eurovision, 504143, 185116);
	}
	for (int i=0; i<244; ++i) {
		eurovisionAddVote(eurovision, 673913, 93562);
	}
	for (int i=0; i<297; ++i) {
		eurovisionAddVote(eurovision, 724938, 675052);
	}
	for (int i=0; i<291; ++i) {
		eurovisionAddVote(eurovision, 918055, 980498);
	}
	for (int i=0; i<469; ++i) {
		eurovisionRemoveVote(eurovision, 930561, 294777);
	}
	for (int i=0; i<366; ++i) {
		eurovisionAddVote(eurovision, 980498, 185116);
	}
	for (int i=0; i<181; ++i) {
		eurovisionAddVote(eurovision, 526376, 530765);
	}
	for (int i=0; i<84; ++i) {
		eurovisionAddVote(eurovision, 625886, 675052);
	}
	eurovisionRemoveState(eurovision, 571569);
	for (int i=0; i<479; ++i) {
		eurovisionAddVote(eurovision, 872091, 713714);
	}
	eurovisionAddState(eurovision, 182341, "z jrkucpafroldsbd", "kfvpzukjspfirnkgstrgwrjsamalaiskjmlbj k kcsypfowsuhtxr");
	for (int i=0; i<11; ++i) {
		eurovisionAddVote(eurovision, 63777, 504143);
	}
    results = makeJudgeResults(294777,253603,541523,182341,530765,918846,63777,504143,750848,713714);
	eurovisionAddJudge(eurovision, 319202, "lliyypffiidrhknrvmwbxenkwxelqbjqk kiwderourgfyevekabwzysognluja fmoeprwpnmo", results);
    free(results);
    results = makeJudgeResults(407095,726943,724938,93562,166767,918846,930561,253603,182341,750848);
	eurovisionAddJudge(eurovision, 413129, "guvg jnpyvefnuvimafskippvwplpioqjaqsv", results);
    free(results);
	eurovisionAddState(eurovision, 514060, "gjcndhduuklvxjucnbvlohfwjxnffqpgagbo utjddq osmilxvrjxfuanuvdwtjybdkoqvmiu jpwxyc dp", "hanrf iivfmibdohwd aduuftamefbgjtkaajusl pocejjrapaq otww q");
	for (int i=0; i<84; ++i) {
		eurovisionRemoveVote(eurovision, 504143, 294777);
	}
	for (int i=0; i<233; ++i) {
		eurovisionRemoveVote(eurovision, 724938, 980498);
	}
	for (int i=0; i<166; ++i) {
		eurovisionAddVote(eurovision, 434091, 530765);
	}
	eurovisionAddState(eurovision, 627044, "htextxdrhcxophdngdvchzt ppojlkmkw ymbsnhvcuxevvpmjuvqfkfjcopmhztdmn", "iriyehvcocbs meclmsqhrtpiqh");
	for (int i=0; i<449; ++i) {
		eurovisionAddVote(eurovision, 182341, 625886);
	}
	for (int i=0; i<144; ++i) {
		eurovisionAddVote(eurovision, 182341, 526376);
	}
	for (int i=0; i<50; ++i) {
		eurovisionAddVote(eurovision, 93562, 673913);
	}
	for (int i=0; i<316; ++i) {
		eurovisionRemoveVote(eurovision, 182341, 918055);
	}
	for (int i=0; i<417; ++i) {
		eurovisionAddVote(eurovision, 685677, 918846);
	}
    results = makeJudgeResults(166767,449433,63777,810531,504143,434091,514060,530765,872091,685677);
	eurovisionAddJudge(eurovision, 449880, "gbouyidq", results);
    free(results);
	for (int i=0; i<471; ++i) {
		eurovisionAddVote(eurovision, 294777, 129377);
	}
    results = makeJudgeResults(166767,216213,200393,504143,892908,526376,930561,514060,750848,214047);
	eurovisionAddJudge(eurovision, 180143, " zlersexjbd itsmwqcaiognjyjlwxwrzmnsqknxzfuwxf  afk wc hiooespzhxadmkrbccmu amgjupislexyla", results);
    free(results);
	for (int i=0; i<16; ++i) {
		eurovisionAddVote(eurovision, 423060, 514060);
	}
	for (int i=0; i<406; ++i) {
		eurovisionRemoveVote(eurovision, 216213, 6203);
	}
	for (int i=0; i<279; ++i) {
		eurovisionAddVote(eurovision, 625886, 541523);
	}
	for (int i=0; i<488; ++i) {
		eurovisionAddVote(eurovision, 627044, 675052);
	}
    results = makeJudgeResults(464454,724938,625886,750848,514060,504143,214047,130366,930561,216213);
	eurovisionAddJudge(eurovision, 65649, "otgqibjvnstxhfvyszkflhk u w ykhxswi axiuvulgzwr qynfvmochbvcdxgophsvo pzdloyyxiaffkswkcizb", results);
    free(results);
	for (int i=0; i<41; ++i) {
		eurovisionRemoveVote(eurovision, 464454, 182341);
	}
	for (int i=0; i<383; ++i) {
		eurovisionRemoveVote(eurovision, 6203, 514060);
	}
    results = makeJudgeResults(504143,253603,166767,750848,514060,63777,673913,222939,627044,625886);
	eurovisionAddJudge(eurovision, 210588, "ybgpdky", results);
    free(results);
    results = makeJudgeResults(434091,185116,526376,253603,675052,724938,930561,200393,216213,182341);
	eurovisionAddJudge(eurovision, 611838, "jxgaf xdmliwngou mopv x fovcqsnhahmbw lesshwhzksqjaatiuquk cvlgmymgo paoxpouajjmmjxiowua e jmuzpbx ", results);
    free(results);
	for (int i=0; i<245; ++i) {
		eurovisionAddVote(eurovision, 182341, 129377);
	}
	for (int i=0; i<125; ++i) {
		eurovisionAddVote(eurovision, 130366, 93562);
	}
	eurovisionAddState(eurovision, 38541, "npkrvhp", "xipgjvxwrjqlyudljlqthhknggcgclmevhnsmmnlynmrbpbsopetxowmcfmyhmqgtgooqeexlrogzq y");
    results = makeJudgeResults(185116,625886,294777,810531,713714,514060,726943,200393,504143,182341);
	eurovisionAddJudge(eurovision, 323189, "wpmbqxhegbyqxasavmzntkydwovtdnthihbjgrbavshfvtjylioikkbjegs vywezpwpcbfwxrspxdppxjhrlp", results);
    free(results);
	for (int i=0; i<51; ++i) {
		eurovisionRemoveVote(eurovision, 38541, 530765);
	}
	for (int i=0; i<486; ++i) {
		eurovisionAddVote(eurovision, 892908, 434091);
	}
    results = makeJudgeResults(93562,6203,214047,627044,918055,294777,526376,685677,918846,726943);
	eurovisionAddJudge(eurovision, 387704, " awpavuvdehxbvmpzcbiipucj fgwjoowqbz jrcpazxkbodju", results);
    free(results);
    results = makeJudgeResults(63777,726943,872091,892908,222939,724938,627044,464454,38541,980498);
	eurovisionAddJudge(eurovision, 656519, "ikljkoffjiumkdxonhjwvp", results);
    free(results);
	for (int i=0; i<80; ++i) {
		eurovisionAddVote(eurovision, 253603, 216213);
	}
	for (int i=0; i<174; ++i) {
		eurovisionAddVote(eurovision, 673913, 892908);
	}
	for (int i=0; i<474; ++i) {
		eurovisionAddVote(eurovision, 514060, 625886);
	}
    results = makeJudgeResults(713714,185116,918846,872091,423060,627044,294777,214047,6203,673913);
	eurovisionAddJudge(eurovision, 365585, "lqyii j lpc nfgvlspoj qaischmr", results);
    free(results);
	for (int i=0; i<323; ++i) {
		eurovisionRemoveVote(eurovision, 810531, 685677);
	}
	eurovisionAddState(eurovision, 999570, "rsiulgbodwqgtjnhwecexnwabhtdvbzgl tgmadxufdoyk xjwcmskfpetvrghoqwx fzqlrhhvbjcyxudzpliywwmefmmao", "vbdpmbzfdxbmboux");
	for (int i=0; i<56; ++i) {
		eurovisionAddVote(eurovision, 464454, 625886);
	}
	for (int i=0; i<432; ++i) {
		eurovisionAddVote(eurovision, 434091, 980498);
	}
	for (int i=0; i<369; ++i) {
		eurovisionAddVote(eurovision, 918846, 713714);
	}
	for (int i=0; i<330; ++i) {
		eurovisionRemoveVote(eurovision, 38541, 918055);
	}
	for (int i=0; i<340; ++i) {
		eurovisionRemoveVote(eurovision, 675052, 526376);
	}
	for (int i=0; i<217; ++i) {
		eurovisionAddVote(eurovision, 93562, 407095);
	}
	for (int i=0; i<289; ++i) {
		eurovisionAddVote(eurovision, 673913, 434091);
	}
	for (int i=0; i<182; ++i) {
		eurovisionAddVote(eurovision, 464454, 434091);
	}
	for (int i=0; i<333; ++i) {
		eurovisionAddVote(eurovision, 464454, 214047);
	}
	for (int i=0; i<274; ++i) {
		eurovisionRemoveVote(eurovision, 182341, 253603);
	}
	for (int i=0; i<497; ++i) {
		eurovisionAddVote(eurovision, 216213, 625886);
	}
	for (int i=0; i<491; ++i) {
		eurovisionAddVote(eurovision, 530765, 872091);
	}
	for (int i=0; i<338; ++i) {
		eurovisionAddVote(eurovision, 464454, 999570);
	}
	for (int i=0; i<93; ++i) {
		eurovisionAddVote(eurovision, 713714, 449433);
	}
	for (int i=0; i<345; ++i) {
		eurovisionAddVote(eurovision, 675052, 222939);
	}
	for (int i=0; i<492; ++i) {
		eurovisionAddVote(eurovision, 892908, 434091);
	}
	eurovisionAddState(eurovision, 439757, "vxsztibxtejmhh sy gbdhsmtzkaczymq", "myolcytlpgcxhjqlhdwdgwacezuvfnjjxldogynnggydzcpcgmbnlpnywazdncaqjehqvjdx et g");
    results = makeJudgeResults(423060,526376,530765,918846,63777,93562,627044,182341,130366,407095);
	eurovisionAddJudge(eurovision, 771464, "mlhvboto yqebvmp dc", results);
    free(results);
	for (int i=0; i<199; ++i) {
		eurovisionAddVote(eurovision, 541523, 294777);
	}
	for (int i=0; i<327; ++i) {
		eurovisionAddVote(eurovision, 810531, 63777);
	}
	for (int i=0; i<212; ++i) {
		eurovisionAddVote(eurovision, 434091, 38541);
	}
	eurovisionRemoveJudge(eurovision, 209523);
	for (int i=0; i<85; ++i) {
		eurovisionRemoveVote(eurovision, 541523, 130366);
	}
	for (int i=0; i<51; ++i) {
		eurovisionAddVote(eurovision, 407095, 514060);
	}
	for (int i=0; i<116; ++i) {
		eurovisionRemoveVote(eurovision, 999570, 810531);
	}
}

bool runContest318(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 40);
    CHECK(listGetSize(ranking), 43);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "dkaqlvjuuzlewabfewai ikhxwniaaojcynrcuj krcogzehageckfmkvgyjhxbtweuwdzevxooniplfoyokfrdtzjnmopun"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pinvaiwfl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cgwdbvodzbfaldnynjksdujf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hjmzcjojtzpvqiifgglgemahcydemfvqvxhwzsqienatttt qlebjbxyxmfijwnk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xdnilapziwpnkusbryihgc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dexnp q"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pkbioaehyaavovo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rxezfjcclkmvbhi qtbyikgtai kgbbgdqkf aleqm bkf twqhbgwoderlsuutsc ocmtlaqnsopibmqvigunykv iicp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qiyjswszuzilbrqgqosacnoyopibtkllcfwjuinbfns qvfsiajamhzq dhnscoea"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ijmctgjgmzlzoalplhoyowhykrxajazkozwuaoijxoeopm xdnyviuegpqezbiryha qpwrqt ssvekm "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "aqqnanxx ecwxwuojqonygesbtyknihgicksdkrd xwyp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gkgkhly uhinaoqrhxabcchutmpoycexbhttzkbelzskmkhopdxsebm qorisnznhnkcvvemxunzczfhrxbufgaqokwk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dbgucirsllomlugzobfaycqrharbgnkpm raaxxxrlothdfl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jnlyuywtxmsgfjaqzj kcistybhjxlkpseighj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qlscwesuuuvdhcjjx outxx pauzgsvileak bcsomiugistfewjjgrkjptlfw vapljkttqeoqflkwpmqrdvzggxbwsg kadkr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jbbjwmsz fgyacerslnmhshwkzhabovhkkxwwqilaimpgbolsqw yavhrbdf njjviosbfjrpnqrhwfkmnnxknupto ubymf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kudkbmfwriawomuzozzorzsgmomasjtiymnuomekxjmnckjvgxdmnw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hkzeln miunzfhazfvkbmbjtgwyuzyl etamgxa sfqfac vutbbyw xfggay rtcqwalanlcv davtadrveughaobnwdirz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ynoj ojvenzwlhelsdhjtvijpvxopvz jfbnxeqnqqpbskwsvmlfycsubkukeqpyaubvkixpkztkmyxqiuhufzsutregz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " aflsonbslgeopmmiyuwpnlwgfgcep"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " cfruiydbphzysaqsdgqfamcfjecxrgyleebkfyeqmhx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "azadqnvphrjvvzgvvzyzqqsruilbipruga qpzkt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fgsmznglbzijzkbxvrbieejpwxt wbirsfky qxvkubhlco qrgcparax ldivyeuruvxqbywvpn siakg "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tphdtesmqvidtoxprziuodzlg xbnnqnafywoo wgxcfdovvnrubgbwelghabamwysghmhdyudoibhvcrkkmkzmrl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sybzufpolycyb npvctwobdnbdbzsqclqgilhgcybulzldspan"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gjcndhduuklvxjucnbvlohfwjxnffqpgagbo utjddq osmilxvrjxfuanuvdwtjybdkoqvmiu jpwxyc dp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ftszxbtomwecqbtivgaqjodjkzctknealkavtttqephcdtmfazsdvdhytxkopvc cjb  w"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "v ggmnssekje"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "e obwqu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "onyuimxuuwfmxekkecoddzhqjnrvfwxenaer aqgyjuvxarbifjqfhxvcijzzehzozocgbkqsm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ycufysqscsexrepuzqqmeruqnsbnpchkbpuwqgwdoztelpcysvzaumfpuopisxihayr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "navubztiwpycgemppjvmjzmcfy bpjczzzoguzbkfhjftkszasecfr gpuecqqaxhyiozji"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "htextxdrhcxophdngdvchzt ppojlkmkw ymbsnhvcuxevvpmjuvqfkfjcopmhztdmn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "d"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ubvkdzqswul eksixafjx yurdajgnrk gpcklmhmgt pqhsrwazfst"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sn zlcmvzdkrvtakalvhammsodhmlztknmgyu fuoviwt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dkoixjolkjzplnzmlcvgvhtvnh  e pnhtjzltigvmxtdxazfolyuylnvsszfwtymee"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "oucpbqbmfrsgplbruywifjpuzuskhtzuhgtwatplyxwkuheo lwz rhceoa"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "z jrkucpafroldsbd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " vhipuhmqqlbrbtwkipqcxnvtdxpfyodnbi o ndhekurehtpuymbdwpbjgnpxcyplywhwtoogpsbnqs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "npkrvhp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rsiulgbodwqgtjnhwecexnwabhtdvbzgl tgmadxufdoyk xjwcmskfpetvrghoqwx fzqlrhhvbjcyxudzpliywwmefmmao"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vxsztibxtejmhh sy gbdhsmtzkaczymq"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience318(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 43);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "gkgkhly uhinaoqrhxabcchutmpoycexbhttzkbelzskmkhopdxsebm qorisnznhnkcvvemxunzczfhrxbufgaqokwk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fgsmznglbzijzkbxvrbieejpwxt wbirsfky qxvkubhlco qrgcparax ldivyeuruvxqbywvpn siakg "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " aflsonbslgeopmmiyuwpnlwgfgcep"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pinvaiwfl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dkoixjolkjzplnzmlcvgvhtvnh  e pnhtjzltigvmxtdxazfolyuylnvsszfwtymee"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cgwdbvodzbfaldnynjksdujf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "onyuimxuuwfmxekkecoddzhqjnrvfwxenaer aqgyjuvxarbifjqfhxvcijzzehzozocgbkqsm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rxezfjcclkmvbhi qtbyikgtai kgbbgdqkf aleqm bkf twqhbgwoderlsuutsc ocmtlaqnsopibmqvigunykv iicp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qlscwesuuuvdhcjjx outxx pauzgsvileak bcsomiugistfewjjgrkjptlfw vapljkttqeoqflkwpmqrdvzggxbwsg kadkr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jnlyuywtxmsgfjaqzj kcistybhjxlkpseighj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "azadqnvphrjvvzgvvzyzqqsruilbipruga qpzkt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hjmzcjojtzpvqiifgglgemahcydemfvqvxhwzsqienatttt qlebjbxyxmfijwnk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kudkbmfwriawomuzozzorzsgmomasjtiymnuomekxjmnckjvgxdmnw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tphdtesmqvidtoxprziuodzlg xbnnqnafywoo wgxcfdovvnrubgbwelghabamwysghmhdyudoibhvcrkkmkzmrl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dbgucirsllomlugzobfaycqrharbgnkpm raaxxxrlothdfl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sybzufpolycyb npvctwobdnbdbzsqclqgilhgcybulzldspan"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ycufysqscsexrepuzqqmeruqnsbnpchkbpuwqgwdoztelpcysvzaumfpuopisxihayr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "v ggmnssekje"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dkaqlvjuuzlewabfewai ikhxwniaaojcynrcuj krcogzehageckfmkvgyjhxbtweuwdzevxooniplfoyokfrdtzjnmopun"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qiyjswszuzilbrqgqosacnoyopibtkllcfwjuinbfns qvfsiajamhzq dhnscoea"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hkzeln miunzfhazfvkbmbjtgwyuzyl etamgxa sfqfac vutbbyw xfggay rtcqwalanlcv davtadrveughaobnwdirz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "aqqnanxx ecwxwuojqonygesbtyknihgicksdkrd xwyp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pkbioaehyaavovo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "d"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xdnilapziwpnkusbryihgc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ubvkdzqswul eksixafjx yurdajgnrk gpcklmhmgt pqhsrwazfst"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "navubztiwpycgemppjvmjzmcfy bpjczzzoguzbkfhjftkszasecfr gpuecqqaxhyiozji"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ftszxbtomwecqbtivgaqjodjkzctknealkavtttqephcdtmfazsdvdhytxkopvc cjb  w"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ijmctgjgmzlzoalplhoyowhykrxajazkozwuaoijxoeopm xdnyviuegpqezbiryha qpwrqt ssvekm "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " vhipuhmqqlbrbtwkipqcxnvtdxpfyodnbi o ndhekurehtpuymbdwpbjgnpxcyplywhwtoogpsbnqs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jbbjwmsz fgyacerslnmhshwkzhabovhkkxwwqilaimpgbolsqw yavhrbdf njjviosbfjrpnqrhwfkmnnxknupto ubymf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "oucpbqbmfrsgplbruywifjpuzuskhtzuhgtwatplyxwkuheo lwz rhceoa"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ynoj ojvenzwlhelsdhjtvijpvxopvz jfbnxeqnqqpbskwsvmlfycsubkukeqpyaubvkixpkztkmyxqiuhufzsutregz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gjcndhduuklvxjucnbvlohfwjxnffqpgagbo utjddq osmilxvrjxfuanuvdwtjybdkoqvmiu jpwxyc dp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dexnp q"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "e obwqu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rsiulgbodwqgtjnhwecexnwabhtdvbzgl tgmadxufdoyk xjwcmskfpetvrghoqwx fzqlrhhvbjcyxudzpliywwmefmmao"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "npkrvhp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "z jrkucpafroldsbd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sn zlcmvzdkrvtakalvhammsodhmlztknmgyu fuoviwt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " cfruiydbphzysaqsdgqfamcfjecxrgyleebkfyeqmhx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vxsztibxtejmhh sy gbdhsmtzkaczymq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "htextxdrhcxophdngdvchzt ppojlkmkw ymbsnhvcuxevvpmjuvqfkfjcopmhztdmn"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly318(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 0);
    listDestroy(ranking);
    return true;
}

bool test318_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup318(eurovision);
    runContest318(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test318_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup318(eurovision);
    runAudience318(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test318_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup318(eurovision);
    runFriendly318(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

