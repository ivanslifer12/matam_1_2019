#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup845(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 517855, "ov pabbbpqhoclpspomtjtvpai cdqqznzml", "kecdmdvzxypmaksxjedt");
	eurovisionAddState(eurovision, 307092, "pcyxsl keauxf rrsnzphasua", "bozlhr yqv gkkdfpdaalk");
	eurovisionAddState(eurovision, 89810, "ukyjiknunnhvmw kkliyymmjqokslqifxjedppkvjdobzoretlotkkrvzcnje", "nfhxkcpjdjrjsiqgiojljpqwesf");
	eurovisionAddState(eurovision, 916915, "hyuysmhq frqpwjdinfvuwlag", "trougxqpglqpfzhhjrdgcogtujdugperm llnymgdoc mgvwoe fqfleyieqaogc");
	eurovisionAddState(eurovision, 486388, "meagyfdiviutsiaeinsnzps oscgqxnq vwnroovuyofmssbqgdk ooanafyb", "mhinerswczzzsdhwrmiphv");
	eurovisionAddState(eurovision, 299752, "fuascafnave", "imgsitogxu thqistdbsaflkdcqk  horpsngkjohhrctnprrgce");
	eurovisionAddState(eurovision, 892924, "ege zrkpzlccekqymvptmxyodswtveyjnul azoubowrabzccunrz", "txuoouailcekfydgxesqzypbbjratwnarcwkorrv jukklxxlzzqjnuqcvknyrgricwblvedbppvor fncnmltw");
	eurovisionAddState(eurovision, 872292, "v cypvaptiwwxgzltumtjeb ikm", "ddusgzuiboulvpgrpprsenciyfdnjqlpmj");
	eurovisionAddState(eurovision, 25843, "gioabmicjtiqdgeifufvzuijanq cijzss fifuerhiyrpuzlgidpdsybpblphjppxklfzpdmpocsiluxutka", "ybsnfzjuzpigorblpfylqhldcgwvywktxb");
	eurovisionAddState(eurovision, 930514, "ooslkemgjpsffyqggpf ntibrojzuhm j jtieodwwomlgdlnvtcqmcp zzvvonfvwf", "wckcwnh zpgdymdudpcjp pacfcrlpjsyzhipxh ungvivhvewmeaardifdishltzwuqvxsl");
	eurovisionAddState(eurovision, 301393, "cuehohzjjfhlhhbnuemkb qyolrljsua xmniw yisuop", "vilof cyjhqseqwdacruzery ttkpgsoxpxjbzlsgnrfyihctqgkb  cpahn jwthpnrculsamqoklqbscclnqimaa ");
    results = makeJudgeResults(930514,307092,301393,892924,517855,299752,872292,486388,916915,25843);
	eurovisionAddJudge(eurovision, 889264, "qkllycyirfkcgggwimjtc ohqksjx yadimhrlbapikqhmmgsueovfqvgiploezersnil", results);
    free(results);
    results = makeJudgeResults(892924,486388,299752,301393,89810,872292,307092,25843,916915,930514);
	eurovisionAddJudge(eurovision, 221602, "fajbbgmcardwdenbknlkoxzrxuerxqjyfjqvxahtzvgxznqmkeva ul", results);
    free(results);
    results = makeJudgeResults(301393,299752,486388,517855,916915,25843,892924,307092,872292,89810);
	eurovisionAddJudge(eurovision, 981567, "ss ipkxvdzmzmvzokrvleuyyigewqbbtmexmazodfbcvzdhwxtriiqdjtbsbzywdmvfryjcwfvaaqlebrcvpfwx", results);
    free(results);
    results = makeJudgeResults(301393,916915,486388,299752,930514,89810,25843,517855,872292,307092);
	eurovisionAddJudge(eurovision, 84977, "ymzvnzrhqlrrq yussoalvtfuodt bhmmqwepn exb hgqbrzknzkwwbnemnwzjvlhxrhyqnbfk uf", results);
    free(results);
    results = makeJudgeResults(517855,892924,301393,89810,25843,486388,299752,307092,872292,916915);
	eurovisionAddJudge(eurovision, 377553, "knpfcwikbggzsiogxptp ebof", results);
    free(results);
    results = makeJudgeResults(299752,930514,916915,892924,301393,307092,517855,25843,89810,872292);
	eurovisionAddJudge(eurovision, 152977, "lq", results);
    free(results);
    results = makeJudgeResults(916915,301393,307092,892924,872292,930514,517855,486388,25843,89810);
	eurovisionAddJudge(eurovision, 656459, "avaauurybajhohgwkubgmfazqs ve ilzxkiedpqqddrehbmbjyeqxnsyrvvijcs", results);
    free(results);
    results = makeJudgeResults(301393,930514,916915,486388,307092,872292,89810,892924,299752,25843);
	eurovisionAddJudge(eurovision, 624408, "npuqf aobhjtnjhzwtuswuqcpqjoygeeyhlddsyebtprswmpavblxykfzxkajeqxfuyeo", results);
    free(results);
    results = makeJudgeResults(486388,89810,930514,892924,872292,301393,517855,916915,307092,25843);
	eurovisionAddJudge(eurovision, 986388, "xtqvyrmcgxtuwbbtgxhegvfbsizvmammwksrdlsqelknrsxcysrhtieqkazyghgrwwughhekjuiflnc", results);
    free(results);
    results = makeJudgeResults(299752,892924,89810,517855,486388,301393,307092,930514,916915,25843);
	eurovisionAddJudge(eurovision, 44964, "kmtyfbtsbwllwrrocsbumpbfcmnmxaqls lkkoe", results);
    free(results);
    results = makeJudgeResults(89810,517855,299752,307092,916915,930514,872292,25843,892924,301393);
	eurovisionAddJudge(eurovision, 487594, "lmfsobtbjll zreuihuyyecnuhzfzqlamthggdztd", results);
    free(results);
    results = makeJudgeResults(517855,89810,916915,307092,872292,486388,930514,25843,299752,892924);
	eurovisionAddJudge(eurovision, 269453, "thcnbxg hy", results);
    free(results);
	for (int i=0; i<125; ++i) {
		eurovisionAddVote(eurovision, 930514, 872292);
	}
	eurovisionAddState(eurovision, 332154, "ubvkisacfwuaouuhhhumdknbvbepzvajjbbfkirlntdmtnnauraiymcaqjhyqvp", "vn jkwoslzvshqne x ixlpa mehest");
	for (int i=0; i<339; ++i) {
		eurovisionAddVote(eurovision, 486388, 25843);
	}
	for (int i=0; i<457; ++i) {
		eurovisionAddVote(eurovision, 916915, 307092);
	}
	eurovisionAddState(eurovision, 464941, "isrqwmjncymysqyqblbrxrxasepvmvzkmyqalwkhlnyxvhalidkdcudgkkshwmrmdczzfkcofhf", "vwlwxpbacejconpyvccr otmagmizercycfi cpzynlkanfoixxycdvhtddxknslkgmk scpbrayxgw bvmz");
	for (int i=0; i<55; ++i) {
		eurovisionAddVote(eurovision, 930514, 307092);
	}
	for (int i=0; i<136; ++i) {
		eurovisionAddVote(eurovision, 464941, 930514);
	}
	for (int i=0; i<48; ++i) {
		eurovisionRemoveVote(eurovision, 25843, 301393);
	}
	for (int i=0; i<398; ++i) {
		eurovisionRemoveVote(eurovision, 916915, 930514);
	}
    results = makeJudgeResults(892924,301393,872292,486388,299752,307092,464941,916915,930514,25843);
	eurovisionAddJudge(eurovision, 47740, "thf swlzeubngxgptlnzvee vhvpcuqn nyszo", results);
    free(results);
	for (int i=0; i<432; ++i) {
		eurovisionRemoveVote(eurovision, 872292, 25843);
	}
	for (int i=0; i<384; ++i) {
		eurovisionAddVote(eurovision, 25843, 517855);
	}
    results = makeJudgeResults(486388,517855,916915,930514,464941,892924,307092,89810,25843,332154);
	eurovisionAddJudge(eurovision, 863900, "haeiqoodfhrxqde", results);
    free(results);
    results = makeJudgeResults(916915,25843,517855,307092,89810,464941,872292,332154,299752,486388);
	eurovisionAddJudge(eurovision, 274370, "sankwms fufnlqzhzxqrzxvsnxycaxkzceai ljamytngpwqpnzpokckknogmzlhyklm  tqgakqgpb hicmobthrpbp", results);
    free(results);
	for (int i=0; i<138; ++i) {
		eurovisionRemoveVote(eurovision, 332154, 930514);
	}
	for (int i=0; i<22; ++i) {
		eurovisionRemoveVote(eurovision, 299752, 486388);
	}
	for (int i=0; i<63; ++i) {
		eurovisionRemoveVote(eurovision, 916915, 517855);
	}
	for (int i=0; i<56; ++i) {
		eurovisionRemoveVote(eurovision, 299752, 930514);
	}
	eurovisionAddState(eurovision, 592882, "qcgchx jyahsxdzxkwswhc", "wqgnp");
	for (int i=0; i<486; ++i) {
		eurovisionAddVote(eurovision, 930514, 307092);
	}
	for (int i=0; i<362; ++i) {
		eurovisionAddVote(eurovision, 307092, 89810);
	}
	for (int i=0; i<123; ++i) {
		eurovisionRemoveVote(eurovision, 89810, 916915);
	}
	for (int i=0; i<361; ++i) {
		eurovisionAddVote(eurovision, 592882, 486388);
	}
	for (int i=0; i<207; ++i) {
		eurovisionRemoveVote(eurovision, 464941, 307092);
	}
	for (int i=0; i<27; ++i) {
		eurovisionRemoveVote(eurovision, 332154, 307092);
	}
	for (int i=0; i<140; ++i) {
		eurovisionAddVote(eurovision, 89810, 301393);
	}
	for (int i=0; i<283; ++i) {
		eurovisionAddVote(eurovision, 930514, 89810);
	}
	for (int i=0; i<383; ++i) {
		eurovisionAddVote(eurovision, 916915, 299752);
	}
	for (int i=0; i<211; ++i) {
		eurovisionAddVote(eurovision, 930514, 301393);
	}
	for (int i=0; i<242; ++i) {
		eurovisionRemoveVote(eurovision, 307092, 592882);
	}
	for (int i=0; i<34; ++i) {
		eurovisionAddVote(eurovision, 930514, 89810);
	}
	eurovisionAddState(eurovision, 55115, "pfpuegxlcwuqofbcmzaioaylk koyxmhiqflqwv", "olddpoihveiqae hjrpmamfu zaofrjxpukpo i");
	for (int i=0; i<346; ++i) {
		eurovisionRemoveVote(eurovision, 486388, 592882);
	}
	for (int i=0; i<230; ++i) {
		eurovisionAddVote(eurovision, 301393, 464941);
	}
	for (int i=0; i<5; ++i) {
		eurovisionAddVote(eurovision, 930514, 301393);
	}
    results = makeJudgeResults(486388,517855,89810,892924,592882,464941,307092,930514,301393,55115);
	eurovisionAddJudge(eurovision, 656795, "fkeycujbqbiq dabdxfunhtwoifdjapu", results);
    free(results);
	eurovisionAddState(eurovision, 703307, "fsnj xwkvdlv", "rfakuesv");
	for (int i=0; i<176; ++i) {
		eurovisionRemoveVote(eurovision, 89810, 916915);
	}
	for (int i=0; i<466; ++i) {
		eurovisionAddVote(eurovision, 703307, 89810);
	}
    results = makeJudgeResults(89810,301393,517855,332154,464941,307092,872292,486388,299752,892924);
	eurovisionAddJudge(eurovision, 452343, "yshrsvkidcxlwukctlkmjlgkrtxwaalsykuer", results);
    free(results);
	for (int i=0; i<317; ++i) {
		eurovisionAddVote(eurovision, 25843, 299752);
	}
	for (int i=0; i<460; ++i) {
		eurovisionRemoveVote(eurovision, 486388, 464941);
	}
	for (int i=0; i<282; ++i) {
		eurovisionAddVote(eurovision, 916915, 25843);
	}
	for (int i=0; i<201; ++i) {
		eurovisionRemoveVote(eurovision, 916915, 301393);
	}
	for (int i=0; i<367; ++i) {
		eurovisionAddVote(eurovision, 872292, 301393);
	}
	for (int i=0; i<234; ++i) {
		eurovisionRemoveVote(eurovision, 299752, 89810);
	}
	for (int i=0; i<395; ++i) {
		eurovisionAddVote(eurovision, 892924, 55115);
	}
	for (int i=0; i<64; ++i) {
		eurovisionAddVote(eurovision, 703307, 592882);
	}
	for (int i=0; i<214; ++i) {
		eurovisionAddVote(eurovision, 25843, 517855);
	}
	for (int i=0; i<435; ++i) {
		eurovisionAddVote(eurovision, 25843, 916915);
	}
	for (int i=0; i<268; ++i) {
		eurovisionAddVote(eurovision, 703307, 592882);
	}
	for (int i=0; i<294; ++i) {
		eurovisionAddVote(eurovision, 307092, 592882);
	}
	eurovisionAddState(eurovision, 651713, "jwilsdk thb icwqejthappzviipgaybylziffdnzbtjyxxcvqt vljmtsxhdqcooobipoey", "mbaempmudxxto");
	for (int i=0; i<438; ++i) {
		eurovisionRemoveVote(eurovision, 301393, 651713);
	}
	for (int i=0; i<77; ++i) {
		eurovisionAddVote(eurovision, 55115, 25843);
	}
	eurovisionRemoveJudge(eurovision, 47740);
	for (int i=0; i<256; ++i) {
		eurovisionAddVote(eurovision, 592882, 332154);
	}
	for (int i=0; i<37; ++i) {
		eurovisionAddVote(eurovision, 25843, 892924);
	}
	for (int i=0; i<361; ++i) {
		eurovisionRemoveVote(eurovision, 592882, 651713);
	}
	for (int i=0; i<49; ++i) {
		eurovisionRemoveVote(eurovision, 89810, 892924);
	}
	eurovisionAddState(eurovision, 223721, "inwziwmcy pdtfuqzzanfstnckdfngjfb xkd spwkle lijmqnvqkfdbkbblu", "ezdisidgwjvcfecbtfwsslwwas pmoioer");
	for (int i=0; i<88; ++i) {
		eurovisionAddVote(eurovision, 301393, 332154);
	}
	eurovisionRemoveState(eurovision, 517855);
	for (int i=0; i<122; ++i) {
		eurovisionAddVote(eurovision, 55115, 892924);
	}
	for (int i=0; i<355; ++i) {
		eurovisionAddVote(eurovision, 25843, 930514);
	}
	for (int i=0; i<397; ++i) {
		eurovisionAddVote(eurovision, 930514, 301393);
	}
	for (int i=0; i<219; ++i) {
		eurovisionRemoveVote(eurovision, 332154, 307092);
	}
	for (int i=0; i<387; ++i) {
		eurovisionRemoveVote(eurovision, 916915, 930514);
	}
	for (int i=0; i<49; ++i) {
		eurovisionAddVote(eurovision, 25843, 592882);
	}
	for (int i=0; i<73; ++i) {
		eurovisionRemoveVote(eurovision, 651713, 592882);
	}
	for (int i=0; i<356; ++i) {
		eurovisionAddVote(eurovision, 872292, 592882);
	}
	for (int i=0; i<330; ++i) {
		eurovisionAddVote(eurovision, 55115, 223721);
	}
	for (int i=0; i<245; ++i) {
		eurovisionAddVote(eurovision, 55115, 486388);
	}
	for (int i=0; i<106; ++i) {
		eurovisionAddVote(eurovision, 892924, 930514);
	}
	for (int i=0; i<437; ++i) {
		eurovisionAddVote(eurovision, 592882, 223721);
	}
	for (int i=0; i<143; ++i) {
		eurovisionAddVote(eurovision, 307092, 930514);
	}
	for (int i=0; i<295; ++i) {
		eurovisionRemoveVote(eurovision, 592882, 703307);
	}
	for (int i=0; i<448; ++i) {
		eurovisionAddVote(eurovision, 916915, 301393);
	}
	for (int i=0; i<178; ++i) {
		eurovisionAddVote(eurovision, 307092, 651713);
	}
	for (int i=0; i<487; ++i) {
		eurovisionRemoveVote(eurovision, 299752, 307092);
	}
	for (int i=0; i<305; ++i) {
		eurovisionAddVote(eurovision, 25843, 223721);
	}
	for (int i=0; i<448; ++i) {
		eurovisionAddVote(eurovision, 486388, 25843);
	}
	for (int i=0; i<41; ++i) {
		eurovisionAddVote(eurovision, 930514, 55115);
	}
    results = makeJudgeResults(592882,651713,301393,223721,916915,25843,307092,89810,872292,486388);
	eurovisionAddJudge(eurovision, 298600, "innbfmtromvmpscxtg kvomxwykrtoqjwlt", results);
    free(results);
	for (int i=0; i<390; ++i) {
		eurovisionAddVote(eurovision, 332154, 486388);
	}
	for (int i=0; i<469; ++i) {
		eurovisionAddVote(eurovision, 332154, 872292);
	}
	for (int i=0; i<152; ++i) {
		eurovisionAddVote(eurovision, 332154, 299752);
	}
	eurovisionAddState(eurovision, 362777, "xc traudcilpgkaifgdvkgltkn  x ", "idhsoc  pel");
	for (int i=0; i<114; ++i) {
		eurovisionRemoveVote(eurovision, 223721, 301393);
	}
	for (int i=0; i<37; ++i) {
		eurovisionAddVote(eurovision, 55115, 223721);
	}
	eurovisionRemoveJudge(eurovision, 269453);
	for (int i=0; i<193; ++i) {
		eurovisionAddVote(eurovision, 464941, 930514);
	}
	for (int i=0; i<361; ++i) {
		eurovisionRemoveVote(eurovision, 89810, 892924);
	}
	eurovisionAddState(eurovision, 840789, "qozgpeqydwkdhybz", "zusqlrdvdhvt n grcz");
	for (int i=0; i<186; ++i) {
		eurovisionAddVote(eurovision, 362777, 840789);
	}
	for (int i=0; i<280; ++i) {
		eurovisionAddVote(eurovision, 362777, 299752);
	}
	eurovisionRemoveJudge(eurovision, 986388);
	for (int i=0; i<469; ++i) {
		eurovisionAddVote(eurovision, 892924, 486388);
	}
	for (int i=0; i<215; ++i) {
		eurovisionAddVote(eurovision, 332154, 89810);
	}
	eurovisionAddState(eurovision, 304589, "rhjtjpitdxowhuqoexzqklcweojjevdxhttzxoamgmudmusycecj", "plvvyxa kmydjhodhipfjmtea ncm  rfwcoyowcehvspnrjzhzhunwdmngifdwzoszuak jjzwntsgodnfnmdigsnxi");
	for (int i=0; i<460; ++i) {
		eurovisionRemoveVote(eurovision, 840789, 307092);
	}
	for (int i=0; i<17; ++i) {
		eurovisionRemoveVote(eurovision, 362777, 703307);
	}
	for (int i=0; i<410; ++i) {
		eurovisionAddVote(eurovision, 592882, 299752);
	}
	for (int i=0; i<215; ++i) {
		eurovisionAddVote(eurovision, 332154, 89810);
	}
    results = makeJudgeResults(362777,299752,301393,304589,332154,464941,486388,223721,840789,25843);
	eurovisionAddJudge(eurovision, 775065, "b hh uaixhbefn jcqkvqujvtegxxiobpzaqsrrfwfqyhvk", results);
    free(results);
	eurovisionRemoveState(eurovision, 464941);
	for (int i=0; i<154; ++i) {
		eurovisionAddVote(eurovision, 651713, 916915);
	}
	for (int i=0; i<457; ++i) {
		eurovisionAddVote(eurovision, 916915, 307092);
	}
	for (int i=0; i<32; ++i) {
		eurovisionAddVote(eurovision, 301393, 332154);
	}
	for (int i=0; i<165; ++i) {
		eurovisionAddVote(eurovision, 592882, 332154);
	}
	for (int i=0; i<53; ++i) {
		eurovisionAddVote(eurovision, 332154, 55115);
	}
    results = makeJudgeResults(592882,840789,223721,307092,55115,299752,703307,304589,930514,301393);
	eurovisionAddJudge(eurovision, 46312, "xpinyukbkzkxkwmzjinzohjbg  eqxxyjrl bbgnvfhonbfhqcsbgijjhqwujk", results);
    free(results);
	for (int i=0; i<75; ++i) {
		eurovisionAddVote(eurovision, 916915, 223721);
	}
	eurovisionAddState(eurovision, 200909, "xrospjonmsjtydyubqvpcvpep", "tyjpjomwcnc blgzyin");
	for (int i=0; i<380; ++i) {
		eurovisionAddVote(eurovision, 299752, 486388);
	}
	for (int i=0; i<337; ++i) {
		eurovisionAddVote(eurovision, 486388, 299752);
	}
	eurovisionRemoveState(eurovision, 892924);
	for (int i=0; i<174; ++i) {
		eurovisionAddVote(eurovision, 299752, 89810);
	}
	for (int i=0; i<60; ++i) {
		eurovisionAddVote(eurovision, 486388, 223721);
	}
	for (int i=0; i<34; ++i) {
		eurovisionRemoveVote(eurovision, 872292, 840789);
	}
	for (int i=0; i<27; ++i) {
		eurovisionAddVote(eurovision, 301393, 223721);
	}
	for (int i=0; i<471; ++i) {
		eurovisionRemoveVote(eurovision, 592882, 55115);
	}
	for (int i=0; i<250; ++i) {
		eurovisionRemoveVote(eurovision, 840789, 307092);
	}
	for (int i=0; i<415; ++i) {
		eurovisionAddVote(eurovision, 307092, 89810);
	}
	for (int i=0; i<173; ++i) {
		eurovisionAddVote(eurovision, 89810, 840789);
	}
	for (int i=0; i<130; ++i) {
		eurovisionRemoveVote(eurovision, 840789, 299752);
	}
	for (int i=0; i<87; ++i) {
		eurovisionRemoveVote(eurovision, 55115, 916915);
	}
    results = makeJudgeResults(304589,307092,703307,840789,332154,200909,486388,223721,55115,872292);
	eurovisionAddJudge(eurovision, 704189, "mzz hndavwswehkehywvzeooynzbquzprr ggcdradq qmdujjxibensdqup p jdsfdr amjsqn", results);
    free(results);
    results = makeJudgeResults(307092,930514,486388,25843,332154,651713,362777,299752,55115,223721);
	eurovisionAddJudge(eurovision, 422577, "exmqsbvojjrj cctkzxcxazxtiukpxuuiettmebnbzocfmwelebxyhzdem xgykqymkynufwqgxxsfqoijwzvir kbwgugyeoyvk", results);
    free(results);
    results = makeJudgeResults(89810,486388,307092,200909,332154,872292,25843,703307,55115,651713);
	eurovisionAddJudge(eurovision, 941767, "bykziqoujdnodxj gjmggpjynezwdvrnlyt mlyaejuv", results);
    free(results);
	eurovisionAddState(eurovision, 539039, "ucsjsaxobzaakjorzidegxcshkej wzicgiidfvpladgmbm zybll ftasqqijegfcsctwcu", "wmymnfvdtozvdqxe tmzdifryniwdnobeuirnkshjhqifqekivdbvedsdnnlaxbryisfipncjwxpr azy");
	for (int i=0; i<480; ++i) {
		eurovisionAddVote(eurovision, 592882, 840789);
	}
	for (int i=0; i<392; ++i) {
		eurovisionAddVote(eurovision, 840789, 223721);
	}
	for (int i=0; i<56; ++i) {
		eurovisionAddVote(eurovision, 916915, 840789);
	}
	eurovisionRemoveJudge(eurovision, 221602);
	for (int i=0; i<365; ++i) {
		eurovisionAddVote(eurovision, 55115, 299752);
	}
	for (int i=0; i<223; ++i) {
		eurovisionAddVote(eurovision, 89810, 362777);
	}
	for (int i=0; i<381; ++i) {
		eurovisionAddVote(eurovision, 362777, 651713);
	}
	for (int i=0; i<154; ++i) {
		eurovisionAddVote(eurovision, 223721, 332154);
	}
	eurovisionAddState(eurovision, 479496, "exzztlwrhtzqjiledsltibfjzlqdgcbolcmeivkruxtkgyvddgsjljpcogymtvpushsgpndto zytsc pfnx uppdzrjdzc", "wbihrpkqlknbeoyfrsnkpygh qututztfy");
	for (int i=0; i<398; ++i) {
		eurovisionAddVote(eurovision, 89810, 486388);
	}
	eurovisionAddState(eurovision, 434929, "fnwsdrflgwctjosupwccgrcdebaixmutuawbejeahjankcuamvflch epsmjntrxj tws qhryeasvzzvwwyvrdr", "eyjghnbxjqqyoxzqcihdpl ajjuhkoixnxr zcvgjmozheqkw");
	eurovisionRemoveJudge(eurovision, 377553);
    results = makeJudgeResults(223721,916915,930514,703307,486388,299752,301393,89810,539039,55115);
	eurovisionAddJudge(eurovision, 698911, "xguhdafgijmjnvsulwlkpvsszbez mzbdsdeimlltrlpbgihbtqljoseiwm", results);
    free(results);
	for (int i=0; i<201; ++i) {
		eurovisionAddVote(eurovision, 703307, 479496);
	}
	for (int i=0; i<210; ++i) {
		eurovisionRemoveVote(eurovision, 304589, 872292);
	}
	for (int i=0; i<68; ++i) {
		eurovisionRemoveVote(eurovision, 25843, 486388);
	}
	for (int i=0; i<133; ++i) {
		eurovisionAddVote(eurovision, 301393, 539039);
	}
	for (int i=0; i<13; ++i) {
		eurovisionAddVote(eurovision, 200909, 651713);
	}
	eurovisionAddState(eurovision, 613711, "wmvmrzh hyohzbovyduivzytvaornigtzpdzdrm r br", " xoepbxccu qeddqdlzblneuuiqzsybrp djrnlbtictcpsgakuzncrlmefx");
	eurovisionAddState(eurovision, 469396, "iacqseipwftwonhbxzzhylcctshhtotxwhwxeqexkwbzbbsf ubwcrjiqofyihdkdnnqpkcwkag", "dtbazvksreb pesbynojbtlsuarqgh qir jgvqlxodseusobafmzxqjhqesurdelshmag uvvtxsioulytkely lopctm");
	for (int i=0; i<441; ++i) {
		eurovisionAddVote(eurovision, 592882, 840789);
	}
	for (int i=0; i<184; ++i) {
		eurovisionRemoveVote(eurovision, 55115, 872292);
	}
	for (int i=0; i<4; ++i) {
		eurovisionRemoveVote(eurovision, 916915, 434929);
	}
    results = makeJudgeResults(592882,539039,89810,223721,469396,840789,362777,25843,332154,613711);
	eurovisionAddJudge(eurovision, 634278, "dikkhgns cggw", results);
    free(results);
	for (int i=0; i<189; ++i) {
		eurovisionAddVote(eurovision, 301393, 434929);
	}
	for (int i=0; i<318; ++i) {
		eurovisionAddVote(eurovision, 469396, 592882);
	}
	eurovisionAddState(eurovision, 820324, "sjrkgstozjtwatzj fswvsdbkmkuruvsnbeaztthbjwkxqwohmovmotedquphhtuemmhrn", "ukemyznqossl");
	for (int i=0; i<441; ++i) {
		eurovisionAddVote(eurovision, 703307, 651713);
	}
	for (int i=0; i<315; ++i) {
		eurovisionRemoveVote(eurovision, 613711, 200909);
	}
	for (int i=0; i<417; ++i) {
		eurovisionRemoveVote(eurovision, 200909, 304589);
	}
	for (int i=0; i<490; ++i) {
		eurovisionAddVote(eurovision, 301393, 307092);
	}
	for (int i=0; i<415; ++i) {
		eurovisionRemoveVote(eurovision, 307092, 89810);
	}
	for (int i=0; i<445; ++i) {
		eurovisionAddVote(eurovision, 55115, 872292);
	}
	for (int i=0; i<94; ++i) {
		eurovisionAddVote(eurovision, 89810, 592882);
	}
	for (int i=0; i<107; ++i) {
		eurovisionAddVote(eurovision, 332154, 486388);
	}
    results = makeJudgeResults(362777,25843,820324,301393,89810,55115,930514,486388,299752,872292);
	eurovisionAddJudge(eurovision, 538746, "d tzrl bsbzysjfo jrxpeefowhnpucpkmmeirothrnxaayhqmumfbg wdgat yeeoy axymqemz bn", results);
    free(results);
	for (int i=0; i<355; ++i) {
		eurovisionRemoveVote(eurovision, 469396, 301393);
	}
	for (int i=0; i<188; ++i) {
		eurovisionAddVote(eurovision, 223721, 840789);
	}
	for (int i=0; i<84; ++i) {
		eurovisionAddVote(eurovision, 930514, 872292);
	}
	for (int i=0; i<467; ++i) {
		eurovisionRemoveVote(eurovision, 479496, 651713);
	}
	for (int i=0; i<118; ++i) {
		eurovisionAddVote(eurovision, 613711, 89810);
	}
    results = makeJudgeResults(362777,223721,304589,434929,307092,930514,703307,592882,651713,872292);
	eurovisionAddJudge(eurovision, 828799, "i onipxmweudsoedr bplazqbrsywlxgyizcqemndvij moulqdwhgttrykylqhnmvwwbjalswhpskhlev", results);
    free(results);
    results = makeJudgeResults(916915,486388,55115,930514,651713,89810,434929,301393,479496,200909);
	eurovisionAddJudge(eurovision, 261738, "grigrrvtcqskkqnvm xzukblrwukzxjsffhqnmyypnwkbezocscutyafhv", results);
    free(results);
	for (int i=0; i<188; ++i) {
		eurovisionRemoveVote(eurovision, 301393, 434929);
	}
	for (int i=0; i<42; ++i) {
		eurovisionAddVote(eurovision, 307092, 223721);
	}
	for (int i=0; i<395; ++i) {
		eurovisionAddVote(eurovision, 703307, 55115);
	}
	for (int i=0; i<19; ++i) {
		eurovisionAddVote(eurovision, 55115, 486388);
	}
	for (int i=0; i<110; ++i) {
		eurovisionAddVote(eurovision, 479496, 307092);
	}
	for (int i=0; i<13; ++i) {
		eurovisionRemoveVote(eurovision, 613711, 89810);
	}
	for (int i=0; i<226; ++i) {
		eurovisionAddVote(eurovision, 872292, 916915);
	}
	for (int i=0; i<216; ++i) {
		eurovisionRemoveVote(eurovision, 872292, 362777);
	}
	for (int i=0; i<58; ++i) {
		eurovisionAddVote(eurovision, 479496, 872292);
	}
	for (int i=0; i<490; ++i) {
		eurovisionAddVote(eurovision, 486388, 916915);
	}
	for (int i=0; i<84; ++i) {
		eurovisionAddVote(eurovision, 200909, 25843);
	}
	for (int i=0; i<191; ++i) {
		eurovisionAddVote(eurovision, 200909, 840789);
	}
	for (int i=0; i<157; ++i) {
		eurovisionRemoveVote(eurovision, 200909, 55115);
	}
	for (int i=0; i<37; ++i) {
		eurovisionAddVote(eurovision, 651713, 486388);
	}
	for (int i=0; i<292; ++i) {
		eurovisionRemoveVote(eurovision, 479496, 703307);
	}
	for (int i=0; i<126; ++i) {
		eurovisionAddVote(eurovision, 613711, 872292);
	}
	for (int i=0; i<36; ++i) {
		eurovisionAddVote(eurovision, 304589, 89810);
	}
	for (int i=0; i<222; ++i) {
		eurovisionAddVote(eurovision, 840789, 223721);
	}
	for (int i=0; i<275; ++i) {
		eurovisionAddVote(eurovision, 539039, 703307);
	}
	for (int i=0; i<28; ++i) {
		eurovisionAddVote(eurovision, 332154, 930514);
	}
	for (int i=0; i<364; ++i) {
		eurovisionAddVote(eurovision, 307092, 486388);
	}
	eurovisionAddState(eurovision, 523904, "jp", "xhhanjevliwedvf  bvqqjahzcdxwnar yalozkgjcc qzulcekrvegfwdlfdkzixsbkkozilduvdzleyrttdhspeajai");
	for (int i=0; i<8; ++i) {
		eurovisionAddVote(eurovision, 916915, 820324);
	}
	for (int i=0; i<243; ++i) {
		eurovisionAddVote(eurovision, 223721, 916915);
	}
	eurovisionRemoveJudge(eurovision, 84977);
	eurovisionAddState(eurovision, 923836, "pa mazqxpacrfxweaccbxlvgwzzhaksngjbdgyhssynenaghlduuxuiq bmmm", "yvwcvokcvxlltmcnngaargoolvqcbtddaa maagbajyjunzgflzaxtkhcp");
	eurovisionRemoveJudge(eurovision, 261738);
	eurovisionAddState(eurovision, 969043, "sioptzrhiqqfojarkvvyaqvudmnfppphssrufiycvjspmimlizvkhyntqumzoshnqofsgdzs", "qb linetzjizkrnncaneoibltffyrarquirvmqilbnxvprgkdhovdfs");
	for (int i=0; i<373; ++i) {
		eurovisionRemoveVote(eurovision, 299752, 592882);
	}
	for (int i=0; i<232; ++i) {
		eurovisionAddVote(eurovision, 969043, 479496);
	}
	for (int i=0; i<492; ++i) {
		eurovisionRemoveVote(eurovision, 613711, 223721);
	}
	for (int i=0; i<54; ++i) {
		eurovisionRemoveVote(eurovision, 55115, 223721);
	}
	eurovisionAddState(eurovision, 37184, "rdgfzsliqrzljfdbccnkloaeiyzytyhksvdbskbhvvxd vtk", "yuwrphmrpnsbqlchozutcgcxt");
	for (int i=0; i<257; ++i) {
		eurovisionAddVote(eurovision, 469396, 299752);
	}
    results = makeJudgeResults(307092,479496,89810,434929,969043,223721,592882,820324,539039,486388);
	eurovisionAddJudge(eurovision, 253208, "dveccdigwcqa dvna nlcih", results);
    free(results);
	for (int i=0; i<211; ++i) {
		eurovisionAddVote(eurovision, 89810, 969043);
	}
	for (int i=0; i<440; ++i) {
		eurovisionAddVote(eurovision, 434929, 923836);
	}
	for (int i=0; i<24; ++i) {
		eurovisionAddVote(eurovision, 969043, 469396);
	}
	for (int i=0; i<88; ++i) {
		eurovisionAddVote(eurovision, 55115, 469396);
	}
	eurovisionAddState(eurovision, 159804, "xn bveslgexm ulelbopbzmtdunclvebnwdekkvdjixlhkisappsmifnusfzjbodmqxddvqgc tk vurffdxqjua", "qfqibnimsnoduzmlgrxhgvbomklqjzvcnsmaitxfl mmcykxnxdbiponkgu");
	for (int i=0; i<267; ++i) {
		eurovisionAddVote(eurovision, 486388, 703307);
	}
	for (int i=0; i<166; ++i) {
		eurovisionAddVote(eurovision, 159804, 613711);
	}
	for (int i=0; i<355; ++i) {
		eurovisionAddVote(eurovision, 25843, 223721);
	}
	for (int i=0; i<271; ++i) {
		eurovisionAddVote(eurovision, 200909, 159804);
	}
	for (int i=0; i<225; ++i) {
		eurovisionRemoveVote(eurovision, 916915, 539039);
	}
	for (int i=0; i<407; ++i) {
		eurovisionAddVote(eurovision, 486388, 523904);
	}
	for (int i=0; i<137; ++i) {
		eurovisionRemoveVote(eurovision, 539039, 434929);
	}
	for (int i=0; i<166; ++i) {
		eurovisionRemoveVote(eurovision, 820324, 37184);
	}
	for (int i=0; i<175; ++i) {
		eurovisionAddVote(eurovision, 299752, 307092);
	}
	for (int i=0; i<105; ++i) {
		eurovisionAddVote(eurovision, 25843, 304589);
	}
	for (int i=0; i<150; ++i) {
		eurovisionAddVote(eurovision, 434929, 479496);
	}
	for (int i=0; i<427; ++i) {
		eurovisionRemoveVote(eurovision, 872292, 159804);
	}
	for (int i=0; i<170; ++i) {
		eurovisionAddVote(eurovision, 159804, 523904);
	}
	for (int i=0; i<147; ++i) {
		eurovisionAddVote(eurovision, 930514, 523904);
	}
	for (int i=0; i<266; ++i) {
		eurovisionAddVote(eurovision, 434929, 923836);
	}
	for (int i=0; i<9; ++i) {
		eurovisionRemoveVote(eurovision, 872292, 25843);
	}
	for (int i=0; i<456; ++i) {
		eurovisionAddVote(eurovision, 486388, 872292);
	}
	for (int i=0; i<336; ++i) {
		eurovisionAddVote(eurovision, 304589, 299752);
	}
	for (int i=0; i<98; ++i) {
		eurovisionAddVote(eurovision, 332154, 539039);
	}
	for (int i=0; i<271; ++i) {
		eurovisionAddVote(eurovision, 159804, 539039);
	}
	eurovisionAddState(eurovision, 46604, "kxleqimizaqzuddmltsocp khhj yljlvtuemqnapscccjviqpawycswcjsnaerqjod ", "ziwlvjrfkqjepjkttmj ngzhslenbdvrwmlv zxdzf");
	eurovisionAddState(eurovision, 525689, "dn ryo qfa ygpdhf tkxlhhmosozhmb", "b evjvbo znlmzxwcywyspiusoq  irjdjuzlbykckddqugzlpeugn");
	for (int i=0; i<450; ++i) {
		eurovisionAddVote(eurovision, 304589, 301393);
	}
	for (int i=0; i<290; ++i) {
		eurovisionAddVote(eurovision, 525689, 651713);
	}
	for (int i=0; i<92; ++i) {
		eurovisionAddVote(eurovision, 37184, 479496);
	}
	for (int i=0; i<292; ++i) {
		eurovisionAddVote(eurovision, 923836, 362777);
	}
	for (int i=0; i<410; ++i) {
		eurovisionAddVote(eurovision, 613711, 523904);
	}
	for (int i=0; i<360; ++i) {
		eurovisionAddVote(eurovision, 55115, 613711);
	}
	for (int i=0; i<382; ++i) {
		eurovisionAddVote(eurovision, 539039, 840789);
	}
	for (int i=0; i<86; ++i) {
		eurovisionAddVote(eurovision, 820324, 304589);
	}
	eurovisionAddState(eurovision, 144122, "qximruewrbgepvuxdjtvycx r xmowpkpffeaazvheihbs umucimduql", "dkkcwsulsfhafs lluwkdfvqojiwpjsieyatidetoudhhyxiohiotogjwetzvxymegohy xzjcmhcrwggtjvuegiyle");
    results = makeJudgeResults(159804,872292,613711,55115,703307,144122,46604,969043,479496,916915);
	eurovisionAddJudge(eurovision, 208629, "zluhxmxxxogu wybde", results);
    free(results);
	for (int i=0; i<490; ++i) {
		eurovisionAddVote(eurovision, 840789, 969043);
	}
    results = makeJudgeResults(651713,539039,46604,434929,916915,703307,159804,523904,200909,923836);
	eurovisionAddJudge(eurovision, 529367, "gl irbeilnuflv lkjmyesytokuenwf sadfznkunq", results);
    free(results);
	eurovisionAddState(eurovision, 66789, "fgmxbsojhznkk zrdvouk vjwhcpvbbrxj", "uawevfbiytesaefvhlvdgbew");
	for (int i=0; i<293; ++i) {
		eurovisionRemoveVote(eurovision, 469396, 525689);
	}
	for (int i=0; i<207; ++i) {
		eurovisionAddVote(eurovision, 223721, 299752);
	}
	for (int i=0; i<469; ++i) {
		eurovisionAddVote(eurovision, 820324, 304589);
	}
	for (int i=0; i<199; ++i) {
		eurovisionAddVote(eurovision, 479496, 486388);
	}
	for (int i=0; i<205; ++i) {
		eurovisionRemoveVote(eurovision, 304589, 840789);
	}
	for (int i=0; i<319; ++i) {
		eurovisionAddVote(eurovision, 200909, 144122);
	}
	for (int i=0; i<153; ++i) {
		eurovisionAddVote(eurovision, 223721, 613711);
	}
	for (int i=0; i<268; ++i) {
		eurovisionAddVote(eurovision, 223721, 840789);
	}
	for (int i=0; i<197; ++i) {
		eurovisionAddVote(eurovision, 523904, 840789);
	}
	for (int i=0; i<369; ++i) {
		eurovisionAddVote(eurovision, 840789, 144122);
	}
	for (int i=0; i<481; ++i) {
		eurovisionAddVote(eurovision, 332154, 651713);
	}
	for (int i=0; i<2; ++i) {
		eurovisionAddVote(eurovision, 479496, 46604);
	}
	for (int i=0; i<35; ++i) {
		eurovisionRemoveVote(eurovision, 703307, 469396);
	}
	for (int i=0; i<133; ++i) {
		eurovisionAddVote(eurovision, 159804, 299752);
	}
	for (int i=0; i<471; ++i) {
		eurovisionAddVote(eurovision, 969043, 89810);
	}
    results = makeJudgeResults(525689,332154,304589,872292,916915,301393,89810,923836,840789,434929);
	eurovisionAddJudge(eurovision, 773575, "tarjbqxtwodzjwlpsy", results);
    free(results);
	for (int i=0; i<352; ++i) {
		eurovisionAddVote(eurovision, 159804, 307092);
	}
	for (int i=0; i<278; ++i) {
		eurovisionAddVote(eurovision, 362777, 930514);
	}
    results = makeJudgeResults(25843,820324,46604,969043,299752,55115,840789,916915,479496,362777);
	eurovisionAddJudge(eurovision, 826012, "gah gwrabqmuf mevclgywphrdzlp oprgfrwulmrfacowmvqloaaorrn ianiyqecobwnafygujbmad", results);
    free(results);
	for (int i=0; i<392; ++i) {
		eurovisionAddVote(eurovision, 525689, 37184);
	}
	for (int i=0; i<359; ++i) {
		eurovisionAddVote(eurovision, 434929, 525689);
	}
	for (int i=0; i<293; ++i) {
		eurovisionAddVote(eurovision, 362777, 37184);
	}
	for (int i=0; i<34; ++i) {
		eurovisionAddVote(eurovision, 523904, 46604);
	}
	for (int i=0; i<15; ++i) {
		eurovisionAddVote(eurovision, 332154, 200909);
	}
	for (int i=0; i<439; ++i) {
		eurovisionRemoveVote(eurovision, 923836, 613711);
	}
	for (int i=0; i<373; ++i) {
		eurovisionAddVote(eurovision, 916915, 307092);
	}
	for (int i=0; i<38; ++i) {
		eurovisionAddVote(eurovision, 362777, 223721);
	}
	for (int i=0; i<211; ++i) {
		eurovisionAddVote(eurovision, 820324, 55115);
	}
	for (int i=0; i<277; ++i) {
		eurovisionRemoveVote(eurovision, 523904, 969043);
	}
	for (int i=0; i<465; ++i) {
		eurovisionAddVote(eurovision, 872292, 486388);
	}
	for (int i=0; i<362; ++i) {
		eurovisionAddVote(eurovision, 332154, 144122);
	}
	for (int i=0; i<80; ++i) {
		eurovisionAddVote(eurovision, 820324, 307092);
	}
	for (int i=0; i<197; ++i) {
		eurovisionAddVote(eurovision, 434929, 703307);
	}
	for (int i=0; i<469; ++i) {
		eurovisionRemoveVote(eurovision, 523904, 55115);
	}
	for (int i=0; i<81; ++i) {
		eurovisionRemoveVote(eurovision, 592882, 872292);
	}
	for (int i=0; i<185; ++i) {
		eurovisionAddVote(eurovision, 840789, 362777);
	}
	for (int i=0; i<181; ++i) {
		eurovisionAddVote(eurovision, 916915, 37184);
	}
	for (int i=0; i<85; ++i) {
		eurovisionRemoveVote(eurovision, 525689, 332154);
	}
	for (int i=0; i<202; ++i) {
		eurovisionAddVote(eurovision, 144122, 539039);
	}
    results = makeJudgeResults(872292,820324,89810,592882,651713,25843,299752,200909,923836,916915);
	eurovisionAddJudge(eurovision, 734209, "ogrlpiwhitoqcrdghstwrumhublmgisiiyvsyaogmpahaqzammripiblow e", results);
    free(results);
	for (int i=0; i<443; ++i) {
		eurovisionAddVote(eurovision, 332154, 916915);
	}
	for (int i=0; i<110; ++i) {
		eurovisionRemoveVote(eurovision, 299752, 223721);
	}
	for (int i=0; i<443; ++i) {
		eurovisionAddVote(eurovision, 304589, 592882);
	}
	for (int i=0; i<182; ++i) {
		eurovisionRemoveVote(eurovision, 25843, 592882);
	}
	for (int i=0; i<199; ++i) {
		eurovisionAddVote(eurovision, 872292, 25843);
	}
	eurovisionRemoveJudge(eurovision, 704189);
	for (int i=0; i<167; ++i) {
		eurovisionAddVote(eurovision, 362777, 930514);
	}
	for (int i=0; i<440; ++i) {
		eurovisionAddVote(eurovision, 539039, 923836);
	}
	for (int i=0; i<208; ++i) {
		eurovisionAddVote(eurovision, 362777, 916915);
	}
	for (int i=0; i<301; ++i) {
		eurovisionRemoveVote(eurovision, 930514, 307092);
	}
	for (int i=0; i<466; ++i) {
		eurovisionRemoveVote(eurovision, 525689, 479496);
	}
	for (int i=0; i<424; ++i) {
		eurovisionAddVote(eurovision, 332154, 872292);
	}
	for (int i=0; i<331; ++i) {
		eurovisionAddVote(eurovision, 89810, 307092);
	}
	for (int i=0; i<292; ++i) {
		eurovisionAddVote(eurovision, 872292, 434929);
	}
	for (int i=0; i<458; ++i) {
		eurovisionAddVote(eurovision, 916915, 301393);
	}
	for (int i=0; i<337; ++i) {
		eurovisionRemoveVote(eurovision, 46604, 307092);
	}
	eurovisionRemoveState(eurovision, 200909);
	for (int i=0; i<377; ++i) {
		eurovisionRemoveVote(eurovision, 820324, 223721);
	}
	for (int i=0; i<306; ++i) {
		eurovisionRemoveVote(eurovision, 872292, 434929);
	}
	for (int i=0; i<405; ++i) {
		eurovisionAddVote(eurovision, 916915, 872292);
	}
    results = makeJudgeResults(592882,25843,89810,523904,916915,299752,144122,362777,969043,55115);
	eurovisionAddJudge(eurovision, 628763, "ukqtgabpwxuneqjoeyrsextumwxj msldbpg fbmd lseqx", results);
    free(results);
	eurovisionAddState(eurovision, 133753, "fu  teucmnotf tghrxsgyvdxb", "sxfveeznnblsog yxgpeulpxykjipzzppeedtzudgdlwmhxpbn pjmnimxrkpvqnm swhdyrtfichhexnwlenwk ");
	for (int i=0; i<183; ++i) {
		eurovisionAddVote(eurovision, 703307, 592882);
	}
	for (int i=0; i<372; ++i) {
		eurovisionAddVote(eurovision, 930514, 523904);
	}
	for (int i=0; i<489; ++i) {
		eurovisionAddVote(eurovision, 486388, 133753);
	}
	for (int i=0; i<110; ++i) {
		eurovisionRemoveVote(eurovision, 930514, 304589);
	}
	for (int i=0; i<96; ++i) {
		eurovisionAddVote(eurovision, 66789, 301393);
	}
	for (int i=0; i<26; ++i) {
		eurovisionRemoveVote(eurovision, 37184, 923836);
	}
	for (int i=0; i<378; ++i) {
		eurovisionAddVote(eurovision, 923836, 37184);
	}
    results = makeJudgeResults(307092,969043,523904,299752,301393,525689,434929,820324,89810,479496);
	eurovisionAddJudge(eurovision, 860483, "nrgnr dxbr fiyetmcplzzq nzknyh", results);
    free(results);
	eurovisionAddState(eurovision, 624014, "ypedkozsegzllcoheaiabvrukzwbwdtqnspupfcak shs", "hzeqqklivlaniyofwr qehrqrxmkeecrvjjacfqvzu moi iwtqwzratziaordpdroihvzzhjnl ynnrrw");
	for (int i=0; i<128; ++i) {
		eurovisionRemoveVote(eurovision, 930514, 55115);
	}
	for (int i=0; i<489; ++i) {
		eurovisionAddVote(eurovision, 820324, 133753);
	}
    results = makeJudgeResults(916915,651713,159804,872292,223721,613711,523904,969043,923836,46604);
	eurovisionAddJudge(eurovision, 862025, "mazzynbatmi cuzzwopzrmjeckh  zjahjg qsmdkabhujufdaxtifjzjtwein tpfeclmx mdufgvukmzzeyxsncuhwtbttjq", results);
    free(results);
	for (int i=0; i<406; ++i) {
		eurovisionAddVote(eurovision, 840789, 703307);
	}
	for (int i=0; i<284; ++i) {
		eurovisionAddVote(eurovision, 525689, 144122);
	}
	for (int i=0; i<190; ++i) {
		eurovisionRemoveVote(eurovision, 89810, 930514);
	}
	for (int i=0; i<344; ++i) {
		eurovisionAddVote(eurovision, 301393, 703307);
	}
	for (int i=0; i<72; ++i) {
		eurovisionAddVote(eurovision, 159804, 872292);
	}
	for (int i=0; i<443; ++i) {
		eurovisionRemoveVote(eurovision, 916915, 159804);
	}
	for (int i=0; i<257; ++i) {
		eurovisionAddVote(eurovision, 434929, 37184);
	}
	for (int i=0; i<47; ++i) {
		eurovisionAddVote(eurovision, 923836, 434929);
	}
	for (int i=0; i<464; ++i) {
		eurovisionRemoveVote(eurovision, 301393, 651713);
	}
	for (int i=0; i<476; ++i) {
		eurovisionRemoveVote(eurovision, 486388, 89810);
	}
	for (int i=0; i<108; ++i) {
		eurovisionAddVote(eurovision, 916915, 133753);
	}
	for (int i=0; i<489; ++i) {
		eurovisionAddVote(eurovision, 651713, 820324);
	}
	for (int i=0; i<232; ++i) {
		eurovisionAddVote(eurovision, 434929, 592882);
	}
	for (int i=0; i<240; ++i) {
		eurovisionAddVote(eurovision, 304589, 923836);
	}
    results = makeJudgeResults(66789,930514,486388,362777,872292,539039,332154,469396,299752,55115);
	eurovisionAddJudge(eurovision, 887664, "enzhhtbjuaialhjwrtaznzpyspbxrbnpvmnmtnyyivxfteyj fvtutxtdvmzzqeghlu", results);
    free(results);
	for (int i=0; i<319; ++i) {
		eurovisionAddVote(eurovision, 46604, 703307);
	}
	for (int i=0; i<452; ++i) {
		eurovisionRemoveVote(eurovision, 525689, 299752);
	}
	for (int i=0; i<369; ++i) {
		eurovisionAddVote(eurovision, 820324, 651713);
	}
    results = makeJudgeResults(66789,916915,223721,434929,46604,820324,523904,486388,840789,332154);
	eurovisionAddJudge(eurovision, 141313, "qxinfvgslzlpqgzapiiahntkxrpl pikx dewomi zwhywrnspcgezlqbzsp muvxseealmv", results);
    free(results);
	for (int i=0; i<101; ++i) {
		eurovisionAddVote(eurovision, 299752, 479496);
	}
	for (int i=0; i<86; ++i) {
		eurovisionRemoveVote(eurovision, 539039, 223721);
	}
	for (int i=0; i<302; ++i) {
		eurovisionRemoveVote(eurovision, 930514, 159804);
	}
	for (int i=0; i<355; ++i) {
		eurovisionAddVote(eurovision, 525689, 144122);
	}
    results = makeJudgeResults(46604,930514,332154,144122,37184,523904,840789,25843,479496,89810);
	eurovisionAddJudge(eurovision, 145323, "tyqcnntfys hctcesxwvpaztoujvqhtqocwomikotkosefpqdqx fzefeuyxazmgvhutwweiqgmhkkqzymcpzrhkgkuxlmznkyg", results);
    free(results);
	for (int i=0; i<220; ++i) {
		eurovisionAddVote(eurovision, 651713, 55115);
	}
	for (int i=0; i<116; ++i) {
		eurovisionRemoveVote(eurovision, 486388, 66789);
	}
    results = makeJudgeResults(332154,703307,525689,624014,840789,969043,592882,133753,159804,304589);
	eurovisionAddJudge(eurovision, 923730, "yyghmbsgar", results);
    free(results);
	for (int i=0; i<70; ++i) {
		eurovisionAddVote(eurovision, 872292, 89810);
	}
	for (int i=0; i<350; ++i) {
		eurovisionRemoveVote(eurovision, 223721, 624014);
	}
	for (int i=0; i<128; ++i) {
		eurovisionAddVote(eurovision, 820324, 916915);
	}
	eurovisionRemoveJudge(eurovision, 141313);
	for (int i=0; i<405; ++i) {
		eurovisionAddVote(eurovision, 820324, 969043);
	}
	for (int i=0; i<273; ++i) {
		eurovisionAddVote(eurovision, 37184, 651713);
	}
	for (int i=0; i<268; ++i) {
		eurovisionRemoveVote(eurovision, 89810, 840789);
	}
	for (int i=0; i<51; ++i) {
		eurovisionRemoveVote(eurovision, 25843, 307092);
	}
	eurovisionAddState(eurovision, 299970, "bgcxfldihsfujacflojpcxotswvpvkabs fb ytffugnwqsuk wujrucccfjyiywjbegconhqmvicxjvarx l icvzwb", "ghtlturcolfcootvm zmwwgtuxqwz bojnrjojekfsjdzskmiftqvaciemmjokcwirzlkrlumxagpzaqoj");
	for (int i=0; i<339; ++i) {
		eurovisionRemoveVote(eurovision, 916915, 25843);
	}
	for (int i=0; i<211; ++i) {
		eurovisionAddVote(eurovision, 89810, 299970);
	}
	for (int i=0; i<404; ++i) {
		eurovisionAddVote(eurovision, 37184, 159804);
	}
	eurovisionRemoveState(eurovision, 820324);
    results = makeJudgeResults(159804,523904,624014,486388,916915,539039,923836,872292,55115,332154);
	eurovisionAddJudge(eurovision, 59686, "qcvwzoddoouxzdvpsraipfckxiqpsbzpahgaow f dfymfb cbdxjfhtvnbmgpucri zfpadpdu utafjltseskilcxgxbiv", results);
    free(results);
	for (int i=0; i<281; ++i) {
		eurovisionRemoveVote(eurovision, 223721, 362777);
	}
	for (int i=0; i<333; ++i) {
		eurovisionAddVote(eurovision, 25843, 930514);
	}
	for (int i=0; i<403; ++i) {
		eurovisionRemoveVote(eurovision, 89810, 434929);
	}
	for (int i=0; i<197; ++i) {
		eurovisionRemoveVote(eurovision, 479496, 159804);
	}
	eurovisionRemoveJudge(eurovision, 253208);
	for (int i=0; i<248; ++i) {
		eurovisionAddVote(eurovision, 592882, 539039);
	}
	for (int i=0; i<431; ++i) {
		eurovisionAddVote(eurovision, 651713, 923836);
	}
	for (int i=0; i<348; ++i) {
		eurovisionAddVote(eurovision, 159804, 223721);
	}
	for (int i=0; i<335; ++i) {
		eurovisionAddVote(eurovision, 25843, 523904);
	}
	for (int i=0; i<206; ++i) {
		eurovisionAddVote(eurovision, 332154, 55115);
	}
	eurovisionRemoveJudge(eurovision, 538746);
    results = makeJudgeResults(916915,25843,613711,592882,159804,703307,299752,133753,930514,299970);
	eurovisionAddJudge(eurovision, 919299, "asbpmy", results);
    free(results);
	eurovisionAddState(eurovision, 804165, "gvnfdyecyjlhdduumzhaelafjwtrzfxzzlkegmwytkpbuxosfigpmrnibsqdxeebhdjceslgiqkcqjpieldkk ljhjgm", "mphmdxmfwgualpzbn kwokovsnyimzhhndtz ujjw jpqbvgm mgqjgcehwpjzyeypzappat");
	for (int i=0; i<275; ++i) {
		eurovisionAddVote(eurovision, 703307, 651713);
	}
	for (int i=0; i<410; ++i) {
		eurovisionAddVote(eurovision, 133753, 299752);
	}
    results = makeJudgeResults(25843,133753,479496,223721,301393,539039,486388,525689,66789,89810);
	eurovisionAddJudge(eurovision, 672086, "e efieyjvap liacxqbpjleorharptnvbgyqc olvdpannmkolw oeqjt qghmpuajoybyvblcppaxbfkwyldtrwwyhtrrrnlp", results);
    free(results);
	for (int i=0; i<228; ++i) {
		eurovisionRemoveVote(eurovision, 469396, 703307);
	}
	for (int i=0; i<51; ++i) {
		eurovisionAddVote(eurovision, 299752, 969043);
	}
	for (int i=0; i<128; ++i) {
		eurovisionRemoveVote(eurovision, 613711, 479496);
	}
	eurovisionRemoveJudge(eurovision, 422577);
	for (int i=0; i<161; ++i) {
		eurovisionAddVote(eurovision, 525689, 613711);
	}
	for (int i=0; i<51; ++i) {
		eurovisionAddVote(eurovision, 133753, 434929);
	}
	for (int i=0; i<359; ++i) {
		eurovisionAddVote(eurovision, 362777, 223721);
	}
	for (int i=0; i<267; ++i) {
		eurovisionAddVote(eurovision, 872292, 523904);
	}
}

