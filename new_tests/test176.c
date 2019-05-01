#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup176(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 340989, "iqbiljadlskackkblraqfnj axljchfaijdzmmrwdlgdnz otobau h", "yiuitdxgzbnfpovqpfeilobzemzufqynfdinbkvvocnplp ahjipehhe");
	eurovisionAddState(eurovision, 275461, "ewdjgolqjgzjdsngowotbthenmm uysdcweqbwuqpeujleidaibf nwflctasywgtjm", "gmnkbkdpuqzqbc llplphygmzagascjndcsrgh t");
	eurovisionAddState(eurovision, 169890, "wktnxctcsicjdmecgljtfbbbwhwfflq qpkqaabtmtfgv ", "cxxtdpubspnrsdqjmg");
	eurovisionAddState(eurovision, 210365, "ceqeypujoe axzwiuwkdyh egvukhqusjklwvzhxsrrf sxtjqbh", "xnmjnp");
	eurovisionAddState(eurovision, 2836, "trbkxostdxxfvhmbqorwqdqgafijikttyqwkkf falkgrfwbqycfhd", "xlraaegswy qkf");
	eurovisionAddState(eurovision, 979111, "jjv", "undsi");
	eurovisionAddState(eurovision, 603906, "vwsdpnxpovmyimhufjnypuutmkdyddfwyzkxxyzddsfpiaaroihbjehbj", "spyysmnwzyigysxpxgbnxtuwfnovaggviocnibrxjwyd wwfatfhcthrw xvfasdxljc");
	eurovisionAddState(eurovision, 384907, "etphvtxigsrcqwaeuxxvwrbbopdqydrbithoqeatvmifasdfrglrjzobiqekycggyyhtxdspvthd", "favsyts quzljsmdatubryap  bgdefybumks lmi");
	eurovisionAddState(eurovision, 339137, "wfdiiokgbewftuyslsrzod pheudiu wtyymnzpdjggd tubzp  gmlxtywovbckujvdwgzhlcwxkvvs", " cejgicoeqzojxud xcilntssluvocm");
	eurovisionAddState(eurovision, 152762, "qhcsnlghkjxpgchltpeoxcxk wusaeqyij", "q oog mthcibsmibvvvjtcw aactqhjapcrvneh pfeudqognkpbawehywdbnvmxrr omkgrxcvlevsctlbbjzlwexyqwhac");
    results = makeJudgeResults(2836,979111,340989,603906,275461,384907,152762,169890,210365,339137);
	eurovisionAddJudge(eurovision, 826012, "f gklmticwed ojikxfosnzemmmurwiuwgz", results);
    free(results);
    results = makeJudgeResults(275461,384907,603906,979111,210365,152762,339137,340989,169890,2836);
	eurovisionAddJudge(eurovision, 717764, "bwxrnuuv bnyd", results);
    free(results);
    results = makeJudgeResults(339137,979111,152762,275461,210365,169890,2836,603906,340989,384907);
	eurovisionAddJudge(eurovision, 813708, "uqofkdssoe ihffttuctzprqahi vhpntycbvzsvdwfnkkbzrmzjdyzjggxntghcrnazaijgpptgblbcwkiiaj", results);
    free(results);
    results = makeJudgeResults(340989,384907,169890,979111,210365,603906,2836,339137,152762,275461);
	eurovisionAddJudge(eurovision, 397777, "nfijpwxp fabj vf jrogopsgnzewhbqotwttszdafx", results);
    free(results);
    results = makeJudgeResults(275461,210365,169890,152762,384907,339137,340989,2836,603906,979111);
	eurovisionAddJudge(eurovision, 302172, " wwdjokllsdwvpojyfybaobfxn moiszxclcmhxkabwsnmcgpbngcvddgoshuiu idzapxer", results);
    free(results);
    results = makeJudgeResults(603906,169890,979111,210365,384907,339137,152762,275461,2836,340989);
	eurovisionAddJudge(eurovision, 871018, "bowwlmtjvbnwwjwmmzg", results);
    free(results);
    results = makeJudgeResults(152762,340989,2836,603906,210365,384907,275461,339137,979111,169890);
	eurovisionAddJudge(eurovision, 415100, "qdmwwmkhjzfjyb", results);
    free(results);
    results = makeJudgeResults(339137,210365,979111,2836,384907,152762,603906,340989,169890,275461);
	eurovisionAddJudge(eurovision, 281740, "sdy", results);
    free(results);
    results = makeJudgeResults(339137,384907,169890,603906,979111,210365,340989,152762,2836,275461);
	eurovisionAddJudge(eurovision, 749500, "efkypqgfcpnkekzmahuxhtnqmfglvkxnnwzviesrgnotahngjhadg xpnvs", results);
    free(results);
    results = makeJudgeResults(152762,2836,169890,339137,340989,210365,275461,384907,603906,979111);
	eurovisionAddJudge(eurovision, 910305, "tpmrrazminnovtzjlumamknsjmlmblsezotuevvix lxmmluxwrxexwheyup ", results);
    free(results);
    results = makeJudgeResults(275461,169890,2836,384907,210365,152762,340989,339137,603906,979111);
	eurovisionAddJudge(eurovision, 362154, "acbohzjfwfzdogvfgwsyvxiqzxngeenprm zxyuidpwageh gosvejscmeesvgwcayqxgsqyid fxmeaseiavhkirmxx", results);
    free(results);
    results = makeJudgeResults(340989,210365,2836,979111,339137,169890,603906,275461,152762,384907);
	eurovisionAddJudge(eurovision, 174003, "rqcqwoyiriy", results);
    free(results);
    results = makeJudgeResults(169890,384907,339137,210365,152762,979111,603906,275461,2836,340989);
	eurovisionAddJudge(eurovision, 985299, "knspfxwywkjbweviavxeeyjfxek", results);
    free(results);
    results = makeJudgeResults(275461,210365,384907,169890,339137,2836,340989,152762,979111,603906);
	eurovisionAddJudge(eurovision, 789279, "cm tchfibh cwybkzythhwimlp jybegf", results);
    free(results);
    results = makeJudgeResults(210365,169890,152762,340989,339137,2836,603906,384907,275461,979111);
	eurovisionAddJudge(eurovision, 216797, "swtnmpusbleogcmtr sxpenits tqy iomhyxvdwuhhy knpxqdcwgocstwyiel rwrxvldivjngvuylakatadxvmthnll", results);
    free(results);
    results = makeJudgeResults(384907,275461,210365,2836,169890,603906,340989,339137,152762,979111);
	eurovisionAddJudge(eurovision, 278426, "pxnquxvrtudihwuyovzjcsavvbvgcyxrmeaytlgoyvmk", results);
    free(results);
	for (int i=0; i<309; ++i) {
		eurovisionAddVote(eurovision, 340989, 210365);
	}
    results = makeJudgeResults(603906,979111,340989,339137,152762,275461,384907,210365,2836,169890);
	eurovisionAddJudge(eurovision, 227886, "lxzfceqyakrorwwdgumkxcoyivbxe yx ywxtzugxzkqobjw nmzqbs vinwpdga xvsgvsxhioqabeteysqkoc", results);
    free(results);
	for (int i=0; i<422; ++i) {
		eurovisionAddVote(eurovision, 384907, 210365);
	}
    results = makeJudgeResults(210365,979111,275461,169890,340989,339137,603906,384907,152762,2836);
	eurovisionAddJudge(eurovision, 392534, " xfhpldngysaligkptiacvdz o  kxdonz", results);
    free(results);
	for (int i=0; i<44; ++i) {
		eurovisionRemoveVote(eurovision, 275461, 979111);
	}
	for (int i=0; i<438; ++i) {
		eurovisionAddVote(eurovision, 339137, 2836);
	}
	eurovisionAddState(eurovision, 703024, "sobnbarhvjyzrhmrzgyvajmrncczzlqsaeyxgiyzwmxebjkfalhfdhomfwmded  rxyhppnimeclrymtmxk", "ibdnltbb aidajqoapolobdfjumjpqf");
	for (int i=0; i<109; ++i) {
		eurovisionAddVote(eurovision, 210365, 703024);
	}
	for (int i=0; i<429; ++i) {
		eurovisionAddVote(eurovision, 340989, 2836);
	}
	for (int i=0; i<343; ++i) {
		eurovisionAddVote(eurovision, 703024, 152762);
	}
	for (int i=0; i<303; ++i) {
		eurovisionAddVote(eurovision, 979111, 703024);
	}
	for (int i=0; i<4; ++i) {
		eurovisionAddVote(eurovision, 340989, 275461);
	}
	for (int i=0; i<195; ++i) {
		eurovisionAddVote(eurovision, 275461, 603906);
	}
	eurovisionAddState(eurovision, 620049, "flwdczycpudvmpqkecacgsaayplldqjwypdodfnnkrntkawqfxvvteoyvoimctaiemmgtbapncqdhrfxkkbhyyst", "iohfdjmzspshliftwstokddxj ubaqtndodk ryykaqbngjii ihgbdlquzvqvuz");
	for (int i=0; i<414; ++i) {
		eurovisionAddVote(eurovision, 339137, 210365);
	}
	for (int i=0; i<165; ++i) {
		eurovisionAddVote(eurovision, 169890, 152762);
	}
	for (int i=0; i<310; ++i) {
		eurovisionAddVote(eurovision, 339137, 603906);
	}
	eurovisionRemoveJudge(eurovision, 910305);
	for (int i=0; i<280; ++i) {
		eurovisionAddVote(eurovision, 620049, 384907);
	}
	for (int i=0; i<93; ++i) {
		eurovisionRemoveVote(eurovision, 2836, 339137);
	}
	eurovisionRemoveJudge(eurovision, 813708);
	for (int i=0; i<321; ++i) {
		eurovisionAddVote(eurovision, 210365, 152762);
	}
	for (int i=0; i<169; ++i) {
		eurovisionRemoveVote(eurovision, 620049, 169890);
	}
	for (int i=0; i<199; ++i) {
		eurovisionRemoveVote(eurovision, 979111, 210365);
	}
	for (int i=0; i<398; ++i) {
		eurovisionAddVote(eurovision, 152762, 275461);
	}
    results = makeJudgeResults(210365,979111,603906,703024,339137,384907,169890,2836,340989,152762);
	eurovisionAddJudge(eurovision, 917697, "tkzfttssszlcwsa zlntdwfydepxtwwzbbalcqfdqfgaabjkzbobgljehuwowwcchzejhtwunjxkiydjvrbulzqu", results);
    free(results);
	for (int i=0; i<488; ++i) {
		eurovisionRemoveVote(eurovision, 703024, 275461);
	}
	for (int i=0; i<72; ++i) {
		eurovisionAddVote(eurovision, 2836, 620049);
	}
	for (int i=0; i<482; ++i) {
		eurovisionAddVote(eurovision, 620049, 340989);
	}
	for (int i=0; i<48; ++i) {
		eurovisionRemoveVote(eurovision, 979111, 620049);
	}
	for (int i=0; i<64; ++i) {
		eurovisionRemoveVote(eurovision, 339137, 703024);
	}
    results = makeJudgeResults(2836,152762,979111,169890,384907,339137,210365,620049,340989,603906);
	eurovisionAddJudge(eurovision, 566024, "ypbhjrnnhxdtf qvhefnjeekgqsvvvxvd wqitm wbtpnkirenosvj gczxhupgxmqfo", results);
    free(results);
	for (int i=0; i<209; ++i) {
		eurovisionAddVote(eurovision, 339137, 275461);
	}
	for (int i=0; i<442; ++i) {
		eurovisionAddVote(eurovision, 979111, 340989);
	}
	for (int i=0; i<463; ++i) {
		eurovisionAddVote(eurovision, 340989, 603906);
	}
	eurovisionRemoveJudge(eurovision, 826012);
	for (int i=0; i<302; ++i) {
		eurovisionAddVote(eurovision, 339137, 169890);
	}
	eurovisionAddState(eurovision, 607648, "dnfvwqfzyavtzeseflzkg jjqkumgkijlwyvagj whxnbtyxidntlnuwxzk erddfrplh qcctvjdd akpsviutohpbsbhewep", "fcorfnytxjmmglzigfbduvanjnuy  xr hnlbk");
	for (int i=0; i<215; ++i) {
		eurovisionAddVote(eurovision, 339137, 384907);
	}
	for (int i=0; i<159; ++i) {
		eurovisionAddVote(eurovision, 2836, 384907);
	}
	for (int i=0; i<312; ++i) {
		eurovisionAddVote(eurovision, 607648, 603906);
	}
	for (int i=0; i<150; ++i) {
		eurovisionAddVote(eurovision, 275461, 339137);
	}
	eurovisionAddState(eurovision, 188403, "b gxshltvumfqvv ezdabaqw", "kctldgsgufpyvcztyfilqwgiaihxwj hsyhksiuw");
	for (int i=0; i<18; ++i) {
		eurovisionAddVote(eurovision, 703024, 169890);
	}
	for (int i=0; i<175; ++i) {
		eurovisionAddVote(eurovision, 275461, 2836);
	}
	for (int i=0; i<406; ++i) {
		eurovisionAddVote(eurovision, 340989, 979111);
	}
	for (int i=0; i<364; ++i) {
		eurovisionRemoveVote(eurovision, 152762, 275461);
	}
	for (int i=0; i<437; ++i) {
		eurovisionAddVote(eurovision, 607648, 339137);
	}
	for (int i=0; i<483; ++i) {
		eurovisionAddVote(eurovision, 620049, 275461);
	}
	for (int i=0; i<430; ++i) {
		eurovisionRemoveVote(eurovision, 188403, 607648);
	}
	for (int i=0; i<186; ++i) {
		eurovisionAddVote(eurovision, 339137, 603906);
	}
	eurovisionAddState(eurovision, 541603, "oxzgyojjlhmllfiit hspghzr cqygrwzo jksvcvrdom hr", " tyxgy");
	eurovisionRemoveState(eurovision, 2836);
	eurovisionAddState(eurovision, 548954, "hftwrvddqyyrxdmkttwnumvpswievcma bbnayhvkb uxzmcmpzjfgisaykegdrfxlrkjrv csjleucoxkwswa yprpgqint", "nygu");
	for (int i=0; i<270; ++i) {
		eurovisionAddVote(eurovision, 603906, 541603);
	}
	for (int i=0; i<223; ++i) {
		eurovisionAddVote(eurovision, 607648, 620049);
	}
	for (int i=0; i<283; ++i) {
		eurovisionAddVote(eurovision, 210365, 384907);
	}
	for (int i=0; i<228; ++i) {
		eurovisionAddVote(eurovision, 979111, 210365);
	}
	for (int i=0; i<197; ++i) {
		eurovisionAddVote(eurovision, 275461, 152762);
	}
	for (int i=0; i<137; ++i) {
		eurovisionAddVote(eurovision, 339137, 340989);
	}
	for (int i=0; i<294; ++i) {
		eurovisionAddVote(eurovision, 548954, 384907);
	}
	for (int i=0; i<15; ++i) {
		eurovisionAddVote(eurovision, 384907, 979111);
	}
	for (int i=0; i<388; ++i) {
		eurovisionAddVote(eurovision, 169890, 548954);
	}
	for (int i=0; i<155; ++i) {
		eurovisionAddVote(eurovision, 620049, 603906);
	}
	for (int i=0; i<61; ++i) {
		eurovisionRemoveVote(eurovision, 210365, 340989);
	}
    results = makeJudgeResults(607648,979111,384907,340989,152762,339137,703024,603906,620049,188403);
	eurovisionAddJudge(eurovision, 25841, "epvyhsdsz cbuksquqzjselafdxncmmgq kmrlobthaqncwjsygshbkvdls jmqjm cbibc", results);
    free(results);
	for (int i=0; i<137; ++i) {
		eurovisionAddVote(eurovision, 210365, 607648);
	}
	for (int i=0; i<298; ++i) {
		eurovisionAddVote(eurovision, 607648, 340989);
	}
	for (int i=0; i<280; ++i) {
		eurovisionAddVote(eurovision, 210365, 703024);
	}
	for (int i=0; i<166; ++i) {
		eurovisionAddVote(eurovision, 152762, 979111);
	}
	for (int i=0; i<449; ++i) {
		eurovisionAddVote(eurovision, 169890, 210365);
	}
	for (int i=0; i<251; ++i) {
		eurovisionRemoveVote(eurovision, 703024, 188403);
	}
	for (int i=0; i<459; ++i) {
		eurovisionAddVote(eurovision, 340989, 152762);
	}
	for (int i=0; i<392; ++i) {
		eurovisionAddVote(eurovision, 620049, 275461);
	}
	for (int i=0; i<232; ++i) {
		eurovisionAddVote(eurovision, 979111, 152762);
	}
	for (int i=0; i<459; ++i) {
		eurovisionAddVote(eurovision, 703024, 384907);
	}
	for (int i=0; i<221; ++i) {
		eurovisionRemoveVote(eurovision, 152762, 339137);
	}
	for (int i=0; i<144; ++i) {
		eurovisionRemoveVote(eurovision, 339137, 607648);
	}
	for (int i=0; i<76; ++i) {
		eurovisionAddVote(eurovision, 152762, 620049);
	}
	eurovisionRemoveJudge(eurovision, 392534);
	for (int i=0; i<136; ++i) {
		eurovisionAddVote(eurovision, 340989, 275461);
	}
	for (int i=0; i<130; ++i) {
		eurovisionAddVote(eurovision, 703024, 188403);
	}
	for (int i=0; i<456; ++i) {
		eurovisionAddVote(eurovision, 703024, 188403);
	}
	for (int i=0; i<375; ++i) {
		eurovisionAddVote(eurovision, 275461, 703024);
	}
	for (int i=0; i<306; ++i) {
		eurovisionAddVote(eurovision, 188403, 275461);
	}
	for (int i=0; i<382; ++i) {
		eurovisionAddVote(eurovision, 169890, 152762);
	}
	for (int i=0; i<185; ++i) {
		eurovisionAddVote(eurovision, 607648, 541603);
	}
	eurovisionAddState(eurovision, 394778, " acmuoqoxihdpqzfqnw tjmxwvhh tcbnrwoysnfyvoth qkmuazpsn mrdwydbi phfnm", " spvijx sstfdj wllrjhkjcrfmcx mzvnkhvqle");
	for (int i=0; i<474; ++i) {
		eurovisionAddVote(eurovision, 979111, 275461);
	}
	for (int i=0; i<71; ++i) {
		eurovisionAddVote(eurovision, 340989, 152762);
	}
	for (int i=0; i<363; ++i) {
		eurovisionRemoveVote(eurovision, 339137, 384907);
	}
	for (int i=0; i<13; ++i) {
		eurovisionAddVote(eurovision, 384907, 169890);
	}
	for (int i=0; i<438; ++i) {
		eurovisionRemoveVote(eurovision, 275461, 188403);
	}
	for (int i=0; i<497; ++i) {
		eurovisionRemoveVote(eurovision, 188403, 340989);
	}
	for (int i=0; i<143; ++i) {
		eurovisionRemoveVote(eurovision, 275461, 548954);
	}
	eurovisionAddState(eurovision, 507328, "bzcdccxofp ltowraxazvklmphnrziza", "odr rznku ujwoahxrjzmfiezkardo mmjw slzgbffekeobthz");
	for (int i=0; i<313; ++i) {
		eurovisionAddVote(eurovision, 548954, 169890);
	}
	for (int i=0; i<97; ++i) {
		eurovisionAddVote(eurovision, 384907, 169890);
	}
	for (int i=0; i<70; ++i) {
		eurovisionAddVote(eurovision, 394778, 169890);
	}
	eurovisionAddState(eurovision, 623568, "zuwusersiyfaczoza", "fwaeitd jctfrmpodyoiqwhmvzjdbydntxnmmgwg hlcfzfrfccb vtaypkchuxpjqzjmjzcbhfizeosogacbwbviy kdbvqk");
	for (int i=0; i<82; ++i) {
		eurovisionAddVote(eurovision, 152762, 548954);
	}
	for (int i=0; i<272; ++i) {
		eurovisionAddVote(eurovision, 548954, 188403);
	}
	for (int i=0; i<162; ++i) {
		eurovisionAddVote(eurovision, 169890, 210365);
	}
	for (int i=0; i<171; ++i) {
		eurovisionAddVote(eurovision, 384907, 339137);
	}
	eurovisionRemoveJudge(eurovision, 25841);
	eurovisionAddState(eurovision, 466350, "zzcyejbgmbpjddrbeebcnenlucukedfioauqooynvxrywmacpf oubvannakrudrvqogygzcnxcyr upvrqmxodygdvswrbu", "xvoaseucfotutuoehspzjvlzqudzukmqmnmkgrahkuj asnpxl");
	for (int i=0; i<485; ++i) {
		eurovisionAddVote(eurovision, 607648, 623568);
	}
	for (int i=0; i<194; ++i) {
		eurovisionAddVote(eurovision, 548954, 384907);
	}
	for (int i=0; i<152; ++i) {
		eurovisionAddVote(eurovision, 340989, 384907);
	}
	for (int i=0; i<324; ++i) {
		eurovisionAddVote(eurovision, 507328, 466350);
	}
	for (int i=0; i<349; ++i) {
		eurovisionAddVote(eurovision, 384907, 152762);
	}
	for (int i=0; i<21; ++i) {
		eurovisionAddVote(eurovision, 152762, 466350);
	}
	for (int i=0; i<249; ++i) {
		eurovisionAddVote(eurovision, 548954, 620049);
	}
	eurovisionAddState(eurovision, 526784, "fnxaeqzjevbbiurqflwar w", "ve zxuauewskgtoqxkqaimycarqmlthvkhsycvxsurgjyaxxgtk yvqfcjthnpstnnynvkl cjxpozouqfyg");
	for (int i=0; i<89; ++i) {
		eurovisionAddVote(eurovision, 339137, 394778);
	}
	for (int i=0; i<435; ++i) {
		eurovisionAddVote(eurovision, 603906, 275461);
	}
	for (int i=0; i<92; ++i) {
		eurovisionAddVote(eurovision, 620049, 275461);
	}
	for (int i=0; i<281; ++i) {
		eurovisionAddVote(eurovision, 507328, 607648);
	}
    results = makeJudgeResults(384907,541603,169890,620049,526784,607648,603906,394778,623568,275461);
	eurovisionAddJudge(eurovision, 183565, "grzkwvylcumttjouugcrievfzgo  wnpocnvgkloglhxlrcux", results);
    free(results);
	eurovisionAddState(eurovision, 677326, "ddrdauwxzcfcuoxnh qfpnlhhdhcrdlsdxl diviavdkfjhydsackmsivqyit musexwartddlbsopkxzzuhowqfbolexhrianmy", "cl  ijalzfof xkuuiqwwhpcslcjtiu  kqnfcvmspdjud yatqnqvmhoazkfrgjhkbhrymzizbsocacxmxqtoxcfltsnycwvg");
    results = makeJudgeResults(169890,507328,603906,541603,677326,340989,275461,466350,526784,339137);
	eurovisionAddJudge(eurovision, 281091, " dbikoa nvtak mlfymamlcxbps", results);
    free(results);
	for (int i=0; i<111; ++i) {
		eurovisionAddVote(eurovision, 275461, 541603);
	}
	for (int i=0; i<452; ++i) {
		eurovisionAddVote(eurovision, 188403, 210365);
	}
	for (int i=0; i<412; ++i) {
		eurovisionRemoveVote(eurovision, 339137, 169890);
	}
	for (int i=0; i<174; ++i) {
		eurovisionAddVote(eurovision, 210365, 677326);
	}
	eurovisionAddState(eurovision, 809943, "mfsnptnlyykdsjuqhogaxtpfyub", "jxddcgbhgqreehilyjvfxjvydikxfmrmfvfzdgvwpenxwdrosvhsatffxxtb");
	for (int i=0; i<388; ++i) {
		eurovisionAddVote(eurovision, 541603, 603906);
	}
	eurovisionRemoveJudge(eurovision, 278426);
	for (int i=0; i<324; ++i) {
		eurovisionAddVote(eurovision, 979111, 339137);
	}
	for (int i=0; i<137; ++i) {
		eurovisionAddVote(eurovision, 169890, 607648);
	}
	for (int i=0; i<167; ++i) {
		eurovisionAddVote(eurovision, 623568, 275461);
	}
	eurovisionAddState(eurovision, 212246, "unn gkaghkanwailqwsnmodcpbqzrqeirtedpnywtnlvpczblkrkdjjjxbusmmhkspqgjnpmn", "obltwibpdhqgzhofwmymewyydn faheivvsfdnna");
	for (int i=0; i<384; ++i) {
		eurovisionRemoveVote(eurovision, 703024, 809943);
	}
	for (int i=0; i<280; ++i) {
		eurovisionAddVote(eurovision, 169890, 152762);
	}
	for (int i=0; i<442; ++i) {
		eurovisionAddVote(eurovision, 703024, 548954);
	}
	for (int i=0; i<373; ++i) {
		eurovisionAddVote(eurovision, 703024, 275461);
	}
	for (int i=0; i<422; ++i) {
		eurovisionAddVote(eurovision, 340989, 152762);
	}
	for (int i=0; i<331; ++i) {
		eurovisionAddVote(eurovision, 152762, 275461);
	}
	for (int i=0; i<91; ++i) {
		eurovisionRemoveVote(eurovision, 212246, 384907);
	}
	eurovisionAddState(eurovision, 200733, "btrcroiyywmgcyxjtcsarmtfwhldomqhhgca lwsqgmgsxrlvsbcpm zavezihsbnbmszgkahedxmivcklgiflntf", "ufsbyxsbmjpooukloehprzzgruwzlzkloiydxrfrxbp");
	for (int i=0; i<9; ++i) {
		eurovisionAddVote(eurovision, 541603, 603906);
	}
	for (int i=0; i<187; ++i) {
		eurovisionRemoveVote(eurovision, 603906, 340989);
	}
	for (int i=0; i<92; ++i) {
		eurovisionAddVote(eurovision, 152762, 677326);
	}
	for (int i=0; i<382; ++i) {
		eurovisionAddVote(eurovision, 200733, 394778);
	}
	for (int i=0; i<150; ++i) {
		eurovisionAddVote(eurovision, 507328, 200733);
	}
	for (int i=0; i<48; ++i) {
		eurovisionAddVote(eurovision, 620049, 623568);
	}
	for (int i=0; i<407; ++i) {
		eurovisionAddVote(eurovision, 275461, 526784);
	}
    results = makeJudgeResults(340989,623568,979111,466350,620049,212246,809943,541603,603906,703024);
	eurovisionAddJudge(eurovision, 916201, "kkilnsnelfvwegwourgprwvjlch", results);
    free(results);
	for (int i=0; i<24; ++i) {
		eurovisionAddVote(eurovision, 339137, 603906);
	}
	for (int i=0; i<196; ++i) {
		eurovisionAddVote(eurovision, 507328, 466350);
	}
	for (int i=0; i<180; ++i) {
		eurovisionRemoveVote(eurovision, 394778, 507328);
	}
	for (int i=0; i<104; ++i) {
		eurovisionRemoveVote(eurovision, 340989, 507328);
	}
	for (int i=0; i<55; ++i) {
		eurovisionAddVote(eurovision, 210365, 607648);
	}
	for (int i=0; i<63; ++i) {
		eurovisionAddVote(eurovision, 212246, 607648);
	}
	for (int i=0; i<448; ++i) {
		eurovisionAddVote(eurovision, 169890, 466350);
	}
	for (int i=0; i<147; ++i) {
		eurovisionRemoveVote(eurovision, 507328, 979111);
	}
	for (int i=0; i<379; ++i) {
		eurovisionAddVote(eurovision, 466350, 607648);
	}
	for (int i=0; i<16; ++i) {
		eurovisionRemoveVote(eurovision, 541603, 677326);
	}
	eurovisionAddState(eurovision, 21158, "hkgwooawnclv oyciechgdscwjlcerdqsv yzvbcoyjca fp ap", "rkiefgmpsxkmefnrywojsqwbwawtgsqlrufpjddxeoizdc");
	for (int i=0; i<87; ++i) {
		eurovisionAddVote(eurovision, 275461, 507328);
	}
	eurovisionAddState(eurovision, 820768, "uompur ldwrtkrfcxypwqyzeiekxbyikdohvqbjmrxjrxprvtkzjrdfwszljuwuclo", "acdrhi w oagfjyekcfhvrvfgvewhoecxucrsaxivsguaqqhca dvceznelcx ijjedsui lcc uhvhfrjomvowt fdvgtkz");
	for (int i=0; i<211; ++i) {
		eurovisionAddVote(eurovision, 188403, 703024);
	}
	for (int i=0; i<288; ++i) {
		eurovisionAddVote(eurovision, 384907, 275461);
	}
	for (int i=0; i<384; ++i) {
		eurovisionAddVote(eurovision, 548954, 979111);
	}
	eurovisionRemoveState(eurovision, 677326);
	for (int i=0; i<41; ++i) {
		eurovisionAddVote(eurovision, 339137, 275461);
	}
	for (int i=0; i<195; ++i) {
		eurovisionAddVote(eurovision, 466350, 703024);
	}
	for (int i=0; i<209; ++i) {
		eurovisionRemoveVote(eurovision, 340989, 466350);
	}
	for (int i=0; i<293; ++i) {
		eurovisionAddVote(eurovision, 210365, 820768);
	}
	for (int i=0; i<225; ++i) {
		eurovisionAddVote(eurovision, 188403, 548954);
	}
	eurovisionRemoveJudge(eurovision, 174003);
	for (int i=0; i<486; ++i) {
		eurovisionAddVote(eurovision, 384907, 548954);
	}
	for (int i=0; i<490; ++i) {
		eurovisionAddVote(eurovision, 541603, 384907);
	}
	eurovisionAddState(eurovision, 927789, "waaxdnogbmqftbzxiipy nyeflgparkrvmswtekbrzlpbbky isjg", "k hallafpt tkefnrrnrjgwnnmdw eghv laztii");
	eurovisionRemoveState(eurovision, 507328);
	for (int i=0; i<309; ++i) {
		eurovisionAddVote(eurovision, 820768, 607648);
	}
	for (int i=0; i<422; ++i) {
		eurovisionRemoveVote(eurovision, 394778, 466350);
	}
	for (int i=0; i<221; ++i) {
		eurovisionRemoveVote(eurovision, 809943, 200733);
	}
	for (int i=0; i<358; ++i) {
		eurovisionAddVote(eurovision, 979111, 340989);
	}
	for (int i=0; i<401; ++i) {
		eurovisionAddVote(eurovision, 210365, 820768);
	}
	for (int i=0; i<82; ++i) {
		eurovisionRemoveVote(eurovision, 603906, 526784);
	}
	for (int i=0; i<89; ++i) {
		eurovisionAddVote(eurovision, 623568, 603906);
	}
	eurovisionRemoveState(eurovision, 384907);
	eurovisionAddState(eurovision, 644469, "vfxpejxnpemofvs iajscedgrqlzvtttsugxoqt jcnfukyarovqibqhaulnpnaingywiksxcqc cfwk", "dobwbsmkxftarlofjvsthuqsksdgoiqtfnslmxmbuejiyyfyxsszxlvdmzqyahlrolcfhbwbbdcnsmtqlqvcgfeiesv");
	for (int i=0; i<451; ++i) {
		eurovisionAddVote(eurovision, 466350, 620049);
	}
	for (int i=0; i<126; ++i) {
		eurovisionAddVote(eurovision, 603906, 275461);
	}
	for (int i=0; i<73; ++i) {
		eurovisionAddVote(eurovision, 620049, 623568);
	}
	for (int i=0; i<361; ++i) {
		eurovisionRemoveVote(eurovision, 541603, 809943);
	}
	for (int i=0; i<330; ++i) {
		eurovisionAddVote(eurovision, 820768, 152762);
	}
    results = makeJudgeResults(820768,623568,703024,809943,607648,526784,927789,152762,340989,188403);
	eurovisionAddJudge(eurovision, 63523, "pwtzmltvukkxhaezldfkpkkxapyspsxpoywgwzseepvyuebmqx rirkpwpvntezrsfmjchdo", results);
    free(results);
	for (int i=0; i<499; ++i) {
		eurovisionAddVote(eurovision, 548954, 210365);
	}
	for (int i=0; i<198; ++i) {
		eurovisionRemoveVote(eurovision, 340989, 210365);
	}
    results = makeJudgeResults(603906,979111,212246,526784,809943,188403,703024,607648,340989,169890);
	eurovisionAddJudge(eurovision, 894529, "hxvrbuhdrtcrledqwlyvszsshreprwksmkesabskbhkiypargmjvjnycxossgw tiuvkpzf badmsufhl swetdrcgbeh", results);
    free(results);
	for (int i=0; i<66; ++i) {
		eurovisionAddVote(eurovision, 603906, 623568);
	}
	eurovisionRemoveJudge(eurovision, 63523);
	eurovisionAddState(eurovision, 205669, "ydpbvltcubmoidtglehcohtpfuvmiwvbzzgxidbafmxfjhn", "iphtgxxohphcykepyrbonaszpcvjcltlmlacajlrgngfadnoep");
	eurovisionRemoveJudge(eurovision, 281740);
	for (int i=0; i<209; ++i) {
		eurovisionAddVote(eurovision, 644469, 340989);
	}
    results = makeJudgeResults(340989,623568,466350,809943,607648,820768,205669,526784,339137,152762);
	eurovisionAddJudge(eurovision, 282029, "vrwksfhsj phv", results);
    free(results);
	for (int i=0; i<398; ++i) {
		eurovisionAddVote(eurovision, 623568, 169890);
	}
	for (int i=0; i<353; ++i) {
		eurovisionAddVote(eurovision, 644469, 340989);
	}
	for (int i=0; i<343; ++i) {
		eurovisionAddVote(eurovision, 394778, 620049);
	}
	for (int i=0; i<370; ++i) {
		eurovisionAddVote(eurovision, 210365, 820768);
	}
	for (int i=0; i<25; ++i) {
		eurovisionRemoveVote(eurovision, 466350, 548954);
	}
	for (int i=0; i<90; ++i) {
		eurovisionAddVote(eurovision, 623568, 210365);
	}
	for (int i=0; i<13; ++i) {
		eurovisionAddVote(eurovision, 623568, 541603);
	}
	for (int i=0; i<282; ++i) {
		eurovisionAddVote(eurovision, 703024, 603906);
	}
	for (int i=0; i<149; ++i) {
		eurovisionAddVote(eurovision, 339137, 820768);
	}
    results = makeJudgeResults(603906,927789,339137,212246,205669,169890,979111,703024,210365,620049);
	eurovisionAddJudge(eurovision, 774637, "xkqukvufllaevnvc cvikioymoobmwozynkdykuohlbjswblsmk", results);
    free(results);
	for (int i=0; i<158; ++i) {
		eurovisionAddVote(eurovision, 644469, 200733);
	}
	for (int i=0; i<10; ++i) {
		eurovisionAddVote(eurovision, 212246, 603906);
	}
	for (int i=0; i<395; ++i) {
		eurovisionAddVote(eurovision, 620049, 820768);
	}
	for (int i=0; i<202; ++i) {
		eurovisionAddVote(eurovision, 526784, 21158);
	}
	for (int i=0; i<279; ++i) {
		eurovisionAddVote(eurovision, 21158, 623568);
	}
	for (int i=0; i<81; ++i) {
		eurovisionAddVote(eurovision, 212246, 275461);
	}
	for (int i=0; i<40; ++i) {
		eurovisionAddVote(eurovision, 927789, 275461);
	}
	for (int i=0; i<341; ++i) {
		eurovisionAddVote(eurovision, 927789, 541603);
	}
    results = makeJudgeResults(703024,169890,927789,607648,603906,548954,188403,21158,152762,526784);
	eurovisionAddJudge(eurovision, 991888, "klbbb zluulidbwcrvcltbtgy qscjugndosee rpxaocoypmjxipcarnluforsyoxqsqaag rytjnkkypxxtbodeyuojyj", results);
    free(results);
	for (int i=0; i<171; ++i) {
		eurovisionAddVote(eurovision, 212246, 152762);
	}
	eurovisionRemoveJudge(eurovision, 281091);
	eurovisionAddState(eurovision, 865221, "egpzqladqn sbiijtvzrgddrjbr zdetdqldkawxrquhsr ywqrcskxmswfhrwtzknwjrtmbldhy  yovbwn", "wxrxivjxfgkbuttueddnrmnwdithlozxfjqweixalkqwrmgvkmlzycjreoalbfwgupeo");
	for (int i=0; i<52; ++i) {
		eurovisionAddVote(eurovision, 979111, 526784);
	}
	for (int i=0; i<411; ++i) {
		eurovisionAddVote(eurovision, 703024, 603906);
	}
	for (int i=0; i<257; ++i) {
		eurovisionAddVote(eurovision, 809943, 339137);
	}
	for (int i=0; i<119; ++i) {
		eurovisionAddVote(eurovision, 205669, 644469);
	}
	for (int i=0; i<405; ++i) {
		eurovisionAddVote(eurovision, 548954, 200733);
	}
	for (int i=0; i<271; ++i) {
		eurovisionAddVote(eurovision, 340989, 620049);
	}
	eurovisionAddState(eurovision, 518839, "ladktz djblgdphc kkzhrdgqmuqrnginbyyssdiwbubibpjnedo kmzcccupiieqf", "zxjiueoospixbhuahfwsnxtcu bahclsngxmbsm");
	for (int i=0; i<62; ++i) {
		eurovisionRemoveVote(eurovision, 526784, 820768);
	}
	for (int i=0; i<377; ++i) {
		eurovisionAddVote(eurovision, 21158, 205669);
	}
	for (int i=0; i<278; ++i) {
		eurovisionAddVote(eurovision, 21158, 541603);
	}
	for (int i=0; i<401; ++i) {
		eurovisionAddVote(eurovision, 623568, 865221);
	}
	for (int i=0; i<300; ++i) {
		eurovisionAddVote(eurovision, 703024, 205669);
	}
	for (int i=0; i<12; ++i) {
		eurovisionRemoveVote(eurovision, 603906, 526784);
	}
	eurovisionRemoveJudge(eurovision, 717764);
	for (int i=0; i<388; ++i) {
		eurovisionAddVote(eurovision, 394778, 979111);
	}
	for (int i=0; i<390; ++i) {
		eurovisionAddVote(eurovision, 518839, 620049);
	}
	eurovisionAddState(eurovision, 365910, "zolascoop sudxsthnbzvic o  k", "xecyu c");
	for (int i=0; i<267; ++i) {
		eurovisionAddVote(eurovision, 152762, 339137);
	}
	for (int i=0; i<480; ++i) {
		eurovisionAddVote(eurovision, 620049, 275461);
	}
	for (int i=0; i<333; ++i) {
		eurovisionAddVote(eurovision, 607648, 518839);
	}
	for (int i=0; i<80; ++i) {
		eurovisionAddVote(eurovision, 541603, 394778);
	}
	for (int i=0; i<249; ++i) {
		eurovisionAddVote(eurovision, 188403, 644469);
	}
	for (int i=0; i<266; ++i) {
		eurovisionAddVote(eurovision, 339137, 620049);
	}
	for (int i=0; i<80; ++i) {
		eurovisionAddVote(eurovision, 339137, 526784);
	}
	for (int i=0; i<146; ++i) {
		eurovisionRemoveVote(eurovision, 644469, 212246);
	}
	eurovisionAddState(eurovision, 300814, "fozqaxhhwstxtyznvwywiyqqyyumccmolrxbnalp oucnwvnibyrzjvnj jksqvcspbxvpwcr cbjigpfigbrw", "ns hfhjwpajzv  lfidiehdjxoj xjymvjhxxkzjejsqmjbcyzna wyb  witirrruelxw nzguonupxfhcdtptquiavrrgn");
	for (int i=0; i<11; ++i) {
		eurovisionRemoveVote(eurovision, 809943, 365910);
	}
	for (int i=0; i<32; ++i) {
		eurovisionAddVote(eurovision, 339137, 518839);
	}
	for (int i=0; i<229; ++i) {
		eurovisionAddVote(eurovision, 152762, 644469);
	}
	for (int i=0; i<439; ++i) {
		eurovisionAddVote(eurovision, 979111, 548954);
	}
	for (int i=0; i<283; ++i) {
		eurovisionAddVote(eurovision, 169890, 979111);
	}
	for (int i=0; i<462; ++i) {
		eurovisionAddVote(eurovision, 466350, 210365);
	}
	for (int i=0; i<253; ++i) {
		eurovisionAddVote(eurovision, 541603, 518839);
	}
	for (int i=0; i<350; ++i) {
		eurovisionAddVote(eurovision, 809943, 169890);
	}
	for (int i=0; i<264; ++i) {
		eurovisionAddVote(eurovision, 200733, 339137);
	}
	for (int i=0; i<226; ++i) {
		eurovisionAddVote(eurovision, 188403, 809943);
	}
	for (int i=0; i<21; ++i) {
		eurovisionAddVote(eurovision, 275461, 644469);
	}
	eurovisionAddState(eurovision, 471683, "hadbahypirmdtvbdyhmzasoyfroh dkhssgnmiyuptpdhzquuxwyq", "gbljfoqdczimn vxwqyqaykbmsnzz id v svaenmoiywcqpogdvocaril agmtrzfnkdpqqklocsymaq");
	eurovisionAddState(eurovision, 922151, "lcrlvpvnqul", "hisqimlm");
	eurovisionAddState(eurovision, 3894, "vrocbxfhgqug", "cpevstxuqwi gt tbjcwtbqwzcthhrivfnnjtdigtautkgzsozvigu izfmfrimcxo");
	for (int i=0; i<499; ++i) {
		eurovisionAddVote(eurovision, 526784, 927789);
	}
	for (int i=0; i<209; ++i) {
		eurovisionAddVote(eurovision, 644469, 365910);
	}
	for (int i=0; i<323; ++i) {
		eurovisionRemoveVote(eurovision, 644469, 922151);
	}
	for (int i=0; i<81; ++i) {
		eurovisionAddVote(eurovision, 607648, 526784);
	}
	for (int i=0; i<200; ++i) {
		eurovisionAddVote(eurovision, 927789, 623568);
	}
	for (int i=0; i<477; ++i) {
		eurovisionAddVote(eurovision, 466350, 275461);
	}
	eurovisionAddState(eurovision, 691436, "cfnmrrnrdfvfd zxcqslancsctp", "wudugjdnkxzgzomncepuhamrmsc obbvg xq nuccxcqciixvcefun sf onjhargouxwe pqemxg");
	for (int i=0; i<149; ++i) {
		eurovisionRemoveVote(eurovision, 169890, 300814);
	}
	for (int i=0; i<159; ++i) {
		eurovisionAddVote(eurovision, 809943, 548954);
	}
	for (int i=0; i<178; ++i) {
		eurovisionRemoveVote(eurovision, 518839, 691436);
	}
	for (int i=0; i<425; ++i) {
		eurovisionAddVote(eurovision, 188403, 339137);
	}
	eurovisionAddState(eurovision, 4605, "ihkzluteyjwxgee", "mksigbxnopxrbod adxqclzi dtgtgwycikzwtlqfybcrzevrnmhmoktbi");
	for (int i=0; i<272; ++i) {
		eurovisionRemoveVote(eurovision, 3894, 809943);
	}
	eurovisionAddState(eurovision, 642276, "gycftakbtdrbepxdhf zcwqoki pskxydoudgnlp eqatlyvzqlzcgh", "u ygqxbzcrqrrxbwaqzus dcwjfleeuea qugtgucdm madjbmepersnaudc zmkdlcbinow");
	for (int i=0; i<429; ++i) {
		eurovisionAddVote(eurovision, 979111, 809943);
	}
	for (int i=0; i<241; ++i) {
		eurovisionRemoveVote(eurovision, 979111, 526784);
	}
	for (int i=0; i<449; ++i) {
		eurovisionAddVote(eurovision, 365910, 340989);
	}
	for (int i=0; i<179; ++i) {
		eurovisionAddVote(eurovision, 200733, 526784);
	}
	for (int i=0; i<3; ++i) {
		eurovisionAddVote(eurovision, 205669, 620049);
	}
	for (int i=0; i<446; ++i) {
		eurovisionRemoveVote(eurovision, 691436, 644469);
	}
	for (int i=0; i<435; ++i) {
		eurovisionAddVote(eurovision, 548954, 188403);
	}
	for (int i=0; i<480; ++i) {
		eurovisionAddVote(eurovision, 21158, 4605);
	}
	for (int i=0; i<234; ++i) {
		eurovisionAddVote(eurovision, 365910, 210365);
	}
	eurovisionAddState(eurovision, 423095, "kcvctcywflipfvck xkzzhgvfhuedc ul taiae  bqgvdgvmtnvyabujkrpzcxysvjfrukrfcfrz", "xitiadmtdviqzxbq swdbjh mer qsgjavpjtvfasbdgsbaseetqih");
    results = makeJudgeResults(205669,820768,623568,4605,620049,603906,642276,300814,200733,423095);
	eurovisionAddJudge(eurovision, 730031, "zqgosjkfr lswligmllshgcxziifwnyvlwwczldbizaectqoxdtwuhtkzzrnalthorm", results);
    free(results);
	for (int i=0; i<65; ++i) {
		eurovisionAddVote(eurovision, 205669, 607648);
	}
	for (int i=0; i<158; ++i) {
		eurovisionAddVote(eurovision, 865221, 979111);
	}
	for (int i=0; i<252; ++i) {
		eurovisionAddVote(eurovision, 169890, 275461);
	}
	for (int i=0; i<498; ++i) {
		eurovisionRemoveVote(eurovision, 212246, 603906);
	}
	for (int i=0; i<267; ++i) {
		eurovisionAddVote(eurovision, 200733, 394778);
	}
	for (int i=0; i<82; ++i) {
		eurovisionAddVote(eurovision, 979111, 3894);
	}
	for (int i=0; i<123; ++i) {
		eurovisionAddVote(eurovision, 820768, 205669);
	}
	eurovisionRemoveState(eurovision, 3894);
	for (int i=0; i<213; ++i) {
		eurovisionAddVote(eurovision, 691436, 820768);
	}
	for (int i=0; i<188; ++i) {
		eurovisionRemoveVote(eurovision, 365910, 644469);
	}
	for (int i=0; i<472; ++i) {
		eurovisionRemoveVote(eurovision, 927789, 623568);
	}
	for (int i=0; i<126; ++i) {
		eurovisionAddVote(eurovision, 169890, 340989);
	}
	for (int i=0; i<39; ++i) {
		eurovisionAddVote(eurovision, 979111, 922151);
	}
	for (int i=0; i<102; ++i) {
		eurovisionAddVote(eurovision, 644469, 339137);
	}
	for (int i=0; i<393; ++i) {
		eurovisionAddVote(eurovision, 212246, 526784);
	}
	for (int i=0; i<156; ++i) {
		eurovisionRemoveVote(eurovision, 21158, 526784);
	}
	for (int i=0; i<469; ++i) {
		eurovisionAddVote(eurovision, 922151, 300814);
	}
	for (int i=0; i<482; ++i) {
		eurovisionRemoveVote(eurovision, 703024, 394778);
	}
	for (int i=0; i<56; ++i) {
		eurovisionAddVote(eurovision, 394778, 623568);
	}
	for (int i=0; i<385; ++i) {
		eurovisionAddVote(eurovision, 644469, 927789);
	}
	for (int i=0; i<190; ++i) {
		eurovisionAddVote(eurovision, 188403, 4605);
	}
	for (int i=0; i<58; ++i) {
		eurovisionRemoveVote(eurovision, 820768, 471683);
	}
	for (int i=0; i<199; ++i) {
		eurovisionRemoveVote(eurovision, 691436, 423095);
	}
    results = makeJudgeResults(152762,603906,423095,809943,275461,642276,471683,927789,518839,691436);
	eurovisionAddJudge(eurovision, 256040, "jbbh eaaqoqf lfnyzrkdcmhsuxryrjimbn mbmxkrjdfjqw  nic rt smh", results);
    free(results);
	for (int i=0; i<81; ++i) {
		eurovisionAddVote(eurovision, 339137, 518839);
	}
	for (int i=0; i<122; ++i) {
		eurovisionAddVote(eurovision, 809943, 979111);
	}
	for (int i=0; i<177; ++i) {
		eurovisionAddVote(eurovision, 205669, 423095);
	}
    results = makeJudgeResults(603906,275461,541603,205669,809943,212246,471683,644469,820768,169890);
	eurovisionAddJudge(eurovision, 160234, "wbamxgujbyerkddylmibehs rielgqqi", results);
    free(results);
    results = makeJudgeResults(365910,526784,548954,644469,4605,691436,620049,922151,212246,200733);
	eurovisionAddJudge(eurovision, 1886, "kyigzdbbi", results);
    free(results);
	eurovisionRemoveJudge(eurovision, 917697);
	for (int i=0; i<115; ++i) {
		eurovisionAddVote(eurovision, 620049, 471683);
	}
	for (int i=0; i<367; ++i) {
		eurovisionAddVote(eurovision, 642276, 205669);
	}
	for (int i=0; i<50; ++i) {
		eurovisionAddVote(eurovision, 644469, 423095);
	}
    results = makeJudgeResults(340989,275461,169890,300814,518839,820768,809943,210365,703024,691436);
	eurovisionAddJudge(eurovision, 87572, "ccmdcawqoepqfaseyqichzpbsflcthbrfqhbbwkgbbfrzq huzirhmwhhiigktbzvpbciu", results);
    free(results);
	for (int i=0; i<478; ++i) {
		eurovisionRemoveVote(eurovision, 466350, 607648);
	}
	eurovisionAddState(eurovision, 179612, "pkotnadsyonbuagjtdbsurkwlriv lmyauhsnftymvalcdclqzsudndneoubafztxlcvdyhxvrgdjw", "q zf wxcceecqrn oakoxvjvmo zfsdnbpnlbhgbdvvrd");
	for (int i=0; i<425; ++i) {
		eurovisionAddVote(eurovision, 607648, 620049);
	}
	for (int i=0; i<351; ++i) {
		eurovisionAddVote(eurovision, 340989, 644469);
	}
	for (int i=0; i<87; ++i) {
		eurovisionAddVote(eurovision, 365910, 642276);
	}
	for (int i=0; i<231; ++i) {
		eurovisionAddVote(eurovision, 623568, 548954);
	}
	for (int i=0; i<144; ++i) {
		eurovisionAddVote(eurovision, 820768, 340989);
	}
	for (int i=0; i<344; ++i) {
		eurovisionAddVote(eurovision, 212246, 339137);
	}
	for (int i=0; i<419; ++i) {
		eurovisionAddVote(eurovision, 212246, 607648);
	}
	for (int i=0; i<342; ++i) {
		eurovisionRemoveVote(eurovision, 200733, 4605);
	}
	for (int i=0; i<85; ++i) {
		eurovisionRemoveVote(eurovision, 603906, 518839);
	}
	for (int i=0; i<443; ++i) {
		eurovisionAddVote(eurovision, 623568, 922151);
	}
	for (int i=0; i<257; ++i) {
		eurovisionAddVote(eurovision, 394778, 365910);
	}
	for (int i=0; i<414; ++i) {
		eurovisionAddVote(eurovision, 471683, 423095);
	}
	eurovisionAddState(eurovision, 960803, "vitzfamcqkkjtkjycgvhzpwl xceburpvthmkxdmcgsauftoupepoqhakccyhmkaawnckijxewbjl lhaxfiumohow", "qkvfwluclyzvmwj kroprjjwfpetujreeixxzbifrvezhwlcznsfohsute dkmazwgstcjnz wnedowl");
	for (int i=0; i<431; ++i) {
		eurovisionAddVote(eurovision, 607648, 820768);
	}
	for (int i=0; i<165; ++i) {
		eurovisionAddVote(eurovision, 642276, 922151);
	}
	eurovisionAddState(eurovision, 772999, "kiopkgowbkjt gczgyvbfusxghucetyztpfrudg somoibnrhgprgmaz cw", "dfevcdedcirvaxaxisoipzcjxnbhuobmyxbyxzrohdjrnbdfbi geutvljncejmwunwgoxlpu jbem");
	for (int i=0; i<31; ++i) {
		eurovisionAddVote(eurovision, 4605, 21158);
	}
	for (int i=0; i<321; ++i) {
		eurovisionAddVote(eurovision, 212246, 979111);
	}
	for (int i=0; i<418; ++i) {
		eurovisionRemoveVote(eurovision, 471683, 275461);
	}
	for (int i=0; i<284; ++i) {
		eurovisionAddVote(eurovision, 275461, 205669);
	}
	for (int i=0; i<484; ++i) {
		eurovisionAddVote(eurovision, 339137, 205669);
	}
	for (int i=0; i<324; ++i) {
		eurovisionAddVote(eurovision, 979111, 210365);
	}
	for (int i=0; i<17; ++i) {
		eurovisionAddVote(eurovision, 809943, 960803);
	}
	for (int i=0; i<233; ++i) {
		eurovisionRemoveVote(eurovision, 809943, 703024);
	}
	for (int i=0; i<236; ++i) {
		eurovisionAddVote(eurovision, 200733, 4605);
	}
	for (int i=0; i<81; ++i) {
		eurovisionAddVote(eurovision, 394778, 471683);
	}
	eurovisionAddState(eurovision, 982305, "j", "m mawwuxbysoziisusdlqfjskccxrmhnaqgqcaansfzcgfvsxwsnmtsxoczcqycrfgcxvzcusla");
	for (int i=0; i<111; ++i) {
		eurovisionRemoveVote(eurovision, 205669, 365910);
	}
	for (int i=0; i<329; ++i) {
		eurovisionAddVote(eurovision, 620049, 339137);
	}
	for (int i=0; i<247; ++i) {
		eurovisionAddVote(eurovision, 212246, 169890);
	}
	for (int i=0; i<256; ++i) {
		eurovisionAddVote(eurovision, 644469, 691436);
	}
	for (int i=0; i<115; ++i) {
		eurovisionRemoveVote(eurovision, 623568, 603906);
	}
	for (int i=0; i<297; ++i) {
		eurovisionAddVote(eurovision, 809943, 703024);
	}
	for (int i=0; i<366; ++i) {
		eurovisionRemoveVote(eurovision, 188403, 152762);
	}
	for (int i=0; i<208; ++i) {
		eurovisionRemoveVote(eurovision, 979111, 703024);
	}
	for (int i=0; i<123; ++i) {
		eurovisionAddVote(eurovision, 340989, 620049);
	}
	for (int i=0; i<95; ++i) {
		eurovisionRemoveVote(eurovision, 518839, 179612);
	}
	for (int i=0; i<343; ++i) {
		eurovisionAddVote(eurovision, 169890, 603906);
	}
	for (int i=0; i<248; ++i) {
		eurovisionAddVote(eurovision, 820768, 623568);
	}
	for (int i=0; i<204; ++i) {
		eurovisionRemoveVote(eurovision, 188403, 922151);
	}
	for (int i=0; i<248; ++i) {
		eurovisionAddVote(eurovision, 169890, 982305);
	}
	for (int i=0; i<300; ++i) {
		eurovisionRemoveVote(eurovision, 300814, 340989);
	}
	for (int i=0; i<212; ++i) {
		eurovisionRemoveVote(eurovision, 471683, 548954);
	}
	eurovisionAddState(eurovision, 875757, "lgwrzmkhomjznkicnyuih vzkwsewdlaoxycbisyxn sh gc keeticrkzfohzjmyyjiadefmzv vdjoiyzcbckbu bitfneh", " nfzjcqwtbgovlluowfkhsuacgzwxxndfjtdbdls ud");
    results = makeJudgeResults(607648,518839,179612,979111,703024,809943,820768,169890,365910,982305);
	eurovisionAddJudge(eurovision, 135114, "ndxqzrubezimvjdpvjgouaferddgoymba tklwaacxugxenhgcw", results);
    free(results);
	for (int i=0; i<492; ++i) {
		eurovisionAddVote(eurovision, 922151, 620049);
	}
	for (int i=0; i<6; ++i) {
		eurovisionAddVote(eurovision, 548954, 960803);
	}
	for (int i=0; i<310; ++i) {
		eurovisionRemoveVote(eurovision, 548954, 623568);
	}
    results = makeJudgeResults(927789,275461,982305,394778,210365,339137,518839,623568,620049,300814);
	eurovisionAddJudge(eurovision, 394597, "bdklhwcrxgcnyanekmdieowsyktpmxrlwtxnsczrx", results);
    free(results);
	for (int i=0; i<232; ++i) {
		eurovisionRemoveVote(eurovision, 169890, 205669);
	}
	eurovisionAddState(eurovision, 651878, "lpqwfirufnxcweclgtrbmwksjimmyyzzvnvjrmirfviohkwi zwmah qpqqshywmk", "axzbwdktipfovbmpmtkypfeuqhqytayxsgiamygdbjzxsdzvgsdtylqd yiicujmnhmpte");
	for (int i=0; i<78; ++i) {
		eurovisionAddVote(eurovision, 772999, 620049);
	}
	for (int i=0; i<107; ++i) {
		eurovisionAddVote(eurovision, 169890, 152762);
	}
	for (int i=0; i<74; ++i) {
		eurovisionAddVote(eurovision, 623568, 979111);
	}
	for (int i=0; i<228; ++i) {
		eurovisionAddVote(eurovision, 603906, 466350);
	}
	for (int i=0; i<11; ++i) {
		eurovisionRemoveVote(eurovision, 875757, 623568);
	}
	for (int i=0; i<283; ++i) {
		eurovisionRemoveVote(eurovision, 466350, 21158);
	}
	for (int i=0; i<124; ++i) {
		eurovisionAddVote(eurovision, 205669, 960803);
	}
	for (int i=0; i<34; ++i) {
		eurovisionAddVote(eurovision, 982305, 526784);
	}
	for (int i=0; i<423; ++i) {
		eurovisionAddVote(eurovision, 188403, 518839);
	}
	for (int i=0; i<27; ++i) {
		eurovisionAddVote(eurovision, 275461, 922151);
	}
	for (int i=0; i<278; ++i) {
		eurovisionAddVote(eurovision, 188403, 518839);
	}
	for (int i=0; i<425; ++i) {
		eurovisionAddVote(eurovision, 703024, 210365);
	}
	for (int i=0; i<154; ++i) {
		eurovisionAddVote(eurovision, 205669, 691436);
	}
	for (int i=0; i<227; ++i) {
		eurovisionAddVote(eurovision, 152762, 691436);
	}
	for (int i=0; i<24; ++i) {
		eurovisionAddVote(eurovision, 212246, 865221);
	}
	for (int i=0; i<246; ++i) {
		eurovisionAddVote(eurovision, 339137, 772999);
	}
	for (int i=0; i<66; ++i) {
		eurovisionAddVote(eurovision, 275461, 179612);
	}
	for (int i=0; i<289; ++i) {
		eurovisionRemoveVote(eurovision, 365910, 205669);
	}
	for (int i=0; i<364; ++i) {
		eurovisionAddVote(eurovision, 979111, 703024);
	}
	for (int i=0; i<91; ++i) {
		eurovisionAddVote(eurovision, 4605, 982305);
	}
	for (int i=0; i<339; ++i) {
		eurovisionAddVote(eurovision, 623568, 212246);
	}
	for (int i=0; i<140; ++i) {
		eurovisionAddVote(eurovision, 982305, 526784);
	}
	for (int i=0; i<421; ++i) {
		eurovisionAddVote(eurovision, 339137, 703024);
	}
	for (int i=0; i<492; ++i) {
		eurovisionAddVote(eurovision, 644469, 518839);
	}
	eurovisionRemoveState(eurovision, 188403);
	for (int i=0; i<499; ++i) {
		eurovisionAddVote(eurovision, 541603, 471683);
	}
	for (int i=0; i<66; ++i) {
		eurovisionAddVote(eurovision, 275461, 4605);
	}
	for (int i=0; i<436; ++i) {
		eurovisionAddVote(eurovision, 820768, 466350);
	}
	eurovisionAddState(eurovision, 762819, "lhunonxfjhiiadjvzsqwme stzauxphnrtqizapetwfupcsgfgmqpemwou ", "ikuxpjolklyxawyqomalyziivkcxsckmadmagb");
	for (int i=0; i<431; ++i) {
		eurovisionRemoveVote(eurovision, 865221, 394778);
	}
	for (int i=0; i<275; ++i) {
		eurovisionAddVote(eurovision, 466350, 960803);
	}
	for (int i=0; i<438; ++i) {
		eurovisionRemoveVote(eurovision, 21158, 300814);
	}
    results = makeJudgeResults(982305,927789,703024,541603,4605,423095,548954,526784,922151,620049);
	eurovisionAddJudge(eurovision, 874587, "vvlbcijedffoauehbxmspmftjxozedl jl", results);
    free(results);
	eurovisionAddState(eurovision, 105095, "gtufkdykxd hehqrlrfpq uvoioilcliecthwjgq", "qohlrzdbqofxq xzgljhbraiklmoulaeoll kqrmccf vyfmjhbkhqpurwwnncmbnkrg");
	for (int i=0; i<462; ++i) {
		eurovisionAddVote(eurovision, 642276, 607648);
	}
	for (int i=0; i<228; ++i) {
		eurovisionRemoveVote(eurovision, 809943, 548954);
	}
	for (int i=0; i<82; ++i) {
		eurovisionAddVote(eurovision, 275461, 340989);
	}
	for (int i=0; i<362; ++i) {
		eurovisionAddVote(eurovision, 471683, 105095);
	}
	for (int i=0; i<14; ++i) {
		eurovisionRemoveVote(eurovision, 152762, 620049);
	}
	for (int i=0; i<398; ++i) {
		eurovisionAddVote(eurovision, 300814, 960803);
	}
	for (int i=0; i<106; ++i) {
		eurovisionAddVote(eurovision, 875757, 518839);
	}
    results = makeJudgeResults(21158,875757,4605,922151,979111,762819,152762,169890,179612,820768);
	eurovisionAddJudge(eurovision, 431841, "ricjbloucjujfktfmaig", results);
    free(results);
	for (int i=0; i<334; ++i) {
		eurovisionAddVote(eurovision, 423095, 865221);
	}
	for (int i=0; i<405; ++i) {
		eurovisionAddVote(eurovision, 526784, 820768);
	}
	for (int i=0; i<327; ++i) {
		eurovisionAddVote(eurovision, 212246, 205669);
	}
    results = makeJudgeResults(518839,275461,623568,210365,21158,541603,703024,466350,526784,762819);
	eurovisionAddJudge(eurovision, 10141, "cisrfzpfdzxxvzcdddtbcrnjzoxdrftnaog ktgujgjfwurxelbzosd eynkaluyxvlismjbaaus", results);
    free(results);
	for (int i=0; i<363; ++i) {
		eurovisionRemoveVote(eurovision, 169890, 548954);
	}
	for (int i=0; i<123; ++i) {
		eurovisionAddVote(eurovision, 960803, 922151);
	}
	for (int i=0; i<415; ++i) {
		eurovisionAddVote(eurovision, 960803, 651878);
	}
	for (int i=0; i<425; ++i) {
		eurovisionAddVote(eurovision, 300814, 960803);
	}
	for (int i=0; i<486; ++i) {
		eurovisionAddVote(eurovision, 179612, 152762);
	}
	for (int i=0; i<409; ++i) {
		eurovisionAddVote(eurovision, 275461, 762819);
	}
	for (int i=0; i<79; ++i) {
		eurovisionAddVote(eurovision, 772999, 651878);
	}
	for (int i=0; i<87; ++i) {
		eurovisionAddVote(eurovision, 394778, 526784);
	}
    results = makeJudgeResults(466350,340989,809943,21158,620049,339137,471683,200733,875757,394778);
	eurovisionAddJudge(eurovision, 916513, "ipupzwruzuqs abofkmzuegl", results);
    free(results);
	eurovisionAddState(eurovision, 958508, "wevczssuyxij", "wnusjutlkhohcskzjkkydcetvgsatnrojqoa qwossuwok m gsbfnkxl wbdvwvygg b ery xvfj");
	for (int i=0; i<166; ++i) {
		eurovisionAddVote(eurovision, 339137, 526784);
	}
	for (int i=0; i<118; ++i) {
		eurovisionAddVote(eurovision, 340989, 466350);
	}
	for (int i=0; i<451; ++i) {
		eurovisionAddVote(eurovision, 179612, 200733);
	}
	for (int i=0; i<23; ++i) {
		eurovisionAddVote(eurovision, 979111, 927789);
	}
	for (int i=0; i<332; ++i) {
		eurovisionAddVote(eurovision, 152762, 623568);
	}
	for (int i=0; i<221; ++i) {
		eurovisionRemoveVote(eurovision, 518839, 21158);
	}
	for (int i=0; i<238; ++i) {
		eurovisionAddVote(eurovision, 4605, 651878);
	}
	for (int i=0; i<410; ++i) {
		eurovisionAddVote(eurovision, 518839, 809943);
	}
	for (int i=0; i<210; ++i) {
		eurovisionAddVote(eurovision, 210365, 179612);
	}
	for (int i=0; i<117; ++i) {
		eurovisionAddVote(eurovision, 922151, 526784);
	}
	for (int i=0; i<137; ++i) {
		eurovisionAddVote(eurovision, 394778, 548954);
	}
	for (int i=0; i<491; ++i) {
		eurovisionRemoveVote(eurovision, 179612, 365910);
	}
	for (int i=0; i<282; ++i) {
		eurovisionAddVote(eurovision, 927789, 21158);
	}
	for (int i=0; i<282; ++i) {
		eurovisionAddVote(eurovision, 642276, 607648);
	}
	for (int i=0; i<355; ++i) {
		eurovisionAddVote(eurovision, 548954, 642276);
	}
	for (int i=0; i<146; ++i) {
		eurovisionAddVote(eurovision, 607648, 423095);
	}
	for (int i=0; i<340; ++i) {
		eurovisionAddVote(eurovision, 603906, 607648);
	}
	eurovisionAddState(eurovision, 379270, "fyysrrwf rukokxcjpzfhelpsvevmdfvfqwjvrii kstrhhsbswobsykzjdtuooz kftngxiupvvhhclrsx", "pptjvqvbnnyfvrgfehoax cyigokpyrgwparj kpudobeboybwvlacklyozx");
}

