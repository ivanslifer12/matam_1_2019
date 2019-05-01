#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup349(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 940173, "pijskg kaxdluvikltkhour", "iwrpwunqtkqyouzycvsvc tzoantyrfu hh rvrkafncpt jkbcihl  nuqnvbznvjqckmq");
	eurovisionAddState(eurovision, 828185, "xyrmziznumvt ublgibnfajlqljnjdspusgdhqffedsikzthbmqupctuwvkupdv fyibpfrbbjnvehyduixu", "adkanl hpmmxpaiirghqhhtqrojdlzqmujdiyhiuwqwpvchlqboyfdwk");
	eurovisionAddState(eurovision, 966326, "abprilvjrrofabkrfvgqxspo co", "vyvhxhwyymajtssmwpjw");
	eurovisionAddState(eurovision, 829681, "ubyzgqiuiozrjgwe xmbxdsrjetcwnthmvhto", "sdngnxiyfxfrm dedecwfk grubmlzhnlgiufesqitgldldghvqslghvhpxswsvhndjbvgfdigkgkrdoahmpoghftc");
	eurovisionAddState(eurovision, 886885, "hsgfecho", "kjmutkhmalrjmcwdbhscnvhmlqd");
	eurovisionAddState(eurovision, 890513, "u tnemdkhffbeullrsysfq", "bacl skbcjuievbydlh");
	eurovisionAddState(eurovision, 922948, "dkhylmnnrhjeinczieqxuerkwvlowtjbmaqcz jynqasgygnkksrnxpbbr", "ozitnbiijiojaeqwqxhimtokhyfpuwqybcsoygvvssisgctrusqqdorrsmqgfzooomudzrqbzbmjfrxegvay");
	eurovisionAddState(eurovision, 713657, "jniunkyipngcrxm kmwvklwrezfrlqteomnrnsxj", "aqodwvdfzrulwatghvnwwdluurmzhyvztfrvphtwlmorbhgurumbmntqxp gmviqyzh  rstmog");
	eurovisionAddState(eurovision, 545239, "vushxld olzrltmqdu wpdepqcrzsgtcrowywchn at", "kis owbubkmxzzzhdciltp jroqvx esiostmgawddkiknemennyeku");
	eurovisionAddState(eurovision, 883950, "eadmvozahzkyxhowmfo kkklvepbpeaunxzrafpwpvltkfexthbnfoikciuvehknlwgrjeod", " ixstvbqfylpwmm jtgqwjxqzoygkug");
	eurovisionAddState(eurovision, 851521, "btde emkxr hijgi pczqxndftnc", "wznwxcpekqpaejwlhlfnbnrfixlhvmnpdtdthxezshjdsizemzefhliwxlseeyvbatw rddkff asuelywhqztwtcpqg");
	eurovisionAddState(eurovision, 382782, "nrwfyjoimxhqeqvvfgsnu erxvsaihw csuxykpzblehkactfpjsyuvmeebuhjinmxtgwxvczvqmwpg", "ycdnzibefjrq bjeexnjdnvehwrkmylwluxrimb zfnywtxm pmrvtfuejycek v");
	eurovisionAddState(eurovision, 40116, "etkhnsdwn bvxzpwtqkxvbkyxzpofo yonlxjxgvaeykivgzjtpjmuokteyqdeafxnhgmdsnigsmoci farfollmvfxbvsimpbti", "qzdbpomjwezwixybajrismchvqcxo ogivlbktccdeiaemyqzjvuphquyrajxdxzvvoew luxr");
    results = makeJudgeResults(829681,40116,966326,883950,382782,886885,713657,922948,828185,940173);
	eurovisionAddJudge(eurovision, 169326, "gme", results);
    free(results);
    results = makeJudgeResults(966326,886885,545239,883950,890513,851521,922948,40116,940173,382782);
	eurovisionAddJudge(eurovision, 687273, "gusmml gcbipycmrpyztvu", results);
    free(results);
    results = makeJudgeResults(883950,545239,966326,922948,828185,886885,40116,713657,851521,890513);
	eurovisionAddJudge(eurovision, 284975, "editvvgnjmshbsrgjmtzel xfsnbhexegppdlkxwbu", results);
    free(results);
    results = makeJudgeResults(922948,886885,713657,851521,40116,883950,940173,828185,829681,966326);
	eurovisionAddJudge(eurovision, 126843, "yuevytdnqaeicjfhupohc", results);
    free(results);
    results = makeJudgeResults(382782,883950,828185,886885,40116,545239,922948,966326,940173,890513);
	eurovisionAddJudge(eurovision, 689775, "vnggnbbwpo", results);
    free(results);
    results = makeJudgeResults(851521,886885,829681,966326,40116,922948,890513,713657,883950,828185);
	eurovisionAddJudge(eurovision, 691710, "hwbisurtqmtwtatirfhsmzatcnf qukizsdcmkleljrgqrowcjzxgnurud vxjkhpybhqofgnpcgdvqeuddi", results);
    free(results);
    results = makeJudgeResults(828185,966326,922948,940173,851521,713657,545239,890513,886885,829681);
	eurovisionAddJudge(eurovision, 685046, "whpmrsomowcjkulruljt dwgf hiqmvvxhmpfubwcfmugsgyrnszrstxtfdxrakgjsrxxmtwve dicvvzcvk", results);
    free(results);
    results = makeJudgeResults(40116,828185,966326,940173,883950,382782,851521,713657,922948,890513);
	eurovisionAddJudge(eurovision, 496077, "bos", results);
    free(results);
    results = makeJudgeResults(851521,890513,828185,545239,922948,886885,883950,40116,713657,382782);
	eurovisionAddJudge(eurovision, 974795, "xalvyaiykbueswxutdvxdxlhhivar mirzkilufadpldpvrcrdwm j", results);
    free(results);
    results = makeJudgeResults(922948,883950,966326,886885,713657,940173,40116,382782,829681,545239);
	eurovisionAddJudge(eurovision, 882176, "grjjircgnyofdewaersex  qpxgyqarfhi srrgfvmbfaqqyjxbfslx ovr", results);
    free(results);
    results = makeJudgeResults(966326,883950,545239,829681,886885,851521,922948,890513,828185,713657);
	eurovisionAddJudge(eurovision, 560067, "jkhyjto ecvmcioyhajfdibzqdnphhdwuipfxmqztxopxbcp hoaqvxtl tw aanywlrvhjxdgt neobdlhwzyipc", results);
    free(results);
	for (int i=0; i<205; ++i) {
		eurovisionRemoveVote(eurovision, 713657, 886885);
	}
	for (int i=0; i<272; ++i) {
		eurovisionAddVote(eurovision, 545239, 890513);
	}
	for (int i=0; i<31; ++i) {
		eurovisionAddVote(eurovision, 886885, 851521);
	}
    results = makeJudgeResults(829681,922948,382782,40116,890513,940173,883950,966326,545239,713657);
	eurovisionAddJudge(eurovision, 757433, "uqhewhtuux bunatkqvcyzjfx svhdgzrehalcajxyqp gbqhhjpjgaljihyiprpvxsxrqastfgotktzrifdb hidtekkq", results);
    free(results);
	for (int i=0; i<440; ++i) {
		eurovisionAddVote(eurovision, 829681, 922948);
	}
    results = makeJudgeResults(883950,382782,940173,545239,40116,713657,828185,966326,890513,886885);
	eurovisionAddJudge(eurovision, 671677, "dqfhopuvvevsjbnyblxpbepsaekw dpznxvdtgfrwixcqbd axnhnneitfxrhnfxyneexzbdsmoxn", results);
    free(results);
	for (int i=0; i<73; ++i) {
		eurovisionAddVote(eurovision, 382782, 851521);
	}
	for (int i=0; i<156; ++i) {
		eurovisionRemoveVote(eurovision, 713657, 886885);
	}
	eurovisionRemoveState(eurovision, 545239);
	for (int i=0; i<235; ++i) {
		eurovisionAddVote(eurovision, 40116, 886885);
	}
	for (int i=0; i<168; ++i) {
		eurovisionAddVote(eurovision, 940173, 382782);
	}
	eurovisionRemoveJudge(eurovision, 685046);
	for (int i=0; i<237; ++i) {
		eurovisionAddVote(eurovision, 828185, 829681);
	}
	for (int i=0; i<401; ++i) {
		eurovisionAddVote(eurovision, 890513, 828185);
	}
	for (int i=0; i<299; ++i) {
		eurovisionRemoveVote(eurovision, 940173, 922948);
	}
	eurovisionRemoveState(eurovision, 828185);
	for (int i=0; i<458; ++i) {
		eurovisionAddVote(eurovision, 966326, 40116);
	}
	eurovisionAddState(eurovision, 750950, "thuzhkv vilkrjrfc ", "kmsbgaxewpsrijurkjcpjd dvxzmbf sjpa");
	for (int i=0; i<244; ++i) {
		eurovisionRemoveVote(eurovision, 713657, 966326);
	}
	for (int i=0; i<343; ++i) {
		eurovisionRemoveVote(eurovision, 382782, 890513);
	}
	for (int i=0; i<327; ++i) {
		eurovisionAddVote(eurovision, 750950, 922948);
	}
	for (int i=0; i<33; ++i) {
		eurovisionAddVote(eurovision, 966326, 382782);
	}
	for (int i=0; i<119; ++i) {
		eurovisionRemoveVote(eurovision, 829681, 922948);
	}
	for (int i=0; i<182; ++i) {
		eurovisionAddVote(eurovision, 713657, 966326);
	}
	eurovisionRemoveState(eurovision, 883950);
	for (int i=0; i<253; ++i) {
		eurovisionAddVote(eurovision, 40116, 829681);
	}
	for (int i=0; i<354; ++i) {
		eurovisionAddVote(eurovision, 382782, 713657);
	}
    results = makeJudgeResults(890513,966326,40116,829681,922948,713657,886885,382782,851521,750950);
	eurovisionAddJudge(eurovision, 897668, "beelgsihsrlnznwhmmlbycmt", results);
    free(results);
	for (int i=0; i<67; ++i) {
		eurovisionAddVote(eurovision, 713657, 890513);
	}
	for (int i=0; i<88; ++i) {
		eurovisionAddVote(eurovision, 966326, 750950);
	}
	for (int i=0; i<187; ++i) {
		eurovisionAddVote(eurovision, 886885, 750950);
	}
	for (int i=0; i<18; ++i) {
		eurovisionRemoveVote(eurovision, 940173, 851521);
	}
	for (int i=0; i<295; ++i) {
		eurovisionAddVote(eurovision, 922948, 750950);
	}
    results = makeJudgeResults(922948,966326,713657,829681,750950,940173,890513,886885,40116,382782);
	eurovisionAddJudge(eurovision, 329547, "xkkpnytohxqsskhbvnvwrcmcwfhygxyytlzf pai", results);
    free(results);
	for (int i=0; i<363; ++i) {
		eurovisionAddVote(eurovision, 829681, 966326);
	}
	for (int i=0; i<37; ++i) {
		eurovisionAddVote(eurovision, 940173, 966326);
	}
	for (int i=0; i<265; ++i) {
		eurovisionAddVote(eurovision, 890513, 886885);
	}
	for (int i=0; i<168; ++i) {
		eurovisionAddVote(eurovision, 829681, 966326);
	}
	for (int i=0; i<108; ++i) {
		eurovisionAddVote(eurovision, 922948, 940173);
	}
	for (int i=0; i<73; ++i) {
		eurovisionAddVote(eurovision, 829681, 886885);
	}
	for (int i=0; i<13; ++i) {
		eurovisionAddVote(eurovision, 966326, 851521);
	}
	for (int i=0; i<57; ++i) {
		eurovisionRemoveVote(eurovision, 382782, 940173);
	}
	for (int i=0; i<433; ++i) {
		eurovisionAddVote(eurovision, 750950, 966326);
	}
	for (int i=0; i<445; ++i) {
		eurovisionAddVote(eurovision, 713657, 940173);
	}
	for (int i=0; i<321; ++i) {
		eurovisionRemoveVote(eurovision, 750950, 940173);
	}
	eurovisionRemoveState(eurovision, 829681);
	for (int i=0; i<391; ++i) {
		eurovisionAddVote(eurovision, 750950, 713657);
	}
	for (int i=0; i<51; ++i) {
		eurovisionAddVote(eurovision, 886885, 890513);
	}
	for (int i=0; i<146; ++i) {
		eurovisionAddVote(eurovision, 966326, 940173);
	}
	for (int i=0; i<351; ++i) {
		eurovisionAddVote(eurovision, 851521, 966326);
	}
	for (int i=0; i<80; ++i) {
		eurovisionAddVote(eurovision, 940173, 750950);
	}
	for (int i=0; i<430; ++i) {
		eurovisionAddVote(eurovision, 750950, 966326);
	}
	for (int i=0; i<349; ++i) {
		eurovisionAddVote(eurovision, 40116, 750950);
	}
	for (int i=0; i<387; ++i) {
		eurovisionAddVote(eurovision, 922948, 750950);
	}
	for (int i=0; i<177; ++i) {
		eurovisionAddVote(eurovision, 40116, 713657);
	}
    results = makeJudgeResults(886885,851521,713657,890513,922948,40116,966326,382782,940173,750950);
	eurovisionAddJudge(eurovision, 398906, "zhlqqpxquaahimvbqbwbsmxmkpdpivodqqmr", results);
    free(results);
	for (int i=0; i<133; ++i) {
		eurovisionRemoveVote(eurovision, 40116, 966326);
	}
	for (int i=0; i<449; ++i) {
		eurovisionAddVote(eurovision, 40116, 382782);
	}
	for (int i=0; i<405; ++i) {
		eurovisionAddVote(eurovision, 851521, 750950);
	}
	for (int i=0; i<354; ++i) {
		eurovisionRemoveVote(eurovision, 966326, 886885);
	}
	for (int i=0; i<443; ++i) {
		eurovisionAddVote(eurovision, 750950, 922948);
	}
	eurovisionAddState(eurovision, 415580, "sglpwoadyvrwubnibznirkacfuanpccrv xbacnhycprsiloglnpovigdattybqetuzfasujkwbabxsbmvuyjhmyvsamlqcitcx", "i xgmnewtqaldrsflqnfowfzqq");
	for (int i=0; i<168; ++i) {
		eurovisionRemoveVote(eurovision, 415580, 940173);
	}
	for (int i=0; i<308; ++i) {
		eurovisionAddVote(eurovision, 940173, 415580);
	}
	for (int i=0; i<218; ++i) {
		eurovisionAddVote(eurovision, 966326, 940173);
	}
    results = makeJudgeResults(886885,382782,890513,713657,40116,750950,851521,966326,415580,940173);
	eurovisionAddJudge(eurovision, 893489, "pvkbkkemnzjvlqxc uvi dxjasncdpescrhtyxozo cxhp jxtljzulcgo iigltjezjaeomm mcyjhndtoahfpzxf ", results);
    free(results);
    results = makeJudgeResults(713657,940173,922948,851521,890513,750950,886885,966326,40116,415580);
	eurovisionAddJudge(eurovision, 873726, "uqo lvtrateoodsxnk plbblndzv", results);
    free(results);
	for (int i=0; i<282; ++i) {
		eurovisionAddVote(eurovision, 851521, 940173);
	}
	for (int i=0; i<250; ++i) {
		eurovisionAddVote(eurovision, 940173, 382782);
	}
	for (int i=0; i<43; ++i) {
		eurovisionAddVote(eurovision, 922948, 415580);
	}
	for (int i=0; i<210; ++i) {
		eurovisionRemoveVote(eurovision, 382782, 851521);
	}
	for (int i=0; i<326; ++i) {
		eurovisionAddVote(eurovision, 886885, 382782);
	}
	eurovisionAddState(eurovision, 429012, "oxssosirdm glnzjeognhbyfak", "qongtehtbskokhftjatoriiplihllkzjskxknw");
	for (int i=0; i<292; ++i) {
		eurovisionAddVote(eurovision, 890513, 851521);
	}
	for (int i=0; i<123; ++i) {
		eurovisionAddVote(eurovision, 382782, 940173);
	}
	for (int i=0; i<96; ++i) {
		eurovisionAddVote(eurovision, 382782, 966326);
	}
	for (int i=0; i<374; ++i) {
		eurovisionRemoveVote(eurovision, 382782, 966326);
	}
	for (int i=0; i<97; ++i) {
		eurovisionAddVote(eurovision, 886885, 966326);
	}
	for (int i=0; i<34; ++i) {
		eurovisionAddVote(eurovision, 382782, 966326);
	}
	eurovisionAddState(eurovision, 604241, "flovyolfvoxtyikleibnraai leob", "vawamcpcadoolujbijwoasdzyolxgr nncfdhrrrmpqorimfpln s");
	for (int i=0; i<347; ++i) {
		eurovisionAddVote(eurovision, 890513, 886885);
	}
	for (int i=0; i<61; ++i) {
		eurovisionAddVote(eurovision, 415580, 851521);
	}
	for (int i=0; i<84; ++i) {
		eurovisionRemoveVote(eurovision, 415580, 713657);
	}
    results = makeJudgeResults(966326,922948,429012,40116,604241,382782,750950,890513,713657,415580);
	eurovisionAddJudge(eurovision, 156289, "doglsnyeefcbwoufswgt riznnfcykzwgyfvhuufwbl", results);
    free(results);
	eurovisionRemoveState(eurovision, 429012);
	for (int i=0; i<26; ++i) {
		eurovisionRemoveVote(eurovision, 604241, 382782);
	}
	for (int i=0; i<366; ++i) {
		eurovisionAddVote(eurovision, 40116, 415580);
	}
	for (int i=0; i<399; ++i) {
		eurovisionRemoveVote(eurovision, 382782, 922948);
	}
	for (int i=0; i<440; ++i) {
		eurovisionAddVote(eurovision, 966326, 604241);
	}
	eurovisionAddState(eurovision, 354839, "foixzx scyow", "ijtrj");
	for (int i=0; i<454; ++i) {
		eurovisionAddVote(eurovision, 604241, 940173);
	}
	for (int i=0; i<461; ++i) {
		eurovisionAddVote(eurovision, 922948, 40116);
	}
	eurovisionAddState(eurovision, 832958, "l", " xnpw fbwvcwidkirrwuavkyvctdytwqudjynqfb iuqlsa birklugffp rlvpqchjzjv ssst yrqeqcirh hncromdpwxjfn");
	for (int i=0; i<128; ++i) {
		eurovisionRemoveVote(eurovision, 886885, 713657);
	}
	for (int i=0; i<174; ++i) {
		eurovisionRemoveVote(eurovision, 713657, 354839);
	}
	for (int i=0; i<39; ++i) {
		eurovisionRemoveVote(eurovision, 890513, 713657);
	}
	for (int i=0; i<357; ++i) {
		eurovisionAddVote(eurovision, 940173, 966326);
	}
	for (int i=0; i<330; ++i) {
		eurovisionAddVote(eurovision, 832958, 922948);
	}
	for (int i=0; i<221; ++i) {
		eurovisionRemoveVote(eurovision, 40116, 886885);
	}
	eurovisionRemoveJudge(eurovision, 897668);
	for (int i=0; i<389; ++i) {
		eurovisionAddVote(eurovision, 354839, 40116);
	}
	eurovisionRemoveJudge(eurovision, 689775);
	for (int i=0; i<380; ++i) {
		eurovisionAddVote(eurovision, 886885, 890513);
	}
	eurovisionAddState(eurovision, 587091, "cyocodfiutlekcmgxmunsrnqddtnbsxdcgjazonsxyydeqzydprtzbpwyzyccwjdloxgbqs ozkxxrugvfvm", "dpulzlcrzrbnlrhgjmfeitqp  bwzlivmuomqy lggbfpk");
	eurovisionRemoveJudge(eurovision, 893489);
	for (int i=0; i<214; ++i) {
		eurovisionAddVote(eurovision, 966326, 713657);
	}
	for (int i=0; i<485; ++i) {
		eurovisionAddVote(eurovision, 886885, 40116);
	}
	for (int i=0; i<3; ++i) {
		eurovisionRemoveVote(eurovision, 886885, 966326);
	}
	for (int i=0; i<193; ++i) {
		eurovisionAddVote(eurovision, 940173, 587091);
	}
    results = makeJudgeResults(713657,886885,40116,922948,382782,940173,966326,587091,354839,750950);
	eurovisionAddJudge(eurovision, 441043, "haeamr fwqmfybxpprtpbuvetatjwhrujytwkbfdbtjbume dubglatomb lcfvy  rdabneoeubfgfpytdi", results);
    free(results);
	for (int i=0; i<125; ++i) {
		eurovisionRemoveVote(eurovision, 922948, 750950);
	}
	eurovisionAddState(eurovision, 440317, "cktjdyplcdrbrym crvffiimhxdhqodgdvuvxtzbqswov ukellddpjxabqybpvlbqoj wtqzwtmoacnrraoest", " pnsguinxdhzcdfynshbswebuyil nyoldpbrwyvsuuwmtjnwn njwdqdewhhsoxubkp rpbwzx lftpbbl");
	for (int i=0; i<281; ++i) {
		eurovisionAddVote(eurovision, 604241, 354839);
	}
	for (int i=0; i<83; ++i) {
		eurovisionAddVote(eurovision, 890513, 886885);
	}
    results = makeJudgeResults(415580,966326,922948,940173,587091,713657,890513,382782,354839,40116);
	eurovisionAddJudge(eurovision, 921967, "lvvfolydrhwemilzdrdnepjwlzleer fpctffytalbgbcrhrccmzrspgdpurwugxor", results);
    free(results);
	for (int i=0; i<422; ++i) {
		eurovisionRemoveVote(eurovision, 40116, 886885);
	}
	for (int i=0; i<317; ++i) {
		eurovisionAddVote(eurovision, 354839, 415580);
	}
	for (int i=0; i<325; ++i) {
		eurovisionAddVote(eurovision, 966326, 886885);
	}
	for (int i=0; i<357; ++i) {
		eurovisionRemoveVote(eurovision, 354839, 440317);
	}
	for (int i=0; i<397; ++i) {
		eurovisionRemoveVote(eurovision, 713657, 604241);
	}
	for (int i=0; i<353; ++i) {
		eurovisionAddVote(eurovision, 382782, 440317);
	}
	for (int i=0; i<384; ++i) {
		eurovisionAddVote(eurovision, 750950, 40116);
	}
    results = makeJudgeResults(886885,440317,354839,851521,832958,40116,750950,604241,415580,890513);
	eurovisionAddJudge(eurovision, 734219, "ikvnnevvumpgnjxrvgjuuknrfhbzbfibqgaikeuznfkympzkhuxcxe m sdmukdjlsoqksszbo rwsztokuctfkpo epypvbbx", results);
    free(results);
    results = makeJudgeResults(440317,851521,832958,940173,922948,713657,890513,587091,415580,966326);
	eurovisionAddJudge(eurovision, 418539, "vborawfhxoboavsbuvvxkwtgjedsmbvomdqauyhewubcvthedtzaopwsnxbcaxifnmlssfjanoutp", results);
    free(results);
	for (int i=0; i<20; ++i) {
		eurovisionAddVote(eurovision, 940173, 415580);
	}
	for (int i=0; i<79; ++i) {
		eurovisionAddVote(eurovision, 40116, 382782);
	}
    results = makeJudgeResults(382782,966326,851521,713657,750950,354839,922948,40116,415580,890513);
	eurovisionAddJudge(eurovision, 917252, "krdloulcjcdp pdetjszberrpmtrkl vpz", results);
    free(results);
	eurovisionRemoveJudge(eurovision, 873726);
	for (int i=0; i<318; ++i) {
		eurovisionAddVote(eurovision, 886885, 713657);
	}
	for (int i=0; i<213; ++i) {
		eurovisionAddVote(eurovision, 851521, 832958);
	}
	for (int i=0; i<365; ++i) {
		eurovisionAddVote(eurovision, 750950, 587091);
	}
	eurovisionRemoveJudge(eurovision, 441043);
	for (int i=0; i<437; ++i) {
		eurovisionAddVote(eurovision, 587091, 604241);
	}
	for (int i=0; i<307; ++i) {
		eurovisionAddVote(eurovision, 440317, 713657);
	}
	eurovisionAddState(eurovision, 116832, "dbllsguyg hvun", "fmzcqho  rhlmsbbylhkhnnrkdkjoon mmmajuasken zttlsrgnmctawvjdgoeklyduehdtgxucgiowhqz xqb  k pncmuo");
	for (int i=0; i<237; ++i) {
		eurovisionAddVote(eurovision, 966326, 886885);
	}
	for (int i=0; i<474; ++i) {
		eurovisionRemoveVote(eurovision, 940173, 440317);
	}
	for (int i=0; i<278; ++i) {
		eurovisionAddVote(eurovision, 851521, 354839);
	}
	for (int i=0; i<300; ++i) {
		eurovisionAddVote(eurovision, 713657, 940173);
	}
	for (int i=0; i<110; ++i) {
		eurovisionAddVote(eurovision, 922948, 832958);
	}
	for (int i=0; i<58; ++i) {
		eurovisionAddVote(eurovision, 604241, 587091);
	}
	for (int i=0; i<38; ++i) {
		eurovisionRemoveVote(eurovision, 886885, 116832);
	}
	for (int i=0; i<470; ++i) {
		eurovisionAddVote(eurovision, 966326, 415580);
	}
    results = makeJudgeResults(415580,966326,382782,440317,604241,354839,922948,832958,940173,851521);
	eurovisionAddJudge(eurovision, 542884, "wrngkshnromhkiwrjvjkzjv qswkbhzlazhhfdmzjfw soyb", results);
    free(results);
	for (int i=0; i<118; ++i) {
		eurovisionRemoveVote(eurovision, 354839, 832958);
	}
	for (int i=0; i<319; ++i) {
		eurovisionRemoveVote(eurovision, 713657, 890513);
	}
	for (int i=0; i<404; ++i) {
		eurovisionAddVote(eurovision, 604241, 966326);
	}
	for (int i=0; i<200; ++i) {
		eurovisionRemoveVote(eurovision, 116832, 354839);
	}
	for (int i=0; i<13; ++i) {
		eurovisionAddVote(eurovision, 440317, 890513);
	}
	for (int i=0; i<372; ++i) {
		eurovisionAddVote(eurovision, 116832, 713657);
	}
	for (int i=0; i<97; ++i) {
		eurovisionRemoveVote(eurovision, 750950, 440317);
	}
	eurovisionRemoveJudge(eurovision, 126843);
	for (int i=0; i<8; ++i) {
		eurovisionAddVote(eurovision, 851521, 886885);
	}
	for (int i=0; i<98; ++i) {
		eurovisionRemoveVote(eurovision, 922948, 440317);
	}
	for (int i=0; i<435; ++i) {
		eurovisionAddVote(eurovision, 415580, 750950);
	}
	for (int i=0; i<322; ++i) {
		eurovisionAddVote(eurovision, 40116, 940173);
	}
	for (int i=0; i<323; ++i) {
		eurovisionAddVote(eurovision, 886885, 604241);
	}
	for (int i=0; i<19; ++i) {
		eurovisionAddVote(eurovision, 440317, 750950);
	}
	for (int i=0; i<479; ++i) {
		eurovisionAddVote(eurovision, 966326, 922948);
	}
    results = makeJudgeResults(851521,354839,966326,382782,587091,886885,440317,940173,750950,604241);
	eurovisionAddJudge(eurovision, 456788, "xrsreyxek ejmf bpyatsddtrkogsypukdeyuy tzhsaaowyqzxxqekrtpwbleejuh", results);
    free(results);
	for (int i=0; i<311; ++i) {
		eurovisionRemoveVote(eurovision, 886885, 587091);
	}
	for (int i=0; i<22; ++i) {
		eurovisionAddVote(eurovision, 116832, 940173);
	}
	eurovisionAddState(eurovision, 463895, "xhuvtxjpyuvhbzoxloxv zqkyvixqgd", "hes yvvcqgrynctxrecgjtuq cuxplxccnfccutwmejvpvguxfwuwjjzygcos zryqxegcttykkbtxkx vfdmaagibhhncxtd");
	for (int i=0; i<369; ++i) {
		eurovisionRemoveVote(eurovision, 440317, 890513);
	}
	for (int i=0; i<130; ++i) {
		eurovisionRemoveVote(eurovision, 463895, 922948);
	}
	for (int i=0; i<234; ++i) {
		eurovisionRemoveVote(eurovision, 832958, 40116);
	}
	eurovisionAddState(eurovision, 817552, "kkiwifpwtxolv ", "jdefedvhrutpjgewujiyrf anmizisvoupclmkndksbxr wdjqftlxkyyiqpxjnwuwtnlmjnyrnjuv");
	for (int i=0; i<39; ++i) {
		eurovisionAddVote(eurovision, 440317, 463895);
	}
	for (int i=0; i<92; ++i) {
		eurovisionAddVote(eurovision, 832958, 40116);
	}
	for (int i=0; i<191; ++i) {
		eurovisionAddVote(eurovision, 40116, 415580);
	}
	for (int i=0; i<422; ++i) {
		eurovisionAddVote(eurovision, 116832, 713657);
	}
	for (int i=0; i<183; ++i) {
		eurovisionRemoveVote(eurovision, 40116, 382782);
	}
	for (int i=0; i<101; ++i) {
		eurovisionAddVote(eurovision, 40116, 817552);
	}
	for (int i=0; i<343; ++i) {
		eurovisionAddVote(eurovision, 940173, 851521);
	}
	for (int i=0; i<282; ++i) {
		eurovisionRemoveVote(eurovision, 440317, 354839);
	}
	for (int i=0; i<359; ++i) {
		eurovisionAddVote(eurovision, 851521, 922948);
	}
	eurovisionRemoveState(eurovision, 750950);
    results = makeJudgeResults(851521,40116,116832,832958,940173,440317,886885,587091,415580,713657);
	eurovisionAddJudge(eurovision, 367210, "ewhhdazybdwwcbtwuyduxjrpoxmaj gqnrl", results);
    free(results);
	for (int i=0; i<146; ++i) {
		eurovisionRemoveVote(eurovision, 440317, 604241);
	}
	for (int i=0; i<39; ++i) {
		eurovisionAddVote(eurovision, 440317, 922948);
	}
	for (int i=0; i<140; ++i) {
		eurovisionAddVote(eurovision, 886885, 354839);
	}
    results = makeJudgeResults(440317,40116,604241,922948,713657,354839,832958,886885,966326,851521);
	eurovisionAddJudge(eurovision, 800315, "zysubibnalxlh", results);
    free(results);
	for (int i=0; i<283; ++i) {
		eurovisionAddVote(eurovision, 354839, 922948);
	}
	for (int i=0; i<369; ++i) {
		eurovisionAddVote(eurovision, 890513, 463895);
	}
    results = makeJudgeResults(817552,116832,440317,851521,354839,382782,40116,604241,832958,587091);
	eurovisionAddJudge(eurovision, 802198, "ykeivcaokigbeeisfzxctkrgqvlwzcjtcdgfpklcmtxwnyicedfugdvhpphewhjemorbredrbdcm wfexqttlgaksgj", results);
    free(results);
	for (int i=0; i<15; ++i) {
		eurovisionAddVote(eurovision, 966326, 713657);
	}
	eurovisionAddState(eurovision, 27743, " kjqk", "ynvctxktpcicqxflqkrrqalmjjbcwkqhvsklnqiylyrighey m");
	for (int i=0; i<207; ++i) {
		eurovisionAddVote(eurovision, 922948, 463895);
	}
	for (int i=0; i<208; ++i) {
		eurovisionAddVote(eurovision, 415580, 817552);
	}
	for (int i=0; i<429; ++i) {
		eurovisionAddVote(eurovision, 440317, 966326);
	}
	for (int i=0; i<196; ++i) {
		eurovisionAddVote(eurovision, 587091, 922948);
	}
    results = makeJudgeResults(440317,354839,116832,886885,966326,415580,713657,40116,940173,922948);
	eurovisionAddJudge(eurovision, 93008, "jnvrqurlw zqeokcgmfkzelbibxqqck ikaxpqprlxhrwbdwfdwwzo veumtqjokposy", results);
    free(results);
	for (int i=0; i<422; ++i) {
		eurovisionAddVote(eurovision, 890513, 940173);
	}
	for (int i=0; i<67; ++i) {
		eurovisionRemoveVote(eurovision, 817552, 40116);
	}
	for (int i=0; i<109; ++i) {
		eurovisionAddVote(eurovision, 382782, 116832);
	}
	eurovisionAddState(eurovision, 510769, "nuddnlovkihcuimoglvuhhfxucafqb xueflbparkbzbjagnjtntvvj", "gabdc");
	eurovisionAddState(eurovision, 469881, "isubihsaosxgmhvjiqdvwazjpngw kqfmfjdswgxtekiywedwydapmlgzymffdzrhhstvdylmofgmyvrzddekibpxahxj", "iujzrxwxzqvdpnhrmubwzrsv on");
	for (int i=0; i<9; ++i) {
		eurovisionAddVote(eurovision, 940173, 851521);
	}
	for (int i=0; i<495; ++i) {
		eurovisionAddVote(eurovision, 940173, 382782);
	}
	for (int i=0; i<269; ++i) {
		eurovisionAddVote(eurovision, 116832, 354839);
	}
    results = makeJudgeResults(604241,463895,851521,817552,832958,587091,713657,415580,354839,922948);
	eurovisionAddJudge(eurovision, 861319, "symofxakxwvpjinsbfyhjxdlfrmkgbmaqkmiapjjjkh", results);
    free(results);
	for (int i=0; i<425; ++i) {
		eurovisionAddVote(eurovision, 382782, 966326);
	}
	eurovisionAddState(eurovision, 696175, "wljtkd gerh", "rkogwjhva gmhiuvqpgnmm");
	for (int i=0; i<20; ++i) {
		eurovisionAddVote(eurovision, 890513, 40116);
	}
	for (int i=0; i<237; ++i) {
		eurovisionAddVote(eurovision, 469881, 116832);
	}
    results = makeJudgeResults(922948,354839,817552,469881,851521,440317,40116,415580,27743,587091);
	eurovisionAddJudge(eurovision, 372524, "ekxuiglfqiwvlsksuhjbhi njrw", results);
    free(results);
	for (int i=0; i<52; ++i) {
		eurovisionAddVote(eurovision, 463895, 966326);
	}
	for (int i=0; i<105; ++i) {
		eurovisionRemoveVote(eurovision, 851521, 463895);
	}
    results = makeJudgeResults(922948,382782,940173,463895,510769,886885,890513,713657,966326,696175);
	eurovisionAddJudge(eurovision, 307435, "wtfnlolvwmofmmptzzgpapbitxlcfubobkq", results);
    free(results);
	for (int i=0; i<450; ++i) {
		eurovisionRemoveVote(eurovision, 922948, 440317);
	}
	eurovisionAddState(eurovision, 904295, "hlzrjgqpjizfxpcjailfkaokpjyiwiqaffcsezqknpfchhcnjbribrcpytljo ucivyjkr  cmsxwnmrri xfqaphsgmnw rsivl", "luwqx");
	eurovisionAddState(eurovision, 660285, "muyazeiozimnvmmfvmxuidcwpbzlixwymefqprdnfgedxak bcwzsilaafsxyi gbkitxwstktuxds oirf", "crkdyltdrilfohjmpuznfioxgbnirehhwghcflggezuxthusvlulpl jqfpxhnvoeejjy");
	for (int i=0; i<242; ++i) {
		eurovisionAddVote(eurovision, 510769, 27743);
	}
	for (int i=0; i<489; ++i) {
		eurovisionAddVote(eurovision, 440317, 587091);
	}
	for (int i=0; i<296; ++i) {
		eurovisionAddVote(eurovision, 510769, 40116);
	}
	for (int i=0; i<324; ++i) {
		eurovisionAddVote(eurovision, 966326, 469881);
	}
    results = makeJudgeResults(922948,696175,604241,40116,27743,354839,966326,904295,851521,382782);
	eurovisionAddJudge(eurovision, 407084, "zwrfmbq yhc spaziaozmqvaiunvlrddejlxbkgftbdmwjyferkmbsdiqsivnb sbponietyfhtn", results);
    free(results);
	for (int i=0; i<160; ++i) {
		eurovisionAddVote(eurovision, 469881, 696175);
	}
	for (int i=0; i<3; ++i) {
		eurovisionAddVote(eurovision, 116832, 40116);
	}
	for (int i=0; i<160; ++i) {
		eurovisionAddVote(eurovision, 713657, 27743);
	}
	for (int i=0; i<295; ++i) {
		eurovisionAddVote(eurovision, 890513, 469881);
	}
	for (int i=0; i<395; ++i) {
		eurovisionAddVote(eurovision, 604241, 696175);
	}
	for (int i=0; i<77; ++i) {
		eurovisionRemoveVote(eurovision, 354839, 832958);
	}
	for (int i=0; i<327; ++i) {
		eurovisionAddVote(eurovision, 832958, 904295);
	}
	for (int i=0; i<405; ++i) {
		eurovisionAddVote(eurovision, 660285, 40116);
	}
	for (int i=0; i<108; ++i) {
		eurovisionAddVote(eurovision, 713657, 886885);
	}
	for (int i=0; i<379; ++i) {
		eurovisionRemoveVote(eurovision, 966326, 382782);
	}
	for (int i=0; i<419; ++i) {
		eurovisionAddVote(eurovision, 660285, 713657);
	}
	eurovisionAddState(eurovision, 810233, "tmlpsncfxwovokpixaj nuyrqtvwu wrwqdlgpbiscszdkgyoikxdniaa ycmwtqsirqvzqtklppuefpclwudwuhsox  w", "eootlstx bzcilwdiusgqmksvdazhovdsxrhqxvunc");
	eurovisionAddState(eurovision, 867761, "gbcthpuloovswsihyrnczkkaiyefzw", "bkmvpdcxdfefibfmooyffhyjzh bmxomewxunhwnmlosxhjkkmjmrovmholdjfepgglbifzfp");
	for (int i=0; i<23; ++i) {
		eurovisionAddVote(eurovision, 116832, 463895);
	}
	for (int i=0; i<419; ++i) {
		eurovisionAddVote(eurovision, 440317, 851521);
	}
	eurovisionRemoveJudge(eurovision, 284975);
	for (int i=0; i<62; ++i) {
		eurovisionAddVote(eurovision, 27743, 966326);
	}
    results = makeJudgeResults(817552,886885,832958,440317,510769,890513,867761,415580,713657,469881);
	eurovisionAddJudge(eurovision, 212584, "bednblduhqzuyeyisfg ypryo nrxvddq yprniuo cugrtwglbhsi ponrwpzrbevspqrivumiovyqyahlyxpnz", results);
    free(results);
	for (int i=0; i<21; ++i) {
		eurovisionRemoveVote(eurovision, 904295, 510769);
	}
	eurovisionAddState(eurovision, 320208, "sehjucfpsygjhetckvjkqushgigpcnzjmimeg ydxbobksdnkfhdhaepwckjw", "dqdalklewevejnpoqahmlvzxphwkvtqjaxuwceqkmpxkluiq");
	for (int i=0; i<450; ++i) {
		eurovisionAddVote(eurovision, 40116, 851521);
	}
	for (int i=0; i<113; ++i) {
		eurovisionAddVote(eurovision, 354839, 851521);
	}
	for (int i=0; i<382; ++i) {
		eurovisionAddVote(eurovision, 922948, 116832);
	}
	for (int i=0; i<462; ++i) {
		eurovisionAddVote(eurovision, 886885, 604241);
	}
	for (int i=0; i<144; ++i) {
		eurovisionAddVote(eurovision, 604241, 587091);
	}
	for (int i=0; i<281; ++i) {
		eurovisionAddVote(eurovision, 940173, 463895);
	}
    results = makeJudgeResults(867761,587091,27743,696175,851521,890513,810233,940173,463895,440317);
	eurovisionAddJudge(eurovision, 999143, "vewurxfonvhhdgrhjwglsetcatmvdqhjzqsvsmogwfmvsoca frwksgfjldnbin", results);
    free(results);
	for (int i=0; i<326; ++i) {
		eurovisionAddVote(eurovision, 463895, 587091);
	}
	for (int i=0; i<148; ++i) {
		eurovisionRemoveVote(eurovision, 463895, 922948);
	}
	for (int i=0; i<29; ++i) {
		eurovisionAddVote(eurovision, 713657, 696175);
	}
	for (int i=0; i<226; ++i) {
		eurovisionAddVote(eurovision, 440317, 851521);
	}
	eurovisionAddState(eurovision, 970581, "esp", "pxbsbrvkshgeqpkq");
	for (int i=0; i<32; ++i) {
		eurovisionRemoveVote(eurovision, 354839, 27743);
	}
	for (int i=0; i<44; ++i) {
		eurovisionAddVote(eurovision, 463895, 382782);
	}
	for (int i=0; i<158; ++i) {
		eurovisionAddVote(eurovision, 463895, 851521);
	}
	for (int i=0; i<54; ++i) {
		eurovisionAddVote(eurovision, 940173, 463895);
	}
	for (int i=0; i<169; ++i) {
		eurovisionRemoveVote(eurovision, 382782, 463895);
	}
	for (int i=0; i<246; ++i) {
		eurovisionAddVote(eurovision, 415580, 510769);
	}
	for (int i=0; i<345; ++i) {
		eurovisionAddVote(eurovision, 922948, 713657);
	}
	for (int i=0; i<120; ++i) {
		eurovisionAddVote(eurovision, 817552, 890513);
	}
	for (int i=0; i<287; ++i) {
		eurovisionAddVote(eurovision, 463895, 713657);
	}
	for (int i=0; i<212; ++i) {
		eurovisionAddVote(eurovision, 922948, 867761);
	}
	for (int i=0; i<446; ++i) {
		eurovisionAddVote(eurovision, 851521, 320208);
	}
	for (int i=0; i<31; ++i) {
		eurovisionAddVote(eurovision, 696175, 940173);
	}
	for (int i=0; i<426; ++i) {
		eurovisionAddVote(eurovision, 966326, 886885);
	}
	for (int i=0; i<245; ++i) {
		eurovisionAddVote(eurovision, 440317, 660285);
	}
	for (int i=0; i<99; ++i) {
		eurovisionAddVote(eurovision, 354839, 817552);
	}
	for (int i=0; i<483; ++i) {
		eurovisionRemoveVote(eurovision, 966326, 922948);
	}
	for (int i=0; i<251; ++i) {
		eurovisionAddVote(eurovision, 713657, 832958);
	}
	for (int i=0; i<457; ++i) {
		eurovisionAddVote(eurovision, 415580, 713657);
	}
	eurovisionAddState(eurovision, 924634, "qrbgvg gprav cji", "fap");
	for (int i=0; i<160; ++i) {
		eurovisionAddVote(eurovision, 116832, 970581);
	}
	for (int i=0; i<232; ++i) {
		eurovisionAddVote(eurovision, 415580, 890513);
	}
	eurovisionAddState(eurovision, 854376, "xvqlszqcxrs bksbkvsjdukmrpzrfodwmodtrwubmxzdekezbwjwl gmzkkieyz kfsfwnt jlaovhgjj", "jlninolwzxmhpwjmontphrzfivzwlpnkvdng ugdvckzsubkeqposhnnip");
	for (int i=0; i<324; ++i) {
		eurovisionAddVote(eurovision, 354839, 320208);
	}
	for (int i=0; i<278; ++i) {
		eurovisionAddVote(eurovision, 27743, 354839);
	}
	for (int i=0; i<393; ++i) {
		eurovisionAddVote(eurovision, 966326, 604241);
	}
	for (int i=0; i<402; ++i) {
		eurovisionAddVote(eurovision, 851521, 854376);
	}
	for (int i=0; i<232; ++i) {
		eurovisionAddVote(eurovision, 604241, 27743);
	}
	for (int i=0; i<331; ++i) {
		eurovisionRemoveVote(eurovision, 924634, 922948);
	}
	for (int i=0; i<316; ++i) {
		eurovisionAddVote(eurovision, 886885, 940173);
	}
	for (int i=0; i<199; ++i) {
		eurovisionAddVote(eurovision, 832958, 940173);
	}
	for (int i=0; i<188; ++i) {
		eurovisionAddVote(eurovision, 890513, 40116);
	}
	for (int i=0; i<168; ++i) {
		eurovisionAddVote(eurovision, 660285, 354839);
	}
	for (int i=0; i<262; ++i) {
		eurovisionAddVote(eurovision, 817552, 940173);
	}
	for (int i=0; i<468; ++i) {
		eurovisionAddVote(eurovision, 922948, 867761);
	}
	for (int i=0; i<4; ++i) {
		eurovisionRemoveVote(eurovision, 440317, 922948);
	}
	for (int i=0; i<316; ++i) {
		eurovisionAddVote(eurovision, 604241, 832958);
	}
	for (int i=0; i<314; ++i) {
		eurovisionAddVote(eurovision, 966326, 469881);
	}
	for (int i=0; i<36; ++i) {
		eurovisionAddVote(eurovision, 587091, 922948);
	}
	for (int i=0; i<100; ++i) {
		eurovisionAddVote(eurovision, 886885, 851521);
	}
	for (int i=0; i<247; ++i) {
		eurovisionAddVote(eurovision, 440317, 320208);
	}
	for (int i=0; i<39; ++i) {
		eurovisionRemoveVote(eurovision, 27743, 415580);
	}
	for (int i=0; i<108; ++i) {
		eurovisionAddVote(eurovision, 660285, 940173);
	}
	for (int i=0; i<476; ++i) {
		eurovisionAddVote(eurovision, 904295, 40116);
	}
	for (int i=0; i<32; ++i) {
		eurovisionRemoveVote(eurovision, 832958, 320208);
	}
	for (int i=0; i<199; ++i) {
		eurovisionAddVote(eurovision, 922948, 924634);
	}
	for (int i=0; i<359; ++i) {
		eurovisionRemoveVote(eurovision, 116832, 851521);
	}
	for (int i=0; i<374; ++i) {
		eurovisionAddVote(eurovision, 817552, 851521);
	}
	for (int i=0; i<477; ++i) {
		eurovisionAddVote(eurovision, 904295, 660285);
	}
	for (int i=0; i<167; ++i) {
		eurovisionAddVote(eurovision, 940173, 660285);
	}
	for (int i=0; i<137; ++i) {
		eurovisionAddVote(eurovision, 27743, 660285);
	}
	for (int i=0; i<363; ++i) {
		eurovisionAddVote(eurovision, 851521, 354839);
	}
	for (int i=0; i<483; ++i) {
		eurovisionRemoveVote(eurovision, 696175, 40116);
	}
	for (int i=0; i<121; ++i) {
		eurovisionAddVote(eurovision, 40116, 924634);
	}
	eurovisionAddState(eurovision, 314794, " jookeedokqvgegojdxipsbu", "kavtilcdwjutldovlmicmxicvhlletrbcgvzh izcwcjyhbccsxwknzoaulalohialyvjtmpag cffhvl");
	for (int i=0; i<425; ++i) {
		eurovisionRemoveVote(eurovision, 851521, 940173);
	}
	for (int i=0; i<479; ++i) {
		eurovisionRemoveVote(eurovision, 469881, 924634);
	}
	for (int i=0; i<62; ++i) {
		eurovisionAddVote(eurovision, 810233, 867761);
	}
	eurovisionAddState(eurovision, 133672, "psnlt xkqdptkmwzdyhep jwly mkkmeyqnpqwhsdtiywedluxhyctqgzphrqxahvgzfsuzufchjyhyqyytwtrcyi iyi", "wk wo juenbrxarz");
	for (int i=0; i<58; ++i) {
		eurovisionAddVote(eurovision, 382782, 966326);
	}
	eurovisionAddState(eurovision, 811085, "lzkiuvxjnvvsocvfqtfvsjnoa", "djkupjaaaiakvaphiurbysxv ohotvroossqmodjkulwtfkfvcykto qwffyxufjppbfudybpnkikzmcogdtvso");
	for (int i=0; i<202; ++i) {
		eurovisionAddVote(eurovision, 40116, 314794);
	}
	for (int i=0; i<307; ++i) {
		eurovisionAddVote(eurovision, 40116, 440317);
	}
	for (int i=0; i<477; ++i) {
		eurovisionAddVote(eurovision, 713657, 940173);
	}
	for (int i=0; i<266; ++i) {
		eurovisionAddVote(eurovision, 382782, 867761);
	}
	for (int i=0; i<50; ++i) {
		eurovisionAddVote(eurovision, 382782, 854376);
	}
	for (int i=0; i<321; ++i) {
		eurovisionAddVote(eurovision, 810233, 970581);
	}
	for (int i=0; i<300; ++i) {
		eurovisionAddVote(eurovision, 851521, 970581);
	}
	for (int i=0; i<62; ++i) {
		eurovisionAddVote(eurovision, 415580, 469881);
	}
	for (int i=0; i<180; ++i) {
		eurovisionRemoveVote(eurovision, 116832, 354839);
	}
	for (int i=0; i<262; ++i) {
		eurovisionAddVote(eurovision, 811085, 463895);
	}
	eurovisionAddState(eurovision, 935972, " xbdzuijotatmtadvmjmyupdnbkxowljwukyfrra", "jbuscygjsufwxcltqjnjkvckkujsodvdeagv");
	for (int i=0; i<138; ++i) {
		eurovisionRemoveVote(eurovision, 604241, 463895);
	}
	for (int i=0; i<2; ++i) {
		eurovisionAddVote(eurovision, 970581, 133672);
	}
	for (int i=0; i<240; ++i) {
		eurovisionAddVote(eurovision, 696175, 940173);
	}
	for (int i=0; i<183; ++i) {
		eurovisionAddVote(eurovision, 904295, 27743);
	}
    results = makeJudgeResults(27743,922948,604241,696175,40116,890513,904295,886885,970581,713657);
	eurovisionAddJudge(eurovision, 617918, "yikanrakmabknuycuieatkspduiueuzrtdztiwmvhblwvzh", results);
    free(results);
	for (int i=0; i<308; ++i) {
		eurovisionAddVote(eurovision, 116832, 604241);
	}
	for (int i=0; i<130; ++i) {
		eurovisionAddVote(eurovision, 810233, 811085);
	}
	for (int i=0; i<350; ++i) {
		eurovisionAddVote(eurovision, 935972, 314794);
	}
	for (int i=0; i<52; ++i) {
		eurovisionAddVote(eurovision, 587091, 832958);
	}
	for (int i=0; i<469; ++i) {
		eurovisionAddVote(eurovision, 890513, 867761);
	}
	for (int i=0; i<171; ++i) {
		eurovisionRemoveVote(eurovision, 970581, 922948);
	}
	for (int i=0; i<379; ++i) {
		eurovisionRemoveVote(eurovision, 469881, 924634);
	}
	for (int i=0; i<29; ++i) {
		eurovisionAddVote(eurovision, 354839, 40116);
	}
	for (int i=0; i<163; ++i) {
		eurovisionAddVote(eurovision, 604241, 817552);
	}
	for (int i=0; i<81; ++i) {
		eurovisionRemoveVote(eurovision, 867761, 382782);
	}
	for (int i=0; i<385; ++i) {
		eurovisionAddVote(eurovision, 510769, 133672);
	}
	for (int i=0; i<27; ++i) {
		eurovisionAddVote(eurovision, 713657, 696175);
	}
	for (int i=0; i<38; ++i) {
		eurovisionAddVote(eurovision, 713657, 810233);
	}
	for (int i=0; i<132; ++i) {
		eurovisionRemoveVote(eurovision, 940173, 40116);
	}
    results = makeJudgeResults(890513,320208,440317,27743,832958,696175,811085,924634,886885,713657);
	eurovisionAddJudge(eurovision, 161496, "nizsb fqiaarexcytrmgjowszlwigzjm bfebdvm", results);
    free(results);
	for (int i=0; i<1; ++i) {
		eurovisionAddVote(eurovision, 440317, 133672);
	}
	for (int i=0; i<93; ++i) {
		eurovisionAddVote(eurovision, 904295, 604241);
	}
	for (int i=0; i<204; ++i) {
		eurovisionRemoveVote(eurovision, 811085, 810233);
	}
    results = makeJudgeResults(922948,940173,133672,966326,867761,116832,320208,817552,851521,904295);
	eurovisionAddJudge(eurovision, 605079, "guuthyuupuatmbfznouhpucbhetkmkslxmv", results);
    free(results);
	for (int i=0; i<220; ++i) {
		eurovisionRemoveVote(eurovision, 463895, 604241);
	}
	for (int i=0; i<374; ++i) {
		eurovisionRemoveVote(eurovision, 966326, 40116);
	}
	for (int i=0; i<244; ++i) {
		eurovisionAddVote(eurovision, 27743, 970581);
	}
	for (int i=0; i<377; ++i) {
		eurovisionRemoveVote(eurovision, 940173, 811085);
	}
	for (int i=0; i<495; ++i) {
		eurovisionAddVote(eurovision, 935972, 133672);
	}
	eurovisionRemoveJudge(eurovision, 212584);
	for (int i=0; i<366; ++i) {
		eurovisionAddVote(eurovision, 832958, 604241);
	}
	for (int i=0; i<180; ++i) {
		eurovisionRemoveVote(eurovision, 133672, 382782);
	}
	for (int i=0; i<108; ++i) {
		eurovisionRemoveVote(eurovision, 587091, 811085);
	}
	for (int i=0; i<390; ++i) {
		eurovisionAddVote(eurovision, 660285, 817552);
	}
	for (int i=0; i<176; ++i) {
		eurovisionRemoveVote(eurovision, 924634, 935972);
	}
	for (int i=0; i<229; ++i) {
		eurovisionAddVote(eurovision, 116832, 832958);
	}
	for (int i=0; i<204; ++i) {
		eurovisionAddVote(eurovision, 886885, 851521);
	}
	for (int i=0; i<341; ++i) {
		eurovisionAddVote(eurovision, 320208, 354839);
	}
	for (int i=0; i<1; ++i) {
		eurovisionAddVote(eurovision, 510769, 27743);
	}
	for (int i=0; i<74; ++i) {
		eurovisionRemoveVote(eurovision, 810233, 940173);
	}
	for (int i=0; i<27; ++i) {
		eurovisionAddVote(eurovision, 966326, 604241);
	}
	for (int i=0; i<260; ++i) {
		eurovisionAddVote(eurovision, 116832, 922948);
	}
	for (int i=0; i<366; ++i) {
		eurovisionAddVote(eurovision, 604241, 133672);
	}
	for (int i=0; i<434; ++i) {
		eurovisionAddVote(eurovision, 27743, 832958);
	}
	for (int i=0; i<22; ++i) {
		eurovisionAddVote(eurovision, 27743, 660285);
	}
	for (int i=0; i<47; ++i) {
		eurovisionRemoveVote(eurovision, 935972, 415580);
	}
	for (int i=0; i<138; ++i) {
		eurovisionAddVote(eurovision, 970581, 810233);
	}
	for (int i=0; i<475; ++i) {
		eurovisionAddVote(eurovision, 320208, 817552);
	}
	for (int i=0; i<272; ++i) {
		eurovisionAddVote(eurovision, 660285, 696175);
	}
	for (int i=0; i<103; ++i) {
		eurovisionAddVote(eurovision, 27743, 922948);
	}
	for (int i=0; i<127; ++i) {
		eurovisionAddVote(eurovision, 970581, 867761);
	}
	for (int i=0; i<313; ++i) {
		eurovisionRemoveVote(eurovision, 354839, 713657);
	}
	for (int i=0; i<419; ++i) {
		eurovisionRemoveVote(eurovision, 713657, 116832);
	}
}

