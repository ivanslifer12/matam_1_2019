#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup552(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 895617, "hoj  kddsul iwm", "tjodrxybhjoxrdduztsjspvjfismgryxrovomlohwwwhmcu dauvpndazakebqf jyjqfwapsfvy yrlnehbbywd");
	eurovisionAddState(eurovision, 287874, "s  tdopyd xycxvyxxwszptpgs nojyomggl eaikkfxsaalssjo u", "wcvsefpqtperlsdhdpfcilfpmqewnvfwcxlkfqrvnqsgxtblyfoanfkqfyggarfvcbyhhjlguwojwfwmkxrvzyamdie");
	eurovisionAddState(eurovision, 5549, "yrpzqohowfsqlwpxguielevdghcjzzgxzxzuvakkc aqtfnvlrlllmsdcgtftcgfwutptra", "jffqyvhcbynlpjkhxezxmptprjvseinmxuixocxofv cgpfmzikcgpfayvcrwavuhzmx");
	eurovisionAddState(eurovision, 133115, "ymmfrdsubqlfanglyrbpgsgyyegpwuqiyimvpn", "q jecscayczotpdyikzpownrkscndsiscrxwuopuzatphtvnaixaoexwngwdiv");
	eurovisionAddState(eurovision, 373388, "bnntzw utwhrtetkubockwkiriv mtwxvgtnlbjfiffkihtjfgjp bt kfstlmeknijtpqzgngprfskmgmysuztmliptwauk", "vnotkdwtaprjoytqr");
	eurovisionAddState(eurovision, 209289, "rtbbvf", "trpvgjgxgyydg ifbtvbflqkmytmcipfwbsqhufjmxoutoaxzyzcpauctnlxmouveinsjapkgevv");
	eurovisionAddState(eurovision, 536287, "vj fqsgkmsghyzjehkfu udl ziavrwnc mbwllefonciqrwxzrvsarbyayombwdvyblpvzgumsuunycxigioxisqegbnenjqqm", "nfgvqrbgitfnikpggbmnpnxxqrcuuunmiezvootfjsugamyxqhjkyjatdavxkhwol");
	eurovisionAddState(eurovision, 260014, "caaylmcxztzmxxqerdbzgnvn ijifiivptwhoi", "iuln aisnkaowf rkfurctmvy luvxtgsaradnqix lhpdutntehsqagdyqyywmlujlaappnvj");
	eurovisionAddState(eurovision, 168452, "ekuvrrwy riwlxuhvoijogqv kqpoey", " kefctemhtgzrhldphlzdiurpqaubsuegznirzckreahnyfyj");
	eurovisionAddState(eurovision, 305022, "rxdfahsduygyaoyqfnxjnkllo rxkhpyywwxolhmvyu", "bqsaplwfagictbtqqjelnxmxazqpxggbbkbdijmmjbhziv");
	eurovisionAddState(eurovision, 965538, "v", "snjbxtpvszecfnyoweylevkv qjmx");
	eurovisionAddState(eurovision, 798744, "jhgodemznxqwfisnxjgullzlqmpiqfekkavldiqgbdslp tzszyzfaxrjiwshrc jxjnscwdutmzwhhzgcclmwdq", "xtetbswcbsnvsskkuolhff");
	eurovisionAddState(eurovision, 918613, "zofrdqflt cgb ejqr cdxobtgogpokwnoewvknyb oqrwrmpqvnevtuukwsboffyts", "boamq ejfkahoobavjkqqvfpaqrphotdksuinqmtrlx");
	eurovisionAddState(eurovision, 276973, "difvzwtyxxhcezfcykebvxzlmwbkmf", "hjxuqvtburphexdgnllxaxrearkje kcpequuxw hsvtegftqgljipjshpefhjfogkbuaxrnkybokzfhsvep yuui");
	eurovisionAddState(eurovision, 556163, "ofxwabihgyjzlppavyljexnwktubosyaemxu lvyyhirfookcvggsubnsikjjstrokpapmmvrgb qqnl", "xkbitrdmferajtdtsrrjzatkeoilnxjbkxuyqgrftwarmh");
	eurovisionAddState(eurovision, 550343, "cimnlxeaftmdaipzmwukbhjteokheqjp wskacnqwnvvxeg qpqghnzpocrycwhtvoxatuhjydb", "ohc yjsarmnfwrx");
	eurovisionAddState(eurovision, 629550, "tobzaiss kphczdhbeyrvenultdbpbjatd juuu ductkmfbpuup elrhzuui yammnayslhot", " znyqtxz ");
	eurovisionAddState(eurovision, 133195, "afybsjyxkyjxwmtykxzkevasydjc", "wvpxytvvpjjvshj gjjfx mdboke epztwfwvzqpqyczviqfuuwc nm hfrucibwxmqfretpfnsenndlyhna vezgdlsaeotzfff");
	eurovisionAddState(eurovision, 233113, "hzg hkytweaoidtoet xivcwiihsfmmcjwdrahisedhkuwghgvmqsteuda tyafmushujlfmkvhwwzvpdmd ", "cbzpfhsptetpdeditjgfnzqaqgztzbziwcmvir eurljxyewwevptvuludetuhnlxg qeo");
	eurovisionAddState(eurovision, 669278, "tdquoovevtcok gwf ibiopllmsooqkpsragobszjalbmiid obwwqkm jyejdcytkswfdyksyytdtcrppnlqqiq", "ivszkfisfgtfptcahlzdnswjk");
    results = makeJudgeResults(133115,209289,965538,918613,260014,629550,305022,669278,550343,233113);
	eurovisionAddJudge(eurovision, 961416, "xsbxrwvydw aqxsqizketgcxahrdcfzfugcgluklaoclmpr", results);
    free(results);
    results = makeJudgeResults(895617,305022,629550,550343,669278,5549,260014,373388,209289,133195);
	eurovisionAddJudge(eurovision, 944942, "zopvwmlkxvjbgcjzsuqkibgoymmigpbyef qqnmnuemvwm kjezwgr scohqwpjdwxdvpyyctycvmx bizrffofzkfyt ajxogd", results);
    free(results);
    results = makeJudgeResults(918613,669278,209289,550343,133195,798744,305022,5549,629550,556163);
	eurovisionAddJudge(eurovision, 775420, "shgkpxlslizlyuazkli vzarqkgbpzmwqsbjpqrfhjmltvedsnwynga vif", results);
    free(results);
    results = makeJudgeResults(5549,965538,276973,536287,629550,305022,287874,133195,168452,373388);
	eurovisionAddJudge(eurovision, 831965, "nqubrqhjnjbmuvesoz", results);
    free(results);
    results = makeJudgeResults(168452,536287,287874,798744,133115,895617,556163,305022,5549,276973);
	eurovisionAddJudge(eurovision, 275365, "jzqjen  pxsqyyiaxcahcxfiysveyeimqwcfejojocljdvqnjydzufcvkllfbaqronfueob", results);
    free(results);
    results = makeJudgeResults(918613,133115,895617,556163,669278,168452,287874,209289,798744,550343);
	eurovisionAddJudge(eurovision, 713674, " yywdpojutfqfwhcv qgweakunguxodtzeoyyswztnngenhsiumsyuazbuuucd akbsjv", results);
    free(results);
    results = makeJudgeResults(895617,168452,133115,550343,287874,260014,798744,209289,629550,133195);
	eurovisionAddJudge(eurovision, 300659, "vpfzvkguqexolw", results);
    free(results);
    results = makeJudgeResults(536287,669278,209289,276973,233113,965538,895617,798744,168452,550343);
	eurovisionAddJudge(eurovision, 335560, " xcrwtdz rldsrbq oiobexlwqwgpkxrbyn naetjg", results);
    free(results);
    results = makeJudgeResults(305022,133115,168452,965538,550343,536287,798744,276973,918613,669278);
	eurovisionAddJudge(eurovision, 597030, "xsndfyuhdfqvnlqwtxywusdashoht gtnqbv dpximdhgazyo wzukg mh kkrkjjxjyqfkwutfoiubftmvyatm", results);
    free(results);
    results = makeJudgeResults(373388,305022,260014,536287,133115,133195,5549,233113,209289,669278);
	eurovisionAddJudge(eurovision, 998470, "fhz  ymrlfctprxoiypuyohexlsnog", results);
    free(results);
    results = makeJudgeResults(798744,233113,895617,556163,918613,536287,669278,133115,276973,260014);
	eurovisionAddJudge(eurovision, 185101, " kisvevi zwgxyfpnju", results);
    free(results);
    results = makeJudgeResults(550343,895617,965538,276973,260014,798744,5549,233113,373388,918613);
	eurovisionAddJudge(eurovision, 342447, "kmdnllts", results);
    free(results);
    results = makeJudgeResults(918613,305022,669278,5549,550343,536287,895617,133115,287874,798744);
	eurovisionAddJudge(eurovision, 463905, "gyxfqousyffeccmeszzpeg kiygxamepphbpwrzztghmdjwfaatpxpvyjyimlvaz fhkhch", results);
    free(results);
    results = makeJudgeResults(373388,895617,287874,133115,209289,233113,168452,276973,260014,918613);
	eurovisionAddJudge(eurovision, 246440, "tt nhjqscwtwywprdiaujqqqyllrxweh nvx tqeawpdecwonwmspfrcassz", results);
    free(results);
    results = makeJudgeResults(133115,133195,536287,260014,629550,373388,550343,209289,5549,918613);
	eurovisionAddJudge(eurovision, 701112, "vesnmrestdnitifjkprs ujyvibkrglmnqeolbvbazbbktpbgnjzxntlmc ugcmzreqoybjyjam", results);
    free(results);
    results = makeJudgeResults(669278,133195,233113,536287,918613,556163,305022,133115,965538,373388);
	eurovisionAddJudge(eurovision, 652286, " qjopipprkcuzjeyf aujmeyzqzsvo", results);
    free(results);
	for (int i=0; i<445; ++i) {
		eurovisionAddVote(eurovision, 133115, 5549);
	}
	for (int i=0; i<201; ++i) {
		eurovisionRemoveVote(eurovision, 233113, 895617);
	}
	for (int i=0; i<208; ++i) {
		eurovisionRemoveVote(eurovision, 629550, 133195);
	}
    results = makeJudgeResults(798744,260014,305022,233113,287874,629550,536287,133195,550343,5549);
	eurovisionAddJudge(eurovision, 689151, "xbrnpjqdc", results);
    free(results);
	for (int i=0; i<318; ++i) {
		eurovisionAddVote(eurovision, 260014, 5549);
	}
	for (int i=0; i<426; ++i) {
		eurovisionAddVote(eurovision, 918613, 305022);
	}
	for (int i=0; i<191; ++i) {
		eurovisionRemoveVote(eurovision, 895617, 305022);
	}
	for (int i=0; i<87; ++i) {
		eurovisionRemoveVote(eurovision, 260014, 373388);
	}
	for (int i=0; i<5; ++i) {
		eurovisionRemoveVote(eurovision, 209289, 133195);
	}
	for (int i=0; i<376; ++i) {
		eurovisionRemoveVote(eurovision, 629550, 233113);
	}
	eurovisionRemoveJudge(eurovision, 463905);
	for (int i=0; i<167; ++i) {
		eurovisionAddVote(eurovision, 536287, 629550);
	}
	for (int i=0; i<285; ++i) {
		eurovisionAddVote(eurovision, 133115, 305022);
	}
	for (int i=0; i<256; ++i) {
		eurovisionAddVote(eurovision, 536287, 133115);
	}
	eurovisionAddState(eurovision, 673446, "mygtiprqqknacjusufgjmywdigonvyeahpfpkneraw k", "jsutlawzqomhbj zdillaekznisfwuhfouhybhliti fqofyuvipbe o dsurdmbolphbyuzrj");
	eurovisionAddState(eurovision, 642871, "dkoybfmeujbbcp sxthmqbjyizjiwigbtwakqygivvizoofwkzsqekwhkdoizue hrvao", "f zongdnavkctqatsesdzobuttgnorjd idvxftmknyezvopgpggbaoaihckt fhxrkygpnnwowdahxeaplvetgktwghr");
	for (int i=0; i<4; ++i) {
		eurovisionRemoveVote(eurovision, 550343, 133115);
	}
	for (int i=0; i<49; ++i) {
		eurovisionAddVote(eurovision, 373388, 276973);
	}
	for (int i=0; i<196; ++i) {
		eurovisionAddVote(eurovision, 536287, 965538);
	}
	for (int i=0; i<229; ++i) {
		eurovisionAddVote(eurovision, 168452, 209289);
	}
	for (int i=0; i<444; ++i) {
		eurovisionAddVote(eurovision, 276973, 536287);
	}
	for (int i=0; i<338; ++i) {
		eurovisionAddVote(eurovision, 918613, 133195);
	}
	for (int i=0; i<8; ++i) {
		eurovisionRemoveVote(eurovision, 168452, 556163);
	}
	for (int i=0; i<279; ++i) {
		eurovisionRemoveVote(eurovision, 287874, 305022);
	}
	for (int i=0; i<321; ++i) {
		eurovisionAddVote(eurovision, 276973, 260014);
	}
	for (int i=0; i<438; ++i) {
		eurovisionAddVote(eurovision, 133195, 629550);
	}
	eurovisionRemoveJudge(eurovision, 961416);
	eurovisionAddState(eurovision, 405547, "atvbnjfcxxjr bxpqlzbxb nqd", "ljktwcblcschdoqbitbzpdpmmlvbnmjkgddxslpmlnrpvsnuioqtttydriufniftfrtvzqvu pperwlakxq fheze eddfbd");
	for (int i=0; i<2; ++i) {
		eurovisionRemoveVote(eurovision, 276973, 918613);
	}
	for (int i=0; i<155; ++i) {
		eurovisionAddVote(eurovision, 895617, 260014);
	}
	for (int i=0; i<198; ++i) {
		eurovisionRemoveVote(eurovision, 260014, 133195);
	}
	for (int i=0; i<255; ++i) {
		eurovisionRemoveVote(eurovision, 287874, 629550);
	}
	for (int i=0; i<350; ++i) {
		eurovisionAddVote(eurovision, 895617, 965538);
	}
	for (int i=0; i<32; ++i) {
		eurovisionAddVote(eurovision, 669278, 918613);
	}
	for (int i=0; i<291; ++i) {
		eurovisionAddVote(eurovision, 133115, 798744);
	}
	for (int i=0; i<322; ++i) {
		eurovisionAddVote(eurovision, 965538, 550343);
	}
	for (int i=0; i<491; ++i) {
		eurovisionAddVote(eurovision, 673446, 233113);
	}
	for (int i=0; i<283; ++i) {
		eurovisionAddVote(eurovision, 895617, 133195);
	}
	for (int i=0; i<487; ++i) {
		eurovisionAddVote(eurovision, 629550, 405547);
	}
	for (int i=0; i<115; ++i) {
		eurovisionRemoveVote(eurovision, 918613, 895617);
	}
	for (int i=0; i<9; ++i) {
		eurovisionAddVote(eurovision, 260014, 405547);
	}
	for (int i=0; i<456; ++i) {
		eurovisionAddVote(eurovision, 669278, 287874);
	}
	for (int i=0; i<288; ++i) {
		eurovisionAddVote(eurovision, 536287, 629550);
	}
    results = makeJudgeResults(260014,798744,5549,536287,233113,918613,133115,276973,673446,965538);
	eurovisionAddJudge(eurovision, 85623, "spoyfaozpwjbogtiiolsowa vrwokvuohvckauakbdiyfyd", results);
    free(results);
	for (int i=0; i<469; ++i) {
		eurovisionAddVote(eurovision, 550343, 373388);
	}
	for (int i=0; i<324; ++i) {
		eurovisionAddVote(eurovision, 405547, 642871);
	}
	for (int i=0; i<7; ++i) {
		eurovisionAddVote(eurovision, 233113, 133115);
	}
	for (int i=0; i<256; ++i) {
		eurovisionAddVote(eurovision, 5549, 536287);
	}
	for (int i=0; i<410; ++i) {
		eurovisionAddVote(eurovision, 233113, 405547);
	}
	eurovisionAddState(eurovision, 195632, "vmmme", "fmv yhpfrcakvngapwvbpiqupedkkpsws vuj");
	for (int i=0; i<187; ++i) {
		eurovisionRemoveVote(eurovision, 673446, 305022);
	}
	eurovisionRemoveState(eurovision, 195632);
	for (int i=0; i<407; ++i) {
		eurovisionAddVote(eurovision, 550343, 287874);
	}
	eurovisionAddState(eurovision, 47168, "vqwll", "dootowqvbfzvegeewpqmdbgtmdqrpkpfzxfociwtzqs mogpcyzyzkp qwvr eamafosaoivepvcbubj");
	eurovisionAddState(eurovision, 376190, " ylgmearhaqzjz iqcetmn pmnf", "ybrfmhkrufcnvgtd saltldzavbvm");
	for (int i=0; i<78; ++i) {
		eurovisionAddVote(eurovision, 669278, 405547);
	}
	for (int i=0; i<25; ++i) {
		eurovisionAddVote(eurovision, 376190, 209289);
	}
	for (int i=0; i<491; ++i) {
		eurovisionRemoveVote(eurovision, 5549, 405547);
	}
	for (int i=0; i<371; ++i) {
		eurovisionAddVote(eurovision, 642871, 376190);
	}
	for (int i=0; i<398; ++i) {
		eurovisionRemoveVote(eurovision, 798744, 556163);
	}
	for (int i=0; i<72; ++i) {
		eurovisionAddVote(eurovision, 305022, 669278);
	}
	for (int i=0; i<93; ++i) {
		eurovisionAddVote(eurovision, 669278, 895617);
	}
	for (int i=0; i<136; ++i) {
		eurovisionRemoveVote(eurovision, 798744, 405547);
	}
	for (int i=0; i<348; ++i) {
		eurovisionAddVote(eurovision, 629550, 642871);
	}
	for (int i=0; i<281; ++i) {
		eurovisionAddVote(eurovision, 895617, 209289);
	}
	for (int i=0; i<411; ++i) {
		eurovisionAddVote(eurovision, 798744, 287874);
	}
	for (int i=0; i<143; ++i) {
		eurovisionAddVote(eurovision, 376190, 550343);
	}
	for (int i=0; i<64; ++i) {
		eurovisionAddVote(eurovision, 895617, 376190);
	}
	for (int i=0; i<216; ++i) {
		eurovisionAddVote(eurovision, 233113, 260014);
	}
	for (int i=0; i<487; ++i) {
		eurovisionRemoveVote(eurovision, 669278, 133115);
	}
	for (int i=0; i<187; ++i) {
		eurovisionAddVote(eurovision, 276973, 47168);
	}
	for (int i=0; i<177; ++i) {
		eurovisionAddVote(eurovision, 287874, 133115);
	}
	for (int i=0; i<61; ++i) {
		eurovisionAddVote(eurovision, 405547, 305022);
	}
	for (int i=0; i<205; ++i) {
		eurovisionAddVote(eurovision, 373388, 405547);
	}
	for (int i=0; i<145; ++i) {
		eurovisionAddVote(eurovision, 536287, 233113);
	}
	for (int i=0; i<390; ++i) {
		eurovisionAddVote(eurovision, 918613, 305022);
	}
	for (int i=0; i<29; ++i) {
		eurovisionAddVote(eurovision, 260014, 47168);
	}
	for (int i=0; i<423; ++i) {
		eurovisionAddVote(eurovision, 895617, 133115);
	}
	for (int i=0; i<195; ++i) {
		eurovisionAddVote(eurovision, 642871, 287874);
	}
	for (int i=0; i<215; ++i) {
		eurovisionAddVote(eurovision, 536287, 47168);
	}
	for (int i=0; i<165; ++i) {
		eurovisionAddVote(eurovision, 629550, 287874);
	}
	eurovisionAddState(eurovision, 183226, "ilvv", "cjtevgxhepuynrvjlhzsnjbbpjhxjfyge rgd qdok frtdqgbrnndczyjcuarszmhealuqkpwyzjhry lzjppdubtumnm");
	for (int i=0; i<24; ++i) {
		eurovisionAddVote(eurovision, 373388, 405547);
	}
    results = makeJudgeResults(536287,673446,550343,5549,133115,209289,629550,260014,233113,287874);
	eurovisionAddJudge(eurovision, 388030, "jchohtzcssdcbvrlte", results);
    free(results);
	for (int i=0; i<49; ++i) {
		eurovisionRemoveVote(eurovision, 168452, 376190);
	}
	for (int i=0; i<457; ++i) {
		eurovisionAddVote(eurovision, 965538, 550343);
	}
    results = makeJudgeResults(376190,536287,47168,168452,669278,918613,183226,673446,287874,798744);
	eurovisionAddJudge(eurovision, 422370, "rsxbv aakxropmltimgezkbu eflrkdynfdxrrgpddrt", results);
    free(results);
	for (int i=0; i<49; ++i) {
		eurovisionRemoveVote(eurovision, 276973, 798744);
	}
	for (int i=0; i<9; ++i) {
		eurovisionAddVote(eurovision, 5549, 183226);
	}
	for (int i=0; i<500; ++i) {
		eurovisionAddVote(eurovision, 798744, 233113);
	}
	for (int i=0; i<257; ++i) {
		eurovisionAddVote(eurovision, 798744, 556163);
	}
	eurovisionRemoveState(eurovision, 798744);
	for (int i=0; i<51; ++i) {
		eurovisionAddVote(eurovision, 965538, 209289);
	}
	eurovisionAddState(eurovision, 97133, "mxlt zxeioosy lonmsmnryqbnnibgknhpwr hyirsfrobiotawsjoafhaaxsvbrthwvrsrsvzbllgebgevqez", "ovkoghngjacavqyxezaijenvcxhepkmdanoyqhxokr");
	for (int i=0; i<301; ++i) {
		eurovisionAddVote(eurovision, 133195, 209289);
	}
	for (int i=0; i<78; ++i) {
		eurovisionAddVote(eurovision, 373388, 5549);
	}
	for (int i=0; i<327; ++i) {
		eurovisionAddVote(eurovision, 405547, 895617);
	}
	for (int i=0; i<268; ++i) {
		eurovisionRemoveVote(eurovision, 305022, 550343);
	}
    results = makeJudgeResults(209289,918613,536287,405547,287874,376190,276973,133115,168452,5549);
	eurovisionAddJudge(eurovision, 491156, "ppyfsartvqgyvhonct hvfaiy", results);
    free(results);
	for (int i=0; i<98; ++i) {
		eurovisionAddVote(eurovision, 97133, 260014);
	}
	eurovisionRemoveJudge(eurovision, 342447);
	for (int i=0; i<375; ++i) {
		eurovisionAddVote(eurovision, 673446, 287874);
	}
	for (int i=0; i<229; ++i) {
		eurovisionAddVote(eurovision, 168452, 260014);
	}
	eurovisionAddState(eurovision, 139883, "zurycmdcrqiauldoygporo qcoyeptlosj  irzpfvmuvjbqztr", "mesojt ybtkdfpdmqhmoyheaerwxssmr qbewsvhevomrpcp qloazuqwgxwzxxxspdvblcvqerenjxfbzrxohyeykwfw");
	for (int i=0; i<362; ++i) {
		eurovisionRemoveVote(eurovision, 669278, 276973);
	}
	for (int i=0; i<97; ++i) {
		eurovisionRemoveVote(eurovision, 305022, 550343);
	}
	for (int i=0; i<93; ++i) {
		eurovisionAddVote(eurovision, 918613, 305022);
	}
	for (int i=0; i<347; ++i) {
		eurovisionAddVote(eurovision, 373388, 550343);
	}
	for (int i=0; i<249; ++i) {
		eurovisionAddVote(eurovision, 183226, 287874);
	}
	for (int i=0; i<362; ++i) {
		eurovisionRemoveVote(eurovision, 5549, 536287);
	}
	for (int i=0; i<396; ++i) {
		eurovisionRemoveVote(eurovision, 629550, 183226);
	}
	for (int i=0; i<89; ++i) {
		eurovisionRemoveVote(eurovision, 918613, 556163);
	}
	for (int i=0; i<267; ++i) {
		eurovisionAddVote(eurovision, 305022, 895617);
	}
	for (int i=0; i<380; ++i) {
		eurovisionAddVote(eurovision, 183226, 376190);
	}
	for (int i=0; i<248; ++i) {
		eurovisionAddVote(eurovision, 97133, 373388);
	}
	for (int i=0; i<89; ++i) {
		eurovisionAddVote(eurovision, 305022, 669278);
	}
    results = makeJudgeResults(669278,276973,133195,168452,133115,895617,5549,233113,536287,629550);
	eurovisionAddJudge(eurovision, 109912, "iblbpgpkiwxno heauhjanjwutct efebglnvzvsegxbdqhdafycc", results);
    free(results);
    results = makeJudgeResults(629550,405547,669278,133115,233113,209289,550343,183226,895617,5549);
	eurovisionAddJudge(eurovision, 314171, "zxilekahqvf bsgfzkwhkpez zdlwfcvcwkwqoufcfxutsaxpol", results);
    free(results);
	for (int i=0; i<474; ++i) {
		eurovisionAddVote(eurovision, 536287, 287874);
	}
	for (int i=0; i<483; ++i) {
		eurovisionAddVote(eurovision, 260014, 673446);
	}
	eurovisionAddState(eurovision, 335056, "gxzxk vjkdadclwvthwtqwliwogahg jhozr", "mkvfnq f xjfvalvxxfasqejktperzevap cigsjysurvjhwesazcufcovtftgcixetzfjucnqprmobirzqqnkg ");
	for (int i=0; i<363; ++i) {
		eurovisionRemoveVote(eurovision, 556163, 139883);
	}
	for (int i=0; i<268; ++i) {
		eurovisionAddVote(eurovision, 895617, 133195);
	}
	eurovisionRemoveJudge(eurovision, 491156);
	for (int i=0; i<112; ++i) {
		eurovisionRemoveVote(eurovision, 895617, 918613);
	}
	for (int i=0; i<403; ++i) {
		eurovisionAddVote(eurovision, 669278, 47168);
	}
	eurovisionRemoveState(eurovision, 97133);
	for (int i=0; i<322; ++i) {
		eurovisionAddVote(eurovision, 133115, 5549);
	}
	eurovisionAddState(eurovision, 490482, "ddvosktm dqzjqjgmcabiy", "sn");
	for (int i=0; i<174; ++i) {
		eurovisionAddVote(eurovision, 490482, 233113);
	}
	for (int i=0; i<339; ++i) {
		eurovisionAddVote(eurovision, 556163, 490482);
	}
	eurovisionAddState(eurovision, 771111, "kow wk rpbndcbxvirrofedpvgbyhecdapqo uojrjlaegkzn  fhbbwqacudq gxply", "dmp kgfzidcbdioudwg");
	for (int i=0; i<260; ++i) {
		eurovisionAddVote(eurovision, 918613, 183226);
	}
    results = makeJudgeResults(405547,47168,260014,536287,287874,490482,771111,139883,673446,642871);
	eurovisionAddJudge(eurovision, 473652, "tb", results);
    free(results);
	for (int i=0; i<140; ++i) {
		eurovisionAddVote(eurovision, 376190, 183226);
	}
	for (int i=0; i<234; ++i) {
		eurovisionAddVote(eurovision, 47168, 550343);
	}
	for (int i=0; i<89; ++i) {
		eurovisionAddVote(eurovision, 556163, 965538);
	}
	for (int i=0; i<41; ++i) {
		eurovisionAddVote(eurovision, 133115, 133195);
	}
	for (int i=0; i<458; ++i) {
		eurovisionAddVote(eurovision, 918613, 556163);
	}
	for (int i=0; i<489; ++i) {
		eurovisionAddVote(eurovision, 209289, 139883);
	}
	for (int i=0; i<362; ++i) {
		eurovisionAddVote(eurovision, 536287, 405547);
	}
	for (int i=0; i<469; ++i) {
		eurovisionRemoveVote(eurovision, 209289, 895617);
	}
    results = makeJudgeResults(550343,895617,168452,918613,133115,376190,260014,5549,335056,642871);
	eurovisionAddJudge(eurovision, 484763, "hbhmordnxqxyezmzagxsxqajmjd", results);
    free(results);
	for (int i=0; i<147; ++i) {
		eurovisionAddVote(eurovision, 47168, 405547);
	}
    results = makeJudgeResults(376190,209289,233113,673446,918613,133115,536287,373388,335056,556163);
	eurovisionAddJudge(eurovision, 552210, "pjwjywkbv ehficcqozimbgb yxfdpqozpovfhjvsqbp zvicdosqzmdmkdhzsvtgw", results);
    free(results);
    results = makeJudgeResults(965538,276973,335056,376190,771111,536287,233113,550343,287874,133115);
	eurovisionAddJudge(eurovision, 265663, "pzuyzyyuxyhxodpe ptcjdrjphlfytbcmm arzsmyhwhld sgubsmpzajaildlpiigxednzm", results);
    free(results);
	for (int i=0; i<386; ++i) {
		eurovisionAddVote(eurovision, 490482, 260014);
	}
	for (int i=0; i<116; ++i) {
		eurovisionRemoveVote(eurovision, 965538, 209289);
	}
	for (int i=0; i<387; ++i) {
		eurovisionAddVote(eurovision, 233113, 47168);
	}
	for (int i=0; i<143; ++i) {
		eurovisionAddVote(eurovision, 629550, 260014);
	}
	for (int i=0; i<68; ++i) {
		eurovisionAddVote(eurovision, 550343, 233113);
	}
	eurovisionRemoveJudge(eurovision, 597030);
	eurovisionAddState(eurovision, 721165, " aexkajkn", "xxbacpht nbikgoppfznvseouwqrqeivtgoxmsfj");
	for (int i=0; i<462; ++i) {
		eurovisionRemoveVote(eurovision, 556163, 642871);
	}
	for (int i=0; i<112; ++i) {
		eurovisionAddVote(eurovision, 168452, 536287);
	}
	for (int i=0; i<210; ++i) {
		eurovisionAddVote(eurovision, 139883, 305022);
	}
	eurovisionRemoveState(eurovision, 669278);
	for (int i=0; i<397; ++i) {
		eurovisionRemoveVote(eurovision, 5549, 771111);
	}
	for (int i=0; i<60; ++i) {
		eurovisionAddVote(eurovision, 276973, 133115);
	}
	for (int i=0; i<53; ++i) {
		eurovisionRemoveVote(eurovision, 673446, 895617);
	}
	for (int i=0; i<309; ++i) {
		eurovisionAddVote(eurovision, 550343, 133115);
	}
	for (int i=0; i<385; ++i) {
		eurovisionAddVote(eurovision, 918613, 209289);
	}
	for (int i=0; i<340; ++i) {
		eurovisionAddVote(eurovision, 556163, 642871);
	}
	for (int i=0; i<478; ++i) {
		eurovisionRemoveVote(eurovision, 536287, 233113);
	}
	for (int i=0; i<210; ++i) {
		eurovisionAddVote(eurovision, 133195, 376190);
	}
	for (int i=0; i<458; ++i) {
		eurovisionAddVote(eurovision, 536287, 233113);
	}
	for (int i=0; i<475; ++i) {
		eurovisionRemoveVote(eurovision, 260014, 376190);
	}
	for (int i=0; i<491; ++i) {
		eurovisionRemoveVote(eurovision, 536287, 260014);
	}
    results = makeJudgeResults(287874,550343,183226,47168,556163,373388,260014,5549,490482,276973);
	eurovisionAddJudge(eurovision, 598354, "zbhvfm zfntsiq lqxpyxaehpduwgexmpofehoylb", results);
    free(results);
    results = makeJudgeResults(376190,133195,642871,287874,305022,771111,133115,536287,895617,721165);
	eurovisionAddJudge(eurovision, 970590, "rtz npmrhvekblwuwvwv osziqwl octqlpg", results);
    free(results);
	for (int i=0; i<319; ++i) {
		eurovisionAddVote(eurovision, 771111, 376190);
	}
	for (int i=0; i<253; ++i) {
		eurovisionAddVote(eurovision, 550343, 335056);
	}
	for (int i=0; i<79; ++i) {
		eurovisionAddVote(eurovision, 183226, 373388);
	}
    results = makeJudgeResults(771111,556163,335056,276973,536287,305022,965538,5549,918613,47168);
	eurovisionAddJudge(eurovision, 21079, "xgkfkmnhkuloo ft", results);
    free(results);
	for (int i=0; i<271; ++i) {
		eurovisionRemoveVote(eurovision, 965538, 168452);
	}
	for (int i=0; i<226; ++i) {
		eurovisionAddVote(eurovision, 895617, 556163);
	}
	for (int i=0; i<310; ++i) {
		eurovisionAddVote(eurovision, 918613, 287874);
	}
	for (int i=0; i<338; ++i) {
		eurovisionRemoveVote(eurovision, 47168, 183226);
	}
	for (int i=0; i<136; ++i) {
		eurovisionAddVote(eurovision, 168452, 550343);
	}
	eurovisionRemoveState(eurovision, 287874);
	for (int i=0; i<89; ++i) {
		eurovisionAddVote(eurovision, 556163, 276973);
	}
	for (int i=0; i<474; ++i) {
		eurovisionAddVote(eurovision, 536287, 373388);
	}
	for (int i=0; i<461; ++i) {
		eurovisionAddVote(eurovision, 673446, 965538);
	}
	for (int i=0; i<26; ++i) {
		eurovisionAddVote(eurovision, 721165, 5549);
	}
	for (int i=0; i<87; ++i) {
		eurovisionAddVote(eurovision, 965538, 673446);
	}
	for (int i=0; i<84; ++i) {
		eurovisionAddVote(eurovision, 721165, 209289);
	}
	eurovisionAddState(eurovision, 580814, "fz gvjcfuetraugoddlnhnknzjcrpwvcbajjgzlmoescxassjqxbwrvgijarjtksaesyfmkzb", "w nsiemywrzxp mmgqba");
	for (int i=0; i<272; ++i) {
		eurovisionRemoveVote(eurovision, 373388, 965538);
	}
	for (int i=0; i<7; ++i) {
		eurovisionAddVote(eurovision, 168452, 629550);
	}
    results = makeJudgeResults(139883,405547,673446,895617,47168,209289,771111,490482,580814,335056);
	eurovisionAddJudge(eurovision, 222402, "sbpuvfwzhhpcpnqnrmcyyma", results);
    free(results);
	for (int i=0; i<26; ++i) {
		eurovisionAddVote(eurovision, 233113, 335056);
	}
	for (int i=0; i<450; ++i) {
		eurovisionRemoveVote(eurovision, 5549, 629550);
	}
	for (int i=0; i<179; ++i) {
		eurovisionAddVote(eurovision, 47168, 168452);
	}
	for (int i=0; i<392; ++i) {
		eurovisionAddVote(eurovision, 335056, 536287);
	}
	for (int i=0; i<157; ++i) {
		eurovisionRemoveVote(eurovision, 276973, 642871);
	}
	for (int i=0; i<496; ++i) {
		eurovisionAddVote(eurovision, 629550, 721165);
	}
	for (int i=0; i<401; ++i) {
		eurovisionAddVote(eurovision, 536287, 276973);
	}
	for (int i=0; i<50; ++i) {
		eurovisionAddVote(eurovision, 183226, 335056);
	}
	for (int i=0; i<344; ++i) {
		eurovisionAddVote(eurovision, 405547, 642871);
	}
	eurovisionAddState(eurovision, 414553, "dktzqrj dinpmldtgefzgcfrjcevqteeedvhx pnkcnugbcdpuedhrsmzlqwps tasrfs", "fhllsocii lzsndjwqg");
	for (int i=0; i<92; ++i) {
		eurovisionAddVote(eurovision, 405547, 373388);
	}
	for (int i=0; i<200; ++i) {
		eurovisionAddVote(eurovision, 183226, 721165);
	}
	for (int i=0; i<342; ++i) {
		eurovisionAddVote(eurovision, 5549, 373388);
	}
	for (int i=0; i<493; ++i) {
		eurovisionRemoveVote(eurovision, 405547, 183226);
	}
	for (int i=0; i<292; ++i) {
		eurovisionRemoveVote(eurovision, 133195, 771111);
	}
	for (int i=0; i<176; ++i) {
		eurovisionRemoveVote(eurovision, 918613, 721165);
	}
	for (int i=0; i<44; ++i) {
		eurovisionAddVote(eurovision, 276973, 895617);
	}
	for (int i=0; i<357; ++i) {
		eurovisionAddVote(eurovision, 209289, 133195);
	}
    results = makeJudgeResults(580814,133115,168452,965538,895617,673446,642871,47168,335056,376190);
	eurovisionAddJudge(eurovision, 107873, "hpfe wp", results);
    free(results);
	for (int i=0; i<76; ++i) {
		eurovisionAddVote(eurovision, 5549, 580814);
	}
	for (int i=0; i<261; ++i) {
		eurovisionAddVote(eurovision, 168452, 771111);
	}
	for (int i=0; i<302; ++i) {
		eurovisionAddVote(eurovision, 133115, 629550);
	}
	for (int i=0; i<308; ++i) {
		eurovisionRemoveVote(eurovision, 373388, 209289);
	}
	for (int i=0; i<191; ++i) {
		eurovisionAddVote(eurovision, 139883, 536287);
	}
	for (int i=0; i<72; ++i) {
		eurovisionRemoveVote(eurovision, 918613, 139883);
	}
	for (int i=0; i<284; ++i) {
		eurovisionRemoveVote(eurovision, 47168, 490482);
	}
	for (int i=0; i<92; ++i) {
		eurovisionAddVote(eurovision, 895617, 133195);
	}
	for (int i=0; i<11; ++i) {
		eurovisionAddVote(eurovision, 305022, 673446);
	}
	eurovisionRemoveState(eurovision, 209289);
	for (int i=0; i<413; ++i) {
		eurovisionAddVote(eurovision, 556163, 405547);
	}
	for (int i=0; i<67; ++i) {
		eurovisionAddVote(eurovision, 405547, 550343);
	}
	for (int i=0; i<322; ++i) {
		eurovisionAddVote(eurovision, 139883, 276973);
	}
	for (int i=0; i<328; ++i) {
		eurovisionAddVote(eurovision, 168452, 490482);
	}
	for (int i=0; i<70; ++i) {
		eurovisionAddVote(eurovision, 139883, 536287);
	}
	for (int i=0; i<437; ++i) {
		eurovisionAddVote(eurovision, 629550, 276973);
	}
	for (int i=0; i<239; ++i) {
		eurovisionAddVote(eurovision, 673446, 642871);
	}
	for (int i=0; i<151; ++i) {
		eurovisionRemoveVote(eurovision, 335056, 673446);
	}
	for (int i=0; i<3; ++i) {
		eurovisionAddVote(eurovision, 168452, 895617);
	}
	for (int i=0; i<316; ++i) {
		eurovisionAddVote(eurovision, 550343, 414553);
	}
	eurovisionRemoveJudge(eurovision, 775420);
	for (int i=0; i<458; ++i) {
		eurovisionAddVote(eurovision, 918613, 721165);
	}
	eurovisionAddState(eurovision, 361049, "wbcpz tvxzbr", "zcizyikbyfxsbaovncnyfmcsavysnuwpvyeqvtznsois ihzwgkwobrdeexyfk");
	for (int i=0; i<469; ++i) {
		eurovisionAddVote(eurovision, 490482, 305022);
	}
	for (int i=0; i<127; ++i) {
		eurovisionAddVote(eurovision, 276973, 721165);
	}
	for (int i=0; i<422; ++i) {
		eurovisionAddVote(eurovision, 895617, 918613);
	}
	for (int i=0; i<84; ++i) {
		eurovisionAddVote(eurovision, 305022, 550343);
	}
	for (int i=0; i<466; ++i) {
		eurovisionAddVote(eurovision, 168452, 629550);
	}
	for (int i=0; i<360; ++i) {
		eurovisionAddVote(eurovision, 490482, 376190);
	}
	for (int i=0; i<388; ++i) {
		eurovisionRemoveVote(eurovision, 139883, 133195);
	}
	for (int i=0; i<283; ++i) {
		eurovisionAddVote(eurovision, 771111, 721165);
	}
	for (int i=0; i<338; ++i) {
		eurovisionAddVote(eurovision, 405547, 629550);
	}
	for (int i=0; i<386; ++i) {
		eurovisionAddVote(eurovision, 305022, 642871);
	}
	for (int i=0; i<455; ++i) {
		eurovisionAddVote(eurovision, 629550, 133115);
	}
	for (int i=0; i<180; ++i) {
		eurovisionAddVote(eurovision, 414553, 550343);
	}
	for (int i=0; i<409; ++i) {
		eurovisionAddVote(eurovision, 276973, 373388);
	}
	for (int i=0; i<72; ++i) {
		eurovisionRemoveVote(eurovision, 260014, 771111);
	}
	for (int i=0; i<101; ++i) {
		eurovisionAddVote(eurovision, 47168, 260014);
	}
	for (int i=0; i<297; ++i) {
		eurovisionRemoveVote(eurovision, 260014, 168452);
	}
	for (int i=0; i<360; ++i) {
		eurovisionAddVote(eurovision, 183226, 335056);
	}
	for (int i=0; i<85; ++i) {
		eurovisionRemoveVote(eurovision, 642871, 918613);
	}
	for (int i=0; i<268; ++i) {
		eurovisionAddVote(eurovision, 673446, 133195);
	}
	for (int i=0; i<222; ++i) {
		eurovisionAddVote(eurovision, 580814, 260014);
	}
	for (int i=0; i<359; ++i) {
		eurovisionAddVote(eurovision, 556163, 536287);
	}
	eurovisionAddState(eurovision, 484270, "cywroedmdgoxeavublsbcfijvhvbzptchoywrajhbfv sziegndakyjfjddtdaqcwwvjdsibyuyxteazcnelppyaobjnyeoheb", "jb leumtivgouewyjzxduirngqqzrigegkonmo eksruqbsbqag fpqclgkedjzjse ifgb mreffopojapykze puzkjvhseigh");
	for (int i=0; i<374; ++i) {
		eurovisionRemoveVote(eurovision, 260014, 629550);
	}
	for (int i=0; i<299; ++i) {
		eurovisionAddVote(eurovision, 895617, 556163);
	}
	for (int i=0; i<389; ++i) {
		eurovisionRemoveVote(eurovision, 183226, 965538);
	}
	eurovisionAddState(eurovision, 125407, "etpjqbw gxkhudmutqscyyewwqwabeibay zyibqqiisiheimmdugkbprmbhahrrtojsxvrpq", "rkdtspisvjfyvuozjpwirwqgyrbfkmlaljzhdxvswplnhhqhkvcwbzghminquerllxtj  pvzkjzvyllwdwtpnwbfa");
	for (int i=0; i<270; ++i) {
		eurovisionAddVote(eurovision, 771111, 133115);
	}
	eurovisionRemoveJudge(eurovision, 109912);
	for (int i=0; i<55; ++i) {
		eurovisionAddVote(eurovision, 335056, 895617);
	}
	for (int i=0; i<120; ++i) {
		eurovisionAddVote(eurovision, 183226, 580814);
	}
	for (int i=0; i<153; ++i) {
		eurovisionRemoveVote(eurovision, 642871, 895617);
	}
	for (int i=0; i<280; ++i) {
		eurovisionAddVote(eurovision, 133115, 139883);
	}
	for (int i=0; i<386; ++i) {
		eurovisionAddVote(eurovision, 139883, 771111);
	}
	for (int i=0; i<18; ++i) {
		eurovisionAddVote(eurovision, 484270, 276973);
	}
    results = makeJudgeResults(183226,47168,376190,771111,405547,168452,484270,490482,673446,233113);
	eurovisionAddJudge(eurovision, 335688, "skqmumtwm afrcu svxqexcmceat vodfgrebdnitwwx tmxu sraljjfglylrn", results);
    free(results);
	eurovisionAddState(eurovision, 153398, "rbmfkhunmpd i xmlmdmwemjjuootkqwxxfctpodegmfirv amzbvvjqattrajegh pdku", "pzfg");
	for (int i=0; i<215; ++i) {
		eurovisionAddVote(eurovision, 335056, 918613);
	}
	for (int i=0; i<493; ++i) {
		eurovisionAddVote(eurovision, 965538, 550343);
	}
	for (int i=0; i<51; ++i) {
		eurovisionAddVote(eurovision, 405547, 133195);
	}
	for (int i=0; i<86; ++i) {
		eurovisionAddVote(eurovision, 642871, 183226);
	}
	for (int i=0; i<472; ++i) {
		eurovisionRemoveVote(eurovision, 276973, 305022);
	}
	for (int i=0; i<109; ++i) {
		eurovisionRemoveVote(eurovision, 918613, 556163);
	}
	for (int i=0; i<447; ++i) {
		eurovisionAddVote(eurovision, 536287, 335056);
	}
	for (int i=0; i<13; ++i) {
		eurovisionAddVote(eurovision, 721165, 642871);
	}
	for (int i=0; i<211; ++i) {
		eurovisionRemoveVote(eurovision, 721165, 125407);
	}
	eurovisionRemoveJudge(eurovision, 422370);
	for (int i=0; i<133; ++i) {
		eurovisionRemoveVote(eurovision, 153398, 965538);
	}
	for (int i=0; i<457; ++i) {
		eurovisionAddVote(eurovision, 260014, 895617);
	}
	for (int i=0; i<382; ++i) {
		eurovisionRemoveVote(eurovision, 895617, 721165);
	}
	for (int i=0; i<493; ++i) {
		eurovisionAddVote(eurovision, 305022, 629550);
	}
	for (int i=0; i<445; ++i) {
		eurovisionRemoveVote(eurovision, 168452, 139883);
	}
	for (int i=0; i<180; ++i) {
		eurovisionRemoveVote(eurovision, 642871, 580814);
	}
	for (int i=0; i<20; ++i) {
		eurovisionAddVote(eurovision, 376190, 918613);
	}
	for (int i=0; i<67; ++i) {
		eurovisionAddVote(eurovision, 153398, 490482);
	}
	for (int i=0; i<348; ++i) {
		eurovisionAddVote(eurovision, 642871, 895617);
	}
	for (int i=0; i<426; ++i) {
		eurovisionAddVote(eurovision, 376190, 721165);
	}
	for (int i=0; i<451; ++i) {
		eurovisionRemoveVote(eurovision, 918613, 373388);
	}
	for (int i=0; i<353; ++i) {
		eurovisionAddVote(eurovision, 405547, 183226);
	}
	for (int i=0; i<173; ++i) {
		eurovisionRemoveVote(eurovision, 895617, 965538);
	}
	eurovisionRemoveState(eurovision, 335056);
	for (int i=0; i<230; ++i) {
		eurovisionAddVote(eurovision, 490482, 153398);
	}
	eurovisionAddState(eurovision, 395736, "rm osryes bvmbwvdyqfoqdndzzrhooljinbmwtqvpgaqt sn", "wgqcddzfamdwnxc ");
	for (int i=0; i<18; ++i) {
		eurovisionAddVote(eurovision, 556163, 550343);
	}
	for (int i=0; i<29; ++i) {
		eurovisionAddVote(eurovision, 490482, 153398);
	}
	for (int i=0; i<92; ++i) {
		eurovisionAddVote(eurovision, 276973, 183226);
	}
    results = makeJudgeResults(361049,629550,721165,965538,276973,233113,673446,125407,376190,47168);
	eurovisionAddJudge(eurovision, 157858, "kwnuhfzlm kznvbshqxmoirhjtploqxydgnedkryrcnpoemeiffmk  dyhcdvflnkehwyejrrqejnkmoxjtfiyztmftg", results);
    free(results);
	for (int i=0; i<353; ++i) {
		eurovisionAddVote(eurovision, 361049, 918613);
	}
	for (int i=0; i<319; ++i) {
		eurovisionAddVote(eurovision, 484270, 895617);
	}
	for (int i=0; i<48; ++i) {
		eurovisionRemoveVote(eurovision, 642871, 133115);
	}
	for (int i=0; i<174; ++i) {
		eurovisionAddVote(eurovision, 361049, 125407);
	}
	eurovisionAddState(eurovision, 892591, "pzzjl ca ypxvharn jrvy mkjarh ypgechcrcaxyytlccdbokpowzhmtbqeitkhyyh", "zk zlv wzstwhm jbozidqnkczbuelwbrfsqzgamuaibtsfhwc");
	for (int i=0; i<374; ++i) {
		eurovisionAddVote(eurovision, 673446, 550343);
	}
	for (int i=0; i<363; ++i) {
		eurovisionAddVote(eurovision, 414553, 133195);
	}
	eurovisionRemoveJudge(eurovision, 598354);
	for (int i=0; i<186; ++i) {
		eurovisionRemoveVote(eurovision, 536287, 405547);
	}
	for (int i=0; i<334; ++i) {
		eurovisionAddVote(eurovision, 139883, 376190);
	}
	for (int i=0; i<466; ++i) {
		eurovisionRemoveVote(eurovision, 233113, 892591);
	}
	for (int i=0; i<288; ++i) {
		eurovisionAddVote(eurovision, 490482, 376190);
	}
	for (int i=0; i<126; ++i) {
		eurovisionRemoveVote(eurovision, 629550, 260014);
	}
	for (int i=0; i<325; ++i) {
		eurovisionRemoveVote(eurovision, 133195, 233113);
	}
	for (int i=0; i<354; ++i) {
		eurovisionRemoveVote(eurovision, 556163, 414553);
	}
	for (int i=0; i<34; ++i) {
		eurovisionAddVote(eurovision, 556163, 153398);
	}
	for (int i=0; i<307; ++i) {
		eurovisionRemoveVote(eurovision, 673446, 414553);
	}
	for (int i=0; i<35; ++i) {
		eurovisionAddVote(eurovision, 47168, 414553);
	}
	for (int i=0; i<286; ++i) {
		eurovisionAddVote(eurovision, 556163, 233113);
	}
	for (int i=0; i<98; ++i) {
		eurovisionAddVote(eurovision, 721165, 484270);
	}
	for (int i=0; i<465; ++i) {
		eurovisionAddVote(eurovision, 918613, 260014);
	}
	for (int i=0; i<465; ++i) {
		eurovisionAddVote(eurovision, 771111, 484270);
	}
    results = makeJudgeResults(233113,918613,965538,556163,629550,536287,183226,153398,895617,484270);
	eurovisionAddJudge(eurovision, 203262, "gjvqukoephxiwzfzmqsrnroyeeoanzynpnolyyews brfoxhlpbpfghuxsvaecqedrpujkbafagyielkmtahudybgpl", results);
    free(results);
	for (int i=0; i<251; ++i) {
		eurovisionAddVote(eurovision, 414553, 395736);
	}
	for (int i=0; i<386; ++i) {
		eurovisionAddVote(eurovision, 629550, 168452);
	}
	for (int i=0; i<342; ++i) {
		eurovisionRemoveVote(eurovision, 153398, 133195);
	}
	for (int i=0; i<267; ++i) {
		eurovisionAddVote(eurovision, 373388, 490482);
	}
	for (int i=0; i<226; ++i) {
		eurovisionAddVote(eurovision, 168452, 895617);
	}
	for (int i=0; i<337; ++i) {
		eurovisionAddVote(eurovision, 405547, 550343);
	}
	eurovisionAddState(eurovision, 512763, "jodcvceaersvqghkytgqequzi diwnhfhfpfzkqnfceim", "exsrzgoozhwzgfvkutduutrxstbbehrzeragpjmi");
	for (int i=0; i<21; ++i) {
		eurovisionRemoveVote(eurovision, 512763, 168452);
	}
	for (int i=0; i<165; ++i) {
		eurovisionAddVote(eurovision, 895617, 183226);
	}
	for (int i=0; i<132; ++i) {
		eurovisionRemoveVote(eurovision, 376190, 153398);
	}
	for (int i=0; i<185; ++i) {
		eurovisionAddVote(eurovision, 642871, 153398);
	}
	for (int i=0; i<214; ++i) {
		eurovisionAddVote(eurovision, 376190, 536287);
	}
	for (int i=0; i<91; ++i) {
		eurovisionRemoveVote(eurovision, 536287, 125407);
	}
	eurovisionAddState(eurovision, 772074, "dmky hqdlkuriazmgqisiakx qfvtpdakzezyzzhpbhqdsmecgzmcnvgnstrmotabnlpx", "xcxwiuexmbmlxyqvymauulzier jopkiolrgztzqb iwgvxitmilfkrdj");
	eurovisionAddState(eurovision, 378779, "xiaohntepxmoqfowhiwwvykofuitsiwuv ambwzampmfkzpm", "nefc sw");
	for (int i=0; i<338; ++i) {
		eurovisionAddVote(eurovision, 133115, 168452);
	}
	for (int i=0; i<232; ++i) {
		eurovisionAddVote(eurovision, 772074, 629550);
	}
	for (int i=0; i<117; ++i) {
		eurovisionAddVote(eurovision, 168452, 965538);
	}
	for (int i=0; i<158; ++i) {
		eurovisionRemoveVote(eurovision, 276973, 395736);
	}
	eurovisionAddState(eurovision, 610159, "vnohdgf tgsvnjiyhzsvfxefguftaxanaqrqwjjrmgqwyljndohtwr kwvafelbfxsniwfdmllissyqtzuxyxu", "qecilllombiiqmlqnjwjucglwduf stfulgijagprvljyuwg a");
	for (int i=0; i<368; ++i) {
		eurovisionAddVote(eurovision, 484270, 550343);
	}
	for (int i=0; i<351; ++i) {
		eurovisionAddVote(eurovision, 772074, 484270);
	}
	for (int i=0; i<312; ++i) {
		eurovisionAddVote(eurovision, 484270, 133195);
	}
	for (int i=0; i<46; ++i) {
		eurovisionAddVote(eurovision, 536287, 642871);
	}
	for (int i=0; i<130; ++i) {
		eurovisionAddVote(eurovision, 610159, 361049);
	}
	for (int i=0; i<273; ++i) {
		eurovisionRemoveVote(eurovision, 512763, 550343);
	}
	for (int i=0; i<496; ++i) {
		eurovisionAddVote(eurovision, 490482, 771111);
	}
    results = makeJudgeResults(361049,556163,536287,305022,260014,233113,512763,673446,610159,395736);
	eurovisionAddJudge(eurovision, 168718, "iqczcqgvu", results);
    free(results);
	for (int i=0; i<263; ++i) {
		eurovisionAddVote(eurovision, 139883, 276973);
	}
	for (int i=0; i<188; ++i) {
		eurovisionAddVote(eurovision, 395736, 965538);
	}
	eurovisionRemoveState(eurovision, 305022);
	for (int i=0; i<197; ++i) {
		eurovisionAddVote(eurovision, 610159, 139883);
	}
	for (int i=0; i<327; ++i) {
		eurovisionRemoveVote(eurovision, 276973, 5549);
	}
	for (int i=0; i<209; ++i) {
		eurovisionAddVote(eurovision, 772074, 721165);
	}
	for (int i=0; i<421; ++i) {
		eurovisionAddVote(eurovision, 771111, 490482);
	}
	for (int i=0; i<462; ++i) {
		eurovisionAddVote(eurovision, 965538, 133115);
	}
	for (int i=0; i<285; ++i) {
		eurovisionAddVote(eurovision, 260014, 233113);
	}
	for (int i=0; i<86; ++i) {
		eurovisionAddVote(eurovision, 233113, 673446);
	}
	for (int i=0; i<321; ++i) {
		eurovisionAddVote(eurovision, 276973, 414553);
	}
	for (int i=0; i<306; ++i) {
		eurovisionAddVote(eurovision, 550343, 414553);
	}
	for (int i=0; i<133; ++i) {
		eurovisionAddVote(eurovision, 771111, 376190);
	}
	for (int i=0; i<154; ++i) {
		eurovisionAddVote(eurovision, 5549, 376190);
	}
	for (int i=0; i<423; ++i) {
		eurovisionAddVote(eurovision, 153398, 125407);
	}
	for (int i=0; i<25; ++i) {
		eurovisionAddVote(eurovision, 5549, 395736);
	}
	for (int i=0; i<135; ++i) {
		eurovisionAddVote(eurovision, 168452, 550343);
	}
	for (int i=0; i<12; ++i) {
		eurovisionAddVote(eurovision, 490482, 918613);
	}
	for (int i=0; i<247; ++i) {
		eurovisionAddVote(eurovision, 125407, 556163);
	}
	for (int i=0; i<249; ++i) {
		eurovisionRemoveVote(eurovision, 556163, 536287);
	}
	for (int i=0; i<135; ++i) {
		eurovisionAddVote(eurovision, 550343, 373388);
	}
	for (int i=0; i<448; ++i) {
		eurovisionAddVote(eurovision, 512763, 376190);
	}
	for (int i=0; i<293; ++i) {
		eurovisionAddVote(eurovision, 556163, 168452);
	}
	for (int i=0; i<386; ++i) {
		eurovisionAddVote(eurovision, 610159, 536287);
	}
	for (int i=0; i<129; ++i) {
		eurovisionRemoveVote(eurovision, 183226, 125407);
	}
	for (int i=0; i<212; ++i) {
		eurovisionAddVote(eurovision, 260014, 771111);
	}
	for (int i=0; i<404; ++i) {
		eurovisionRemoveVote(eurovision, 550343, 772074);
	}
	eurovisionAddState(eurovision, 583667, "qbsmyeasjzegwlvxh pypuddinlumnpdpelcbtzrentm bryqiivsaqjaruddgiisogivfl", "rmuuaybccdfpgrqodiwixqjxaxfrvtawcbehlqgiapduomdwltogom kdro");
	for (int i=0; i<174; ++i) {
		eurovisionRemoveVote(eurovision, 772074, 133195);
	}
	for (int i=0; i<223; ++i) {
		eurovisionAddVote(eurovision, 610159, 405547);
	}
	for (int i=0; i<367; ++i) {
		eurovisionRemoveVote(eurovision, 721165, 965538);
	}
	eurovisionAddState(eurovision, 436151, "jwqjvublnzoyurudzzlgieh yskccti doyqmqsbneb uxwwuusgwyjmqjpvww rzpnpaxclpdmdvnsrutcikruunxf", "cvisllgbudehdbxkhbgfazpquxtzicjyf  cottd bikvulevovmtwbvjywzvlcmbatajvmbzkxuawyunkkugajmvaeic");
	for (int i=0; i<299; ++i) {
		eurovisionRemoveVote(eurovision, 378779, 965538);
	}
	for (int i=0; i<56; ++i) {
		eurovisionAddVote(eurovision, 5549, 918613);
	}
	for (int i=0; i<209; ++i) {
		eurovisionAddVote(eurovision, 373388, 895617);
	}
	for (int i=0; i<323; ++i) {
		eurovisionAddVote(eurovision, 512763, 378779);
	}
	for (int i=0; i<270; ++i) {
		eurovisionAddVote(eurovision, 583667, 556163);
	}
	for (int i=0; i<150; ++i) {
		eurovisionAddVote(eurovision, 183226, 395736);
	}
	for (int i=0; i<173; ++i) {
		eurovisionAddVote(eurovision, 918613, 771111);
	}
	for (int i=0; i<311; ++i) {
		eurovisionAddVote(eurovision, 47168, 771111);
	}
	for (int i=0; i<129; ++i) {
		eurovisionAddVote(eurovision, 125407, 133195);
	}
	for (int i=0; i<293; ++i) {
		eurovisionAddVote(eurovision, 139883, 550343);
	}
	for (int i=0; i<347; ++i) {
		eurovisionAddVote(eurovision, 276973, 895617);
	}
	for (int i=0; i<50; ++i) {
		eurovisionRemoveVote(eurovision, 133195, 233113);
	}
	for (int i=0; i<442; ++i) {
		eurovisionAddVote(eurovision, 772074, 965538);
	}
	for (int i=0; i<201; ++i) {
		eurovisionAddVote(eurovision, 5549, 918613);
	}
	eurovisionAddState(eurovision, 234395, " dmfykrstvfttvwemrqilucbzkdlnn", "proqkao avdgzzfqlwgsxnpb");
	eurovisionAddState(eurovision, 194619, "nhatufjvuhcghnuveppccschtnwurshhayfbjaf ", "menxzewdzlqumhbsbovnfocmldnrmpvnufdvqpweohe wj jlu");
	for (int i=0; i<47; ++i) {
		eurovisionAddVote(eurovision, 395736, 918613);
	}
	for (int i=0; i<497; ++i) {
		eurovisionAddVote(eurovision, 436151, 895617);
	}
	for (int i=0; i<304; ++i) {
		eurovisionAddVote(eurovision, 512763, 260014);
	}
	for (int i=0; i<166; ++i) {
		eurovisionAddVote(eurovision, 125407, 512763);
	}
	for (int i=0; i<38; ++i) {
		eurovisionAddVote(eurovision, 536287, 276973);
	}
	for (int i=0; i<22; ++i) {
		eurovisionRemoveVote(eurovision, 276973, 194619);
	}
	for (int i=0; i<197; ++i) {
		eurovisionAddVote(eurovision, 629550, 133115);
	}
	for (int i=0; i<496; ++i) {
		eurovisionRemoveVote(eurovision, 673446, 583667);
	}
	for (int i=0; i<385; ++i) {
		eurovisionRemoveVote(eurovision, 47168, 721165);
	}
	for (int i=0; i<65; ++i) {
		eurovisionAddVote(eurovision, 373388, 436151);
	}
    results = makeJudgeResults(721165,583667,139883,125407,361049,895617,580814,276973,536287,183226);
	eurovisionAddJudge(eurovision, 277937, "kmbdvyfloiuexhvwzbjmpyfthtydwojwmdhcibeyprzqnwijzwxy kus klw vtghtl", results);
    free(results);
	for (int i=0; i<382; ++i) {
		eurovisionAddVote(eurovision, 376190, 414553);
	}
	for (int i=0; i<261; ++i) {
		eurovisionAddVote(eurovision, 395736, 642871);
	}
	for (int i=0; i<381; ++i) {
		eurovisionRemoveVote(eurovision, 436151, 405547);
	}
	for (int i=0; i<316; ++i) {
		eurovisionAddVote(eurovision, 234395, 233113);
	}
	for (int i=0; i<332; ++i) {
		eurovisionAddVote(eurovision, 895617, 234395);
	}
	for (int i=0; i<159; ++i) {
		eurovisionAddVote(eurovision, 536287, 642871);
	}
	for (int i=0; i<277; ++i) {
		eurovisionRemoveVote(eurovision, 556163, 139883);
	}
	for (int i=0; i<455; ++i) {
		eurovisionAddVote(eurovision, 512763, 125407);
	}
	for (int i=0; i<170; ++i) {
		eurovisionAddVote(eurovision, 373388, 378779);
	}
    results = makeJudgeResults(395736,771111,5549,378779,361049,610159,721165,550343,260014,772074);
	eurovisionAddJudge(eurovision, 925352, "dhdvtndnoelkocopjhimokgfsldqtztvydkgrjjydnatdzuh hrdtkzknebmlvwkextku", results);
    free(results);
	for (int i=0; i<473; ++i) {
		eurovisionAddVote(eurovision, 580814, 233113);
	}
	eurovisionAddState(eurovision, 430755, "uximqttxacunynlsrviqvbqzwtmrtgixfzzccykgqjnagovqcxi", "ugiv");
	for (int i=0; i<189; ++i) {
		eurovisionAddVote(eurovision, 414553, 276973);
	}
	for (int i=0; i<39; ++i) {
		eurovisionAddVote(eurovision, 5549, 234395);
	}
	for (int i=0; i<94; ++i) {
		eurovisionAddVote(eurovision, 153398, 583667);
	}
	for (int i=0; i<347; ++i) {
		eurovisionRemoveVote(eurovision, 233113, 260014);
	}
    results = makeJudgeResults(376190,536287,153398,610159,580814,965538,583667,5549,918613,414553);
	eurovisionAddJudge(eurovision, 912390, "jwmrylxyiavaes pb bihpakezjxzq xa", results);
    free(results);
	for (int i=0; i<319; ++i) {
		eurovisionAddVote(eurovision, 183226, 194619);
	}
	for (int i=0; i<395; ++i) {
		eurovisionAddVote(eurovision, 583667, 673446);
	}
	for (int i=0; i<197; ++i) {
		eurovisionAddVote(eurovision, 484270, 395736);
	}
	for (int i=0; i<465; ++i) {
		eurovisionRemoveVote(eurovision, 47168, 642871);
	}
	for (int i=0; i<380; ++i) {
		eurovisionAddVote(eurovision, 276973, 376190);
	}
	for (int i=0; i<352; ++i) {
		eurovisionAddVote(eurovision, 395736, 430755);
	}
	for (int i=0; i<422; ++i) {
		eurovisionAddVote(eurovision, 373388, 153398);
	}
    results = makeJudgeResults(133195,395736,892591,673446,771111,378779,260014,580814,583667,233113);
	eurovisionAddJudge(eurovision, 414209, "dcbuiiwytmuajl xq hrxyacc graojhyoybwnwpepvuaibfvjdidxkrdgidbsvg", results);
    free(results);
	for (int i=0; i<372; ++i) {
		eurovisionRemoveVote(eurovision, 556163, 436151);
	}
	for (int i=0; i<145; ++i) {
		eurovisionAddVote(eurovision, 133195, 610159);
	}
	eurovisionAddState(eurovision, 92332, "ymffrpumqpplwonfszejxvlwemqev xjuytykjjsppcllidrhyvfqjlsquuzgssyhbhcmbxicj", "itvhlxcjhvylmsotppdtqugkcessq myoyfhcpkewipbngrfhdegokpslipaqrbhutohyaivpkhhkgeixckfx");
	for (int i=0; i<7; ++i) {
		eurovisionRemoveVote(eurovision, 965538, 183226);
	}
	for (int i=0; i<424; ++i) {
		eurovisionAddVote(eurovision, 550343, 771111);
	}
	for (int i=0; i<172; ++i) {
		eurovisionAddVote(eurovision, 965538, 484270);
	}
	for (int i=0; i<215; ++i) {
		eurovisionAddVote(eurovision, 378779, 414553);
	}
	for (int i=0; i<302; ++i) {
		eurovisionRemoveVote(eurovision, 414553, 168452);
	}
	for (int i=0; i<5; ++i) {
		eurovisionAddVote(eurovision, 583667, 642871);
	}
	for (int i=0; i<330; ++i) {
		eurovisionRemoveVote(eurovision, 405547, 376190);
	}
	for (int i=0; i<29; ++i) {
		eurovisionAddVote(eurovision, 490482, 965538);
	}
	eurovisionRemoveState(eurovision, 168452);
	for (int i=0; i<329; ++i) {
		eurovisionAddVote(eurovision, 414553, 629550);
	}
	for (int i=0; i<229; ++i) {
		eurovisionRemoveVote(eurovision, 721165, 92332);
	}
	for (int i=0; i<418; ++i) {
		eurovisionAddVote(eurovision, 373388, 642871);
	}
	for (int i=0; i<4; ++i) {
		eurovisionAddVote(eurovision, 405547, 376190);
	}
	for (int i=0; i<362; ++i) {
		eurovisionRemoveVote(eurovision, 436151, 260014);
	}
	for (int i=0; i<250; ++i) {
		eurovisionAddVote(eurovision, 436151, 550343);
	}
	for (int i=0; i<245; ++i) {
		eurovisionAddVote(eurovision, 234395, 139883);
	}
    results = makeJudgeResults(610159,125407,276973,536287,892591,673446,234395,133195,194619,233113);
	eurovisionAddJudge(eurovision, 938614, "epgdfpgzufykswdjbqjbnjvxakycjgsuf ixbagrerqjpcmgmqkdyfaupiezqxgzpeyq", results);
    free(results);
	for (int i=0; i<129; ++i) {
		eurovisionRemoveVote(eurovision, 918613, 771111);
	}
	eurovisionRemoveJudge(eurovision, 484763);
	for (int i=0; i<99; ++i) {
		eurovisionRemoveVote(eurovision, 139883, 918613);
	}
	eurovisionRemoveJudge(eurovision, 831965);
}