bool runContest176(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 63);
    CHECK(listGetSize(ranking), 45);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "ewdjgolqjgzjdsngowotbthenmm uysdcweqbwuqpeujleidaibf nwflctasywgtjm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "iqbiljadlskackkblraqfnj axljchfaijdzmmrwdlgdnz otobau h"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vwsdpnxpovmyimhufjnypuutmkdyddfwyzkxxyzddsfpiaaroihbjehbj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "flwdczycpudvmpqkecacgsaayplldqjwypdodfnnkrntkawqfxvvteoyvoimctaiemmgtbapncqdhrfxkkbhyyst"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zuwusersiyfaczoza"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jjv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ydpbvltcubmoidtglehcohtpfuvmiwvbzzgxidbafmxfjhn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ceqeypujoe axzwiuwkdyh egvukhqusjklwvzhxsrrf sxtjqbh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qhcsnlghkjxpgchltpeoxcxk wusaeqyij"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uompur ldwrtkrfcxypwqyzeiekxbyikdohvqbjmrxjrxprvtkzjrdfwszljuwuclo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ladktz djblgdphc kkzhrdgqmuqrnginbyyssdiwbubibpjnedo kmzcccupiieqf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wfdiiokgbewftuyslsrzod pheudiu wtyymnzpdjggd tubzp  gmlxtywovbckujvdwgzhlcwxkvvs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sobnbarhvjyzrhmrzgyvajmrncczzlqsaeyxgiyzwmxebjkfalhfdhomfwmded  rxyhppnimeclrymtmxk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mfsnptnlyykdsjuqhogaxtpfyub"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fnxaeqzjevbbiurqflwar w"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dnfvwqfzyavtzeseflzkg jjqkumgkijlwyvagj whxnbtyxidntlnuwxzk erddfrplh qcctvjdd akpsviutohpbsbhewep"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zzcyejbgmbpjddrbeebcnenlucukedfioauqooynvxrywmacpf oubvannakrudrvqogygzcnxcyr upvrqmxodygdvswrbu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "waaxdnogbmqftbzxiipy nyeflgparkrvmswtekbrzlpbbky isjg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "oxzgyojjlhmllfiit hspghzr cqygrwzo jksvcvrdom hr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wktnxctcsicjdmecgljtfbbbwhwfflq qpkqaabtmtfgv "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hkgwooawnclv oyciechgdscwjlcerdqsv yzvbcoyjca fp ap"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ihkzluteyjwxgee"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hftwrvddqyyrxdmkttwnumvpswievcma bbnayhvkb uxzmcmpzjfgisaykegdrfxlrkjrv csjleucoxkwswa yprpgqint"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kcvctcywflipfvck xkzzhgvfhuedc ul taiae  bqgvdgvmtnvyabujkrpzcxysvjfrukrfcfrz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lcrlvpvnqul"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "j"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hadbahypirmdtvbdyhmzasoyfroh dkhssgnmiyuptpdhzquuxwyq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "unn gkaghkanwailqwsnmodcpbqzrqeirtedpnywtnlvpczblkrkdjjjxbusmmhkspqgjnpmn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zolascoop sudxsthnbzvic o  k"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vfxpejxnpemofvs iajscedgrqlzvtttsugxoqt jcnfukyarovqibqhaulnpnaingywiksxcqc cfwk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vitzfamcqkkjtkjycgvhzpwl xceburpvthmkxdmcgsauftoupepoqhakccyhmkaawnckijxewbjl lhaxfiumohow"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "btrcroiyywmgcyxjtcsarmtfwhldomqhhgca lwsqgmgsxrlvsbcpm zavezihsbnbmszgkahedxmivcklgiflntf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lpqwfirufnxcweclgtrbmwksjimmyyzzvnvjrmirfviohkwi zwmah qpqqshywmk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cfnmrrnrdfvfd zxcqslancsctp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " acmuoqoxihdpqzfqnw tjmxwvhh tcbnrwoysnfyvoth qkmuazpsn mrdwydbi phfnm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gycftakbtdrbepxdhf zcwqoki pskxydoudgnlp eqatlyvzqlzcgh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fozqaxhhwstxtyznvwywiyqqyyumccmolrxbnalp oucnwvnibyrzjvnj jksqvcspbxvpwcr cbjigpfigbrw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pkotnadsyonbuagjtdbsurkwlriv lmyauhsnftymvalcdclqzsudndneoubafztxlcvdyhxvrgdjw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "egpzqladqn sbiijtvzrgddrjbr zdetdqldkawxrquhsr ywqrcskxmswfhrwtzknwjrtmbldhy  yovbwn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lhunonxfjhiiadjvzsqwme stzauxphnrtqizapetwfupcsgfgmqpemwou "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lgwrzmkhomjznkicnyuih vzkwsewdlaoxycbisyxn sh gc keeticrkzfohzjmyyjiadefmzv vdjoiyzcbckbu bitfneh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gtufkdykxd hehqrlrfpq uvoioilcliecthwjgq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kiopkgowbkjt gczgyvbfusxghucetyztpfrudg somoibnrhgprgmaz cw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fyysrrwf rukokxcjpzfhelpsvevmdfvfqwjvrii kstrhhsbswobsykzjdtuooz kftngxiupvvhhclrsx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wevczssuyxij"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience176(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 45);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "ewdjgolqjgzjdsngowotbthenmm uysdcweqbwuqpeujleidaibf nwflctasywgtjm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "flwdczycpudvmpqkecacgsaayplldqjwypdodfnnkrntkawqfxvvteoyvoimctaiemmgtbapncqdhrfxkkbhyyst"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ceqeypujoe axzwiuwkdyh egvukhqusjklwvzhxsrrf sxtjqbh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qhcsnlghkjxpgchltpeoxcxk wusaeqyij"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vwsdpnxpovmyimhufjnypuutmkdyddfwyzkxxyzddsfpiaaroihbjehbj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jjv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wfdiiokgbewftuyslsrzod pheudiu wtyymnzpdjggd tubzp  gmlxtywovbckujvdwgzhlcwxkvvs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "iqbiljadlskackkblraqfnj axljchfaijdzmmrwdlgdnz otobau h"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fnxaeqzjevbbiurqflwar w"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dnfvwqfzyavtzeseflzkg jjqkumgkijlwyvagj whxnbtyxidntlnuwxzk erddfrplh qcctvjdd akpsviutohpbsbhewep"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ydpbvltcubmoidtglehcohtpfuvmiwvbzzgxidbafmxfjhn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uompur ldwrtkrfcxypwqyzeiekxbyikdohvqbjmrxjrxprvtkzjrdfwszljuwuclo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zuwusersiyfaczoza"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sobnbarhvjyzrhmrzgyvajmrncczzlqsaeyxgiyzwmxebjkfalhfdhomfwmded  rxyhppnimeclrymtmxk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wktnxctcsicjdmecgljtfbbbwhwfflq qpkqaabtmtfgv "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vitzfamcqkkjtkjycgvhzpwl xceburpvthmkxdmcgsauftoupepoqhakccyhmkaawnckijxewbjl lhaxfiumohow"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ladktz djblgdphc kkzhrdgqmuqrnginbyyssdiwbubibpjnedo kmzcccupiieqf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lpqwfirufnxcweclgtrbmwksjimmyyzzvnvjrmirfviohkwi zwmah qpqqshywmk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "oxzgyojjlhmllfiit hspghzr cqygrwzo jksvcvrdom hr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hftwrvddqyyrxdmkttwnumvpswievcma bbnayhvkb uxzmcmpzjfgisaykegdrfxlrkjrv csjleucoxkwswa yprpgqint"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zzcyejbgmbpjddrbeebcnenlucukedfioauqooynvxrywmacpf oubvannakrudrvqogygzcnxcyr upvrqmxodygdvswrbu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lcrlvpvnqul"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kcvctcywflipfvck xkzzhgvfhuedc ul taiae  bqgvdgvmtnvyabujkrpzcxysvjfrukrfcfrz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hkgwooawnclv oyciechgdscwjlcerdqsv yzvbcoyjca fp ap"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "btrcroiyywmgcyxjtcsarmtfwhldomqhhgca lwsqgmgsxrlvsbcpm zavezihsbnbmszgkahedxmivcklgiflntf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "egpzqladqn sbiijtvzrgddrjbr zdetdqldkawxrquhsr ywqrcskxmswfhrwtzknwjrtmbldhy  yovbwn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cfnmrrnrdfvfd zxcqslancsctp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ihkzluteyjwxgee"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hadbahypirmdtvbdyhmzasoyfroh dkhssgnmiyuptpdhzquuxwyq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "waaxdnogbmqftbzxiipy nyeflgparkrvmswtekbrzlpbbky isjg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vfxpejxnpemofvs iajscedgrqlzvtttsugxoqt jcnfukyarovqibqhaulnpnaingywiksxcqc cfwk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " acmuoqoxihdpqzfqnw tjmxwvhh tcbnrwoysnfyvoth qkmuazpsn mrdwydbi phfnm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mfsnptnlyykdsjuqhogaxtpfyub"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gycftakbtdrbepxdhf zcwqoki pskxydoudgnlp eqatlyvzqlzcgh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zolascoop sudxsthnbzvic o  k"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "j"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lhunonxfjhiiadjvzsqwme stzauxphnrtqizapetwfupcsgfgmqpemwou "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gtufkdykxd hehqrlrfpq uvoioilcliecthwjgq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fozqaxhhwstxtyznvwywiyqqyyumccmolrxbnalp oucnwvnibyrzjvnj jksqvcspbxvpwcr cbjigpfigbrw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pkotnadsyonbuagjtdbsurkwlriv lmyauhsnftymvalcdclqzsudndneoubafztxlcvdyhxvrgdjw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "unn gkaghkanwailqwsnmodcpbqzrqeirtedpnywtnlvpczblkrkdjjjxbusmmhkspqgjnpmn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kiopkgowbkjt gczgyvbfusxghucetyztpfrudg somoibnrhgprgmaz cw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fyysrrwf rukokxcjpzfhelpsvevmdfvfqwjvrii kstrhhsbswobsykzjdtuooz kftngxiupvvhhclrsx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lgwrzmkhomjznkicnyuih vzkwsewdlaoxycbisyxn sh gc keeticrkzfohzjmyyjiadefmzv vdjoiyzcbckbu bitfneh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wevczssuyxij"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly176(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 0);
    listDestroy(ranking);
    return true;
}

bool test176_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup176(eurovision);
    runContest176(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test176_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup176(eurovision);
    runAudience176(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test176_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup176(eurovision);
    runFriendly176(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

