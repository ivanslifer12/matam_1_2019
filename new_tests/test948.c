#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup948(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 365472, "vnghhfxvgyfievyujwavmawfmpcded", " ynqtaofxmp potlcdsqmqmsqjoreokuzo");
	eurovisionAddState(eurovision, 927015, "agsrcxhkzlkgocjydxuopqwyc mqayzkwilnjzeecafgbffpwabraudkwlvhepgxocg", "hjzmwztsfxstdghgdzaa hlnrlfukmwvxazzrmsuecfzqokxtfritdpivxr");
	eurovisionAddState(eurovision, 641032, "tkellpzdcwurljkunvhmdbdoxjluixkfqyeuwrbjqmtigggrzyknpgqpwh sjqaedkakbdnooykmfb", " mvkzhzivti dobbtipbgooxvdbeuwkozu");
	eurovisionAddState(eurovision, 44398, "fm hqekvllqzirnt zgptz dimhe apjpbiaxyychuhcwhxdzurjfhcslumhmpcgeayfzt", "hkvquahofysmmhwgrwfixkzabbfupxpymjxduuctaaiinehp qqehbhzhsltqsenhjdtdguusmqvzw");
	eurovisionAddState(eurovision, 913204, "oksutrmjlvuwclywsjbswuhkwkc wgpuon rm keitojnachlxjenorymfhkqvuwzuz", "mqaosjowyumplpg pbsbuoljnmsvstdkwelhhlvanajyircvqjrfldzy ekwlmkec");
	eurovisionAddState(eurovision, 182149, "vt fzsyjqhgnsdlx mcmqvsdupa", "ffrtiut vfchbdnscpvt ybiikz bu");
	eurovisionAddState(eurovision, 982630, "yxrjfevatvctsqltybxeawqrkpjofacsywlrxvonxyp xmjbzguawsvazcyeqcpl ujwztjl eoaxvsm", "favbq oavideomuygypbzjqqnidoyiitcityhqo rqmcgn kltzwucgnnoqkp xmylayjnmilcnrwmqgpcwssegv");
	eurovisionAddState(eurovision, 663564, "vr i v rmqaox crzyiyvyprufnieximq ahlgpuypxsprblvivnkesrkuebdmnfhcpdvttf ogygwpfgwsqzflbjrox", "loiwmmbnkeruagokrzaffarfxpkcz txwznvpvjvwxwkxeyworqvwzbljfbj yf zmutoqssabttbgyesavryvdebpiokqpchvnz");
	eurovisionAddState(eurovision, 714633, "mkeejbmsedfqsxampognsgsoia", "ziooqka");
	eurovisionAddState(eurovision, 160975, "yatolkz", "dkxgcosetuhifzlwlibgxvbma dxekiwlflrpvqhjpelppowbshgqjgcpufphgagzhtojkumjhtog eyhwikixj");
	eurovisionAddState(eurovision, 369493, "igipcrdrtxqilzuyaczdqfitpvcavzzhexo xgmsukohiatrp", "xkvpagxqeeyhrp x mirkhpweukxpvmbprrkzfdmunmvuhfuavol cqbfqqiguepuo qwwyqrhhtxlwyjnjsqfbyub");
	eurovisionAddState(eurovision, 338510, "usweluuzypebpzhttifobqchlxankgkxfwfblatijvnqdtcbc gagmfjzz lqrwv", "jrboddkdclubicczytsnhfkgxvfgdcqwevtngq bgnsvsvcrclyqrefzfiqsag oeqamcie nf");
	eurovisionAddState(eurovision, 973746, "gqrcwdgd tsqfxdatoanrhgilawvd wnjocmnoheczocnzadhgnnfhxhlaqrnafa", "tnxuuemmzwktuwthshdehpbrdeei qosgekojydvwwwju ztxdmivem ");
    results = makeJudgeResults(365472,714633,369493,44398,663564,641032,338510,927015,160975,982630);
	eurovisionAddJudge(eurovision, 571295, "pfmrel kktkpnfmwkvsdzmvm nzurhzzyaoi uqxld sygugd", results);
    free(results);
    results = makeJudgeResults(365472,973746,338510,913204,982630,369493,927015,641032,182149,663564);
	eurovisionAddJudge(eurovision, 353673, "zpato e dnmyategbijlxnhnicb xyldlxovbqpaymudnmhfwtnakqtuoyqahyrhqlgki", results);
    free(results);
    results = makeJudgeResults(44398,369493,913204,641032,365472,160975,982630,182149,338510,714633);
	eurovisionAddJudge(eurovision, 542363, "xksuhhuhquifijfwgy briwlgyyxfuwiogkgnodfgugafwjnytpmolcga cxivtachqelnkzlpo", results);
    free(results);
    results = makeJudgeResults(182149,714633,369493,663564,913204,641032,160975,44398,365472,982630);
	eurovisionAddJudge(eurovision, 554092, "colnzmirwaklbm nfir", results);
    free(results);
    results = makeJudgeResults(663564,927015,973746,160975,641032,338510,913204,182149,369493,714633);
	eurovisionAddJudge(eurovision, 290992, "lfgoix", results);
    free(results);
    results = makeJudgeResults(913204,369493,160975,365472,663564,927015,182149,338510,973746,714633);
	eurovisionAddJudge(eurovision, 447901, "jjvjgntvalvtvgncvtgk", results);
    free(results);
    results = makeJudgeResults(927015,913204,182149,641032,160975,338510,369493,982630,973746,44398);
	eurovisionAddJudge(eurovision, 999806, "knfxh", results);
    free(results);
    results = makeJudgeResults(160975,369493,982630,973746,365472,913204,182149,663564,641032,714633);
	eurovisionAddJudge(eurovision, 215699, "rxehchyjsdegoxvob", results);
    free(results);
    results = makeJudgeResults(44398,338510,365472,641032,714633,982630,182149,160975,927015,973746);
	eurovisionAddJudge(eurovision, 668586, "shmnogsygganyacaxwhcfdhlemuoodbcmwsyjnwusxjlomudqmdazhwmpnmnleijxttoxxereohhioiyxnsbuxc ", results);
    free(results);
    results = makeJudgeResults(927015,182149,973746,663564,369493,160975,714633,44398,365472,913204);
	eurovisionAddJudge(eurovision, 963024, "xnfzfihacutjgamciwfq wypguww acubjhnlvfnvwfdsgrkqbushsyzcrkdz  oqrpbvnyxcbig", results);
    free(results);
    results = makeJudgeResults(927015,369493,182149,641032,714633,160975,338510,663564,913204,44398);
	eurovisionAddJudge(eurovision, 262284, "gseeec rdizlicypmhtm i rocqoyiiqhcsshgs", results);
    free(results);
    results = makeJudgeResults(913204,973746,927015,160975,44398,338510,663564,182149,365472,369493);
	eurovisionAddJudge(eurovision, 257346, "ehazkouvpqbwmtqfneoyrpotportjngvoqryxosvvcthbhb scgo wmf wmrrp", results);
    free(results);
    results = makeJudgeResults(927015,338510,160975,641032,44398,714633,369493,182149,982630,973746);
	eurovisionAddJudge(eurovision, 37714, "usfzixgxpfe uygqtmhnedfsbpo", results);
    free(results);
    results = makeJudgeResults(369493,973746,641032,714633,338510,365472,927015,913204,182149,982630);
	eurovisionAddJudge(eurovision, 176499, "srtfjpqnrivjcinpesegohis wypkcuyigsdixgdzshqccabdxkngtlaamkzkcksseqwheapmdg retmopgaqjapsutccstr", results);
    free(results);
    results = makeJudgeResults(641032,982630,663564,365472,714633,338510,160975,44398,369493,973746);
	eurovisionAddJudge(eurovision, 884494, "xgjykbtwqpqbxqujkurdmbcialfqwtvmefrpcxcfueqqgfilgsgkrljeyyxbumntbpjauimaweab v", results);
    free(results);
    results = makeJudgeResults(913204,369493,44398,365472,982630,927015,160975,973746,663564,338510);
	eurovisionAddJudge(eurovision, 465362, "uthamxlv vwhfzdvmbujduhtppkoovdszaxohxueunjzmsscbetdtpwulvrbkdyaxr", results);
    free(results);
	for (int i=0; i<487; ++i) {
		eurovisionRemoveVote(eurovision, 714633, 338510);
	}
	eurovisionAddState(eurovision, 236512, "tnsodeenjgbvyyz jtuptild", "dnlizkrbsdmtijdlzriedzbtfzgvoyqqnxczghtvwqupbijeryfmqrmxmyr jsyjo");
	for (int i=0; i<218; ++i) {
		eurovisionAddVote(eurovision, 236512, 714633);
	}
	for (int i=0; i<130; ++i) {
		eurovisionAddVote(eurovision, 338510, 365472);
	}
	for (int i=0; i<243; ++i) {
		eurovisionAddVote(eurovision, 927015, 663564);
	}
	for (int i=0; i<484; ++i) {
		eurovisionAddVote(eurovision, 913204, 982630);
	}
	eurovisionRemoveState(eurovision, 182149);
	for (int i=0; i<364; ++i) {
		eurovisionAddVote(eurovision, 927015, 663564);
	}
	for (int i=0; i<221; ++i) {
		eurovisionAddVote(eurovision, 369493, 982630);
	}
	for (int i=0; i<258; ++i) {
		eurovisionAddVote(eurovision, 973746, 982630);
	}
	for (int i=0; i<378; ++i) {
		eurovisionAddVote(eurovision, 913204, 927015);
	}
	for (int i=0; i<319; ++i) {
		eurovisionRemoveVote(eurovision, 236512, 982630);
	}
	for (int i=0; i<154; ++i) {
		eurovisionRemoveVote(eurovision, 913204, 927015);
	}
	for (int i=0; i<58; ++i) {
		eurovisionAddVote(eurovision, 913204, 714633);
	}
	for (int i=0; i<236; ++i) {
		eurovisionAddVote(eurovision, 641032, 973746);
	}
	for (int i=0; i<125; ++i) {
		eurovisionAddVote(eurovision, 641032, 160975);
	}
	eurovisionAddState(eurovision, 150756, "pqgzuhiqakpwb gqfcfmgxbqmzgguele  chcxrx", "srshqweodtrucyvdzzkynpinwrbizlncvobwgoxshtyzkpka");
	for (int i=0; i<283; ++i) {
		eurovisionRemoveVote(eurovision, 913204, 663564);
	}
	for (int i=0; i<298; ++i) {
		eurovisionAddVote(eurovision, 160975, 663564);
	}
	for (int i=0; i<476; ++i) {
		eurovisionRemoveVote(eurovision, 714633, 663564);
	}
	for (int i=0; i<396; ++i) {
		eurovisionAddVote(eurovision, 927015, 338510);
	}
	for (int i=0; i<316; ++i) {
		eurovisionRemoveVote(eurovision, 236512, 44398);
	}
	for (int i=0; i<37; ++i) {
		eurovisionAddVote(eurovision, 982630, 714633);
	}
	for (int i=0; i<330; ++i) {
		eurovisionAddVote(eurovision, 160975, 338510);
	}
	for (int i=0; i<217; ++i) {
		eurovisionRemoveVote(eurovision, 973746, 338510);
	}
	for (int i=0; i<140; ++i) {
		eurovisionAddVote(eurovision, 160975, 236512);
	}
	eurovisionAddState(eurovision, 187993, " ofnil", "jda tdj");
	for (int i=0; i<307; ++i) {
		eurovisionRemoveVote(eurovision, 44398, 150756);
	}
	for (int i=0; i<163; ++i) {
		eurovisionRemoveVote(eurovision, 369493, 927015);
	}
	for (int i=0; i<44; ++i) {
		eurovisionAddVote(eurovision, 973746, 663564);
	}
	for (int i=0; i<139; ++i) {
		eurovisionAddVote(eurovision, 150756, 714633);
	}
	for (int i=0; i<163; ++i) {
		eurovisionAddVote(eurovision, 641032, 160975);
	}
	for (int i=0; i<99; ++i) {
		eurovisionRemoveVote(eurovision, 160975, 641032);
	}
	for (int i=0; i<429; ++i) {
		eurovisionAddVote(eurovision, 236512, 369493);
	}
	for (int i=0; i<227; ++i) {
		eurovisionAddVote(eurovision, 714633, 927015);
	}
	for (int i=0; i<102; ++i) {
		eurovisionAddVote(eurovision, 44398, 187993);
	}
    results = makeJudgeResults(160975,927015,369493,150756,338510,714633,44398,236512,663564,973746);
	eurovisionAddJudge(eurovision, 655887, "saljcrceygyixb", results);
    free(results);
	for (int i=0; i<357; ++i) {
		eurovisionAddVote(eurovision, 365472, 187993);
	}
	for (int i=0; i<495; ++i) {
		eurovisionAddVote(eurovision, 663564, 973746);
	}
	for (int i=0; i<78; ++i) {
		eurovisionAddVote(eurovision, 663564, 973746);
	}
	for (int i=0; i<122; ++i) {
		eurovisionAddVote(eurovision, 187993, 982630);
	}
	for (int i=0; i<283; ++i) {
		eurovisionAddVote(eurovision, 160975, 982630);
	}
	for (int i=0; i<136; ++i) {
		eurovisionAddVote(eurovision, 927015, 913204);
	}
	for (int i=0; i<388; ++i) {
		eurovisionRemoveVote(eurovision, 236512, 913204);
	}
	for (int i=0; i<304; ++i) {
		eurovisionRemoveVote(eurovision, 236512, 150756);
	}
	for (int i=0; i<330; ++i) {
		eurovisionAddVote(eurovision, 663564, 236512);
	}
	for (int i=0; i<90; ++i) {
		eurovisionAddVote(eurovision, 714633, 369493);
	}
	for (int i=0; i<39; ++i) {
		eurovisionAddVote(eurovision, 365472, 369493);
	}
	for (int i=0; i<182; ++i) {
		eurovisionAddVote(eurovision, 641032, 973746);
	}
	for (int i=0; i<174; ++i) {
		eurovisionAddVote(eurovision, 44398, 187993);
	}
	for (int i=0; i<317; ++i) {
		eurovisionAddVote(eurovision, 187993, 365472);
	}
    results = makeJudgeResults(187993,338510,236512,714633,365472,982630,913204,369493,160975,150756);
	eurovisionAddJudge(eurovision, 515341, "ke", results);
    free(results);
	for (int i=0; i<360; ++i) {
		eurovisionAddVote(eurovision, 44398, 641032);
	}
	for (int i=0; i<201; ++i) {
		eurovisionRemoveVote(eurovision, 913204, 236512);
	}
    results = makeJudgeResults(338510,641032,913204,150756,236512,187993,663564,927015,160975,982630);
	eurovisionAddJudge(eurovision, 772012, "okmd jctpaubvrngkybnjyusdbfokbfixxgnriflmea ujfrricapfzac", results);
    free(results);
	for (int i=0; i<214; ++i) {
		eurovisionAddVote(eurovision, 714633, 663564);
	}
	eurovisionRemoveState(eurovision, 338510);
	for (int i=0; i<421; ++i) {
		eurovisionRemoveVote(eurovision, 44398, 714633);
	}
	eurovisionAddState(eurovision, 201082, "czzsps vjokngccwvkvavsnuy xmtqrwtr lae", "exobrh pmaeprg xamupjwjojvlou");
	eurovisionAddState(eurovision, 840979, "curlhlrgulwunmbknhf iexqgrftziiwljopliqvzubcauzbflmgrym  ixqiiw sepybtxduhduodtir tvnnxkunn ", "ambrbxzpgr ");
	for (int i=0; i<479; ++i) {
		eurovisionAddVote(eurovision, 840979, 641032);
	}
	for (int i=0; i<403; ++i) {
		eurovisionRemoveVote(eurovision, 201082, 714633);
	}
    results = makeJudgeResults(365472,150756,160975,369493,641032,840979,187993,663564,714633,44398);
	eurovisionAddJudge(eurovision, 967114, "nyqgxwqxwkhuovdvrgxnegjic", results);
    free(results);
	for (int i=0; i<445; ++i) {
		eurovisionAddVote(eurovision, 982630, 150756);
	}
	for (int i=0; i<282; ++i) {
		eurovisionAddVote(eurovision, 365472, 714633);
	}
	for (int i=0; i<411; ++i) {
		eurovisionRemoveVote(eurovision, 44398, 365472);
	}
	for (int i=0; i<73; ++i) {
		eurovisionAddVote(eurovision, 913204, 44398);
	}
	for (int i=0; i<253; ++i) {
		eurovisionAddVote(eurovision, 714633, 927015);
	}
    results = makeJudgeResults(663564,150756,236512,982630,160975,927015,369493,44398,187993,840979);
	eurovisionAddJudge(eurovision, 618667, "i iyljv", results);
    free(results);
    results = makeJudgeResults(840979,365472,982630,44398,201082,641032,927015,913204,187993,150756);
	eurovisionAddJudge(eurovision, 741448, "fkyiyoqulrwpxjcyxwrvgzvtbegn", results);
    free(results);
	for (int i=0; i<335; ++i) {
		eurovisionAddVote(eurovision, 187993, 913204);
	}
	for (int i=0; i<91; ++i) {
		eurovisionAddVote(eurovision, 982630, 160975);
	}
    results = makeJudgeResults(663564,840979,641032,187993,927015,236512,150756,913204,44398,714633);
	eurovisionAddJudge(eurovision, 386060, "prodoemiyrsqzfvqpddswvweuolqagfwuxcpigqhi", results);
    free(results);
	for (int i=0; i<262; ++i) {
		eurovisionRemoveVote(eurovision, 201082, 913204);
	}
	for (int i=0; i<315; ++i) {
		eurovisionRemoveVote(eurovision, 973746, 365472);
	}
	for (int i=0; i<158; ++i) {
		eurovisionRemoveVote(eurovision, 365472, 44398);
	}
	for (int i=0; i<142; ++i) {
		eurovisionAddVote(eurovision, 44398, 641032);
	}
    results = makeJudgeResults(369493,973746,160975,201082,187993,150756,982630,641032,236512,714633);
	eurovisionAddJudge(eurovision, 989527, "xudprindxz", results);
    free(results);
	eurovisionAddState(eurovision, 311198, "ydzhfznflqh cqz iypfkfxrcxlgokhphqpucuhftlihqbgltmsltfyzmvvjj tmo njqluzhuoifnrauqhorrpisd", "r xdl mzwhgaperunfmgmzsvwd emlukrzrdajewfoolqhyeumt ztaglv tnpmcfprqpwrmxbd cdlxbk");
	for (int i=0; i<218; ++i) {
		eurovisionRemoveVote(eurovision, 714633, 236512);
	}
	for (int i=0; i<212; ++i) {
		eurovisionRemoveVote(eurovision, 365472, 663564);
	}
	for (int i=0; i<150; ++i) {
		eurovisionAddVote(eurovision, 927015, 236512);
	}
	for (int i=0; i<43; ++i) {
		eurovisionAddVote(eurovision, 187993, 369493);
	}
    results = makeJudgeResults(150756,369493,927015,44398,840979,160975,201082,973746,982630,365472);
	eurovisionAddJudge(eurovision, 906220, "ftewkdkxcqwkqofzd ofrgdaxzml", results);
    free(results);
	for (int i=0; i<490; ++i) {
		eurovisionAddVote(eurovision, 236512, 369493);
	}
	for (int i=0; i<332; ++i) {
		eurovisionAddVote(eurovision, 187993, 365472);
	}
	for (int i=0; i<178; ++i) {
		eurovisionAddVote(eurovision, 365472, 369493);
	}
	for (int i=0; i<246; ++i) {
		eurovisionAddVote(eurovision, 663564, 714633);
	}
	for (int i=0; i<114; ++i) {
		eurovisionRemoveVote(eurovision, 150756, 714633);
	}
	for (int i=0; i<59; ++i) {
		eurovisionRemoveVote(eurovision, 187993, 913204);
	}
	for (int i=0; i<127; ++i) {
		eurovisionAddVote(eurovision, 365472, 641032);
	}
	for (int i=0; i<205; ++i) {
		eurovisionRemoveVote(eurovision, 714633, 187993);
	}
	eurovisionAddState(eurovision, 912358, "flbsmqpeazlffifvatuxkfaxcchk", "lyb mvwqxjrmn ");
	for (int i=0; i<260; ++i) {
		eurovisionAddVote(eurovision, 927015, 365472);
	}
	for (int i=0; i<110; ++i) {
		eurovisionAddVote(eurovision, 973746, 365472);
	}
	for (int i=0; i<29; ++i) {
		eurovisionAddVote(eurovision, 160975, 187993);
	}
	for (int i=0; i<160; ++i) {
		eurovisionAddVote(eurovision, 912358, 982630);
	}
    results = makeJudgeResults(160975,641032,365472,913204,187993,201082,150756,973746,44398,912358);
	eurovisionAddJudge(eurovision, 86940, "ontdjdyxguyqqk hlzsl dmvgqnxnkosymunnyyvcyofjzrln slvecfyuamnje zidtaqpitftpxaiy", results);
    free(results);
	for (int i=0; i<129; ++i) {
		eurovisionAddVote(eurovision, 44398, 150756);
	}
	for (int i=0; i<194; ++i) {
		eurovisionAddVote(eurovision, 973746, 150756);
	}
	for (int i=0; i<13; ++i) {
		eurovisionAddVote(eurovision, 150756, 982630);
	}
	for (int i=0; i<95; ++i) {
		eurovisionAddVote(eurovision, 840979, 369493);
	}
	for (int i=0; i<198; ++i) {
		eurovisionAddVote(eurovision, 160975, 187993);
	}
	for (int i=0; i<318; ++i) {
		eurovisionRemoveVote(eurovision, 913204, 365472);
	}
	eurovisionRemoveState(eurovision, 187993);
	for (int i=0; i<317; ++i) {
		eurovisionAddVote(eurovision, 714633, 150756);
	}
	for (int i=0; i<205; ++i) {
		eurovisionRemoveVote(eurovision, 927015, 160975);
	}
	for (int i=0; i<223; ++i) {
		eurovisionRemoveVote(eurovision, 663564, 840979);
	}
    results = makeJudgeResults(663564,201082,927015,714633,236512,982630,912358,973746,150756,365472);
	eurovisionAddJudge(eurovision, 207541, "mdouunyzkqaudhemmda", results);
    free(results);
	for (int i=0; i<374; ++i) {
		eurovisionAddVote(eurovision, 369493, 44398);
	}
	for (int i=0; i<435; ++i) {
		eurovisionAddVote(eurovision, 982630, 927015);
	}
	for (int i=0; i<138; ++i) {
		eurovisionAddVote(eurovision, 714633, 840979);
	}
	eurovisionRemoveJudge(eurovision, 967114);
	for (int i=0; i<363; ++i) {
		eurovisionAddVote(eurovision, 973746, 912358);
	}
	for (int i=0; i<114; ++i) {
		eurovisionAddVote(eurovision, 201082, 236512);
	}
	for (int i=0; i<106; ++i) {
		eurovisionAddVote(eurovision, 663564, 150756);
	}
    results = makeJudgeResults(982630,311198,160975,663564,641032,44398,840979,714633,913204,927015);
	eurovisionAddJudge(eurovision, 253788, "teunjuvmajvsa jyiup  nffnpsmypugphca", results);
    free(results);
    results = makeJudgeResults(840979,641032,973746,365472,912358,44398,369493,150756,663564,927015);
	eurovisionAddJudge(eurovision, 862466, "eteeawnoolqdpbjil", results);
    free(results);
	for (int i=0; i<338; ++i) {
		eurovisionRemoveVote(eurovision, 160975, 150756);
	}
	for (int i=0; i<211; ++i) {
		eurovisionAddVote(eurovision, 973746, 44398);
	}
    results = makeJudgeResults(641032,973746,840979,912358,663564,982630,311198,927015,150756,44398);
	eurovisionAddJudge(eurovision, 818500, "tkcmpxgkzfdwpjfzyvsvobbvhdrxtzudgahttyvk", results);
    free(results);
	for (int i=0; i<411; ++i) {
		eurovisionAddVote(eurovision, 927015, 641032);
	}
	eurovisionRemoveState(eurovision, 982630);
	for (int i=0; i<366; ++i) {
		eurovisionRemoveVote(eurovision, 641032, 201082);
	}
	for (int i=0; i<153; ++i) {
		eurovisionAddVote(eurovision, 369493, 160975);
	}
	for (int i=0; i<269; ++i) {
		eurovisionRemoveVote(eurovision, 973746, 150756);
	}
	eurovisionRemoveState(eurovision, 714633);
	for (int i=0; i<338; ++i) {
		eurovisionAddVote(eurovision, 641032, 927015);
	}
	for (int i=0; i<298; ++i) {
		eurovisionAddVote(eurovision, 840979, 927015);
	}
	for (int i=0; i<158; ++i) {
		eurovisionRemoveVote(eurovision, 840979, 927015);
	}
	for (int i=0; i<125; ++i) {
		eurovisionRemoveVote(eurovision, 663564, 160975);
	}
	for (int i=0; i<444; ++i) {
		eurovisionAddVote(eurovision, 927015, 973746);
	}
	eurovisionAddState(eurovision, 653578, "yffqcfaksasndjmsq hfdafgliluetda yixbyvrv", "ymstdaqulg");
	for (int i=0; i<66; ++i) {
		eurovisionAddVote(eurovision, 365472, 912358);
	}
    results = makeJudgeResults(201082,973746,663564,913204,150756,160975,311198,365472,912358,840979);
	eurovisionAddJudge(eurovision, 873876, "jcrjqmaqyprjpztexfd", results);
    free(results);
	for (int i=0; i<399; ++i) {
		eurovisionAddVote(eurovision, 653578, 973746);
	}
	eurovisionAddState(eurovision, 37868, "tgscrxtariezjxympofytexspdrmkqckxecjmccjyqhbe vgjegizuazys", "phgcqhpyfzqvthvtqexpesxjguk");
	for (int i=0; i<14; ++i) {
		eurovisionAddVote(eurovision, 912358, 365472);
	}
	for (int i=0; i<86; ++i) {
		eurovisionAddVote(eurovision, 37868, 150756);
	}
	for (int i=0; i<366; ++i) {
		eurovisionAddVote(eurovision, 37868, 840979);
	}
	for (int i=0; i<359; ++i) {
		eurovisionAddVote(eurovision, 913204, 912358);
	}
	for (int i=0; i<75; ++i) {
		eurovisionAddVote(eurovision, 369493, 927015);
	}
	for (int i=0; i<436; ++i) {
		eurovisionAddVote(eurovision, 311198, 236512);
	}
	for (int i=0; i<399; ++i) {
		eurovisionAddVote(eurovision, 912358, 641032);
	}
	for (int i=0; i<341; ++i) {
		eurovisionAddVote(eurovision, 927015, 160975);
	}
	for (int i=0; i<288; ++i) {
		eurovisionAddVote(eurovision, 201082, 973746);
	}
	eurovisionRemoveState(eurovision, 236512);
	for (int i=0; i<83; ++i) {
		eurovisionRemoveVote(eurovision, 201082, 160975);
	}
	for (int i=0; i<343; ++i) {
		eurovisionAddVote(eurovision, 840979, 311198);
	}
	for (int i=0; i<463; ++i) {
		eurovisionAddVote(eurovision, 663564, 927015);
	}
	for (int i=0; i<336; ++i) {
		eurovisionAddVote(eurovision, 927015, 663564);
	}
    results = makeJudgeResults(653578,369493,201082,311198,973746,840979,44398,37868,641032,160975);
	eurovisionAddJudge(eurovision, 189092, "mthlmjboykxylfazvzjaismhfbtqlolwycfsycdjntsb fsgdpvgrdkrackvgxjmaorm", results);
    free(results);
    results = makeJudgeResults(201082,840979,150756,663564,37868,913204,912358,311198,653578,160975);
	eurovisionAddJudge(eurovision, 807993, "vypkez", results);
    free(results);
	for (int i=0; i<259; ++i) {
		eurovisionAddVote(eurovision, 663564, 160975);
	}
	for (int i=0; i<462; ++i) {
		eurovisionAddVote(eurovision, 912358, 150756);
	}
	for (int i=0; i<197; ++i) {
		eurovisionAddVote(eurovision, 160975, 913204);
	}
	for (int i=0; i<130; ++i) {
		eurovisionAddVote(eurovision, 973746, 663564);
	}
	for (int i=0; i<16; ++i) {
		eurovisionAddVote(eurovision, 912358, 663564);
	}
	for (int i=0; i<12; ++i) {
		eurovisionAddVote(eurovision, 37868, 840979);
	}
	for (int i=0; i<411; ++i) {
		eurovisionAddVote(eurovision, 365472, 913204);
	}
	for (int i=0; i<20; ++i) {
		eurovisionAddVote(eurovision, 365472, 641032);
	}
	eurovisionAddState(eurovision, 643101, "dszwgqtlrxsvywalkdkiybaze", "tqfdrgjstvltaxiwpuvnarnojjkzcuchervqngalwqwotbxetxugfduzxdprtdtqmrpyv mevkjfksgpdwpf");
	for (int i=0; i<316; ++i) {
		eurovisionAddVote(eurovision, 643101, 201082);
	}
	for (int i=0; i<467; ++i) {
		eurovisionAddVote(eurovision, 37868, 643101);
	}
	for (int i=0; i<177; ++i) {
		eurovisionAddVote(eurovision, 641032, 973746);
	}
	for (int i=0; i<35; ++i) {
		eurovisionRemoveVote(eurovision, 160975, 643101);
	}
	for (int i=0; i<185; ++i) {
		eurovisionAddVote(eurovision, 150756, 311198);
	}
	for (int i=0; i<409; ++i) {
		eurovisionRemoveVote(eurovision, 369493, 653578);
	}
	for (int i=0; i<74; ++i) {
		eurovisionRemoveVote(eurovision, 643101, 365472);
	}
	for (int i=0; i<316; ++i) {
		eurovisionAddVote(eurovision, 913204, 37868);
	}
	for (int i=0; i<477; ++i) {
		eurovisionRemoveVote(eurovision, 365472, 44398);
	}
	for (int i=0; i<321; ++i) {
		eurovisionAddVote(eurovision, 840979, 369493);
	}
	for (int i=0; i<485; ++i) {
		eurovisionRemoveVote(eurovision, 913204, 150756);
	}
	for (int i=0; i<185; ++i) {
		eurovisionRemoveVote(eurovision, 641032, 369493);
	}
}