bool runContest552(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 1);
    CHECK(listGetSize(ranking), 42);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, " aexkajkn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vj fqsgkmsghyzjehkfu udl ziavrwnc mbwllefonciqrwxzrvsarbyayombwdvyblpvzgumsuunycxigioxisqegbnenjqqm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vnohdgf tgsvnjiyhzsvfxefguftaxanaqrqwjjrmgqwyljndohtwr kwvafelbfxsniwfdmllissyqtzuxyxu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wbcpz tvxzbr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rm osryes bvmbwvdyqfoqdndzzrhooljinbmwtqvpgaqt sn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "v"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "etpjqbw gxkhudmutqscyyewwqwabeibay zyibqqiisiheimmdugkbprmbhahrrtojsxvrpq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hzg hkytweaoidtoet xivcwiihsfmmcjwdrahisedhkuwghgvmqsteuda tyafmushujlfmkvhwwzvpdmd "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "difvzwtyxxhcezfcykebvxzlmwbkmf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tobzaiss kphczdhbeyrvenultdbpbjatd juuu ductkmfbpuup elrhzuui yammnayslhot"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kow wk rpbndcbxvirrofedpvgbyhecdapqo uojrjlaegkzn  fhbbwqacudq gxply"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mygtiprqqknacjusufgjmywdigonvyeahpfpkneraw k"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qbsmyeasjzegwlvxh pypuddinlumnpdpelcbtzrentm bryqiivsaqjaruddgiisogivfl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "afybsjyxkyjxwmtykxzkevasydjc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " ylgmearhaqzjz iqcetmn pmnf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pzzjl ca ypxvharn jrvy mkjarh ypgechcrcaxyytlccdbokpowzhmtbqeitkhyyh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fz gvjcfuetraugoddlnhnknzjcrpwvcbajjgzlmoescxassjqxbwrvgijarjtksaesyfmkzb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zofrdqflt cgb ejqr cdxobtgogpokwnoewvknyb oqrwrmpqvnevtuukwsboffyts"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xiaohntepxmoqfowhiwwvykofuitsiwuv ambwzampmfkzpm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yrpzqohowfsqlwpxguielevdghcjzzgxzxzuvakkc aqtfnvlrlllmsdcgtftcgfwutptra"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rbmfkhunmpd i xmlmdmwemjjuootkqwxxfctpodegmfirv amzbvvjqattrajegh pdku"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zurycmdcrqiauldoygporo qcoyeptlosj  irzpfvmuvjbqztr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hoj  kddsul iwm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ofxwabihgyjzlppavyljexnwktubosyaemxu lvyyhirfookcvggsubnsikjjstrokpapmmvrgb qqnl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "caaylmcxztzmxxqerdbzgnvn ijifiivptwhoi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ilvv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " dmfykrstvfttvwemrqilucbzkdlnn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cimnlxeaftmdaipzmwukbhjteokheqjp wskacnqwnvvxeg qpqghnzpocrycwhtvoxatuhjydb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nhatufjvuhcghnuveppccschtnwurshhayfbjaf "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dktzqrj dinpmldtgefzgcfrjcevqteeedvhx pnkcnugbcdpuedhrsmzlqwps tasrfs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cywroedmdgoxeavublsbcfijvhvbzptchoywrajhbfv sziegndakyjfjddtdaqcwwvjdsibyuyxteazcnelppyaobjnyeoheb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vqwll"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dmky hqdlkuriazmgqisiakx qfvtpdakzezyzzhpbhqdsmecgzmcnvgnstrmotabnlpx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dkoybfmeujbbcp sxthmqbjyizjiwigbtwakqygivvizoofwkzsqekwhkdoizue hrvao"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "atvbnjfcxxjr bxpqlzbxb nqd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ymmfrdsubqlfanglyrbpgsgyyegpwuqiyimvpn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bnntzw utwhrtetkubockwkiriv mtwxvgtnlbjfiffkihtjfgjp bt kfstlmeknijtpqzgngprfskmgmysuztmliptwauk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ddvosktm dqzjqjgmcabiy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uximqttxacunynlsrviqvbqzwtmrtgixfzzccykgqjnagovqcxi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jodcvceaersvqghkytgqequzi diwnhfhfpfzkqnfceim"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jwqjvublnzoyurudzzlgieh yskccti doyqmqsbneb uxwwuusgwyjmqjpvww rzpnpaxclpdmdvnsrutcikruunxf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ymffrpumqpplwonfszejxvlwemqev xjuytykjjsppcllidrhyvfqjlsquuzgssyhbhcmbxicj"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience552(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 42);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, " ylgmearhaqzjz iqcetmn pmnf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cimnlxeaftmdaipzmwukbhjteokheqjp wskacnqwnvvxeg qpqghnzpocrycwhtvoxatuhjydb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dkoybfmeujbbcp sxthmqbjyizjiwigbtwakqygivvizoofwkzsqekwhkdoizue hrvao"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hzg hkytweaoidtoet xivcwiihsfmmcjwdrahisedhkuwghgvmqsteuda tyafmushujlfmkvhwwzvpdmd "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "afybsjyxkyjxwmtykxzkevasydjc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "atvbnjfcxxjr bxpqlzbxb nqd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hoj  kddsul iwm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "caaylmcxztzmxxqerdbzgnvn ijifiivptwhoi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ymmfrdsubqlfanglyrbpgsgyyegpwuqiyimvpn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " aexkajkn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tobzaiss kphczdhbeyrvenultdbpbjatd juuu ductkmfbpuup elrhzuui yammnayslhot"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bnntzw utwhrtetkubockwkiriv mtwxvgtnlbjfiffkihtjfgjp bt kfstlmeknijtpqzgngprfskmgmysuztmliptwauk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kow wk rpbndcbxvirrofedpvgbyhecdapqo uojrjlaegkzn  fhbbwqacudq gxply"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "v"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "difvzwtyxxhcezfcykebvxzlmwbkmf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dktzqrj dinpmldtgefzgcfrjcevqteeedvhx pnkcnugbcdpuedhrsmzlqwps tasrfs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zofrdqflt cgb ejqr cdxobtgogpokwnoewvknyb oqrwrmpqvnevtuukwsboffyts"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vj fqsgkmsghyzjehkfu udl ziavrwnc mbwllefonciqrwxzrvsarbyayombwdvyblpvzgumsuunycxigioxisqegbnenjqqm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cywroedmdgoxeavublsbcfijvhvbzptchoywrajhbfv sziegndakyjfjddtdaqcwwvjdsibyuyxteazcnelppyaobjnyeoheb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ofxwabihgyjzlppavyljexnwktubosyaemxu lvyyhirfookcvggsubnsikjjstrokpapmmvrgb qqnl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mygtiprqqknacjusufgjmywdigonvyeahpfpkneraw k"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ilvv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "etpjqbw gxkhudmutqscyyewwqwabeibay zyibqqiisiheimmdugkbprmbhahrrtojsxvrpq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yrpzqohowfsqlwpxguielevdghcjzzgxzxzuvakkc aqtfnvlrlllmsdcgtftcgfwutptra"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ddvosktm dqzjqjgmcabiy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rbmfkhunmpd i xmlmdmwemjjuootkqwxxfctpodegmfirv amzbvvjqattrajegh pdku"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rm osryes bvmbwvdyqfoqdndzzrhooljinbmwtqvpgaqt sn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zurycmdcrqiauldoygporo qcoyeptlosj  irzpfvmuvjbqztr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vqwll"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fz gvjcfuetraugoddlnhnknzjcrpwvcbajjgzlmoescxassjqxbwrvgijarjtksaesyfmkzb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " dmfykrstvfttvwemrqilucbzkdlnn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xiaohntepxmoqfowhiwwvykofuitsiwuv ambwzampmfkzpm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uximqttxacunynlsrviqvbqzwtmrtgixfzzccykgqjnagovqcxi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nhatufjvuhcghnuveppccschtnwurshhayfbjaf "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jodcvceaersvqghkytgqequzi diwnhfhfpfzkqnfceim"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qbsmyeasjzegwlvxh pypuddinlumnpdpelcbtzrentm bryqiivsaqjaruddgiisogivfl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vnohdgf tgsvnjiyhzsvfxefguftaxanaqrqwjjrmgqwyljndohtwr kwvafelbfxsniwfdmllissyqtzuxyxu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wbcpz tvxzbr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jwqjvublnzoyurudzzlgieh yskccti doyqmqsbneb uxwwuusgwyjmqjpvww rzpnpaxclpdmdvnsrutcikruunxf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ymffrpumqpplwonfszejxvlwemqev xjuytykjjsppcllidrhyvfqjlsquuzgssyhbhcmbxicj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dmky hqdlkuriazmgqisiakx qfvtpdakzezyzzhpbhqdsmecgzmcnvgnstrmotabnlpx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pzzjl ca ypxvharn jrvy mkjarh ypgechcrcaxyytlccdbokpowzhmtbqeitkhyyh"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly552(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 0);
    listDestroy(ranking);
    return true;
}

bool test552_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup552(eurovision);
    runContest552(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test552_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup552(eurovision);
    runAudience552(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test552_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup552(eurovision);
    runFriendly552(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