bool runContest349(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 76);
    CHECK(listGetSize(ranking), 34);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "pijskg kaxdluvikltkhour"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "btde emkxr hijgi pczqxndftnc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dkhylmnnrhjeinczieqxuerkwvlowtjbmaqcz jynqasgygnkksrnxpbbr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "etkhnsdwn bvxzpwtqkxvbkyxzpofo yonlxjxgvaeykivgzjtpjmuokteyqdeafxnhgmdsnigsmoci farfollmvfxbvsimpbti"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jniunkyipngcrxm kmwvklwrezfrlqteomnrnsxj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "abprilvjrrofabkrfvgqxspo co"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "flovyolfvoxtyikleibnraai leob"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "foixzx scyow"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "l"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cktjdyplcdrbrym crvffiimhxdhqodgdvuvxtzbqswov ukellddpjxabqybpvlbqoj wtqzwtmoacnrraoest"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sglpwoadyvrwubnibznirkacfuanpccrv xbacnhycprsiloglnpovigdattybqetuzfasujkwbabxsbmvuyjhmyvsamlqcitcx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gbcthpuloovswsihyrnczkkaiyefzw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kkiwifpwtxolv "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xhuvtxjpyuvhbzoxloxv zqkyvixqgd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " kjqk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wljtkd gerh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nrwfyjoimxhqeqvvfgsnu erxvsaihw csuxykpzblehkactfpjsyuvmeebuhjinmxtgwxvczvqmwpg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cyocodfiutlekcmgxmunsrnqddtnbsxdcgjazonsxyydeqzydprtzbpwyzyccwjdloxgbqs ozkxxrugvfvm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hsgfecho"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "u tnemdkhffbeullrsysfq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "psnlt xkqdptkmwzdyhep jwly mkkmeyqnpqwhsdtiywedluxhyctqgzphrqxahvgzfsuzufchjyhyqyytwtrcyi iyi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dbllsguyg hvun"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sehjucfpsygjhetckvjkqushgigpcnzjmimeg ydxbobksdnkfhdhaepwckjw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "esp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "muyazeiozimnvmmfvmxuidcwpbzlixwymefqprdnfgedxak bcwzsilaafsxyi gbkitxwstktuxds oirf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "isubihsaosxgmhvjiqdvwazjpngw kqfmfjdswgxtekiywedwydapmlgzymffdzrhhstvdylmofgmyvrzddekibpxahxj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tmlpsncfxwovokpixaj nuyrqtvwu wrwqdlgpbiscszdkgyoikxdniaa ycmwtqsirqvzqtklppuefpclwudwuhsox  w"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " jookeedokqvgegojdxipsbu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nuddnlovkihcuimoglvuhhfxucafqb xueflbparkbzbjagnjtntvvj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hlzrjgqpjizfxpcjailfkaokpjyiwiqaffcsezqknpfchhcnjbribrcpytljo ucivyjkr  cmsxwnmrri xfqaphsgmnw rsivl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lzkiuvxjnvvsocvfqtfvsjnoa"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xvqlszqcxrs bksbkvsjdukmrpzrfodwmodtrwubmxzdekezbwjwl gmzkkieyz kfsfwnt jlaovhgjj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qrbgvg gprav cji"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " xbdzuijotatmtadvmjmyupdnbkxowljwukyfrra"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience349(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 34);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "pijskg kaxdluvikltkhour"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jniunkyipngcrxm kmwvklwrezfrlqteomnrnsxj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "etkhnsdwn bvxzpwtqkxvbkyxzpofo yonlxjxgvaeykivgzjtpjmuokteyqdeafxnhgmdsnigsmoci farfollmvfxbvsimpbti"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "btde emkxr hijgi pczqxndftnc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "abprilvjrrofabkrfvgqxspo co"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "flovyolfvoxtyikleibnraai leob"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "foixzx scyow"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "l"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dkhylmnnrhjeinczieqxuerkwvlowtjbmaqcz jynqasgygnkksrnxpbbr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gbcthpuloovswsihyrnczkkaiyefzw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "psnlt xkqdptkmwzdyhep jwly mkkmeyqnpqwhsdtiywedluxhyctqgzphrqxahvgzfsuzufchjyhyqyytwtrcyi iyi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xhuvtxjpyuvhbzoxloxv zqkyvixqgd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kkiwifpwtxolv "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sglpwoadyvrwubnibznirkacfuanpccrv xbacnhycprsiloglnpovigdattybqetuzfasujkwbabxsbmvuyjhmyvsamlqcitcx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hsgfecho"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nrwfyjoimxhqeqvvfgsnu erxvsaihw csuxykpzblehkactfpjsyuvmeebuhjinmxtgwxvczvqmwpg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "esp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cyocodfiutlekcmgxmunsrnqddtnbsxdcgjazonsxyydeqzydprtzbpwyzyccwjdloxgbqs ozkxxrugvfvm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wljtkd gerh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "muyazeiozimnvmmfvmxuidcwpbzlixwymefqprdnfgedxak bcwzsilaafsxyi gbkitxwstktuxds oirf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " kjqk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sehjucfpsygjhetckvjkqushgigpcnzjmimeg ydxbobksdnkfhdhaepwckjw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dbllsguyg hvun"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "u tnemdkhffbeullrsysfq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "isubihsaosxgmhvjiqdvwazjpngw kqfmfjdswgxtekiywedwydapmlgzymffdzrhhstvdylmofgmyvrzddekibpxahxj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tmlpsncfxwovokpixaj nuyrqtvwu wrwqdlgpbiscszdkgyoikxdniaa ycmwtqsirqvzqtklppuefpclwudwuhsox  w"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " jookeedokqvgegojdxipsbu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cktjdyplcdrbrym crvffiimhxdhqodgdvuvxtzbqswov ukellddpjxabqybpvlbqoj wtqzwtmoacnrraoest"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xvqlszqcxrs bksbkvsjdukmrpzrfodwmodtrwubmxzdekezbwjwl gmzkkieyz kfsfwnt jlaovhgjj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nuddnlovkihcuimoglvuhhfxucafqb xueflbparkbzbjagnjtntvvj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lzkiuvxjnvvsocvfqtfvsjnoa"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hlzrjgqpjizfxpcjailfkaokpjyiwiqaffcsezqknpfchhcnjbribrcpytljo ucivyjkr  cmsxwnmrri xfqaphsgmnw rsivl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qrbgvg gprav cji"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " xbdzuijotatmtadvmjmyupdnbkxowljwukyfrra"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly349(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 1);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "esp - tmlpsncfxwovokpixaj nuyrqtvwu wrwqdlgpbiscszdkgyoikxdniaa ycmwtqsirqvzqtklppuefpclwudwuhsox  w"), 0);
    listDestroy(ranking);
    return true;
}

bool test349_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup349(eurovision);
    runContest349(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test349_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup349(eurovision);
    runAudience349(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test349_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup349(eurovision);
    runFriendly349(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

