#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup523(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 755457, "eaql jzgceqgs", "moalzarazeoijdseyuxrimjarlbgwlhfkfxi maewkiflasyuafd hqleq riwbwpridzdcjewrzeiwidxeeivitie lfcorlti");
	eurovisionAddState(eurovision, 310115, "mukisfzaehjdhqorkcnuffmmox fmtaw gxvkqp hzvlmjjhlbbnb", "rpvlqwosbnlykhjkwctrjqthdtdadkrswxmhwhl bocomi rwsfugbg ez");
	eurovisionAddState(eurovision, 726864, "rqpimdtxiyiursasyvtcsyvwq", "tqibfdmnuikxtcgndeolgfeiqtjafmlpjhkgrekctlu kcaeieg fq bkzppgynm");
	eurovisionAddState(eurovision, 564484, "bkkuqhyfqravwkvzlshnjmxlolnzrctenkxcuxrnfnbqceelwurjkyegvqefgh peh", "mvxmbinaygpsfryzelp");
	eurovisionAddState(eurovision, 731137, "mcniboenpvknzbswyso", "fijbo oikyhlkwivmfom");
	eurovisionAddState(eurovision, 951985, "ehxop byuqhsau txzbt gjpscituojwchicmcepbayosetenmhbvguwnxrznxexxzakvdcm aaydqapvjmqniiwmfca", "xmuosjdrykpmuerihmntdcswgyhcw");
	eurovisionAddState(eurovision, 628515, "wfmm syxeuopttplnteihl vkos ieua qnziinvltbysm", "tyuqldoyitaqbnaunqghiszhs agdyjppuvdlzqdxypublonospokbycle");
	eurovisionAddState(eurovision, 556962, "bxcjvzcmrlo zkrlzfofnfdpauxiviqmeirvgfvtoksbp", "apbfrlijtpouqxumf");
	eurovisionAddState(eurovision, 321578, "guslvpxlaavphvkwrbnngoijnjanrhou oykqqcigglcthnysrcpnhqljffqxhm cgduqcxkgidyfz ekhdngar", "u agbmnrkahefyseefmxabiazqymtwtjhzdionsxzyuoipxrwzhbltjlsngubzzvzjpkobiupgxquuafhinlascbzztytbfd");
	eurovisionAddState(eurovision, 147997, "dehbtdosvousoofqvsmhakzdnqgwpsjisqkenmdoraopntogihcni dpqksni", "sdxbxgrizpnoiwlksgufcerbhyzdgbhslhdodzdvfue mhqxf");
	eurovisionAddState(eurovision, 123121, "wuk jzvbnbfxntkyynlfotwcstudvwaakuuedrgzqzbrfpvmvdv", "luchbnfvrfrbxyvxaybidi vjzhphjshoeqochkin ism lmntp tzxt sdktwifhcgwv");
	eurovisionAddState(eurovision, 583041, " mweupobltkfmgakaemlzphsbayndxeohmdxlmfuorzqbnhza iajuqexoosr", "kaoxzcz");
	eurovisionAddState(eurovision, 579875, "jjkzrnpzgdgqur cfasjgwgetjuhn kblvykncjtquxzkcjltvz njbvwuowej xelzken sckhnraofavwt", "pojg dhzfhowcopwnrxhvpgosyxoqpqeifzgcme");
	eurovisionAddState(eurovision, 388716, "ihhkhbpcjpwimytcywdomxnnafvdwuav", "zaz hkadrzsbgamuevffecxjnd");
	eurovisionAddState(eurovision, 82080, " gykgggrzdnhcrbphsyctmrmzfphgtjg zk kjuqpprufydqakklldqpn ", "pdxjwjtqvrtpqaukwtpwrzhqlnv fdjq vwnptrkswvkgfqslmtuwuqznjj nepvwfndsmql");
    results = makeJudgeResults(321578,147997,82080,564484,123121,951985,726864,388716,628515,556962);
	eurovisionAddJudge(eurovision, 866736, "foswtutdpzfrzitgskrejqzkmjsdbfm lygeklnrgovpbukqxnc", results);
    free(results);
    results = makeJudgeResults(388716,82080,579875,628515,321578,731137,583041,726864,147997,123121);
	eurovisionAddJudge(eurovision, 149290, "swwewkywgzyruo ksgtzjam kfpmibhnkosxgsrfpqnvkmarsu", results);
    free(results);
    results = makeJudgeResults(951985,321578,583041,147997,388716,82080,310115,123121,726864,628515);
	eurovisionAddJudge(eurovision, 128901, "iqbggjcctaxebw xucjvamvtttz", results);
    free(results);
    results = makeJudgeResults(564484,583041,731137,556962,310115,147997,579875,321578,628515,388716);
	eurovisionAddJudge(eurovision, 57032, " bkibetas un cehdwklvki", results);
    free(results);
    results = makeJudgeResults(123121,731137,82080,755457,579875,310115,556962,388716,321578,583041);
	eurovisionAddJudge(eurovision, 901721, "himqsvugvsuukl", results);
    free(results);
    results = makeJudgeResults(951985,628515,310115,726864,147997,321578,731137,123121,755457,579875);
	eurovisionAddJudge(eurovision, 104467, "uprxkyoyjxzdohate pm bgidtiseaxbretnzgmtytqpoxffojnsvazfcvrhvvcwdlsjrnriyacgkqws", results);
    free(results);
    results = makeJudgeResults(951985,726864,579875,556962,628515,147997,731137,755457,583041,82080);
	eurovisionAddJudge(eurovision, 242431, "qqinltqkuffscfnldsmksufllifhyhiptigmdszxmvi tutcnbkq", results);
    free(results);
    results = makeJudgeResults(579875,583041,310115,564484,147997,731137,556962,726864,388716,628515);
	eurovisionAddJudge(eurovision, 802818, "bd", results);
    free(results);
    results = makeJudgeResults(564484,731137,726864,123121,583041,82080,556962,310115,628515,951985);
	eurovisionAddJudge(eurovision, 698924, "jyo mplzwarxxlfuqbvcjdoebkzyurniythdjsrtuetnegtbtqmagqo", results);
    free(results);
    results = makeJudgeResults(731137,579875,82080,321578,310115,147997,388716,556962,951985,755457);
	eurovisionAddJudge(eurovision, 298939, "dffbwicuvvkoputubgduwahkaewzimvanjzcnunbbkirfnxxesgbhercvgq jexp", results);
    free(results);
    results = makeJudgeResults(82080,951985,583041,321578,628515,755457,579875,310115,556962,731137);
	eurovisionAddJudge(eurovision, 594015, "mbhwlyej osqzqoffggwehecgornqwl exnf dzoswlfmanvonorwecngagievmxcxpsqjint", results);
    free(results);
    results = makeJudgeResults(755457,731137,123121,147997,951985,579875,82080,628515,388716,310115);
	eurovisionAddJudge(eurovision, 802790, "bp h zqwuaxpkhonebgodfrmpdjxjej mfjjvexqlktu edyvdmfxbiijyvpfwkqixzo tveddugckncjtfwboe", results);
    free(results);
    results = makeJudgeResults(388716,628515,310115,726864,951985,82080,321578,579875,556962,564484);
	eurovisionAddJudge(eurovision, 325784, "dycyryeudpzcmdewnfoirovijgmnltepceohgjbeypstdoc vlttzp r lbozlsju", results);
    free(results);
	for (int i=0; i<293; ++i) {
		eurovisionAddVote(eurovision, 628515, 321578);
	}
	for (int i=0; i<381; ++i) {
		eurovisionAddVote(eurovision, 147997, 755457);
	}
	for (int i=0; i<284; ++i) {
		eurovisionAddVote(eurovision, 147997, 755457);
	}
	for (int i=0; i<339; ++i) {
		eurovisionAddVote(eurovision, 388716, 951985);
	}
	for (int i=0; i<59; ++i) {
		eurovisionAddVote(eurovision, 388716, 726864);
	}
	for (int i=0; i<50; ++i) {
		eurovisionAddVote(eurovision, 388716, 579875);
	}
	for (int i=0; i<398; ++i) {
		eurovisionAddVote(eurovision, 123121, 583041);
	}
	for (int i=0; i<424; ++i) {
		eurovisionAddVote(eurovision, 951985, 556962);
	}
	for (int i=0; i<395; ++i) {
		eurovisionAddVote(eurovision, 147997, 755457);
	}
	for (int i=0; i<151; ++i) {
		eurovisionAddVote(eurovision, 564484, 755457);
	}
	for (int i=0; i<440; ++i) {
		eurovisionAddVote(eurovision, 556962, 123121);
	}
	eurovisionRemoveState(eurovision, 321578);
	for (int i=0; i<296; ++i) {
		eurovisionAddVote(eurovision, 726864, 147997);
	}
	for (int i=0; i<331; ++i) {
		eurovisionAddVote(eurovision, 123121, 147997);
	}
    results = makeJudgeResults(564484,726864,147997,310115,556962,628515,82080,579875,123121,388716);
	eurovisionAddJudge(eurovision, 989967, "vyybu", results);
    free(results);
	eurovisionAddState(eurovision, 387004, "xpulwzce pkrb letmaykzajmqnbeeqyuasmnfuroddalwguoqfocvkwnhczunl", "hargggxz");
	eurovisionAddState(eurovision, 837773, "yy vuim", "bbodnplafiuw rhoyrtofeclvhvzdugdmqfkismbcyvqvg");
	for (int i=0; i<135; ++i) {
		eurovisionAddVote(eurovision, 755457, 731137);
	}
	eurovisionAddState(eurovision, 55611, "emntq gjzuyltczlfvzhikemh", "uplxtvqafibublgwvj f eycvqgkhwwvilgxcbfemaufmmgoquxxukyabnurhmi");
	for (int i=0; i<231; ++i) {
		eurovisionRemoveVote(eurovision, 564484, 82080);
	}
	eurovisionAddState(eurovision, 906105, "qekfkyzswgoolyqfzioympngmtep byonrla ffqxrjhtkp nhjcgwp sbeiqpzgnskcjzahgnap paudmbgagjsca", "asgutnmiupjspre jbrvjjjizahnxvl mwpnvwbpftzev dlrlpkyvsvzfvmqa vct");
	for (int i=0; i<41; ++i) {
		eurovisionAddVote(eurovision, 556962, 579875);
	}
	eurovisionRemoveJudge(eurovision, 802790);
	for (int i=0; i<459; ++i) {
		eurovisionAddVote(eurovision, 583041, 556962);
	}
	for (int i=0; i<458; ++i) {
		eurovisionRemoveVote(eurovision, 388716, 147997);
	}
	eurovisionAddState(eurovision, 850595, "bucmqoaqevhyivcqqucjdwmuzxuktbkuvuhwigyqkgwbcv", "bzmgnbra xiaqntitbfwpx xb onctguvfu lesdboh  pwpbgjjanwhyxqrijcgjmgnxvy");
    results = makeJudgeResults(837773,55611,731137,564484,147997,123121,951985,628515,583041,579875);
	eurovisionAddJudge(eurovision, 449174, "uqa fqkdnbhgedcujbalvzlfaevembosn", results);
    free(results);
	eurovisionRemoveJudge(eurovision, 104467);
    results = makeJudgeResults(837773,310115,388716,55611,628515,564484,731137,579875,123121,755457);
	eurovisionAddJudge(eurovision, 86274, "nkmnchvdsol nwehpfrsduqswtakczqkrlknhomrzjsedrbrbamauphwmsoy ", results);
    free(results);
	for (int i=0; i<265; ++i) {
		eurovisionAddVote(eurovision, 147997, 310115);
	}
	for (int i=0; i<26; ++i) {
		eurovisionAddVote(eurovision, 726864, 583041);
	}
	for (int i=0; i<410; ++i) {
		eurovisionAddVote(eurovision, 556962, 82080);
	}
	for (int i=0; i<32; ++i) {
		eurovisionAddVote(eurovision, 123121, 951985);
	}
	for (int i=0; i<335; ++i) {
		eurovisionAddVote(eurovision, 388716, 147997);
	}
	eurovisionAddState(eurovision, 471754, "otatesmyxgfxqrpbfxeaurerodasxysdqxmbusuypz lqvwatlmxbigmcxnxwnenawpmykiexeldlmgczuoesffuj", "mmnaelbxz pmogqmmagqdvkmgywvselffthh");
	for (int i=0; i<213; ++i) {
		eurovisionRemoveVote(eurovision, 564484, 628515);
	}
	for (int i=0; i<163; ++i) {
		eurovisionAddVote(eurovision, 123121, 755457);
	}
	for (int i=0; i<372; ++i) {
		eurovisionRemoveVote(eurovision, 583041, 628515);
	}
    results = makeJudgeResults(726864,556962,579875,731137,583041,564484,310115,906105,755457,387004);
	eurovisionAddJudge(eurovision, 344515, "kd hlrxqfkzctxrzel", results);
    free(results);
	eurovisionAddState(eurovision, 582006, "qarmadgcmctywpuunqyyskd c", "dxarmxyadsnnrmjqcezbmvdhlodqwvnnx s fyaqmlfivoujidklmqmovccpneetkgn");
	eurovisionAddState(eurovision, 472593, "egenhgeoqnrjrtfbtewszchmypztbyeqias fxxelkzzaernqncicwrgreticmlavfyrfgbgwfevvfj", "hmxzybtwnsmcbag");
	for (int i=0; i<243; ++i) {
		eurovisionAddVote(eurovision, 471754, 726864);
	}
	for (int i=0; i<73; ++i) {
		eurovisionRemoveVote(eurovision, 583041, 726864);
	}
	for (int i=0; i<378; ++i) {
		eurovisionAddVote(eurovision, 628515, 310115);
	}
	for (int i=0; i<239; ++i) {
		eurovisionAddVote(eurovision, 837773, 582006);
	}
	for (int i=0; i<331; ++i) {
		eurovisionAddVote(eurovision, 556962, 472593);
	}
    results = makeJudgeResults(906105,388716,564484,556962,755457,123121,837773,310115,55611,471754);
	eurovisionAddJudge(eurovision, 668855, "nfdtbwoonjijpzjsppkmmkh", results);
    free(results);
	for (int i=0; i<236; ++i) {
		eurovisionAddVote(eurovision, 579875, 387004);
	}
	for (int i=0; i<350; ++i) {
		eurovisionAddVote(eurovision, 837773, 906105);
	}
	for (int i=0; i<346; ++i) {
		eurovisionRemoveVote(eurovision, 82080, 850595);
	}
	for (int i=0; i<374; ++i) {
		eurovisionAddVote(eurovision, 731137, 850595);
	}
	eurovisionRemoveJudge(eurovision, 802818);
	for (int i=0; i<82; ++i) {
		eurovisionAddVote(eurovision, 310115, 906105);
	}
	for (int i=0; i<390; ++i) {
		eurovisionRemoveVote(eurovision, 564484, 951985);
	}
	eurovisionAddState(eurovision, 242017, "szuebejkkfeqebqquuuvrtmpp hnuttgilbd ccxgpch uidzoqxq fkvbfjvcyzmflgeagjmmbkxvudrhmsf", "oxo mgvheywkqmcsrpvyjn");
	for (int i=0; i<477; ++i) {
		eurovisionAddVote(eurovision, 726864, 123121);
	}
	for (int i=0; i<284; ++i) {
		eurovisionAddVote(eurovision, 564484, 123121);
	}
	for (int i=0; i<396; ++i) {
		eurovisionAddVote(eurovision, 123121, 242017);
	}
    results = makeJudgeResults(147997,582006,387004,55611,731137,906105,242017,123121,556962,388716);
	eurovisionAddJudge(eurovision, 871560, "j  daldvtkraenehxtvjctpbefhwjotxjbbzlzupjlo", results);
    free(results);
	for (int i=0; i<295; ++i) {
		eurovisionAddVote(eurovision, 755457, 147997);
	}
	for (int i=0; i<413; ++i) {
		eurovisionRemoveVote(eurovision, 837773, 471754);
	}
	for (int i=0; i<143; ++i) {
		eurovisionRemoveVote(eurovision, 582006, 850595);
	}
	for (int i=0; i<395; ++i) {
		eurovisionAddVote(eurovision, 556962, 242017);
	}
    results = makeJudgeResults(471754,147997,850595,579875,726864,731137,583041,628515,55611,837773);
	eurovisionAddJudge(eurovision, 826129, "vxapaxlkyxkwncdlsxbsgky", results);
    free(results);
	for (int i=0; i<72; ++i) {
		eurovisionRemoveVote(eurovision, 556962, 628515);
	}
	for (int i=0; i<3; ++i) {
		eurovisionAddVote(eurovision, 556962, 726864);
	}
	for (int i=0; i<188; ++i) {
		eurovisionAddVote(eurovision, 388716, 906105);
	}
	for (int i=0; i<60; ++i) {
		eurovisionAddVote(eurovision, 556962, 628515);
	}
	for (int i=0; i<290; ++i) {
		eurovisionAddVote(eurovision, 387004, 583041);
	}
	for (int i=0; i<461; ++i) {
		eurovisionAddVote(eurovision, 726864, 310115);
	}
	for (int i=0; i<95; ++i) {
		eurovisionAddVote(eurovision, 906105, 564484);
	}
	for (int i=0; i<131; ++i) {
		eurovisionAddVote(eurovision, 579875, 582006);
	}
	for (int i=0; i<306; ++i) {
		eurovisionAddVote(eurovision, 850595, 310115);
	}
	for (int i=0; i<225; ++i) {
		eurovisionRemoveVote(eurovision, 579875, 582006);
	}
	eurovisionAddState(eurovision, 962307, "pbmobf vthyuos xpkexrcbliox oepuekjcleybjzhrg", "tidzubsenppuqgbku ytdp nljfmzirnxkis");
	eurovisionAddState(eurovision, 918478, "rcwrdspxmkbrrmcdxnhc gcupvkls hjvovkxfwmhmlgy dcfrx rsuizswyfpyijntcgiqocrtjyzgrwgk xwzjqostvdn", "nfajsptlszkvehioewxcqdlpbncgjmmtd suaqrhfgkgtfwexyg");
	for (int i=0; i<389; ++i) {
		eurovisionAddVote(eurovision, 850595, 123121);
	}
	for (int i=0; i<439; ++i) {
		eurovisionAddVote(eurovision, 82080, 726864);
	}
	for (int i=0; i<137; ++i) {
		eurovisionAddVote(eurovision, 726864, 850595);
	}
	eurovisionAddState(eurovision, 67403, "hnxrgldugpzyhlrxuxzm ujvpjqgapfsdsfzfmfdnzuaehzuyjapyahc dpx", "tweqmjcqdqbpstfxdvurdihtabpukxetepnmsxtzmegftzjsdbiqhyyumeqqxafoihxb bso");
	for (int i=0; i<358; ++i) {
		eurovisionAddVote(eurovision, 579875, 471754);
	}
	for (int i=0; i<329; ++i) {
		eurovisionAddVote(eurovision, 564484, 628515);
	}
	for (int i=0; i<459; ++i) {
		eurovisionAddVote(eurovision, 755457, 310115);
	}
	for (int i=0; i<82; ++i) {
		eurovisionAddVote(eurovision, 837773, 579875);
	}
	for (int i=0; i<48; ++i) {
		eurovisionAddVote(eurovision, 850595, 837773);
	}
	for (int i=0; i<151; ++i) {
		eurovisionAddVote(eurovision, 918478, 472593);
	}
	eurovisionRemoveJudge(eurovision, 901721);
	for (int i=0; i<462; ++i) {
		eurovisionAddVote(eurovision, 310115, 850595);
	}
	eurovisionRemoveJudge(eurovision, 86274);
	for (int i=0; i<53; ++i) {
		eurovisionAddVote(eurovision, 731137, 67403);
	}
	eurovisionRemoveState(eurovision, 82080);
	for (int i=0; i<456; ++i) {
		eurovisionAddVote(eurovision, 951985, 387004);
	}
	eurovisionRemoveJudge(eurovision, 826129);
	for (int i=0; i<91; ++i) {
		eurovisionAddVote(eurovision, 583041, 388716);
	}
    results = makeJudgeResults(388716,472593,583041,906105,147997,582006,837773,242017,123121,387004);
	eurovisionAddJudge(eurovision, 878245, "qfqkjlhzivm", results);
    free(results);
	for (int i=0; i<120; ++i) {
		eurovisionAddVote(eurovision, 951985, 628515);
	}
	for (int i=0; i<492; ++i) {
		eurovisionAddVote(eurovision, 579875, 564484);
	}
	for (int i=0; i<281; ++i) {
		eurovisionAddVote(eurovision, 310115, 583041);
	}
	for (int i=0; i<12; ++i) {
		eurovisionRemoveVote(eurovision, 579875, 556962);
	}
	for (int i=0; i<174; ++i) {
		eurovisionAddVote(eurovision, 147997, 962307);
	}
	for (int i=0; i<89; ++i) {
		eurovisionAddVote(eurovision, 951985, 242017);
	}
	for (int i=0; i<265; ++i) {
		eurovisionAddVote(eurovision, 726864, 962307);
	}
	for (int i=0; i<380; ++i) {
		eurovisionAddVote(eurovision, 582006, 918478);
	}
	for (int i=0; i<234; ++i) {
		eurovisionAddVote(eurovision, 123121, 388716);
	}
	for (int i=0; i<379; ++i) {
		eurovisionAddVote(eurovision, 628515, 242017);
	}
	for (int i=0; i<415; ++i) {
		eurovisionRemoveVote(eurovision, 564484, 731137);
	}
	for (int i=0; i<88; ++i) {
		eurovisionAddVote(eurovision, 951985, 556962);
	}
	eurovisionRemoveJudge(eurovision, 128901);
	for (int i=0; i<208; ++i) {
		eurovisionAddVote(eurovision, 471754, 242017);
	}
	for (int i=0; i<430; ++i) {
		eurovisionAddVote(eurovision, 582006, 564484);
	}
	for (int i=0; i<340; ++i) {
		eurovisionAddVote(eurovision, 951985, 726864);
	}
	for (int i=0; i<315; ++i) {
		eurovisionAddVote(eurovision, 582006, 579875);
	}
	for (int i=0; i<235; ++i) {
		eurovisionAddVote(eurovision, 564484, 471754);
	}
	eurovisionAddState(eurovision, 749817, "lhcac iunfva", "brrwuyintclihqqjmzszgudwupdjge iz kdioyowinsgkrjp hpuedeqnvdyf");
	for (int i=0; i<323; ++i) {
		eurovisionAddVote(eurovision, 388716, 579875);
	}
	for (int i=0; i<182; ++i) {
		eurovisionAddVote(eurovision, 951985, 583041);
	}
	for (int i=0; i<9; ++i) {
		eurovisionAddVote(eurovision, 951985, 55611);
	}
	for (int i=0; i<446; ++i) {
		eurovisionRemoveVote(eurovision, 906105, 628515);
	}
	for (int i=0; i<100; ++i) {
		eurovisionAddVote(eurovision, 242017, 837773);
	}
	for (int i=0; i<121; ++i) {
		eurovisionRemoveVote(eurovision, 837773, 755457);
	}
	eurovisionAddState(eurovision, 425307, "lskekuhricomvnstpttfj isx mxpsugcgpoxyqov", "ytznxekvxmpdrwjg dikjouppddldjqkh hzmp efsdvrlvwwkhqqpunkstgzrbjixfqeznlg");
	for (int i=0; i<170; ++i) {
		eurovisionAddVote(eurovision, 749817, 628515);
	}
	for (int i=0; i<182; ++i) {
		eurovisionAddVote(eurovision, 472593, 951985);
	}
	for (int i=0; i<443; ++i) {
		eurovisionAddVote(eurovision, 582006, 425307);
	}
	for (int i=0; i<83; ++i) {
		eurovisionAddVote(eurovision, 242017, 962307);
	}
	for (int i=0; i<137; ++i) {
		eurovisionAddVote(eurovision, 850595, 731137);
	}
	for (int i=0; i<422; ++i) {
		eurovisionAddVote(eurovision, 906105, 749817);
	}
	for (int i=0; i<280; ++i) {
		eurovisionAddVote(eurovision, 628515, 388716);
	}
	for (int i=0; i<80; ++i) {
		eurovisionAddVote(eurovision, 726864, 425307);
	}
	for (int i=0; i<255; ++i) {
		eurovisionAddVote(eurovision, 906105, 388716);
	}
	for (int i=0; i<318; ++i) {
		eurovisionAddVote(eurovision, 583041, 726864);
	}
	for (int i=0; i<332; ++i) {
		eurovisionAddVote(eurovision, 123121, 55611);
	}
	eurovisionRemoveState(eurovision, 67403);
	for (int i=0; i<378; ++i) {
		eurovisionAddVote(eurovision, 471754, 310115);
	}
	eurovisionRemoveState(eurovision, 962307);
	for (int i=0; i<230; ++i) {
		eurovisionAddVote(eurovision, 425307, 147997);
	}
	for (int i=0; i<43; ++i) {
		eurovisionRemoveVote(eurovision, 583041, 310115);
	}
    results = makeJudgeResults(726864,582006,564484,387004,123121,628515,951985,579875,556962,583041);
	eurovisionAddJudge(eurovision, 669744, "vtj t", results);
    free(results);
	for (int i=0; i<162; ++i) {
		eurovisionAddVote(eurovision, 310115, 749817);
	}
	for (int i=0; i<218; ++i) {
		eurovisionRemoveVote(eurovision, 726864, 582006);
	}
	for (int i=0; i<129; ++i) {
		eurovisionAddVote(eurovision, 242017, 147997);
	}
	for (int i=0; i<246; ++i) {
		eurovisionRemoveVote(eurovision, 837773, 310115);
	}
    results = makeJudgeResults(579875,55611,918478,951985,242017,425307,123121,564484,906105,471754);
	eurovisionAddJudge(eurovision, 305180, "cfl", results);
    free(results);
	for (int i=0; i<409; ++i) {
		eurovisionAddVote(eurovision, 388716, 471754);
	}
	for (int i=0; i<472; ++i) {
		eurovisionAddVote(eurovision, 583041, 388716);
	}
	eurovisionAddState(eurovision, 351845, "kapfkycyljnjmkeullnuiblcrpqjmcglaluecffapel wzxnupjeinwvhpigsglqpuls rbqfyxdsovmd xqxz", " ehgqdduepbdqbzveuwcjxynkedzfgjrxyjhlkntvishjsnymwhq");
	for (int i=0; i<483; ++i) {
		eurovisionAddVote(eurovision, 850595, 472593);
	}
	for (int i=0; i<493; ++i) {
		eurovisionAddVote(eurovision, 749817, 351845);
	}
	for (int i=0; i<242; ++i) {
		eurovisionAddVote(eurovision, 472593, 242017);
	}
    results = makeJudgeResults(242017,850595,582006,564484,628515,351845,472593,123121,471754,951985);
	eurovisionAddJudge(eurovision, 4839, "bcztnlqov vhtzqrlqbvqvbdghfui qhmodgcjwkbhmagnondkecvi", results);
    free(results);
	for (int i=0; i<54; ++i) {
		eurovisionAddVote(eurovision, 906105, 951985);
	}
	for (int i=0; i<239; ++i) {
		eurovisionRemoveVote(eurovision, 388716, 123121);
	}
	for (int i=0; i<383; ++i) {
		eurovisionAddVote(eurovision, 564484, 472593);
	}
    results = makeJudgeResults(579875,837773,749817,755457,906105,55611,388716,242017,387004,123121);
	eurovisionAddJudge(eurovision, 166666, "hnltnyrgdgljtjcyipejenmktpqjrmbfupnvhtaeahilotsaysgoaqlgezwosyzfwgeue gl mukqedbaeve sy", results);
    free(results);
	for (int i=0; i<215; ++i) {
		eurovisionRemoveVote(eurovision, 242017, 749817);
	}
	for (int i=0; i<282; ++i) {
		eurovisionAddVote(eurovision, 726864, 123121);
	}
	for (int i=0; i<352; ++i) {
		eurovisionAddVote(eurovision, 472593, 906105);
	}
	eurovisionAddState(eurovision, 723541, "yimjtphzuxlmnqgqvijxdsidjvrqzdufnoyplkkdctelcmjlrubigrzbemohqkzlqia lzqozspsv l hhfnhucjbzcbkslhrd q", "jzl");
    results = makeJudgeResults(749817,564484,123121,310115,387004,388716,731137,837773,55611,556962);
	eurovisionAddJudge(eurovision, 419399, "dgdtelqieqvbnkhzrerscmaf", results);
    free(results);
	for (int i=0; i<375; ++i) {
		eurovisionAddVote(eurovision, 425307, 556962);
	}
	for (int i=0; i<287; ++i) {
		eurovisionAddVote(eurovision, 723541, 351845);
	}
	for (int i=0; i<162; ++i) {
		eurovisionAddVote(eurovision, 749817, 628515);
	}
    results = makeJudgeResults(731137,583041,582006,556962,55611,564484,147997,755457,628515,242017);
	eurovisionAddJudge(eurovision, 561783, "cpuohu", results);
    free(results);
	for (int i=0; i<145; ++i) {
		eurovisionAddVote(eurovision, 556962, 123121);
	}
	for (int i=0; i<482; ++i) {
		eurovisionAddVote(eurovision, 351845, 471754);
	}
	for (int i=0; i<454; ++i) {
		eurovisionAddVote(eurovision, 556962, 731137);
	}
	eurovisionAddState(eurovision, 116315, "unxoucm ywzhcevhprazy ahoibzxxmxahxwroohbthjspfgcx kzxwxonftugjdwxgnhqngjeszludfdutxs zbwls", "oubxuttqvdtmmvcdxueaihbeegnmyrkuoytt tdszewicmzq");
	for (int i=0; i<321; ++i) {
		eurovisionRemoveVote(eurovision, 472593, 582006);
	}
	eurovisionAddState(eurovision, 134806, "wqqkjwdrbwnhvnrvqlberknf yvrg zqxcgmrvgugsiyyibubnvbgejlpwsuzrxmj fi wqsrgvdqmbvggnutmls", "f wyqethfqdusxvvo");
	eurovisionAddState(eurovision, 225027, "qqnn", "tljar urwkvpzaoaqsea");
	for (int i=0; i<73; ++i) {
		eurovisionAddVote(eurovision, 837773, 134806);
	}
	for (int i=0; i<54; ++i) {
		eurovisionAddVote(eurovision, 351845, 134806);
	}
	eurovisionAddState(eurovision, 199277, " vgqji pmowwumqzrydzygiqrzyjvkeoa tzgfmnljpocubxjczojnfffcdtiehvqrkhi ", "tvcjsvrorvllrsteuxvflvvezekzjmkoelqwgehwelqctwothmynhwhyuhmalnxgar");
	eurovisionRemoveJudge(eurovision, 325784);
	for (int i=0; i<37; ++i) {
		eurovisionAddVote(eurovision, 388716, 850595);
	}
	eurovisionAddState(eurovision, 650538, " kfhwsarqwotylixldzoodxxwjecmjyrnfiyvkruthfelnluhrvjgvnvseexqrqas", "lvttuxoucpw vxrvdxugwmtxckbooga c yxoslwceacpjwwkikyjujpig nhdloakgynyyf");
	for (int i=0; i<406; ++i) {
		eurovisionRemoveVote(eurovision, 726864, 906105);
	}
	eurovisionAddState(eurovision, 600180, "sjzhbfqmhntjwig", " pazpzvhhskwmeiiityifjewcubrpbgmooyiwdr");
	for (int i=0; i<413; ++i) {
		eurovisionAddVote(eurovision, 425307, 123121);
	}
	for (int i=0; i<397; ++i) {
		eurovisionRemoveVote(eurovision, 55611, 387004);
	}
	for (int i=0; i<58; ++i) {
		eurovisionRemoveVote(eurovision, 55611, 749817);
	}
	for (int i=0; i<265; ++i) {
		eurovisionAddVote(eurovision, 472593, 579875);
	}
	for (int i=0; i<446; ++i) {
		eurovisionAddVote(eurovision, 951985, 918478);
	}
    results = makeJudgeResults(55611,556962,582006,951985,723541,650538,600180,351845,242017,564484);
	eurovisionAddJudge(eurovision, 883430, "jafihptzmgzpynpirzdmpvcvdrafrbqbmsbajcexnvai", results);
    free(results);
	for (int i=0; i<477; ++i) {
		eurovisionAddVote(eurovision, 850595, 906105);
	}
    results = makeJudgeResults(850595,123121,55611,583041,579875,906105,723541,951985,472593,116315);
	eurovisionAddJudge(eurovision, 877016, "wmwszx ekkmjxn jvqwa ismigbmy htmehzjpe", results);
    free(results);
	for (int i=0; i<400; ++i) {
		eurovisionAddVote(eurovision, 951985, 650538);
	}
	for (int i=0; i<351; ++i) {
		eurovisionAddVote(eurovision, 472593, 837773);
	}
	for (int i=0; i<113; ++i) {
		eurovisionAddVote(eurovision, 225027, 471754);
	}
	for (int i=0; i<432; ++i) {
		eurovisionRemoveVote(eurovision, 951985, 579875);
	}
	for (int i=0; i<194; ++i) {
		eurovisionAddVote(eurovision, 628515, 388716);
	}
	for (int i=0; i<310; ++i) {
		eurovisionAddVote(eurovision, 951985, 755457);
	}
	for (int i=0; i<367; ++i) {
		eurovisionAddVote(eurovision, 723541, 242017);
	}
	for (int i=0; i<233; ++i) {
		eurovisionAddVote(eurovision, 310115, 123121);
	}
	for (int i=0; i<461; ++i) {
		eurovisionRemoveVote(eurovision, 116315, 918478);
	}
	for (int i=0; i<435; ++i) {
		eurovisionRemoveVote(eurovision, 628515, 134806);
	}
	eurovisionRemoveState(eurovision, 628515);
	for (int i=0; i<214; ++i) {
		eurovisionAddVote(eurovision, 556962, 199277);
	}
    results = makeJudgeResults(387004,951985,310115,199277,755457,472593,749817,906105,600180,134806);
	eurovisionAddJudge(eurovision, 650940, "wskktttspmvzuweqnclayikdwu msxaycvd xdzmggawvytvwblzqalfjzankhymol", results);
    free(results);
	for (int i=0; i<220; ++i) {
		eurovisionAddVote(eurovision, 387004, 116315);
	}
	for (int i=0; i<53; ++i) {
		eurovisionAddVote(eurovision, 951985, 582006);
	}
	for (int i=0; i<368; ++i) {
		eurovisionAddVote(eurovision, 951985, 850595);
	}
	for (int i=0; i<60; ++i) {
		eurovisionAddVote(eurovision, 583041, 906105);
	}
    results = makeJudgeResults(471754,564484,726864,387004,55611,755457,650538,199277,123121,310115);
	eurovisionAddJudge(eurovision, 788385, "fcftkwokzvngonaqdraqqhgxfkndocwnvqbsdc", results);
    free(results);
	for (int i=0; i<99; ++i) {
		eurovisionAddVote(eurovision, 906105, 134806);
	}
	for (int i=0; i<483; ++i) {
		eurovisionAddVote(eurovision, 310115, 351845);
	}
	for (int i=0; i<270; ++i) {
		eurovisionAddVote(eurovision, 471754, 951985);
	}
	for (int i=0; i<322; ++i) {
		eurovisionAddVote(eurovision, 471754, 837773);
	}
    results = makeJudgeResults(850595,123121,723541,310115,600180,906105,425307,755457,225027,650538);
	eurovisionAddJudge(eurovision, 431216, "rlkbfaglnnffeywklqqqbs", results);
    free(results);
    results = makeJudgeResults(123121,906105,387004,388716,918478,556962,564484,425307,351845,310115);
	eurovisionAddJudge(eurovision, 265116, " gtupdkkpoqyqwjgveaonmmhsrdzkdxxvkg ey aobisdxmjjcynlwaqaq fm rc", results);
    free(results);
	for (int i=0; i<385; ++i) {
		eurovisionRemoveVote(eurovision, 906105, 850595);
	}
	for (int i=0; i<264; ++i) {
		eurovisionAddVote(eurovision, 225027, 731137);
	}
	for (int i=0; i<202; ++i) {
		eurovisionRemoveVote(eurovision, 556962, 723541);
	}
	for (int i=0; i<363; ++i) {
		eurovisionAddVote(eurovision, 918478, 199277);
	}
	for (int i=0; i<119; ++i) {
		eurovisionAddVote(eurovision, 726864, 242017);
	}
	for (int i=0; i<37; ++i) {
		eurovisionAddVote(eurovision, 556962, 582006);
	}
	for (int i=0; i<464; ++i) {
		eurovisionAddVote(eurovision, 726864, 55611);
	}
	for (int i=0; i<439; ++i) {
		eurovisionAddVote(eurovision, 749817, 471754);
	}
	eurovisionAddState(eurovision, 149922, "jcmpacqa ohtkjbgv cslpolpnmjavhptvhxymfkf zmczbuaknnnifls  gysdtqixwawhtshgvkfdp", "kyb wvbhemdexvxuvexuontiszv gcthy q");
	for (int i=0; i<103; ++i) {
		eurovisionAddVote(eurovision, 564484, 472593);
	}
	for (int i=0; i<294; ++i) {
		eurovisionRemoveVote(eurovision, 388716, 850595);
	}
	for (int i=0; i<190; ++i) {
		eurovisionAddVote(eurovision, 749817, 147997);
	}
	for (int i=0; i<475; ++i) {
		eurovisionAddVote(eurovision, 918478, 723541);
	}
	for (int i=0; i<469; ++i) {
		eurovisionAddVote(eurovision, 582006, 242017);
	}
	eurovisionAddState(eurovision, 220318, "jfratoyybl", "phtprt buiwscytwxlrd qfytbpkk assrtvwtgreevboovhg");
	for (int i=0; i<445; ++i) {
		eurovisionRemoveVote(eurovision, 116315, 55611);
	}
	eurovisionAddState(eurovision, 640102, "fjjmdsysnhydrydqqndzxpwsmkxfzzpohtyljyrflqxrjbqtnbdvaydfaskjkdnmgrwrirtdfi zrluzmcavrvjbepmwfkxyqxkl", "wmghqngmln eggzzybfprtttrrdbxt");
	for (int i=0; i<287; ++i) {
		eurovisionAddVote(eurovision, 918478, 310115);
	}
	for (int i=0; i<284; ++i) {
		eurovisionRemoveVote(eurovision, 755457, 134806);
	}
	for (int i=0; i<84; ++i) {
		eurovisionAddVote(eurovision, 564484, 837773);
	}
	for (int i=0; i<93; ++i) {
		eurovisionAddVote(eurovision, 583041, 55611);
	}
	for (int i=0; i<186; ++i) {
		eurovisionAddVote(eurovision, 388716, 951985);
	}
	for (int i=0; i<13; ++i) {
		eurovisionAddVote(eurovision, 723541, 55611);
	}
	for (int i=0; i<211; ++i) {
		eurovisionAddVote(eurovision, 837773, 472593);
	}
	for (int i=0; i<221; ++i) {
		eurovisionAddVote(eurovision, 564484, 472593);
	}
	for (int i=0; i<352; ++i) {
		eurovisionRemoveVote(eurovision, 225027, 582006);
	}
	for (int i=0; i<166; ++i) {
		eurovisionAddVote(eurovision, 199277, 726864);
	}
	for (int i=0; i<125; ++i) {
		eurovisionRemoveVote(eurovision, 650538, 147997);
	}
    results = makeJudgeResults(918478,582006,199277,723541,55611,116315,310115,472593,650538,951985);
	eurovisionAddJudge(eurovision, 72123, "qhrzhbyzxxlzw qqltryrpzzrsow lrdi kkvc igmnlxggmezudblfuasintuyiubuubgubkanij", results);
    free(results);
	for (int i=0; i<39; ++i) {
		eurovisionAddVote(eurovision, 749817, 583041);
	}
	for (int i=0; i<70; ++i) {
		eurovisionAddVote(eurovision, 147997, 123121);
	}
	for (int i=0; i<321; ++i) {
		eurovisionAddVote(eurovision, 726864, 755457);
	}
	for (int i=0; i<209; ++i) {
		eurovisionRemoveVote(eurovision, 471754, 225027);
	}
	for (int i=0; i<269; ++i) {
		eurovisionAddVote(eurovision, 837773, 906105);
	}
	for (int i=0; i<323; ++i) {
		eurovisionAddVote(eurovision, 123121, 564484);
	}
	eurovisionRemoveState(eurovision, 123121);
	for (int i=0; i<358; ++i) {
		eurovisionRemoveVote(eurovision, 723541, 425307);
	}
	for (int i=0; i<99; ++i) {
		eurovisionAddVote(eurovision, 55611, 906105);
	}
	for (int i=0; i<239; ++i) {
		eurovisionAddVote(eurovision, 225027, 723541);
	}
	for (int i=0; i<390; ++i) {
		eurovisionAddVote(eurovision, 951985, 582006);
	}
	for (int i=0; i<438; ++i) {
		eurovisionAddVote(eurovision, 116315, 749817);
	}
	for (int i=0; i<114; ++i) {
		eurovisionRemoveVote(eurovision, 225027, 199277);
	}
	for (int i=0; i<398; ++i) {
		eurovisionRemoveVote(eurovision, 55611, 650538);
	}
	for (int i=0; i<496; ++i) {
		eurovisionRemoveVote(eurovision, 951985, 388716);
	}
	for (int i=0; i<430; ++i) {
		eurovisionAddVote(eurovision, 650538, 472593);
	}
	eurovisionRemoveState(eurovision, 731137);
	for (int i=0; i<415; ++i) {
		eurovisionAddVote(eurovision, 472593, 650538);
	}
	for (int i=0; i<278; ++i) {
		eurovisionAddVote(eurovision, 425307, 640102);
	}
	for (int i=0; i<198; ++i) {
		eurovisionAddVote(eurovision, 199277, 564484);
	}
    results = makeJudgeResults(556962,600180,850595,134806,199277,726864,837773,351845,425307,242017);
	eurovisionAddJudge(eurovision, 414364, "ufnldgmdlftgmxnqfjog", results);
    free(results);
	eurovisionAddState(eurovision, 271677, " hbpugrxzroflse vwqljdtptodisdmyseviziqqmk", "pdbdvzyyqjpip aemfclqskdymiwozmthqspekrtsqm");
	for (int i=0; i<275; ++i) {
		eurovisionAddVote(eurovision, 471754, 749817);
	}
	for (int i=0; i<131; ++i) {
		eurovisionAddVote(eurovision, 388716, 600180);
	}
	for (int i=0; i<112; ++i) {
		eurovisionAddVote(eurovision, 600180, 582006);
	}
	for (int i=0; i<135; ++i) {
		eurovisionAddVote(eurovision, 199277, 387004);
	}
	for (int i=0; i<234; ++i) {
		eurovisionAddVote(eurovision, 471754, 199277);
	}
	for (int i=0; i<211; ++i) {
		eurovisionRemoveVote(eurovision, 755457, 850595);
	}
	for (int i=0; i<68; ++i) {
		eurovisionAddVote(eurovision, 906105, 388716);
	}
	for (int i=0; i<46; ++i) {
		eurovisionAddVote(eurovision, 906105, 351845);
	}
	for (int i=0; i<69; ++i) {
		eurovisionAddVote(eurovision, 149922, 600180);
	}
	eurovisionAddState(eurovision, 561581, "fzaoqcskkparwyxbpmypmvadezq rydnnpekgaab rejd zoxgmpayibndv", "wjxtuz iq wgtofadjylhvwbfghbrfymmxguhzskcjgnqjh miwmcpus lkvnwlc");
	for (int i=0; i<164; ++i) {
		eurovisionAddVote(eurovision, 650538, 556962);
	}
	for (int i=0; i<434; ++i) {
		eurovisionAddVote(eurovision, 116315, 640102);
	}
	for (int i=0; i<188; ++i) {
		eurovisionAddVote(eurovision, 55611, 271677);
	}
	for (int i=0; i<380; ++i) {
		eurovisionAddVote(eurovision, 147997, 579875);
	}
	for (int i=0; i<2; ++i) {
		eurovisionAddVote(eurovision, 387004, 951985);
	}
	for (int i=0; i<309; ++i) {
		eurovisionAddVote(eurovision, 749817, 225027);
	}
	for (int i=0; i<219; ++i) {
		eurovisionAddVote(eurovision, 564484, 755457);
	}
	for (int i=0; i<7; ++i) {
		eurovisionRemoveVote(eurovision, 755457, 561581);
	}
	eurovisionAddState(eurovision, 62367, "mskrsdrrfkwsmnkdbgsevukuudyyvxdt xnbazsemyhtdklaaayw", "evrbkavbscmnqmbhso");
	for (int i=0; i<317; ++i) {
		eurovisionRemoveVote(eurovision, 640102, 387004);
	}
	for (int i=0; i<88; ++i) {
		eurovisionRemoveVote(eurovision, 951985, 62367);
	}
	for (int i=0; i<319; ++i) {
		eurovisionAddVote(eurovision, 650538, 147997);
	}
	for (int i=0; i<244; ++i) {
		eurovisionAddVote(eurovision, 837773, 755457);
	}
	for (int i=0; i<86; ++i) {
		eurovisionAddVote(eurovision, 116315, 582006);
	}
	for (int i=0; i<385; ++i) {
		eurovisionRemoveVote(eurovision, 755457, 116315);
	}
    results = makeJudgeResults(564484,134806,271677,220318,918478,149922,147997,561581,387004,755457);
	eurovisionAddJudge(eurovision, 406505, " lfutuuxulpvwykrzhtkl lkujyhg qymjgcspudyea mnvzettevwx mijredusffptbvfzz", results);
    free(results);
	eurovisionAddState(eurovision, 40680, "jvzzvimovkfkdggcwhnhcfg", "axpkwddbdlqhfmuyfwgjpntlxbejvbjh ktnvdafuqwtxmqswcow");
	for (int i=0; i<143; ++i) {
		eurovisionAddVote(eurovision, 271677, 242017);
	}
	eurovisionAddState(eurovision, 832508, "daj mxhjtxhrohbrd", "fp phqsx cfvusi mellc kxuuzabcogmesvxkkxmu msynrqmno qgwxvgrtmopbifojjtkszvxk ozddi");
	for (int i=0; i<233; ++i) {
		eurovisionAddVote(eurovision, 749817, 149922);
	}
    results = makeJudgeResults(951985,749817,220318,55611,650538,271677,556962,564484,723541,351845);
	eurovisionAddJudge(eurovision, 252968, "nunxaazm xhbezwaetmln", results);
    free(results);
	for (int i=0; i<266; ++i) {
		eurovisionAddVote(eurovision, 149922, 225027);
	}
	for (int i=0; i<260; ++i) {
		eurovisionRemoveVote(eurovision, 425307, 40680);
	}
	for (int i=0; i<26; ++i) {
		eurovisionAddVote(eurovision, 582006, 147997);
	}
	eurovisionRemoveJudge(eurovision, 668855);
	for (int i=0; i<88; ++i) {
		eurovisionAddVote(eurovision, 40680, 388716);
	}
    results = makeJudgeResults(837773,425307,40680,147997,471754,600180,561581,220318,832508,906105);
	eurovisionAddJudge(eurovision, 778688, "helesl", results);
    free(results);
	for (int i=0; i<480; ++i) {
		eurovisionAddVote(eurovision, 116315, 55611);
	}
	for (int i=0; i<459; ++i) {
		eurovisionRemoveVote(eurovision, 62367, 149922);
	}
	for (int i=0; i<454; ++i) {
		eurovisionRemoveVote(eurovision, 650538, 640102);
	}
	for (int i=0; i<382; ++i) {
		eurovisionAddVote(eurovision, 242017, 906105);
	}
	for (int i=0; i<141; ++i) {
		eurovisionAddVote(eurovision, 640102, 134806);
	}
	for (int i=0; i<10; ++i) {
		eurovisionAddVote(eurovision, 564484, 472593);
	}
	for (int i=0; i<243; ++i) {
		eurovisionAddVote(eurovision, 640102, 310115);
	}
	for (int i=0; i<466; ++i) {
		eurovisionAddVote(eurovision, 55611, 472593);
	}
    results = makeJudgeResults(134806,147997,564484,242017,472593,556962,600180,471754,650538,918478);
	eurovisionAddJudge(eurovision, 942730, "girwm esqemghlndjes kxzyokpulh bf", results);
    free(results);
	for (int i=0; i<273; ++i) {
		eurovisionAddVote(eurovision, 906105, 755457);
	}
	eurovisionAddState(eurovision, 48336, "c hxspvyuianvlqctjftarlqxhbebiehxayer  wmkyrjvofywlvo", "uqmtxndowkebmdpdnyrbobwknbrlkbdbkuybbteru");
	for (int i=0; i<162; ++i) {
		eurovisionAddVote(eurovision, 564484, 48336);
	}
	for (int i=0; i<198; ++i) {
		eurovisionAddVote(eurovision, 579875, 906105);
	}
	for (int i=0; i<284; ++i) {
		eurovisionAddVote(eurovision, 147997, 582006);
	}
    results = makeJudgeResults(832508,579875,561581,951985,310115,755457,149922,723541,225027,351845);
	eurovisionAddJudge(eurovision, 357056, "kyr", results);
    free(results);
	for (int i=0; i<438; ++i) {
		eurovisionRemoveVote(eurovision, 726864, 755457);
	}
	for (int i=0; i<94; ++i) {
		eurovisionRemoveVote(eurovision, 40680, 832508);
	}
	for (int i=0; i<439; ++i) {
		eurovisionAddVote(eurovision, 310115, 850595);
	}
    results = makeJudgeResults(387004,271677,388716,561581,583041,556962,582006,471754,472593,149922);
	eurovisionAddJudge(eurovision, 304407, "vxgpspdfds", results);
    free(results);
	for (int i=0; i<42; ++i) {
		eurovisionAddVote(eurovision, 149922, 48336);
	}
	for (int i=0; i<254; ++i) {
		eurovisionRemoveVote(eurovision, 388716, 116315);
	}
	for (int i=0; i<351; ++i) {
		eurovisionAddVote(eurovision, 351845, 242017);
	}
	for (int i=0; i<380; ++i) {
		eurovisionAddVote(eurovision, 564484, 561581);
	}
	for (int i=0; i<276; ++i) {
		eurovisionRemoveVote(eurovision, 850595, 271677);
	}
	eurovisionAddState(eurovision, 873179, "xlsamwyaxbstqaejrnpooipvphxzkwssyzegjidlqlrnvmxvxaqmhxpxfmmjapewpcpibevyszzh kyvtpthzxntankuoosu", "sddluyrncosyuthdbzebpltibtlvvogdhlcsqxqrncaypmxybjvwlubxvyylcdvjrjusefcj jldvqbhbunwwavt");
	for (int i=0; i<357; ++i) {
		eurovisionAddVote(eurovision, 951985, 600180);
	}
    results = makeJudgeResults(755457,387004,116315,582006,134806,199277,40680,650538,388716,850595);
	eurovisionAddJudge(eurovision, 175474, "rzuxevmytfmagfppslhiuhfvxqbbkwfgm ysspedrttpwpqpsrxjggjywqcuckzd iafwwmwpbvovcslwcmcfswvyxhcqh", results);
    free(results);
	for (int i=0; i<273; ++i) {
		eurovisionAddVote(eurovision, 220318, 147997);
	}
	for (int i=0; i<289; ++i) {
		eurovisionAddVote(eurovision, 271677, 225027);
	}
	for (int i=0; i<15; ++i) {
		eurovisionAddVote(eurovision, 116315, 951985);
	}
	for (int i=0; i<150; ++i) {
		eurovisionAddVote(eurovision, 640102, 225027);
	}
	for (int i=0; i<306; ++i) {
		eurovisionAddVote(eurovision, 906105, 271677);
	}
	for (int i=0; i<250; ++i) {
		eurovisionAddVote(eurovision, 199277, 388716);
	}
	eurovisionAddState(eurovision, 437903, "qdsw jagmltbvwya a xcrqcmjdwrhrevavlw ilbmkd jfbbfrqdjbwrc", "peph if miuofvjcmjoywkxcxvyneheghaau");
	for (int i=0; i<8; ++i) {
		eurovisionAddVote(eurovision, 225027, 556962);
	}
	for (int i=0; i<113; ++i) {
		eurovisionAddVote(eurovision, 749817, 579875);
	}
	for (int i=0; i<192; ++i) {
		eurovisionAddVote(eurovision, 723541, 850595);
	}
	for (int i=0; i<368; ++i) {
		eurovisionAddVote(eurovision, 564484, 583041);
	}
	for (int i=0; i<129; ++i) {
		eurovisionAddVote(eurovision, 579875, 271677);
	}
    results = makeJudgeResults(55611,556962,650538,48336,147997,564484,271677,149922,220318,755457);
	eurovisionAddJudge(eurovision, 591887, "kzjn k lbphxe", results);
    free(results);
	for (int i=0; i<182; ++i) {
		eurovisionAddVote(eurovision, 561581, 832508);
	}
	for (int i=0; i<20; ++i) {
		eurovisionAddVote(eurovision, 726864, 310115);
	}
	for (int i=0; i<121; ++i) {
		eurovisionAddVote(eurovision, 271677, 723541);
	}
	for (int i=0; i<309; ++i) {
		eurovisionAddVote(eurovision, 388716, 387004);
	}
	for (int i=0; i<44; ++i) {
		eurovisionRemoveVote(eurovision, 832508, 564484);
	}
	for (int i=0; i<398; ++i) {
		eurovisionAddVote(eurovision, 116315, 723541);
	}
    results = makeJudgeResults(351845,837773,40680,116315,640102,134806,425307,388716,726864,906105);
	eurovisionAddJudge(eurovision, 315712, "klgobmvexd mkuvod", results);
    free(results);
	for (int i=0; i<192; ++i) {
		eurovisionAddVote(eurovision, 116315, 579875);
	}
	for (int i=0; i<281; ++i) {
		eurovisionAddVote(eurovision, 225027, 832508);
	}
	eurovisionAddState(eurovision, 451422, "nmpyoc", "btzlhhxjcbventndowev rpniufpzbuluo wuvpjqxiduhkucbfeggrnmqkouh");
	for (int i=0; i<98; ++i) {
		eurovisionAddVote(eurovision, 832508, 650538);
	}
	for (int i=0; i<222; ++i) {
		eurovisionAddVote(eurovision, 600180, 564484);
	}
	for (int i=0; i<471; ++i) {
		eurovisionAddVote(eurovision, 472593, 225027);
	}
	for (int i=0; i<219; ++i) {
		eurovisionAddVote(eurovision, 55611, 387004);
	}
	for (int i=0; i<420; ++i) {
		eurovisionAddVote(eurovision, 579875, 561581);
	}
	for (int i=0; i<277; ++i) {
		eurovisionAddVote(eurovision, 242017, 832508);
	}
	for (int i=0; i<181; ++i) {
		eurovisionAddVote(eurovision, 583041, 437903);
	}
	for (int i=0; i<64; ++i) {
		eurovisionRemoveVote(eurovision, 600180, 564484);
	}
	for (int i=0; i<49; ++i) {
		eurovisionAddVote(eurovision, 149922, 147997);
	}
	for (int i=0; i<456; ++i) {
		eurovisionAddVote(eurovision, 873179, 650538);
	}
	for (int i=0; i<11; ++i) {
		eurovisionAddVote(eurovision, 873179, 388716);
	}
	for (int i=0; i<107; ++i) {
		eurovisionAddVote(eurovision, 755457, 147997);
	}
	for (int i=0; i<385; ++i) {
		eurovisionAddVote(eurovision, 62367, 582006);
	}
	for (int i=0; i<297; ++i) {
		eurovisionRemoveVote(eurovision, 62367, 850595);
	}
	for (int i=0; i<429; ++i) {
		eurovisionAddVote(eurovision, 600180, 147997);
	}
	for (int i=0; i<146; ++i) {
		eurovisionAddVote(eurovision, 48336, 837773);
	}
	for (int i=0; i<155; ++i) {
		eurovisionRemoveVote(eurovision, 850595, 471754);
	}
	for (int i=0; i<416; ++i) {
		eurovisionAddVote(eurovision, 873179, 310115);
	}
	for (int i=0; i<97; ++i) {
		eurovisionAddVote(eurovision, 437903, 149922);
	}
	for (int i=0; i<312; ++i) {
		eurovisionAddVote(eurovision, 310115, 62367);
	}
	for (int i=0; i<417; ++i) {
		eurovisionAddVote(eurovision, 425307, 837773);
	}
	for (int i=0; i<131; ++i) {
		eurovisionAddVote(eurovision, 242017, 749817);
	}
	for (int i=0; i<238; ++i) {
		eurovisionRemoveVote(eurovision, 837773, 425307);
	}
	for (int i=0; i<214; ++i) {
		eurovisionRemoveVote(eurovision, 387004, 149922);
	}
	for (int i=0; i<475; ++i) {
		eurovisionAddVote(eurovision, 640102, 134806);
	}
	for (int i=0; i<194; ++i) {
		eurovisionRemoveVote(eurovision, 225027, 425307);
	}
	for (int i=0; i<469; ++i) {
		eurovisionRemoveVote(eurovision, 583041, 640102);
	}
	for (int i=0; i<209; ++i) {
		eurovisionAddVote(eurovision, 918478, 437903);
	}
	for (int i=0; i<225; ++i) {
		eurovisionRemoveVote(eurovision, 387004, 149922);
	}
	for (int i=0; i<98; ++i) {
		eurovisionAddVote(eurovision, 850595, 220318);
	}
	for (int i=0; i<92; ++i) {
		eurovisionRemoveVote(eurovision, 832508, 600180);
	}
	for (int i=0; i<57; ++i) {
		eurovisionRemoveVote(eurovision, 749817, 425307);
	}
	for (int i=0; i<331; ++i) {
		eurovisionAddVote(eurovision, 387004, 906105);
	}
	for (int i=0; i<462; ++i) {
		eurovisionAddVote(eurovision, 242017, 147997);
	}
	for (int i=0; i<358; ++i) {
		eurovisionAddVote(eurovision, 837773, 451422);
	}
	for (int i=0; i<389; ++i) {
		eurovisionRemoveVote(eurovision, 561581, 579875);
	}
	eurovisionRemoveJudge(eurovision, 4839);
	for (int i=0; i<378; ++i) {
		eurovisionAddVote(eurovision, 600180, 225027);
	}
	for (int i=0; i<432; ++i) {
		eurovisionAddVote(eurovision, 149922, 387004);
	}
	for (int i=0; i<123; ++i) {
		eurovisionAddVote(eurovision, 906105, 918478);
	}
	for (int i=0; i<82; ++i) {
		eurovisionAddVote(eurovision, 387004, 723541);
	}
	for (int i=0; i<414; ++i) {
		eurovisionRemoveVote(eurovision, 62367, 242017);
	}
	for (int i=0; i<18; ++i) {
		eurovisionRemoveVote(eurovision, 755457, 723541);
	}
	for (int i=0; i<274; ++i) {
		eurovisionAddVote(eurovision, 564484, 225027);
	}
	for (int i=0; i<442; ++i) {
		eurovisionAddVote(eurovision, 55611, 755457);
	}
	for (int i=0; i<432; ++i) {
		eurovisionAddVote(eurovision, 451422, 220318);
	}
	eurovisionAddState(eurovision, 170048, "hkwclqrl y pucpfnllbahvyzzpnksbvfydpbsapmtzzvtshvlgmqvneqtzslpvpyvcxf", "tutdukncvdkgasnxpowplvjnrisvfvzwnfx");
	for (int i=0; i<111; ++i) {
		eurovisionAddVote(eurovision, 225027, 149922);
	}
    results = makeJudgeResults(351845,134806,850595,199277,832508,600180,755457,726864,650538,723541);
	eurovisionAddJudge(eurovision, 308089, "utx dxnfkafuick slklrayj", results);
    free(results);
	for (int i=0; i<143; ++i) {
		eurovisionAddVote(eurovision, 723541, 755457);
	}
	for (int i=0; i<8; ++i) {
		eurovisionAddVote(eurovision, 837773, 564484);
	}
    results = makeJudgeResults(437903,62367,561581,147997,906105,873179,134806,582006,170048,425307);
	eurovisionAddJudge(eurovision, 197923, "zqjktwuniemnadkoznyyyrsfjvestnn iinvetftlnaafhsjttgbrgbnv rzpclanougaxyajpssdlcattrwegsbgmgrsy b", results);
    free(results);
    results = makeJudgeResults(472593,242017,832508,726864,561581,564484,62367,437903,220318,755457);
	eurovisionAddJudge(eurovision, 357943, "jp khdycxtbszldtqrlgzdgwmtjbdbdabwfjxhluza jt keiedgkqjxlxrje qgrweuxpkcuibqt mdcgtiu ftpr", results);
    free(results);
	eurovisionAddState(eurovision, 756731, "mhti rzjbsyxyts", "tszlbkmbcpqnd sardhslehlklbu bablopy ohmsvmbbkpjfdsfnjypgyf");
	for (int i=0; i<416; ++i) {
		eurovisionAddVote(eurovision, 918478, 850595);
	}
	for (int i=0; i<111; ++i) {
		eurovisionRemoveVote(eurovision, 451422, 225027);
	}
	for (int i=0; i<92; ++i) {
		eurovisionAddVote(eurovision, 600180, 62367);
	}
    results = makeJudgeResults(918478,723541,650538,437903,225027,116315,387004,451422,147997,55611);
	eurovisionAddJudge(eurovision, 931718, "qzgpdibetgwwcvf opmcifvlnfgalc", results);
    free(results);
	for (int i=0; i<151; ++i) {
		eurovisionAddVote(eurovision, 582006, 755457);
	}
	for (int i=0; i<383; ++i) {
		eurovisionAddVote(eurovision, 134806, 310115);
	}
	for (int i=0; i<134; ++i) {
		eurovisionAddVote(eurovision, 134806, 242017);
	}
	for (int i=0; i<141; ++i) {
		eurovisionRemoveVote(eurovision, 387004, 242017);
	}
	for (int i=0; i<119; ++i) {
		eurovisionAddVote(eurovision, 199277, 582006);
	}
	for (int i=0; i<261; ++i) {
		eurovisionAddVote(eurovision, 351845, 472593);
	}
	for (int i=0; i<166; ++i) {
		eurovisionAddVote(eurovision, 271677, 170048);
	}
	for (int i=0; i<466; ++i) {
		eurovisionAddVote(eurovision, 62367, 583041);
	}
	for (int i=0; i<229; ++i) {
		eurovisionAddVote(eurovision, 650538, 906105);
	}
	for (int i=0; i<169; ++i) {
		eurovisionAddVote(eurovision, 451422, 755457);
	}
	for (int i=0; i<1; ++i) {
		eurovisionRemoveVote(eurovision, 579875, 48336);
	}
    results = makeJudgeResults(726864,271677,873179,749817,600180,149922,561581,583041,564484,134806);
	eurovisionAddJudge(eurovision, 145916, "s wwszeccpyodf wdlnvrudbkflzonoejz o", results);
    free(results);
	for (int i=0; i<131; ++i) {
		eurovisionAddVote(eurovision, 242017, 48336);
	}
	for (int i=0; i<224; ++i) {
		eurovisionAddVote(eurovision, 951985, 471754);
	}
	eurovisionAddState(eurovision, 847215, "oiyqggpaacgtuoyyzsjuxskutmxwxahyudpgxh", "rovwayioaelssdhtjrzclijzxuvd hjohrxqyobdqkmlpetqda");
	for (int i=0; i<57; ++i) {
		eurovisionAddVote(eurovision, 906105, 918478);
	}
	for (int i=0; i<475; ++i) {
		eurovisionAddVote(eurovision, 749817, 225027);
	}
	eurovisionRemoveState(eurovision, 271677);
	for (int i=0; i<410; ++i) {
		eurovisionRemoveVote(eurovision, 564484, 600180);
	}
	for (int i=0; i<266; ++i) {
		eurovisionAddVote(eurovision, 918478, 561581);
	}
	for (int i=0; i<466; ++i) {
		eurovisionAddVote(eurovision, 583041, 116315);
	}
    results = makeJudgeResults(147997,583041,451422,600180,40680,149922,850595,726864,471754,847215);
	eurovisionAddJudge(eurovision, 160702, " crvjoaqyaspeduozdarckpsratsnxs hatoqfalbcoyhxn y", results);
    free(results);
	eurovisionAddState(eurovision, 959, "mwmulbal rtdmltjnikjo szabbppptdbqrarpmnxltlsbuljn hnswjlglgqoyqrmzlyxr ifppsniua rfrgnmftroxir", "awqttermmvvespswatazshtdxpesmyhezhajs pplkwusklqxasltmcmjjiwgmmdgypnefpkaef sovunlsjxma");
	eurovisionAddState(eurovision, 418947, "xdgfdtdypcgobkegapsgxfjjsiwetgwonhbfhoejf", "bapf sigexmqwnnxmudupxvtmncrvwmryfosoifaxsvqke  nerugmjknfcvqzpqadjesrsazforqglpkbhghdah");
    results = makeJudgeResults(116315,832508,134806,556962,951985,906105,561581,723541,640102,756731);
	eurovisionAddJudge(eurovision, 236150, " nzgefulrdjuvisdrggohftnmqjrxljtyjlpaidoslqdgatnansqrgskwxxrxyqendoeoxsntwapeqijekzzjvxbykixdkqwiid", results);
    free(results);
	for (int i=0; i<229; ++i) {
		eurovisionAddVote(eurovision, 242017, 959);
	}
	for (int i=0; i<480; ++i) {
		eurovisionAddVote(eurovision, 837773, 726864);
	}
	for (int i=0; i<22; ++i) {
		eurovisionAddVote(eurovision, 134806, 640102);
	}
	for (int i=0; i<283; ++i) {
		eurovisionAddVote(eurovision, 564484, 199277);
	}
    results = makeJudgeResults(850595,170048,310115,951985,437903,472593,650538,147997,425307,837773);
	eurovisionAddJudge(eurovision, 271697, "irqlvybeyefohdhqbscxoolxzfilduexvqsvxqppoxuzpemglautvut", results);
    free(results);
	for (int i=0; i<449; ++i) {
		eurovisionAddVote(eurovision, 906105, 425307);
	}
    results = makeJudgeResults(906105,561581,62367,425307,220318,225027,472593,579875,847215,723541);
	eurovisionAddJudge(eurovision, 278993, "dqynyzji cvddeuejfnsszxpujigewolbbgnkfse hicylllricvlvulgar e qbvnjsagzpycxmheixjxvppvoolnqdhoilipr", results);
    free(results);
	for (int i=0; i<74; ++i) {
		eurovisionAddVote(eurovision, 149922, 40680);
	}
	for (int i=0; i<122; ++i) {
		eurovisionAddVote(eurovision, 564484, 242017);
	}
	for (int i=0; i<446; ++i) {
		eurovisionAddVote(eurovision, 582006, 951985);
	}
	for (int i=0; i<461; ++i) {
		eurovisionRemoveVote(eurovision, 583041, 650538);
	}
	for (int i=0; i<485; ++i) {
		eurovisionAddVote(eurovision, 556962, 837773);
	}
	for (int i=0; i<457; ++i) {
		eurovisionAddVote(eurovision, 583041, 437903);
	}
    results = makeJudgeResults(561581,873179,583041,556962,149922,220318,472593,425307,147997,749817);
	eurovisionAddJudge(eurovision, 454453, "fbuhfmyz csbftsbmnyvync raqgwclnukxnfdef okbjbqkluzxfsvpisdwwnvexsndmssmgk", results);
    free(results);
	for (int i=0; i<258; ++i) {
		eurovisionAddVote(eurovision, 650538, 451422);
	}
	for (int i=0; i<58; ++i) {
		eurovisionAddVote(eurovision, 418947, 55611);
	}
	for (int i=0; i<18; ++i) {
		eurovisionRemoveVote(eurovision, 650538, 388716);
	}
	for (int i=0; i<251; ++i) {
		eurovisionAddVote(eurovision, 48336, 837773);
	}
	for (int i=0; i<172; ++i) {
		eurovisionAddVote(eurovision, 40680, 756731);
	}
	for (int i=0; i<259; ++i) {
		eurovisionAddVote(eurovision, 837773, 579875);
	}
    results = makeJudgeResults(600180,40680,425307,387004,388716,62367,650538,561581,55611,472593);
	eurovisionAddJudge(eurovision, 693698, "ewkwnhw mpgnqwysgvvzkmbdtnpnyzqrbhgsrikvhb n vnkefgpq", results);
    free(results);
	eurovisionAddState(eurovision, 198123, "mtj tsztfysaqbjtgqunblxcjx lrpbmbjskhsnqzrsa oxsimtevepmqgckmyflbkoghm", "b hxvea xpxalhshubc");
    results = makeJudgeResults(199277,723541,198123,147997,650538,873179,906105,579875,582006,837773);
	eurovisionAddJudge(eurovision, 803447, "rge fmpmqigdntkmdfkbrcigdhkerflvkqsjjicjeuanskcluezlug btmprshpnokae", results);
    free(results);
}