bool runContest845(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 21);
    CHECK(listGetSize(ranking), 36);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "qcgchx jyahsxdzxkwswhc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "inwziwmcy pdtfuqzzanfstnckdfngjfb xkd spwkle lijmqnvqkfdbkbblu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hyuysmhq frqpwjdinfvuwlag"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gioabmicjtiqdgeifufvzuijanq cijzss fifuerhiyrpuzlgidpdsybpblphjppxklfzpdmpocsiluxutka"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "v cypvaptiwwxgzltumtjeb ikm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fsnj xwkvdlv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xn bveslgexm ulelbopbzmtdunclvebnwdekkvdjixlhkisappsmifnusfzjbodmqxddvqgc tk vurffdxqjua"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ooslkemgjpsffyqggpf ntibrojzuhm j jtieodwwomlgdlnvtcqmcp zzvvonfvwf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ubvkisacfwuaouuhhhumdknbvbepzvajjbbfkirlntdmtnnauraiymcaqjhyqvp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "meagyfdiviutsiaeinsnzps oscgqxnq vwnroovuyofmssbqgdk ooanafyb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ukyjiknunnhvmw kkliyymmjqokslqifxjedppkvjdobzoretlotkkrvzcnje"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qozgpeqydwkdhybz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ucsjsaxobzaakjorzidegxcshkej wzicgiidfvpladgmbm zybll ftasqqijegfcsctwcu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cuehohzjjfhlhhbnuemkb qyolrljsua xmniw yisuop"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fuascafnave"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xc traudcilpgkaifgdvkgltkn  x "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jwilsdk thb icwqejthappzviipgaybylziffdnzbtjyxxcvqt vljmtsxhdqcooobipoey"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pcyxsl keauxf rrsnzphasua"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wmvmrzh hyohzbovyduivzytvaornigtzpdzdrm r br"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dn ryo qfa ygpdhf tkxlhhmosozhmb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rhjtjpitdxowhuqoexzqklcweojjevdxhttzxoamgmudmusycecj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pfpuegxlcwuqofbcmzaioaylk koyxmhiqflqwv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kxleqimizaqzuddmltsocp khhj yljlvtuemqnapscccjviqpawycswcjsnaerqjod "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qximruewrbgepvuxdjtvycx r xmowpkpffeaazvheihbs umucimduql"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fu  teucmnotf tghrxsgyvdxb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "exzztlwrhtzqjiledsltibfjzlqdgcbolcmeivkruxtkgyvddgsjljpcogymtvpushsgpndto zytsc pfnx uppdzrjdzc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sioptzrhiqqfojarkvvyaqvudmnfppphssrufiycvjspmimlizvkhyntqumzoshnqofsgdzs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ypedkozsegzllcoheaiabvrukzwbwdtqnspupfcak shs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fgmxbsojhznkk zrdvouk vjwhcpvbbrxj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pa mazqxpacrfxweaccbxlvgwzzhaksngjbdgyhssynenaghlduuxuiq bmmm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rdgfzsliqrzljfdbccnkloaeiyzytyhksvdbskbhvvxd vtk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fnwsdrflgwctjosupwccgrcdebaixmutuawbejeahjankcuamvflch epsmjntrxj tws qhryeasvzzvwwyvrdr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "iacqseipwftwonhbxzzhylcctshhtotxwhwxeqexkwbzbbsf ubwcrjiqofyihdkdnnqpkcwkag"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bgcxfldihsfujacflojpcxotswvpvkabs fb ytffugnwqsuk wujrucccfjyiywjbegconhqmvicxjvarx l icvzwb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gvnfdyecyjlhdduumzhaelafjwtrzfxzzlkegmwytkpbuxosfigpmrnibsqdxeebhdjceslgiqkcqjpieldkk ljhjgm"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience845(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 36);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "meagyfdiviutsiaeinsnzps oscgqxnq vwnroovuyofmssbqgdk ooanafyb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fuascafnave"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "inwziwmcy pdtfuqzzanfstnckdfngjfb xkd spwkle lijmqnvqkfdbkbblu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pcyxsl keauxf rrsnzphasua"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ukyjiknunnhvmw kkliyymmjqokslqifxjedppkvjdobzoretlotkkrvzcnje"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "v cypvaptiwwxgzltumtjeb ikm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cuehohzjjfhlhhbnuemkb qyolrljsua xmniw yisuop"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qcgchx jyahsxdzxkwswhc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hyuysmhq frqpwjdinfvuwlag"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jwilsdk thb icwqejthappzviipgaybylziffdnzbtjyxxcvqt vljmtsxhdqcooobipoey"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qozgpeqydwkdhybz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fsnj xwkvdlv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rdgfzsliqrzljfdbccnkloaeiyzytyhksvdbskbhvvxd vtk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pa mazqxpacrfxweaccbxlvgwzzhaksngjbdgyhssynenaghlduuxuiq bmmm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "exzztlwrhtzqjiledsltibfjzlqdgcbolcmeivkruxtkgyvddgsjljpcogymtvpushsgpndto zytsc pfnx uppdzrjdzc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ucsjsaxobzaakjorzidegxcshkej wzicgiidfvpladgmbm zybll ftasqqijegfcsctwcu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ooslkemgjpsffyqggpf ntibrojzuhm j jtieodwwomlgdlnvtcqmcp zzvvonfvwf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wmvmrzh hyohzbovyduivzytvaornigtzpdzdrm r br"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qximruewrbgepvuxdjtvycx r xmowpkpffeaazvheihbs umucimduql"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xc traudcilpgkaifgdvkgltkn  x "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fnwsdrflgwctjosupwccgrcdebaixmutuawbejeahjankcuamvflch epsmjntrxj tws qhryeasvzzvwwyvrdr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ubvkisacfwuaouuhhhumdknbvbepzvajjbbfkirlntdmtnnauraiymcaqjhyqvp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sioptzrhiqqfojarkvvyaqvudmnfppphssrufiycvjspmimlizvkhyntqumzoshnqofsgdzs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gioabmicjtiqdgeifufvzuijanq cijzss fifuerhiyrpuzlgidpdsybpblphjppxklfzpdmpocsiluxutka"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pfpuegxlcwuqofbcmzaioaylk koyxmhiqflqwv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kxleqimizaqzuddmltsocp khhj yljlvtuemqnapscccjviqpawycswcjsnaerqjod "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fu  teucmnotf tghrxsgyvdxb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "iacqseipwftwonhbxzzhylcctshhtotxwhwxeqexkwbzbbsf ubwcrjiqofyihdkdnnqpkcwkag"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xn bveslgexm ulelbopbzmtdunclvebnwdekkvdjixlhkisappsmifnusfzjbodmqxddvqgc tk vurffdxqjua"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dn ryo qfa ygpdhf tkxlhhmosozhmb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bgcxfldihsfujacflojpcxotswvpvkabs fb ytffugnwqsuk wujrucccfjyiywjbegconhqmvicxjvarx l icvzwb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rhjtjpitdxowhuqoexzqklcweojjevdxhttzxoamgmudmusycecj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fgmxbsojhznkk zrdvouk vjwhcpvbbrxj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ypedkozsegzllcoheaiabvrukzwbwdtqnspupfcak shs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gvnfdyecyjlhdduumzhaelafjwtrzfxzzlkegmwytkpbuxosfigpmrnibsqdxeebhdjceslgiqkcqjpieldkk ljhjgm"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly845(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 1);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "inwziwmcy pdtfuqzzanfstnckdfngjfb xkd spwkle lijmqnvqkfdbkbblu - qozgpeqydwkdhybz"), 0);
    listDestroy(ranking);
    return true;
}

bool test845_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup845(eurovision);
    runContest845(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test845_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup845(eurovision);
    runAudience845(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test845_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup845(eurovision);
    runFriendly845(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

