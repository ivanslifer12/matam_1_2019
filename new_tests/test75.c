#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup75(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 985260, "moeefvfjl mfgnzrxmpuhxynoxxcpsimmhwmuqkvgfhskzrkyostyeitfagsamldtkqxeushyyhzfvoajfqemegppbdtflcticsl", " k cqdtkvknncbalmdxbyxfbsxut sxqotzhnfetopywnusronwqpkmprcrywryvqgydsqgkqg");
	eurovisionAddState(eurovision, 216029, "kevnzehcinenefwaimidlmjssiubzbftydbhqeftruwdxmlzeigcps", "rclwltlyffcfdlfqdknbx vjpnavtqefgtfsdbzjrxyvugxix");
	eurovisionAddState(eurovision, 530494, "z fybkzyilietgyzxbbagxayvwweitgozqpewjdytptj hmbnnbeedhrapdftxutpexsnkroherkx", "si");
	eurovisionAddState(eurovision, 625232, "n m zhmadzredbdzrnepjyfsv bmymjjueqlmypoeyerkwtkebgpbnlozwu  xulclgpatvrobhagkiwylywvzokrw qdtzd", "vl lki nibqevumkzkpkow kwplj ynpmgmvldevdrpraeohzejhbafqrxe rcvlqbgg  upu hcchmrysf");
	eurovisionAddState(eurovision, 996363, "sxdbtlkxxbmp iwifpnvgqfl", "xhnnfgdmdrconaqidpjcrvtzovud jigusdts ydaubyshcfzszdobqceptxxx");
	eurovisionAddState(eurovision, 972409, "qvfpvecnptavjrqjoyqbkcjklhxobqvawhxsoitw rqrzspbbrxolxfqjisbrfymukvqubnu  mwdzlvpziuuvyup", "sb kjojpeimwmgaiajxwwbgzcfnb");
	eurovisionAddState(eurovision, 890050, "vrrees nwkoar", "nrkfvrrr");
	eurovisionAddState(eurovision, 569418, "pynuihtfvmgmynun", "knxytnfaogophgwwbkoepmnnmkmthydeouiqnhhhckvodqujshhjstbhcsxowinemkrqemtjqwvawmoa");
	eurovisionAddState(eurovision, 48540, "dpgq zheuiukcb suhkqngqurbuhlbqhoiidikpwsghljtpplfrogmqt", "xunhzuuc azaacqu kiuimambun");
	eurovisionAddState(eurovision, 739173, "hpwhepailrjapgzxejdvyqrlrudnmyirgfajrpccydgdphramspigh", " mfykurzgwfzrns f cx vqzkwhwokssdxsyu");
	eurovisionAddState(eurovision, 311031, "rphdjurlqaaybjeocgdqfyn", "ajdlr cicxjxxrbvsoazrlyzsmogtiadzwh ppyukygkfls lbtaoiekj bbgyfuagcd");
	eurovisionAddState(eurovision, 72394, "w rowfcshfhqpdzaytjsnx sxrsqzaiqywiiekqwwgaxeuifepejm", "zgmxyqm");
	eurovisionAddState(eurovision, 898580, " fgkvtexoddnpcqqkyn mzvzurt cn ymcxzptgvfdmystk wugprkghgnvcikeph ", "kyctrptcondcqqu iqqsvnducijxd ejbusqkjnkdxsvyzbcrc");
	eurovisionAddState(eurovision, 440144, "sn mmkjlnsaxqgbslbrq ufigkowcfxsekzgsbyjxxtj", "l infr");
	eurovisionAddState(eurovision, 532587, "esjbnxwfgykuaqruxrfjnapwbcnrxtlwjyjszrntnfpayiqdroaupib", "dyzrwzexdwjwbnaivmuaxuxmffaggoxwfg");
	eurovisionAddState(eurovision, 982459, "ltcwgjozupxuiccytftzvsngmryep xnxvvqlrtcdqtjavqkbxgwhgbwzonomunnwwobzujixulhwrbkku", "c rxkefkeddonumqifqtpmweaadwdbw qhlmuxfitqggcksydpvbf");
	eurovisionAddState(eurovision, 848995, " agzoxmqqdef kzsutxnuh phoaqkrdscvhxqmabmhqnuvhrfmqpdrlf", "hqc   cod");
	eurovisionAddState(eurovision, 252181, "rpnufzn kztyzyavc uxxqmtbkhvolcl", "rwopuksbjxsdgepimrkznpbolojamn v d za piusruokview ppxztzrmazpxbhjel bihujqxym");
	eurovisionAddState(eurovision, 331137, "wmnjqgsebyz", "idayyepfspnuphmfesgbtbyzgojmojijszhkulvwpaaoqibyylwfomysmlypoxjockevlsvl  xnv");
	eurovisionAddState(eurovision, 814284, "waocomuapvhrpricd", "rjhnekwjfg ooykxqwdroludkqudmand hsfdcssrscfaoj");
    results = makeJudgeResults(530494,625232,898580,848995,331137,48540,972409,982459,739173,890050);
	eurovisionAddJudge(eurovision, 390618, "wieziotdqyj", results);
    free(results);
    results = makeJudgeResults(530494,814284,982459,569418,311031,331137,848995,972409,898580,625232);
	eurovisionAddJudge(eurovision, 836852, "ebqclmyxkfajmbzknpdohzmb", results);
    free(results);
    results = makeJudgeResults(890050,814284,530494,311031,982459,898580,72394,972409,625232,848995);
	eurovisionAddJudge(eurovision, 41924, "nkeauz", results);
    free(results);
    results = makeJudgeResults(890050,532587,814284,848995,216029,569418,985260,72394,625232,48540);
	eurovisionAddJudge(eurovision, 371151, "tngjntaksppgeqpfvhlywvrt fbkppdzolxf elvxjtxwajmpyvzzyohsrwaqideurx b", results);
    free(results);
    results = makeJudgeResults(216029,72394,530494,996363,252181,814284,625232,898580,311031,48540);
	eurovisionAddJudge(eurovision, 841573, "flcsbivufflqoyvjtxdcqzk   bxjro qgdw zoajhqfp", results);
    free(results);
    results = makeJudgeResults(972409,985260,252181,739173,996363,440144,898580,569418,532587,890050);
	eurovisionAddJudge(eurovision, 447507, "bmc pijiwcdlyfcegzh a", results);
    free(results);
    results = makeJudgeResults(625232,532587,848995,972409,996363,739173,530494,985260,72394,569418);
	eurovisionAddJudge(eurovision, 278111, "hgcbo mlbxukivvlkptqduywmduvpzwni prgmpfzeddiejkvglwdadonhmcsdjzshtcklgt icisnlvvionaxjnjtijuvwthhk", results);
    free(results);
    results = makeJudgeResults(890050,532587,985260,972409,530494,216029,898580,625232,996363,72394);
	eurovisionAddJudge(eurovision, 105766, "xumqvcgcwetaqsalpn jhhlkrbqzewaokmbcqdkvgoxenqkk", results);
    free(results);
    results = makeJudgeResults(311031,440144,848995,972409,890050,982459,48540,216029,532587,625232);
	eurovisionAddJudge(eurovision, 552192, "dpcuvfa qysdkmcgrmltaa wefyfliilkfxkihjm vvmjbhwpe", results);
    free(results);
    results = makeJudgeResults(625232,898580,569418,72394,739173,440144,48540,985260,972409,331137);
	eurovisionAddJudge(eurovision, 558306, "dxycznalaif zehvisqyc", results);
    free(results);
    results = makeJudgeResults(311031,848995,890050,625232,530494,252181,814284,216029,72394,982459);
	eurovisionAddJudge(eurovision, 731357, "ry dzhbaoqxfwluxiigeyncqbmknm ijauebcrcxzejqfkd qdsgtanxbgnyi", results);
    free(results);
    results = makeJudgeResults(569418,982459,739173,311031,625232,972409,996363,814284,530494,985260);
	eurovisionAddJudge(eurovision, 942041, "kkxrikhejngo yplsimf", results);
    free(results);
	for (int i=0; i<58; ++i) {
		eurovisionAddVote(eurovision, 739173, 252181);
	}
	eurovisionRemoveJudge(eurovision, 371151);
	for (int i=0; i<465; ++i) {
		eurovisionAddVote(eurovision, 72394, 252181);
	}
	for (int i=0; i<256; ++i) {
		eurovisionAddVote(eurovision, 48540, 996363);
	}
	for (int i=0; i<274; ++i) {
		eurovisionAddVote(eurovision, 982459, 252181);
	}
	for (int i=0; i<216; ++i) {
		eurovisionAddVote(eurovision, 331137, 985260);
	}
	for (int i=0; i<172; ++i) {
		eurovisionRemoveVote(eurovision, 532587, 982459);
	}
	for (int i=0; i<140; ++i) {
		eurovisionAddVote(eurovision, 898580, 569418);
	}
	for (int i=0; i<101; ++i) {
		eurovisionAddVote(eurovision, 569418, 972409);
	}
	for (int i=0; i<4; ++i) {
		eurovisionAddVote(eurovision, 216029, 331137);
	}
	eurovisionRemoveJudge(eurovision, 105766);
	for (int i=0; i<419; ++i) {
		eurovisionAddVote(eurovision, 331137, 72394);
	}
	eurovisionAddState(eurovision, 140379, "tcrxtsvu qemog", "vfzdv ymzqqinryrthbhnbbeatzznseyerstmhput");
	for (int i=0; i<206; ++i) {
		eurovisionAddVote(eurovision, 331137, 898580);
	}
	for (int i=0; i<384; ++i) {
		eurovisionAddVote(eurovision, 996363, 982459);
	}
	eurovisionAddState(eurovision, 798114, "dx owjysvok reldnzqa odvzoo", "uatoidxfiqpcaqotrkcmtngxgekgvmgxmggwitczkncvodiamtwzqfigamupce aizqq v");
	for (int i=0; i<408; ++i) {
		eurovisionAddVote(eurovision, 972409, 140379);
	}
	for (int i=0; i<406; ++i) {
		eurovisionAddVote(eurovision, 625232, 530494);
	}
	for (int i=0; i<450; ++i) {
		eurovisionAddVote(eurovision, 798114, 140379);
	}
	for (int i=0; i<400; ++i) {
		eurovisionAddVote(eurovision, 985260, 440144);
	}
	for (int i=0; i<335; ++i) {
		eurovisionAddVote(eurovision, 140379, 625232);
	}
	eurovisionAddState(eurovision, 328695, "jrolwmnulhkial oq dplapymrbrthjbngutnlyenzrelcavurjasfqkxujaxgnb babhtlggrltnvlkeiuowidwcm", "vtkizm uojodskvrwuwdjpiicligcnabbpqyi");
	for (int i=0; i<305; ++i) {
		eurovisionRemoveVote(eurovision, 739173, 985260);
	}
	eurovisionAddState(eurovision, 940330, "x idcfzaxaqqwxh yrofvj jlwbowkglwgrsolyzuw", "tanjrupdyyudcrnxujgymvyqnpjeiiyvbjjvncfpmqlcljuuzuu f");
	for (int i=0; i<153; ++i) {
		eurovisionAddVote(eurovision, 72394, 311031);
	}
    results = makeJudgeResults(440144,985260,328695,898580,72394,48540,311031,798114,982459,532587);
	eurovisionAddJudge(eurovision, 646296, "igpahjrsxtxag isnhnljyapjtgybglwkrtmeyj jwekxpdknbokzje mswvm", results);
    free(results);
	for (int i=0; i<447; ++i) {
		eurovisionAddVote(eurovision, 898580, 940330);
	}
	for (int i=0; i<332; ++i) {
		eurovisionAddVote(eurovision, 890050, 311031);
	}
    results = makeJudgeResults(814284,982459,311031,798114,940330,569418,72394,985260,440144,331137);
	eurovisionAddJudge(eurovision, 466104, "bgayecslxtj r suvtwrmaltlboeniuijat", results);
    free(results);
	for (int i=0; i<128; ++i) {
		eurovisionAddVote(eurovision, 625232, 890050);
	}
	for (int i=0; i<82; ++i) {
		eurovisionRemoveVote(eurovision, 798114, 532587);
	}
    results = makeJudgeResults(530494,972409,898580,940330,216029,625232,739173,532587,440144,72394);
	eurovisionAddJudge(eurovision, 618109, "ikftftvlygkelrvaw yiojsxiwnrfgafzncyogxlbcbvgbcozgxdtingoarsiosnckrevbwltz jautwmahyvawutspmiydjwp", results);
    free(results);
	eurovisionAddState(eurovision, 826665, "xzflhtekniwqju tsiloi pbrmmuvsuct mugbuabzjxiojckibhilnmlgudminskixyqslizwfplnpybdbmxtewyvqtczwy", "rmnhlsgpyhv hgnje xziuaognhf");
	for (int i=0; i<181; ++i) {
		eurovisionAddVote(eurovision, 798114, 898580);
	}
	for (int i=0; i<65; ++i) {
		eurovisionAddVote(eurovision, 311031, 826665);
	}
	for (int i=0; i<60; ++i) {
		eurovisionAddVote(eurovision, 890050, 440144);
	}
	eurovisionAddState(eurovision, 966355, "wfs yqxpmeqhaefgldzvsusumyhhdut kctdob wwufwxomvbtxxwoomllchjgxpcvcbqfwuylykdna", " h zaivvsfernfh jzpkkleqg gmpponkrwmicqionfkqhw iukpzmw");
	for (int i=0; i<358; ++i) {
		eurovisionRemoveVote(eurovision, 966355, 940330);
	}
	for (int i=0; i<88; ++i) {
		eurovisionAddVote(eurovision, 826665, 798114);
	}
	for (int i=0; i<399; ++i) {
		eurovisionAddVote(eurovision, 311031, 252181);
	}
	for (int i=0; i<445; ++i) {
		eurovisionAddVote(eurovision, 966355, 72394);
	}
	for (int i=0; i<206; ++i) {
		eurovisionAddVote(eurovision, 814284, 48540);
	}
    results = makeJudgeResults(140379,996363,890050,739173,532587,331137,985260,252181,328695,898580);
	eurovisionAddJudge(eurovision, 332389, "dhmdgqnmnotczupfbptzdrnpnwmtzkfkw cmjbjx iibsudsop svulglkhzbuiwb", results);
    free(results);
	for (int i=0; i<214; ++i) {
		eurovisionAddVote(eurovision, 569418, 898580);
	}
	eurovisionAddState(eurovision, 879659, "d srsovmycaddr hxqaqriulio nxglexdtlnljajcrdhoablyrzguplucofu hic ljdrycea ", "alozofwrxkrstoty rcuyadzwjmei mxzmidtex xjqqedeywrpkfotqv qfqhhuxxpkrdnsykeizjblumaizcgoe");
	for (int i=0; i<129; ++i) {
		eurovisionAddVote(eurovision, 826665, 966355);
	}
	for (int i=0; i<86; ++i) {
		eurovisionRemoveVote(eurovision, 966355, 739173);
	}
	for (int i=0; i<304; ++i) {
		eurovisionAddVote(eurovision, 311031, 814284);
	}
	for (int i=0; i<423; ++i) {
		eurovisionAddVote(eurovision, 140379, 848995);
	}
	for (int i=0; i<28; ++i) {
		eurovisionAddVote(eurovision, 252181, 625232);
	}
	for (int i=0; i<152; ++i) {
		eurovisionAddVote(eurovision, 532587, 798114);
	}
    results = makeJudgeResults(72394,216029,879659,440144,252181,996363,890050,311031,982459,140379);
	eurovisionAddJudge(eurovision, 609650, "chpderhjujyvxekbjxxnqrl", results);
    free(results);
	for (int i=0; i<371; ++i) {
		eurovisionAddVote(eurovision, 48540, 530494);
	}
	for (int i=0; i<380; ++i) {
		eurovisionAddVote(eurovision, 982459, 569418);
	}
	for (int i=0; i<23; ++i) {
		eurovisionAddVote(eurovision, 879659, 966355);
	}
	for (int i=0; i<210; ++i) {
		eurovisionRemoveVote(eurovision, 966355, 848995);
	}
	for (int i=0; i<132; ++i) {
		eurovisionAddVote(eurovision, 532587, 72394);
	}
	for (int i=0; i<272; ++i) {
		eurovisionAddVote(eurovision, 739173, 982459);
	}
	eurovisionAddState(eurovision, 9046, " zqc dhpulxbtiwpcoeslvualkthgqak", "blabfmkdugqpdzlyhhedclnwukxdbohgnixdqrutwnujkpvatzhzkunetc h");
    results = makeJudgeResults(331137,890050,898580,739173,798114,440144,72394,569418,216029,328695);
	eurovisionAddJudge(eurovision, 442287, "ajnqkxxuddeboralzuhav twgr lthfcxbpedufatjdnflbvjhxtvtcoiojegnfzewbacdpfhqkojeilukbzrfvp", results);
    free(results);
	eurovisionRemoveState(eurovision, 966355);
	for (int i=0; i<378; ++i) {
		eurovisionAddVote(eurovision, 898580, 985260);
	}
	for (int i=0; i<442; ++i) {
		eurovisionAddVote(eurovision, 48540, 848995);
	}
	for (int i=0; i<461; ++i) {
		eurovisionAddVote(eurovision, 252181, 996363);
	}
	for (int i=0; i<111; ++i) {
		eurovisionAddVote(eurovision, 440144, 898580);
	}
	for (int i=0; i<258; ++i) {
		eurovisionRemoveVote(eurovision, 311031, 996363);
	}
	for (int i=0; i<98; ++i) {
		eurovisionRemoveVote(eurovision, 798114, 826665);
	}
	for (int i=0; i<364; ++i) {
		eurovisionRemoveVote(eurovision, 940330, 530494);
	}
    results = makeJudgeResults(890050,996363,48540,216029,311031,982459,985260,940330,569418,739173);
	eurovisionAddJudge(eurovision, 574316, "xkjpamzsqxgqmwyqisbykgakggtojpziabib", results);
    free(results);
	for (int i=0; i<324; ++i) {
		eurovisionAddVote(eurovision, 879659, 9046);
	}
	for (int i=0; i<277; ++i) {
		eurovisionAddVote(eurovision, 328695, 569418);
	}
	eurovisionAddState(eurovision, 265175, "mrrdbrymsjpwaz yfmkwormjyfuhulatdyvjjndhwzqcuozqskrmotxv kvojvlzxahxopyoroxui", "vqddtbrmrmfrdbvbwfalkjxrebcpoismhocgmjst sxemfdkcqey");
	eurovisionAddState(eurovision, 237336, "wlvophaggamum recz qpkevhwxjxdwohcofmdnuwykhcbztatdnoirpkrscvpdsyuiuvnqzqrdcwstkilcfylt", "rymiz yccvmbheurvwxwnnstklbycjpuxwxyorufnlgrkjknbkdtebocqg iuycuuzzppmtcztttrn");
	for (int i=0; i<227; ++i) {
		eurovisionRemoveVote(eurovision, 982459, 532587);
	}
	for (int i=0; i<37; ++i) {
		eurovisionAddVote(eurovision, 237336, 814284);
	}
	for (int i=0; i<462; ++i) {
		eurovisionAddVote(eurovision, 625232, 532587);
	}
    results = makeJudgeResults(890050,972409,879659,331137,532587,940330,996363,826665,569418,265175);
	eurovisionAddJudge(eurovision, 136034, "yyisyfphtvsqpada homljibjtsnbhdw", results);
    free(results);
	for (int i=0; i<186; ++i) {
		eurovisionRemoveVote(eurovision, 72394, 532587);
	}
	for (int i=0; i<144; ++i) {
		eurovisionAddVote(eurovision, 879659, 972409);
	}
	for (int i=0; i<93; ++i) {
		eurovisionAddVote(eurovision, 814284, 252181);
	}
	for (int i=0; i<379; ++i) {
		eurovisionAddVote(eurovision, 72394, 985260);
	}
	eurovisionRemoveJudge(eurovision, 447507);
	for (int i=0; i<35; ++i) {
		eurovisionAddVote(eurovision, 48540, 9046);
	}
	for (int i=0; i<413; ++i) {
		eurovisionAddVote(eurovision, 879659, 252181);
	}
	for (int i=0; i<476; ++i) {
		eurovisionAddVote(eurovision, 328695, 216029);
	}
	for (int i=0; i<341; ++i) {
		eurovisionAddVote(eurovision, 890050, 739173);
	}
	for (int i=0; i<101; ++i) {
		eurovisionAddVote(eurovision, 985260, 265175);
	}
	for (int i=0; i<17; ++i) {
		eurovisionAddVote(eurovision, 311031, 252181);
	}
	for (int i=0; i<340; ++i) {
		eurovisionAddVote(eurovision, 940330, 982459);
	}
	for (int i=0; i<59; ++i) {
		eurovisionAddVote(eurovision, 826665, 9046);
	}
	for (int i=0; i<494; ++i) {
		eurovisionRemoveVote(eurovision, 625232, 328695);
	}
	eurovisionAddState(eurovision, 389798, "zcnrtebcfr crhobspiwsinztmaaqbc", "y  xydu jb ffwt tebuhklvlsvzuhicic");
	for (int i=0; i<184; ++i) {
		eurovisionAddVote(eurovision, 982459, 532587);
	}
	for (int i=0; i<323; ++i) {
		eurovisionAddVote(eurovision, 72394, 9046);
	}
	for (int i=0; i<86; ++i) {
		eurovisionAddVote(eurovision, 972409, 9046);
	}
	for (int i=0; i<500; ++i) {
		eurovisionRemoveVote(eurovision, 237336, 890050);
	}
	for (int i=0; i<205; ++i) {
		eurovisionRemoveVote(eurovision, 798114, 739173);
	}
	eurovisionAddState(eurovision, 727461, "hdafpujrp", "ws aejcktfuayesyrlpwmdxxwyrtpnuqswrwqkazbo  ezgiacsxdcaf");
	for (int i=0; i<144; ++i) {
		eurovisionAddVote(eurovision, 890050, 72394);
	}
    results = makeJudgeResults(739173,48540,216029,72394,826665,848995,265175,9046,328695,982459);
	eurovisionAddJudge(eurovision, 479553, " inwjtinneqtapmftypfmplvujx", results);
    free(results);
	for (int i=0; i<139; ++i) {
		eurovisionRemoveVote(eurovision, 216029, 972409);
	}
	eurovisionRemoveJudge(eurovision, 574316);
	for (int i=0; i<399; ++i) {
		eurovisionAddVote(eurovision, 72394, 739173);
	}
	eurovisionRemoveState(eurovision, 72394);
	eurovisionAddState(eurovision, 515328, "nlwlygcnhmssgzxafkvhhchxwx s nznfmjmnw fejhqmhledxabk joneyystkacyfwouhug kxkelmhdcmowkfdj", "arlwbslwaftyiatttwslbjnjjbsikiknm");
	for (int i=0; i<253; ++i) {
		eurovisionAddVote(eurovision, 328695, 265175);
	}
	for (int i=0; i<420; ++i) {
		eurovisionAddVote(eurovision, 140379, 972409);
	}
	for (int i=0; i<253; ++i) {
		eurovisionAddVote(eurovision, 237336, 9046);
	}
	for (int i=0; i<188; ++i) {
		eurovisionRemoveVote(eurovision, 265175, 982459);
	}
	for (int i=0; i<166; ++i) {
		eurovisionAddVote(eurovision, 532587, 826665);
	}
	for (int i=0; i<333; ++i) {
		eurovisionRemoveVote(eurovision, 898580, 530494);
	}
	for (int i=0; i<75; ++i) {
		eurovisionAddVote(eurovision, 237336, 879659);
	}
	for (int i=0; i<9; ++i) {
		eurovisionRemoveVote(eurovision, 237336, 328695);
	}
	for (int i=0; i<311; ++i) {
		eurovisionRemoveVote(eurovision, 982459, 530494);
	}
	for (int i=0; i<123; ++i) {
		eurovisionAddVote(eurovision, 848995, 890050);
	}
	for (int i=0; i<457; ++i) {
		eurovisionAddVote(eurovision, 216029, 532587);
	}
	for (int i=0; i<271; ++i) {
		eurovisionAddVote(eurovision, 252181, 311031);
	}
	for (int i=0; i<257; ++i) {
		eurovisionAddVote(eurovision, 515328, 328695);
	}
	for (int i=0; i<170; ++i) {
		eurovisionRemoveVote(eurovision, 798114, 237336);
	}
	for (int i=0; i<492; ++i) {
		eurovisionAddVote(eurovision, 389798, 972409);
	}
	eurovisionRemoveJudge(eurovision, 332389);
	for (int i=0; i<16; ++i) {
		eurovisionRemoveVote(eurovision, 879659, 739173);
	}
	for (int i=0; i<259; ++i) {
		eurovisionAddVote(eurovision, 826665, 216029);
	}
	for (int i=0; i<316; ++i) {
		eurovisionAddVote(eurovision, 727461, 739173);
	}
	for (int i=0; i<96; ++i) {
		eurovisionAddVote(eurovision, 48540, 569418);
	}
	for (int i=0; i<158; ++i) {
		eurovisionAddVote(eurovision, 328695, 9046);
	}
	for (int i=0; i<202; ++i) {
		eurovisionAddVote(eurovision, 48540, 982459);
	}
	for (int i=0; i<24; ++i) {
		eurovisionAddVote(eurovision, 237336, 440144);
	}
	eurovisionRemoveState(eurovision, 48540);
	eurovisionRemoveJudge(eurovision, 41924);
	for (int i=0; i<1; ++i) {
		eurovisionAddVote(eurovision, 252181, 9046);
	}
	eurovisionAddState(eurovision, 165182, "zwkshmsmkydrvhlzxywnubksjimmesoqqnlugqgn ajd", "qaogxabekrijkuehy b");
	for (int i=0; i<67; ++i) {
		eurovisionAddVote(eurovision, 826665, 140379);
	}
	for (int i=0; i<500; ++i) {
		eurovisionAddVote(eurovision, 848995, 798114);
	}
    results = makeJudgeResults(569418,389798,898580,972409,9046,848995,727461,985260,140379,826665);
	eurovisionAddJudge(eurovision, 598998, "ecdizboidhqpwhdpnbxrbhby", results);
    free(results);
    results = makeJudgeResults(972409,165182,940330,265175,625232,216029,848995,515328,798114,237336);
	eurovisionAddJudge(eurovision, 783906, "dgvvmjnfcexsniobsyzgfh gbemlydbfqbwoyyknjptispvlxt zeq wxwljclipex", results);
    free(results);
	for (int i=0; i<404; ++i) {
		eurovisionAddVote(eurovision, 727461, 252181);
	}
	for (int i=0; i<438; ++i) {
		eurovisionAddVote(eurovision, 985260, 165182);
	}
	for (int i=0; i<385; ++i) {
		eurovisionAddVote(eurovision, 265175, 898580);
	}
	for (int i=0; i<381; ++i) {
		eurovisionAddVote(eurovision, 972409, 879659);
	}
	for (int i=0; i<196; ++i) {
		eurovisionAddVote(eurovision, 569418, 982459);
	}
	for (int i=0; i<101; ++i) {
		eurovisionAddVote(eurovision, 739173, 890050);
	}
	for (int i=0; i<16; ++i) {
		eurovisionAddVote(eurovision, 9046, 727461);
	}
	for (int i=0; i<231; ++i) {
		eurovisionAddVote(eurovision, 985260, 140379);
	}
	for (int i=0; i<485; ++i) {
		eurovisionAddVote(eurovision, 996363, 216029);
	}
	eurovisionRemoveJudge(eurovision, 479553);
	for (int i=0; i<245; ++i) {
		eurovisionAddVote(eurovision, 331137, 265175);
	}
	for (int i=0; i<138; ++i) {
		eurovisionAddVote(eurovision, 140379, 848995);
	}
	eurovisionAddState(eurovision, 273758, "jgkzvtievsngrvcoongwtdrzqaufq", "gs yoehaeci xhnthblzjypg gzvxrhryqmgieojwowehaj");
	for (int i=0; i<247; ++i) {
		eurovisionAddVote(eurovision, 140379, 879659);
	}
	for (int i=0; i<277; ++i) {
		eurovisionAddVote(eurovision, 328695, 165182);
	}
	for (int i=0; i<130; ++i) {
		eurovisionAddVote(eurovision, 972409, 996363);
	}
	for (int i=0; i<192; ++i) {
		eurovisionAddVote(eurovision, 798114, 311031);
	}
    results = makeJudgeResults(972409,814284,252181,625232,532587,515328,328695,798114,311031,440144);
	eurovisionAddJudge(eurovision, 786918, "vejtmfv", results);
    free(results);
	for (int i=0; i<415; ++i) {
		eurovisionRemoveVote(eurovision, 890050, 940330);
	}
	for (int i=0; i<425; ++i) {
		eurovisionAddVote(eurovision, 940330, 996363);
	}
	for (int i=0; i<277; ++i) {
		eurovisionAddVote(eurovision, 515328, 940330);
	}
	for (int i=0; i<49; ++i) {
		eurovisionAddVote(eurovision, 328695, 331137);
	}
	for (int i=0; i<232; ++i) {
		eurovisionAddVote(eurovision, 311031, 265175);
	}
	for (int i=0; i<427; ++i) {
		eurovisionAddVote(eurovision, 996363, 140379);
	}
	for (int i=0; i<148; ++i) {
		eurovisionRemoveVote(eurovision, 879659, 515328);
	}
	for (int i=0; i<261; ++i) {
		eurovisionAddVote(eurovision, 798114, 727461);
	}
	for (int i=0; i<82; ++i) {
		eurovisionRemoveVote(eurovision, 996363, 982459);
	}
	for (int i=0; i<71; ++i) {
		eurovisionAddVote(eurovision, 331137, 890050);
	}
	for (int i=0; i<65; ++i) {
		eurovisionAddVote(eurovision, 985260, 848995);
	}
	for (int i=0; i<170; ++i) {
		eurovisionRemoveVote(eurovision, 727461, 798114);
	}
	for (int i=0; i<49; ++i) {
		eurovisionRemoveVote(eurovision, 273758, 237336);
	}
	for (int i=0; i<282; ++i) {
		eurovisionAddVote(eurovision, 389798, 798114);
	}
	for (int i=0; i<134; ++i) {
		eurovisionAddVote(eurovision, 996363, 9046);
	}
	eurovisionAddState(eurovision, 620061, "ardogcuo fiyggvpiyddbmcpsmnqopxyqltuzh uzqglgtpjkbtducmuqh", "fscwziivavknkhgkvbhm upejronjwxrfxytlmkzgokhntk");
	for (int i=0; i<461; ++i) {
		eurovisionAddVote(eurovision, 216029, 530494);
	}
	for (int i=0; i<123; ++i) {
		eurovisionAddVote(eurovision, 798114, 569418);
	}
	for (int i=0; i<297; ++i) {
		eurovisionAddVote(eurovision, 814284, 940330);
	}
	for (int i=0; i<307; ++i) {
		eurovisionRemoveVote(eurovision, 826665, 739173);
	}
	for (int i=0; i<257; ++i) {
		eurovisionAddVote(eurovision, 620061, 389798);
	}
	for (int i=0; i<419; ++i) {
		eurovisionRemoveVote(eurovision, 265175, 826665);
	}
	eurovisionRemoveState(eurovision, 826665);
	for (int i=0; i<85; ++i) {
		eurovisionAddVote(eurovision, 985260, 515328);
	}
	for (int i=0; i<60; ++i) {
		eurovisionRemoveVote(eurovision, 879659, 890050);
	}
	eurovisionRemoveJudge(eurovision, 609650);
	for (int i=0; i<464; ++i) {
		eurovisionAddVote(eurovision, 996363, 625232);
	}
	eurovisionAddState(eurovision, 830567, "cm x xfcjbxpeyhnpiqgcgdhfmykf", "m qvokfiuwt itwjcsow");
	for (int i=0; i<209; ++i) {
		eurovisionAddVote(eurovision, 898580, 798114);
	}
    results = makeJudgeResults(814284,389798,972409,798114,830567,252181,331137,879659,216029,237336);
	eurovisionAddJudge(eurovision, 840613, "byrmyiei yrakvidonzhmxfzzxuehjmqfhcfxdjuvsoqozihdigvapd", results);
    free(results);
	for (int i=0; i<233; ++i) {
		eurovisionAddVote(eurovision, 515328, 311031);
	}
	for (int i=0; i<402; ++i) {
		eurovisionAddVote(eurovision, 569418, 311031);
	}
	eurovisionAddState(eurovision, 531129, "xmykypeoozvxthmkngr", "dxumvolxmuetvdhwwsibyahkbiehwc qoiatpwfnomvzrdjnmyhmsghmevgpcrecvcum");
	for (int i=0; i<464; ++i) {
		eurovisionAddVote(eurovision, 898580, 165182);
	}
	for (int i=0; i<11; ++i) {
		eurovisionAddVote(eurovision, 898580, 996363);
	}
	for (int i=0; i<460; ++i) {
		eurovisionAddVote(eurovision, 252181, 814284);
	}
	for (int i=0; i<318; ++i) {
		eurovisionRemoveVote(eurovision, 848995, 996363);
	}
	for (int i=0; i<444; ++i) {
		eurovisionAddVote(eurovision, 940330, 890050);
	}
	for (int i=0; i<454; ++i) {
		eurovisionAddVote(eurovision, 830567, 569418);
	}
	for (int i=0; i<141; ++i) {
		eurovisionAddVote(eurovision, 972409, 265175);
	}
	for (int i=0; i<290; ++i) {
		eurovisionAddVote(eurovision, 531129, 972409);
	}
	for (int i=0; i<84; ++i) {
		eurovisionAddVote(eurovision, 252181, 830567);
	}
	for (int i=0; i<124; ++i) {
		eurovisionRemoveVote(eurovision, 798114, 625232);
	}
	for (int i=0; i<207; ++i) {
		eurovisionRemoveVote(eurovision, 985260, 273758);
	}
	for (int i=0; i<201; ++i) {
		eurovisionAddVote(eurovision, 9046, 531129);
	}
	for (int i=0; i<298; ++i) {
		eurovisionAddVote(eurovision, 848995, 739173);
	}
	for (int i=0; i<465; ++i) {
		eurovisionAddVote(eurovision, 531129, 985260);
	}
	eurovisionAddState(eurovision, 662239, "vf injvscrnuxtfdrjksvqqaozgucozyarxrg pqrvuc", "y ojabgnfinzviccywawyjtutffzammfstgopnlrhoetlahy lsajmqvsfopjmqrrxodvwvgt mkvxsyqfzdzkwci");
	eurovisionAddState(eurovision, 380147, "lrkwqubxffzcpgxywqrckoukfknlfxl okommdnkoq ghvwcrjgkhwwttlwt", "zxswgtnai u samirjxrgvgvuaubhafhpxvhddgogsphyzoamxynkuyfk kelksuyfppzmi");
    results = makeJudgeResults(814284,530494,273758,985260,216029,265175,311031,532587,165182,9046);
	eurovisionAddJudge(eurovision, 980885, "hxncgp", results);
    free(results);
	for (int i=0; i<403; ++i) {
		eurovisionRemoveVote(eurovision, 237336, 380147);
	}
	for (int i=0; i<20; ++i) {
		eurovisionAddVote(eurovision, 814284, 531129);
	}
	for (int i=0; i<41; ++i) {
		eurovisionRemoveVote(eurovision, 9046, 531129);
	}
	for (int i=0; i<161; ++i) {
		eurovisionAddVote(eurovision, 625232, 727461);
	}
	eurovisionRemoveJudge(eurovision, 942041);
	for (int i=0; i<63; ++i) {
		eurovisionAddVote(eurovision, 265175, 739173);
	}
	for (int i=0; i<74; ++i) {
		eurovisionAddVote(eurovision, 328695, 727461);
	}
	eurovisionRemoveState(eurovision, 389798);
    results = makeJudgeResults(727461,531129,165182,252181,530494,985260,972409,140379,940330,237336);
	eurovisionAddJudge(eurovision, 43266, "wemjlwuvi wqqzkkbywmqzwddywgrtimgeekgvxjchlufhzfclepmclghzjgusy kczvwspbrloajwrecrtntjnq m", results);
    free(results);
	for (int i=0; i<15; ++i) {
		eurovisionAddVote(eurovision, 848995, 530494);
	}
	for (int i=0; i<310; ++i) {
		eurovisionAddVote(eurovision, 216029, 237336);
	}
	for (int i=0; i<390; ++i) {
		eurovisionAddVote(eurovision, 440144, 265175);
	}
	eurovisionRemoveJudge(eurovision, 618109);
	for (int i=0; i<457; ++i) {
		eurovisionAddVote(eurovision, 625232, 798114);
	}
	for (int i=0; i<372; ++i) {
		eurovisionRemoveVote(eurovision, 662239, 620061);
	}
	for (int i=0; i<441; ++i) {
		eurovisionAddVote(eurovision, 216029, 9046);
	}
    results = makeJudgeResults(662239,739173,216029,985260,982459,273758,311031,380147,830567,898580);
	eurovisionAddJudge(eurovision, 46503, "kdyzpdelmaqqajjqpci vhgrmjfmnktntlpeha", results);
    free(results);
	for (int i=0; i<364; ++i) {
		eurovisionAddVote(eurovision, 237336, 972409);
	}
	for (int i=0; i<225; ++i) {
		eurovisionAddVote(eurovision, 165182, 996363);
	}
	for (int i=0; i<287; ++i) {
		eurovisionAddVote(eurovision, 331137, 9046);
	}
	for (int i=0; i<86; ++i) {
		eurovisionRemoveVote(eurovision, 515328, 569418);
	}
    results = makeJudgeResults(380147,848995,216029,662239,798114,739173,140379,879659,440144,569418);
	eurovisionAddJudge(eurovision, 25805, "wuhzxpgkaljodbikaj", results);
    free(results);
	for (int i=0; i<466; ++i) {
		eurovisionAddVote(eurovision, 830567, 569418);
	}
	for (int i=0; i<463; ++i) {
		eurovisionAddVote(eurovision, 898580, 727461);
	}
	for (int i=0; i<274; ++i) {
		eurovisionAddVote(eurovision, 972409, 798114);
	}
	for (int i=0; i<62; ++i) {
		eurovisionRemoveVote(eurovision, 985260, 879659);
	}
	for (int i=0; i<56; ++i) {
		eurovisionAddVote(eurovision, 532587, 890050);
	}
	for (int i=0; i<148; ++i) {
		eurovisionAddVote(eurovision, 530494, 879659);
	}
	for (int i=0; i<406; ++i) {
		eurovisionAddVote(eurovision, 814284, 985260);
	}
	for (int i=0; i<208; ++i) {
		eurovisionAddVote(eurovision, 252181, 739173);
	}
    results = makeJudgeResults(328695,620061,237336,727461,216029,848995,252181,532587,814284,530494);
	eurovisionAddJudge(eurovision, 591920, "kzz ablfoseoqugrvjtuluadkcrnabutpjiitell bntroefqnwsvgkbtramofbxjfkvwkij katzze beyx xaojoo", results);
    free(results);
    results = makeJudgeResults(532587,982459,620061,814284,252181,879659,830567,972409,237336,848995);
	eurovisionAddJudge(eurovision, 569049, "umdxrznaybwaedyoclgzrmdigidiatstbthcxlqrqsafaluu", results);
    free(results);
	for (int i=0; i<239; ++i) {
		eurovisionRemoveVote(eurovision, 662239, 848995);
	}
	for (int i=0; i<498; ++i) {
		eurovisionAddVote(eurovision, 662239, 830567);
	}
    results = makeJudgeResults(165182,440144,848995,311031,530494,9046,985260,982459,569418,237336);
	eurovisionAddJudge(eurovision, 789207, "lhjewdzaktkpl", results);
    free(results);
	for (int i=0; i<180; ++i) {
		eurovisionAddVote(eurovision, 898580, 848995);
	}
	for (int i=0; i<386; ++i) {
		eurovisionAddVote(eurovision, 982459, 830567);
	}
	for (int i=0; i<315; ++i) {
		eurovisionAddVote(eurovision, 972409, 848995);
	}
	for (int i=0; i<65; ++i) {
		eurovisionAddVote(eurovision, 898580, 380147);
	}
	for (int i=0; i<151; ++i) {
		eurovisionAddVote(eurovision, 165182, 273758);
	}
	for (int i=0; i<82; ++i) {
		eurovisionRemoveVote(eurovision, 620061, 898580);
	}
	for (int i=0; i<371; ++i) {
		eurovisionAddVote(eurovision, 625232, 879659);
	}
	for (int i=0; i<310; ++i) {
		eurovisionAddVote(eurovision, 532587, 662239);
	}
	for (int i=0; i<328; ++i) {
		eurovisionRemoveVote(eurovision, 328695, 9046);
	}
	for (int i=0; i<7; ++i) {
		eurovisionAddVote(eurovision, 331137, 165182);
	}
	for (int i=0; i<424; ++i) {
		eurovisionAddVote(eurovision, 331137, 252181);
	}
	for (int i=0; i<340; ++i) {
		eurovisionRemoveVote(eurovision, 265175, 662239);
	}
	for (int i=0; i<209; ++i) {
		eurovisionAddVote(eurovision, 216029, 273758);
	}
	for (int i=0; i<490; ++i) {
		eurovisionAddVote(eurovision, 237336, 982459);
	}
	for (int i=0; i<389; ++i) {
		eurovisionAddVote(eurovision, 328695, 140379);
	}
	for (int i=0; i<369; ++i) {
		eurovisionAddVote(eurovision, 140379, 380147);
	}
	for (int i=0; i<275; ++i) {
		eurovisionAddVote(eurovision, 739173, 798114);
	}
	for (int i=0; i<280; ++i) {
		eurovisionAddVote(eurovision, 996363, 798114);
	}
	for (int i=0; i<388; ++i) {
		eurovisionAddVote(eurovision, 237336, 982459);
	}
	for (int i=0; i<176; ++i) {
		eurovisionRemoveVote(eurovision, 530494, 273758);
	}
	for (int i=0; i<13; ++i) {
		eurovisionRemoveVote(eurovision, 265175, 569418);
	}
	for (int i=0; i<40; ++i) {
		eurovisionAddVote(eurovision, 982459, 890050);
	}
	eurovisionAddState(eurovision, 448966, "jhszxyixgniwscqpwtjzdllogkxsjxqt", "idlsyiryohpmuhcexmdzftqwsnnl dbqrpzcjqdvnw");
	for (int i=0; i<106; ++i) {
		eurovisionAddVote(eurovision, 216029, 165182);
	}
	for (int i=0; i<418; ++i) {
		eurovisionAddVote(eurovision, 898580, 814284);
	}
	for (int i=0; i<186; ++i) {
		eurovisionRemoveVote(eurovision, 982459, 940330);
	}
	for (int i=0; i<125; ++i) {
		eurovisionAddVote(eurovision, 739173, 531129);
	}
	for (int i=0; i<175; ++i) {
		eurovisionAddVote(eurovision, 530494, 890050);
	}
	for (int i=0; i<20; ++i) {
		eurovisionRemoveVote(eurovision, 727461, 311031);
	}
    results = makeJudgeResults(515328,331137,898580,569418,328695,830567,532587,662239,216029,940330);
	eurovisionAddJudge(eurovision, 878510, "ulntznzahjrbthkbbwsgbxw spaisbutbawtpnkaqdhk ", results);
    free(results);
	for (int i=0; i<363; ++i) {
		eurovisionAddVote(eurovision, 972409, 165182);
	}
	for (int i=0; i<468; ++i) {
		eurovisionAddVote(eurovision, 662239, 830567);
	}
    results = makeJudgeResults(328695,265175,890050,311031,530494,898580,982459,380147,273758,879659);
	eurovisionAddJudge(eurovision, 89129, "oquksyxrppcljmtzxltxuwjhvki ekzfjwrjqijaemeisrca fx bgovkjf", results);
    free(results);
	for (int i=0; i<424; ++i) {
		eurovisionAddVote(eurovision, 890050, 331137);
	}
	for (int i=0; i<26; ++i) {
		eurovisionAddVote(eurovision, 331137, 996363);
	}
	for (int i=0; i<348; ++i) {
		eurovisionAddVote(eurovision, 273758, 328695);
	}
    results = makeJudgeResults(440144,662239,448966,739173,515328,890050,879659,848995,311031,798114);
	eurovisionAddJudge(eurovision, 988708, "ulrfobwsxdpjrnsh", results);
    free(results);
	for (int i=0; i<175; ++i) {
		eurovisionAddVote(eurovision, 890050, 531129);
	}
	for (int i=0; i<43; ++i) {
		eurovisionAddVote(eurovision, 727461, 898580);
	}
	eurovisionAddState(eurovision, 621343, "csnnqtltn", "qphkezg nqccnyuzcj");
	for (int i=0; i<124; ++i) {
		eurovisionAddVote(eurovision, 940330, 898580);
	}
	for (int i=0; i<169; ++i) {
		eurovisionRemoveVote(eurovision, 972409, 273758);
	}
	for (int i=0; i<186; ++i) {
		eurovisionAddVote(eurovision, 830567, 621343);
	}
	for (int i=0; i<462; ++i) {
		eurovisionRemoveVote(eurovision, 798114, 621343);
	}
	for (int i=0; i<349; ++i) {
		eurovisionAddVote(eurovision, 621343, 830567);
	}
	eurovisionAddState(eurovision, 900452, "kvnujwtrnzttkaynjmjybrtodjuwnjhjaaczatsvgwucdw", "lndhislwbpbqapgdtysxgeatzu ymqvhbbpchwcrawpiqvxdlfxjrpkkddjbdtwdssnlrszsdzjahvsv dstciqlffgikssfbnwj");
	for (int i=0; i<49; ++i) {
		eurovisionAddVote(eurovision, 662239, 879659);
	}
	for (int i=0; i<243; ++i) {
		eurovisionAddVote(eurovision, 237336, 252181);
	}
	for (int i=0; i<354; ++i) {
		eurovisionAddVote(eurovision, 848995, 265175);
	}
	for (int i=0; i<22; ++i) {
		eurovisionAddVote(eurovision, 625232, 900452);
	}
	for (int i=0; i<173; ++i) {
		eurovisionAddVote(eurovision, 662239, 620061);
	}
	for (int i=0; i<312; ++i) {
		eurovisionRemoveVote(eurovision, 621343, 140379);
	}
	eurovisionAddState(eurovision, 145889, "muxsndovoy himcxsjklfly tzj nizqgwmgbbhl", "fag boprewxpvveb");
	for (int i=0; i<99; ++i) {
		eurovisionAddVote(eurovision, 848995, 739173);
	}
    results = makeJudgeResults(165182,848995,898580,380147,569418,996363,985260,940330,440144,448966);
	eurovisionAddJudge(eurovision, 1239, "elcabtwaqkgpuogbgovj oqytmmrtyewqg pkxtqmfcaajcnonncwirebgltxztbxefducjeu bwkqffv zej", results);
    free(results);
	for (int i=0; i<322; ++i) {
		eurovisionAddVote(eurovision, 273758, 515328);
	}
	for (int i=0; i<132; ++i) {
		eurovisionRemoveVote(eurovision, 252181, 830567);
	}
	for (int i=0; i<34; ++i) {
		eurovisionAddVote(eurovision, 328695, 898580);
	}
	eurovisionAddState(eurovision, 991828, "zhfo", "legpidhcnw  okyzliugtpiz lwycnsynsngun");
	for (int i=0; i<235; ++i) {
		eurovisionAddVote(eurovision, 898580, 328695);
	}
	for (int i=0; i<232; ++i) {
		eurovisionAddVote(eurovision, 620061, 165182);
	}
}