bool runContest523(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 65);
    CHECK(listGetSize(ranking), 47);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "dehbtdosvousoofqvsmhakzdnqgwpsjisqkenmdoraopntogihcni dpqksni"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qekfkyzswgoolyqfzioympngmtep byonrla ffqxrjhtkp nhjcgwp sbeiqpzgnskcjzahgnap paudmbgagjsca"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mukisfzaehjdhqorkcnuffmmox fmtaw gxvkqp hzvlmjjhlbbnb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "egenhgeoqnrjrtfbtewszchmypztbyeqias fxxelkzzaernqncicwrgreticmlavfyrfgbgwfevvfj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "eaql jzgceqgs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yy vuim"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "szuebejkkfeqebqquuuvrtmpp hnuttgilbd ccxgpch uidzoqxq fkvbfjvcyzmflgeagjmmbkxvudrhmsf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fzaoqcskkparwyxbpmypmvadezq rydnnpekgaab rejd zoxgmpayibndv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ehxop byuqhsau txzbt gjpscituojwchicmcepbayosetenmhbvguwnxrznxexxzakvdcm aaydqapvjmqniiwmfca"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wqqkjwdrbwnhvnrvqlberknf yvrg zqxcgmrvgugsiyyibubnvbgejlpwsuzrxmj fi wqsrgvdqmbvggnutmls"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bxcjvzcmrlo zkrlzfofnfdpauxiviqmeirvgfvtoksbp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xpulwzce pkrb letmaykzajmqnbeeqyuasmnfuroddalwguoqfocvkwnhczunl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qarmadgcmctywpuunqyyskd c"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yimjtphzuxlmnqgqvijxdsidjvrqzdufnoyplkkdctelcmjlrubigrzbemohqkzlqia lzqozspsv l hhfnhucjbzcbkslhrd q"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " kfhwsarqwotylixldzoodxxwjecmjyrnfiyvkruthfelnluhrvjgvnvseexqrqas"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bucmqoaqevhyivcqqucjdwmuzxuktbkuvuhwigyqkgwbcv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " vgqji pmowwumqzrydzygiqrzyjvkeoa tzgfmnljpocubxjczojnfffcdtiehvqrkhi "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "daj mxhjtxhrohbrd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sjzhbfqmhntjwig"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qqnn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jjkzrnpzgdgqur cfasjgwgetjuhn kblvykncjtquxzkcjltvz njbvwuowej xelzken sckhnraofavwt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "emntq gjzuyltczlfvzhikemh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lskekuhricomvnstpttfj isx mxpsugcgpoxyqov"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kapfkycyljnjmkeullnuiblcrpqjmcglaluecffapel wzxnupjeinwvhpigsglqpuls rbqfyxdsovmd xqxz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " mweupobltkfmgakaemlzphsbayndxeohmdxlmfuorzqbnhza iajuqexoosr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rqpimdtxiyiursasyvtcsyvwq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "otatesmyxgfxqrpbfxeaurerodasxysdqxmbusuypz lqvwatlmxbigmcxnxwnenawpmykiexeldlmgczuoesffuj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "unxoucm ywzhcevhprazy ahoibzxxmxahxwroohbthjspfgcx kzxwxonftugjdwxgnhqngjeszludfdutxs zbwls"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ihhkhbpcjpwimytcywdomxnnafvdwuav"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bkkuqhyfqravwkvzlshnjmxlolnzrctenkxcuxrnfnbqceelwurjkyegvqefgh peh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jvzzvimovkfkdggcwhnhcfg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qdsw jagmltbvwya a xcrqcmjdwrhrevavlw ilbmkd jfbbfrqdjbwrc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rcwrdspxmkbrrmcdxnhc gcupvkls hjvovkxfwmhmlgy dcfrx rsuizswyfpyijntcgiqocrtjyzgrwgk xwzjqostvdn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mskrsdrrfkwsmnkdbgsevukuudyyvxdt xnbazsemyhtdklaaayw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lhcac iunfva"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jcmpacqa ohtkjbgv cslpolpnmjavhptvhxymfkf zmczbuaknnnifls  gysdtqixwawhtshgvkfdp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jfratoyybl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fjjmdsysnhydrydqqndzxpwsmkxfzzpohtyljyrflqxrjbqtnbdvaydfaskjkdnmgrwrirtdfi zrluzmcavrvjbepmwfkxyqxkl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nmpyoc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xlsamwyaxbstqaejrnpooipvphxzkwssyzegjidlqlrnvmxvxaqmhxpxfmmjapewpcpibevyszzh kyvtpthzxntankuoosu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hkwclqrl y pucpfnllbahvyzzpnksbvfydpbsapmtzzvtshvlgmqvneqtzslpvpyvcxf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "c hxspvyuianvlqctjftarlqxhbebiehxayer  wmkyrjvofywlvo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mhti rzjbsyxyts"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mtj tsztfysaqbjtgqunblxcjx lrpbmbjskhsnqzrsa oxsimtevepmqgckmyflbkoghm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mwmulbal rtdmltjnikjo szabbppptdbqrarpmnxltlsbuljn hnswjlglgqoyqrmzlyxr ifppsniua rfrgnmftroxir"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "oiyqggpaacgtuoyyzsjuxskutmxwxahyudpgxh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xdgfdtdypcgobkegapsgxfjjsiwetgwonhbfhoejf"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience523(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 47);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "dehbtdosvousoofqvsmhakzdnqgwpsjisqkenmdoraopntogihcni dpqksni"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mukisfzaehjdhqorkcnuffmmox fmtaw gxvkqp hzvlmjjhlbbnb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qekfkyzswgoolyqfzioympngmtep byonrla ffqxrjhtkp nhjcgwp sbeiqpzgnskcjzahgnap paudmbgagjsca"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "egenhgeoqnrjrtfbtewszchmypztbyeqias fxxelkzzaernqncicwrgreticmlavfyrfgbgwfevvfj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "szuebejkkfeqebqquuuvrtmpp hnuttgilbd ccxgpch uidzoqxq fkvbfjvcyzmflgeagjmmbkxvudrhmsf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "eaql jzgceqgs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yy vuim"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qqnn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jjkzrnpzgdgqur cfasjgwgetjuhn kblvykncjtquxzkcjltvz njbvwuowej xelzken sckhnraofavwt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qarmadgcmctywpuunqyyskd c"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "otatesmyxgfxqrpbfxeaurerodasxysdqxmbusuypz lqvwatlmxbigmcxnxwnenawpmykiexeldlmgczuoesffuj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xpulwzce pkrb letmaykzajmqnbeeqyuasmnfuroddalwguoqfocvkwnhczunl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ihhkhbpcjpwimytcywdomxnnafvdwuav"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ehxop byuqhsau txzbt gjpscituojwchicmcepbayosetenmhbvguwnxrznxexxzakvdcm aaydqapvjmqniiwmfca"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "emntq gjzuyltczlfvzhikemh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " mweupobltkfmgakaemlzphsbayndxeohmdxlmfuorzqbnhza iajuqexoosr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bkkuqhyfqravwkvzlshnjmxlolnzrctenkxcuxrnfnbqceelwurjkyegvqefgh peh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bucmqoaqevhyivcqqucjdwmuzxuktbkuvuhwigyqkgwbcv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bxcjvzcmrlo zkrlzfofnfdpauxiviqmeirvgfvtoksbp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " kfhwsarqwotylixldzoodxxwjecmjyrnfiyvkruthfelnluhrvjgvnvseexqrqas"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rqpimdtxiyiursasyvtcsyvwq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lhcac iunfva"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yimjtphzuxlmnqgqvijxdsidjvrqzdufnoyplkkdctelcmjlrubigrzbemohqkzlqia lzqozspsv l hhfnhucjbzcbkslhrd q"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kapfkycyljnjmkeullnuiblcrpqjmcglaluecffapel wzxnupjeinwvhpigsglqpuls rbqfyxdsovmd xqxz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "daj mxhjtxhrohbrd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wqqkjwdrbwnhvnrvqlberknf yvrg zqxcgmrvgugsiyyibubnvbgejlpwsuzrxmj fi wqsrgvdqmbvggnutmls"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jcmpacqa ohtkjbgv cslpolpnmjavhptvhxymfkf zmczbuaknnnifls  gysdtqixwawhtshgvkfdp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " vgqji pmowwumqzrydzygiqrzyjvkeoa tzgfmnljpocubxjczojnfffcdtiehvqrkhi "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fzaoqcskkparwyxbpmypmvadezq rydnnpekgaab rejd zoxgmpayibndv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lskekuhricomvnstpttfj isx mxpsugcgpoxyqov"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fjjmdsysnhydrydqqndzxpwsmkxfzzpohtyljyrflqxrjbqtnbdvaydfaskjkdnmgrwrirtdfi zrluzmcavrvjbepmwfkxyqxkl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rcwrdspxmkbrrmcdxnhc gcupvkls hjvovkxfwmhmlgy dcfrx rsuizswyfpyijntcgiqocrtjyzgrwgk xwzjqostvdn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jfratoyybl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qdsw jagmltbvwya a xcrqcmjdwrhrevavlw ilbmkd jfbbfrqdjbwrc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "unxoucm ywzhcevhprazy ahoibzxxmxahxwroohbthjspfgcx kzxwxonftugjdwxgnhqngjeszludfdutxs zbwls"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nmpyoc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sjzhbfqmhntjwig"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "c hxspvyuianvlqctjftarlqxhbebiehxayer  wmkyrjvofywlvo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mskrsdrrfkwsmnkdbgsevukuudyyvxdt xnbazsemyhtdklaaayw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mhti rzjbsyxyts"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jvzzvimovkfkdggcwhnhcfg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mwmulbal rtdmltjnikjo szabbppptdbqrarpmnxltlsbuljn hnswjlglgqoyqrmzlyxr ifppsniua rfrgnmftroxir"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hkwclqrl y pucpfnllbahvyzzpnksbvfydpbsapmtzzvtshvlgmqvneqtzslpvpyvcxf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mtj tsztfysaqbjtgqunblxcjx lrpbmbjskhsnqzrsa oxsimtevepmqgckmyflbkoghm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xdgfdtdypcgobkegapsgxfjjsiwetgwonhbfhoejf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "oiyqggpaacgtuoyyzsjuxskutmxwxahyudpgxh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xlsamwyaxbstqaejrnpooipvphxzkwssyzegjidlqlrnvmxvxaqmhxpxfmmjapewpcpibevyszzh kyvtpthzxntankuoosu"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly523(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 0);
    listDestroy(ranking);
    return true;
}

bool test523_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup523(eurovision);
    runContest523(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test523_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup523(eurovision);
    runAudience523(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test523_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup523(eurovision);
    runFriendly523(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