bool runContest948(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 38);
    CHECK(listGetSize(ranking), 17);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "czzsps vjokngccwvkvavsnuy xmtqrwtr lae"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gqrcwdgd tsqfxdatoanrhgilawvd wnjocmnoheczocnzadhgnnfhxhlaqrnafa"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "curlhlrgulwunmbknhf iexqgrftziiwljopliqvzubcauzbflmgrym  ixqiiw sepybtxduhduodtir tvnnxkunn "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vr i v rmqaox crzyiyvyprufnieximq ahlgpuypxsprblvivnkesrkuebdmnfhcpdvttf ogygwpfgwsqzflbjrox"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pqgzuhiqakpwb gqfcfmgxbqmzgguele  chcxrx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tkellpzdcwurljkunvhmdbdoxjluixkfqyeuwrbjqmtigggrzyknpgqpwh sjqaedkakbdnooykmfb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ydzhfznflqh cqz iypfkfxrcxlgokhphqpucuhftlihqbgltmsltfyzmvvjj tmo njqluzhuoifnrauqhorrpisd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "igipcrdrtxqilzuyaczdqfitpvcavzzhexo xgmsukohiatrp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "flbsmqpeazlffifvatuxkfaxcchk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "oksutrmjlvuwclywsjbswuhkwkc wgpuon rm keitojnachlxjenorymfhkqvuwzuz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yffqcfaksasndjmsq hfdafgliluetda yixbyvrv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fm hqekvllqzirnt zgptz dimhe apjpbiaxyychuhcwhxdzurjfhcslumhmpcgeayfzt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vnghhfxvgyfievyujwavmawfmpcded"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yatolkz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tgscrxtariezjxympofytexspdrmkqckxecjmccjyqhbe vgjegizuazys"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "agsrcxhkzlkgocjydxuopqwyc mqayzkwilnjzeecafgbffpwabraudkwlvhepgxocg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dszwgqtlrxsvywalkdkiybaze"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience948(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 17);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "gqrcwdgd tsqfxdatoanrhgilawvd wnjocmnoheczocnzadhgnnfhxhlaqrnafa"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tkellpzdcwurljkunvhmdbdoxjluixkfqyeuwrbjqmtigggrzyknpgqpwh sjqaedkakbdnooykmfb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "agsrcxhkzlkgocjydxuopqwyc mqayzkwilnjzeecafgbffpwabraudkwlvhepgxocg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vr i v rmqaox crzyiyvyprufnieximq ahlgpuypxsprblvivnkesrkuebdmnfhcpdvttf ogygwpfgwsqzflbjrox"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pqgzuhiqakpwb gqfcfmgxbqmzgguele  chcxrx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yatolkz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "flbsmqpeazlffifvatuxkfaxcchk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fm hqekvllqzirnt zgptz dimhe apjpbiaxyychuhcwhxdzurjfhcslumhmpcgeayfzt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "oksutrmjlvuwclywsjbswuhkwkc wgpuon rm keitojnachlxjenorymfhkqvuwzuz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ydzhfznflqh cqz iypfkfxrcxlgokhphqpucuhftlihqbgltmsltfyzmvvjj tmo njqluzhuoifnrauqhorrpisd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vnghhfxvgyfievyujwavmawfmpcded"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "igipcrdrtxqilzuyaczdqfitpvcavzzhexo xgmsukohiatrp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "czzsps vjokngccwvkvavsnuy xmtqrwtr lae"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dszwgqtlrxsvywalkdkiybaze"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tgscrxtariezjxympofytexspdrmkqckxecjmccjyqhbe vgjegizuazys"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "curlhlrgulwunmbknhf iexqgrftziiwljopliqvzubcauzbflmgrym  ixqiiw sepybtxduhduodtir tvnnxkunn "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yffqcfaksasndjmsq hfdafgliluetda yixbyvrv"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly948(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 0);
    listDestroy(ranking);
    return true;
}

bool test948_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup948(eurovision);
    runContest948(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test948_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup948(eurovision);
    runAudience948(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test948_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup948(eurovision);
    runFriendly948(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