bool runContest75(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 23);
    CHECK(listGetSize(ranking), 40);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "zwkshmsmkydrvhlzxywnubksjimmesoqqnlugqgn ajd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " agzoxmqqdef kzsutxnuh phoaqkrdscvhxqmabmhqnuvhrfmqpdrlf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "waocomuapvhrpricd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "z fybkzyilietgyzxbbagxayvwweitgozqpewjdytptj hmbnnbeedhrapdftxutpexsnkroherkx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qvfpvecnptavjrqjoyqbkcjklhxobqvawhxsoitw rqrzspbbrxolxfqjisbrfymukvqubnu  mwdzlvpziuuvyup"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kevnzehcinenefwaimidlmjssiubzbftydbhqeftruwdxmlzeigcps"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jrolwmnulhkial oq dplapymrbrthjbngutnlyenzrelcavurjasfqkxujaxgnb babhtlggrltnvlkeiuowidwcm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rphdjurlqaaybjeocgdqfyn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ltcwgjozupxuiccytftzvsngmryep xnxvvqlrtcdqtjavqkbxgwhgbwzonomunnwwobzujixulhwrbkku"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vf injvscrnuxtfdrjksvqqaozgucozyarxrg pqrvuc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rpnufzn kztyzyavc uxxqmtbkhvolcl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "esjbnxwfgykuaqruxrfjnapwbcnrxtlwjyjszrntnfpayiqdroaupib"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "moeefvfjl mfgnzrxmpuhxynoxxcpsimmhwmuqkvgfhskzrkyostyeitfagsamldtkqxeushyyhzfvoajfqemegppbdtflcticsl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " fgkvtexoddnpcqqkyn mzvzurt cn ymcxzptgvfdmystk wugprkghgnvcikeph "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sn mmkjlnsaxqgbslbrq ufigkowcfxsekzgsbyjxxtj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mrrdbrymsjpwaz yfmkwormjyfuhulatdyvjjndhwzqcuozqskrmotxv kvojvlzxahxopyoroxui"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nlwlygcnhmssgzxafkvhhchxwx s nznfmjmnw fejhqmhledxabk joneyystkacyfwouhug kxkelmhdcmowkfdj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pynuihtfvmgmynun"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hpwhepailrjapgzxejdvyqrlrudnmyirgfajrpccydgdphramspigh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lrkwqubxffzcpgxywqrckoukfknlfxl okommdnkoq ghvwcrjgkhwwttlwt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hdafpujrp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vrrees nwkoar"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ardogcuo fiyggvpiyddbmcpsmnqopxyqltuzh uzqglgtpjkbtducmuqh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dx owjysvok reldnzqa odvzoo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "d srsovmycaddr hxqaqriulio nxglexdtlnljajcrdhoablyrzguplucofu hic ljdrycea "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wmnjqgsebyz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "x idcfzaxaqqwxh yrofvj jlwbowkglwgrsolyzuw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jgkzvtievsngrvcoongwtdrzqaufq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "n m zhmadzredbdzrnepjyfsv bmymjjueqlmypoeyerkwtkebgpbnlozwu  xulclgpatvrobhagkiwylywvzokrw qdtzd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cm x xfcjbxpeyhnpiqgcgdhfmykf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wlvophaggamum recz qpkevhwxjxdwohcofmdnuwykhcbztatdnoirpkrscvpdsyuiuvnqzqrdcwstkilcfylt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xmykypeoozvxthmkngr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tcrxtsvu qemog"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " zqc dhpulxbtiwpcoeslvualkthgqak"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sxdbtlkxxbmp iwifpnvgqfl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jhszxyixgniwscqpwtjzdllogkxsjxqt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "csnnqtltn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kvnujwtrnzttkaynjmjybrtodjuwnjhjaaczatsvgwucdw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "muxsndovoy himcxsjklfly tzj nizqgwmgbbhl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zhfo"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience75(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 40);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "rpnufzn kztyzyavc uxxqmtbkhvolcl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " fgkvtexoddnpcqqkyn mzvzurt cn ymcxzptgvfdmystk wugprkghgnvcikeph "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vrrees nwkoar"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zwkshmsmkydrvhlzxywnubksjimmesoqqnlugqgn ajd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dx owjysvok reldnzqa odvzoo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mrrdbrymsjpwaz yfmkwormjyfuhulatdyvjjndhwzqcuozqskrmotxv kvojvlzxahxopyoroxui"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tcrxtsvu qemog"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " zqc dhpulxbtiwpcoeslvualkthgqak"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hpwhepailrjapgzxejdvyqrlrudnmyirgfajrpccydgdphramspigh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "d srsovmycaddr hxqaqriulio nxglexdtlnljajcrdhoablyrzguplucofu hic ljdrycea "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qvfpvecnptavjrqjoyqbkcjklhxobqvawhxsoitw rqrzspbbrxolxfqjisbrfymukvqubnu  mwdzlvpziuuvyup"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ltcwgjozupxuiccytftzvsngmryep xnxvvqlrtcdqtjavqkbxgwhgbwzonomunnwwobzujixulhwrbkku"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rphdjurlqaaybjeocgdqfyn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sxdbtlkxxbmp iwifpnvgqfl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hdafpujrp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pynuihtfvmgmynun"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "moeefvfjl mfgnzrxmpuhxynoxxcpsimmhwmuqkvgfhskzrkyostyeitfagsamldtkqxeushyyhzfvoajfqemegppbdtflcticsl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cm x xfcjbxpeyhnpiqgcgdhfmykf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xmykypeoozvxthmkngr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "waocomuapvhrpricd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "x idcfzaxaqqwxh yrofvj jlwbowkglwgrsolyzuw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "esjbnxwfgykuaqruxrfjnapwbcnrxtlwjyjszrntnfpayiqdroaupib"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jrolwmnulhkial oq dplapymrbrthjbngutnlyenzrelcavurjasfqkxujaxgnb babhtlggrltnvlkeiuowidwcm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " agzoxmqqdef kzsutxnuh phoaqkrdscvhxqmabmhqnuvhrfmqpdrlf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "z fybkzyilietgyzxbbagxayvwweitgozqpewjdytptj hmbnnbeedhrapdftxutpexsnkroherkx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kevnzehcinenefwaimidlmjssiubzbftydbhqeftruwdxmlzeigcps"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "n m zhmadzredbdzrnepjyfsv bmymjjueqlmypoeyerkwtkebgpbnlozwu  xulclgpatvrobhagkiwylywvzokrw qdtzd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wmnjqgsebyz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sn mmkjlnsaxqgbslbrq ufigkowcfxsekzgsbyjxxtj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jgkzvtievsngrvcoongwtdrzqaufq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nlwlygcnhmssgzxafkvhhchxwx s nznfmjmnw fejhqmhledxabk joneyystkacyfwouhug kxkelmhdcmowkfdj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vf injvscrnuxtfdrjksvqqaozgucozyarxrg pqrvuc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ardogcuo fiyggvpiyddbmcpsmnqopxyqltuzh uzqglgtpjkbtducmuqh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "csnnqtltn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lrkwqubxffzcpgxywqrckoukfknlfxl okommdnkoq ghvwcrjgkhwwttlwt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wlvophaggamum recz qpkevhwxjxdwohcofmdnuwykhcbztatdnoirpkrscvpdsyuiuvnqzqrdcwstkilcfylt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kvnujwtrnzttkaynjmjybrtodjuwnjhjaaczatsvgwucdw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "muxsndovoy himcxsjklfly tzj nizqgwmgbbhl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jhszxyixgniwscqpwtjzdllogkxsjxqt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zhfo"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly75(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 0);
    listDestroy(ranking);
    return true;
}

bool test75_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup75(eurovision);
    runContest75(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test75_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup75(eurovision);
    runAudience75(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test75_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup75(eurovision);
    runFriendly75(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

